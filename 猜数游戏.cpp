#include <stdio.h>
#include<stdlib.h>
#include <time.h> 
int main(){
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
	printf("��ϲ��¶���,ֻ����%d��",n);
	
	
	
	
	return 0;
}
