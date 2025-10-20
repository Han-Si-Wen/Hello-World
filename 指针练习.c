#include<stdio.h>
int main(){
char pc='w';
char*p=&pc;//p指针变量
printf("%p\n",p);
*p=20;
printf("%d",pc);
return 0;}