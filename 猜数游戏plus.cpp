#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void fate(){
	srand((unsigned int)time(NULL));
	int random = rand()%100;
	int a,n=1;
	printf("����������\n"); 
	scanf("%d",&a);
	while (random !=a){
		n++;
		if(a>random){
			printf("�����������̫����\n");
			printf("���ٴγ��ԣ�����\n"); 
			scanf("%d",&a);	 
		}
		else{
		    printf("�����������̫С��\n");
		    printf("���ٴγ��ԣ�����\n");
		    scanf("%d",&a);	}
	}
	printf("��ϲ��¶���,ֻ����%d��",n);}
	
	int main(){
	int input = 0;
	printf("######### 1.��ʼ��Ϸ ######\n");
	printf("######### 2.������Ϸ ######\n");
	scanf("%d",&input);
	switch(input){
		case 1:fate();
			break;
			
		case 2:
			break;
	}
	printf("��Ϸ����");
	return 0;
}
