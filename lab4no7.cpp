#include <stdio.h>
int main () {
	char c;
	int row, column;
	scanf("%c %d %d", &c, &column, &row);
	for (int j=1; j<=row; j++){
		for (int i=1; i<=column; i++)
			{
				printf("%c", c);
			}
		printf("\n");
		}
}
		