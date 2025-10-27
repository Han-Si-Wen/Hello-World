#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void fate(){
	srand((unsigned int)time(NULL));
	int random = rand()%100;
	int a,n=1;
	printf("请输入数字\n"); 
	scanf("%d",&a);
	while (random !=a){
		n++;
		if(a>random){
			printf("你输入的数字太大了\n");
			printf("请再次尝试，加油\n"); 
			scanf("%d",&a);	 
		}
		else{
		    printf("你输入的数字太小了\n");
		    printf("请再次尝试，加油\n");
		    scanf("%d",&a);	}
	}
	printf("恭喜你猜对了,只用了%d次",n);}
	
	int main(){
	int input = 0;
	printf("######### 1.开始游戏 ######\n");
	printf("######### 2.结束游戏 ######\n");
	scanf("%d",&input);
	switch(input){
		case 1:fate();
			break;
			
		case 2:
			break;
	}
	printf("游戏结束");
	return 0;
}
