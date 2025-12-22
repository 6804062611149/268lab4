#include <stdio.h>
int main () {
	char c;
	int num;
	scanf("%c %d", &c, &num);
	for (int j=1; j<=num; j++){
		for (int i=1; i<=num; i++)
			{
				printf("%c", c);
			}
		printf("\n");
		}
}
		
