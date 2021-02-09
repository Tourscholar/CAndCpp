#include <iostream>
using namespace std;
#define DEBUG 0

struct PolyNode
{
    public:
        int coef;
        int exp;
        PolyNode * next;
        PolyNode() {
            this->coef = 0;
            this->exp = 0;
            this->next = nullptr;
        }
        PolyNode(int coef, int exp) {
            this->coef = coef;
            this->exp = exp;
            this->next = nullptr;
        }
        PolyNode(PolyNode * p) {
            this->coef = p->coef;
            this->exp = p->exp;
            this->next = nullptr;
        }
};

typedef PolyNode * Polynomial;

Polynomial Read();
Polynomial Free(Polynomial p);
void Print(Polynomial p);
Polynomial Add(Polynomial p1, Polynomial p2);
Polynomial Mul(Polynomial p1, Polynomial p2);

int main()
{
    Polynomial p1 = Read();
    Polynomial p2 = Read();

    if(DEBUG) {
        Print(p1);
        Print(p2);
    }

    Polynomial p_add = Add(p1, p2);
    Polynomial p_mul = Mul(p1, p2);

    Print(p_mul);
    Print(p_add);

    p1 = Free(p1);
    p2 = Free(p2);
    p_add = Free(p_add);
    p_mul = Free(p_mul);

    return 0;
}

Polynomial Read() {
    int N = 0;
    int coef = 0, exp = 0;
    cin >> N;
    Polynomial p = nullptr;
    PolyNode * last = nullptr;
    for (int i = 0; i < N; i++) {
        cin >> coef >> exp;
        PolyNode * new_node = new PolyNode(coef, exp);
        if (p == nullptr) {
            p = new_node;
            last = p;
        }
        else {
            last->next = new_node;
            last = last->next;
        }
    }
    return p;
}

Polynomial Free(Polynomial p) {
    PolyNode * tmp = p;
    while (p) {
        tmp = p;
        p = p->next;
        delete tmp;
    }
    return nullptr;
}

void Print(Polynomial p) {
    if (p == nullptr) {
        cout << "0 0" << endl;
        return;
    }

    while (p) {
        cout << p->coef << " " << p->exp;
        p = p->next;
        if (p)
            cout << " ";
        else 
            cout << endl;
    }
}

Polynomial Add(Polynomial p1, Polynomial p2) {
    // 归并排序
    // 时间复杂度 O(m+n)
    Polynomial p = nullptr;
    PolyNode * tmp = nullptr, * last = nullptr;
    int coef = 0, exp = 0;
    while (p1 && p2) {
        if (p1->exp == p2->exp) {
            coef = p1->coef + p2->coef;
            exp = p1->exp;
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->exp > p2->exp) {
            coef - p1->coef;
            exp = p1->exp;
            p1 = p1->next;
        }
        else if (p1->exp < p2->exp) {
            coef = p2->coef;
            exp = p2->exp;
            p2 = p2->next;
        }

        if (coef == 0)
            continue;
        else 
            tmp = new PolyNode(coef, exp);
        if (p == nullptr) {
            p = tmp;
            last = p;
        }
        else {
            last->next = tmp;
            last = last->next;
        }
    }

    while (p1) {
        coef = p1->coef;
        exp = p1->exp;
        p1 = p1->next;

        if (coef == 0)
            continue;
        else 
            tmp = new PolyNode(coef, exp);
        
        if(p == nullptr) {
            p = tmp;
            last = p;
        }
        else {
            last->next = tmp;
            last = last->next;
        }
    }
    
    while (p2) {
        coef = p2->coef;
        exp = p2->exp;
        p2 = p2->next;

        if(coef == 0)
            continue;
        else 
            tmp = new PolyNode(coef, exp);
        
        if (p == nullptr) {
            p  =tmp;
            last = p;
        }
        else {
            last->next = tmp;
            last = last->next;
        }
    }

    return p;
}

Polynomial Mul(Polynomial p1, Polynomial p2) {
    // 时间复杂度O(mn(m+n))
    if (!p1 || !p2)
        return nullptr;

    Polynomial p = nullptr;
    Polynomial p_tmp = nullptr, p_free = nullptr;

    PolyNode * tmp_node = nullptr, * last = nullptr;
    PolyNode * ptr1 = p1, * ptr2 = p2;
    while (ptr2) {
        ptr1 = p1;
        while(ptr1) {
            tmp_node = new PolyNode(ptr1->coef * ptr2->coef, ptr1->exp + ptr2->exp);
            ptr1 = ptr1->next;

            if (p_tmp == nullptr) {
                p_tmp = tmp_node;
                last = p_tmp;
            }
            else {
                last->next = tmp_node;
                last = last->next;
            }
        }

        if (p == nullptr) {
            p = p_tmp;
            p_tmp = nullptr;
        }
        else {
            p_free = p;
            p  = Add(p, p_tmp);
            p_free = Free(p_free);
            p_tmp = Free(p_tmp);
        }

        ptr2 = ptr2->next;
    }

    return p;
}