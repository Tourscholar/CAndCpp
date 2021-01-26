// 第一个C语言程序 //

#include <stdio.h>   // 申明c预处理器指令 /* 前方注释类型只适用于单行注释 */
int main(void)      // 函数头, void表示‘空的’ //
{
   int num;      /* 定义一个名为num的变量 */ 

   num = 1;      /* 为num赋一个值 */

   printf("I am a simple ");     /* 使用printf()函数 */
   printf("computer.\n");
   printf("My favorite number is %d because it is first.\n", num);

   return 0;
}