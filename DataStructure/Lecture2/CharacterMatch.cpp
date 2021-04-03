#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 100

// 暴力匹配
int ViolentMatch(char[], char[]);

// KMP算法
void print_matching_result(const char[], int);
// 求D[j]的最长前缀后缀公共子缀和
void GetDarray(int[], const char[]);
void kmp(const char[], const char[]);

int main(){
    char s [] ="BBC ABCDAB ABCDABCDABDE";
    char p [] ="ABCDABD";
    cout << ViolentMatch(s, p);

    kmp(s, p);

    return 0;
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

void GetDarray(int d[], const char * p)
{
    int i = 1, j = 0, np = strlen(p);
    d[np] = {0};
    while(i < np){
        if(p[j] == p[i])
            d[i++] = ++j;
        else{
            if(j > 0)
                j = d[j-1];
            else 
                i++;
        }
    }
}

void kmp(const char * t, const char * p)
{
    int d[SIZE];
    GetDarray(d, p);
    int i = 0, j = 0, nt = strlen(t), np = strlen(p);
    while(i < nt){
        if(p[j] == t[i]){
            i++;
            j++;
            if(i == np){
                print_matching_result(p, i-j);
                j = d[np-1];
            }
        }
        else{
            if(j > 0)
                j = d[j-1];
            else 
                i++;
        }
    }
}