#include<stdio.h>
int main(){
int a = 1;
int i = 2;
int num = 0;
printf("������Ŀ��ֵ\n");
scanf_s("%d", &num);
while (a < num) {
	for (i = 2; i < a; i++) {
		if (a % i == 0) {
			break;
		}
	}
		if (i == a){
			printf("%d  ", a);
		}
	a++;
	
}

}
