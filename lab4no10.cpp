#include <stdio.h>

int main () {
	int score,A=0,B=0,C=0,D=0,F=0;
	for (;scanf("%d",&score) == 1 && score != -1;){
        if (score >= 68) {
            if (score >= 85){
				printf("%d(A)\n", score);
				A++;
			}
            else if (score >= 75){
				printf("%d(B)\n", score);
				B++;
			}else{
				printf("%d(C)\n", score);
				C++;
			}
				
        } else {
            if (score >= 55){
            	printf("%d(D)\n", score);
				D++;
			}else{
				printf("%d(F)\n", score);
				F++;
			}
				
        }
    }
    printf("A(%d)\nB(%d)\nC(%d)\nD(%d)\nF(%d)",A,B,C,D,F);
}