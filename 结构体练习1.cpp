#include <stdio.h>
struct Stu{
	char name[10];
	int  age;
	char sex[20];
	char number[20];
};
int main(){
	struct Stu s={"Bob",12,"man","108054"
	};
	printf("%s %d %s %s\n",s.name,s.age,s.sex,s.number);
	return 0;
}
