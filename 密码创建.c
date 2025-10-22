#include<stdio.h>
int main(){
char password[20] = {0};
printf("请输入密码");
scanf("%s",password);
getchar();
printf("请确认密码YES or NO\n");
int ret = getchar();
if(ret=='Y')
printf("密码创建成功");
else 
printf("密码创建失败");

return 0;}