# include<stdio.h>
# include<string.h>
# include"add.h"
# include"div.h"
# include"mul.h"
# include"sub.h"

int main() {
    double num1=0, num2=0, sum=0;
    char sy[2] = {0}; // 用字符数组存储运算符
    printf("请输入计算式\n");
    // scanf_s 的 %s 需要指定缓冲区大小
    scanf_s("%lf %1s %lf", &num1, sy, (unsigned int)sizeof(sy), &num2);
    if (strcmp(sy, "+") == 0) {
        sum = add(num1, num2);
    }
    if (strcmp(sy, "-") == 0) {
        sum = sub(num1, num2);
    }
    if (strcmp(sy, "*") == 0) {
        sum = mul(num1, num2);
    }
    if (strcmp(sy, "/") == 0) {
        sum = div(num1, num2);
    }
    
    printf("%lf", sum);
}