#include <stdio.h>
int get_max(int a, int b) 
{
	return(a > b ? a : b);
}
int main() {
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int c = get_max(a, b);
	printf("%d", c);

	return 0;
}