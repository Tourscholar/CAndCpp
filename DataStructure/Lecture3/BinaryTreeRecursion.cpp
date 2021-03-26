#include <iostream>
using namespace std;
/*
1. 二叉树的数据结构定义，及相关操作函数定义（链式存储）
2. 二叉树的四种遍历的递归实现和非递归实现
   前序遍历
   中序遍历
   后序遍历
3. 由前序和中序重建二叉树
4. 计算树的结点数
5. 计算树的深度
*/
#define DEBUG 0
typedef char ElementType;
typedef struct TreeNode * BinTree;
struct TreeNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};
typedef BinTree BinTreeNode;

BinTree CreateBinTreeNode(ElementType val);
BinTree ReconstructBinTree(ElementType preOrder[], ElementType inOrder[], int a1, int a2, int len);

void PreOrderTraversal(BinTree bt);
void InOrderTraversal(BinTree bt);
void PostOrderTraversal(BinTree bt);

int CountTreeNode(BinTree bt);
int GetTreeDepth(BinTree bt);

int main(int argc, char const * argv[])
{
    ElementType preOrder[] = "ABCDEFG";
    ElementType inOrder[] = "FDBEACG";
    int len = 7;
    if(DEBUG) 
        cout << preOrder << inOrder << endl;
    BinTree bt = ReconstructBinTree(preOrder, inOrder, 0, 0, len);

    PreOrderTraversal(bt);
    cout << endl;
    InOrderTraversal(bt);
    cout << bt;
    PostOrderTraversal(bt);
    cout << bt;

    cout << "Number of tree modes = " << CountTreeNode(bt) << endl;
    cout << "Depth of binary tree = " << GetTreeDepth(bt) << endl;

    return 0;
}

BinTreeNode CreateBinTreeNode(ElementType val){
    BinTreeNode btnode = new TreeNode[sizeof(struct TreeNode)];
    btnode->Data = val;
    btnode->Left = NULL;
    btnode->Right = NULL;

    return btnode;
}

BinTreeNode ReconstructBinTree(ElementType preOrder[], ElementType inOrder[], int a1, int a2, int len){
    if(DEBUG){
        int i;
        for(i = 0; i < len; i++)
            cout << preOrder + a1 + i;
        cout << endl;
        for(i = 0; i < len; i++)
            cout << inOrder + a2 + i;
        cout << endl;
    }
    if(len == 1){
        if(preOrder[a1] != inOrder[a2])
            cout << "Error Found!";
            return CreateBinTreeNode(preOrder[a1]);
    }
    else if(len == 0)
        return NULL;
    
    ElementType rootVal = preOrder[a1];
    int idx, lenLeft, lenRight;
    for(idx = 0; idx < len; idx++){
        if(inOrder[a2+idx] == rootVal)
            break;
    }
    lenLeft = idx;
    lenRight = len - idx - 1;
    BinTree rootNode = CreateBinTreeNode(rootVal);
    rootNode->Left = ReconstructBinTree(preOrder, inOrder, a1+1, a2, lenLeft);
    rootNode->Right = ReconstructBinTree(preOrder, inOrder, a1+1+lenLeft, a2+1+lenLeft, lenRight);
    return rootNode;
}

/* 前序遍历 */
void PreOrderTraversal(BinTree bt){
    if(bt){
        cout << bt->Data << endl;
        PreOrderTraversal(bt->Left);
        PreOrderTraversal(bt->Right);
    }
}

/* 中序遍历 */
void InOrderTraversal(BinTree bt){
    if(bt){
        InOrderTraversal(bt->Left);
        cout << bt->Data << endl;
        InOrderTraversal(bt->Right);
    }
}

/* 后序遍历 */
void PostOrderTraversal(BinTree bt){
    if(bt){
        PostOrderTraversal(bt->Left);
        PostOrderTraversal(bt->Right);
        cout << bt->Data << endl;
    }
}

int CountTreeNode(BinTree bt){
    if(bt == NULL)
        return 0;
    return CountTreeNode(bt->Left) + CountTreeNode(bt->Right) + 1;
}

int GetTreeDepth(BinTree bt){
    if(bt == NULL)
        return 0;
    return GetTreeDepth(bt->Left) > GetTreeDepth(bt->Right)? GetTreeDepth(bt->Left) + 1 : GetTreeDepth(bt->Right) + 1; 
}