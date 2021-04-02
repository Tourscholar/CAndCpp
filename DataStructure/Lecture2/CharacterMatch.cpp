#include <iostream>
#include <cstring>
using namespace std;

// 暴力匹配
int ViolentMatch(char[], char []);

int main(){

}

int ViolentMatch(char * s, char * p)
{
    int sLen = strlen(s);
    int pLen = strlen(p);

    int i = 0;
    int j = 0;
    while(i < sLen && j < pLen){
        if(s[i] == p[i]){
            // 如果匹配成功, 即s[i] == p[j], 则i++, j++
            i++;
            j++;
        }
        else{
            // 如果匹配失败, 即s[i]!= p[j], 令i = i-(j-1), j = 0
            i = i - j + 1;
            j = 0;
        }
    }
    // 匹配成功, 返回模式串p在文本串s中的位置, 否则返回-1
    if(j == pLen)
        return i - j;
    else 
        return - 1;
}