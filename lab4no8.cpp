#include <stdio.h>

int main () {
	int score, i=1, inputs;
	scanf("%d", &inputs);
	while (i<=inputs){
		scanf("%d", &score);
			if (score >= 68) {
				((score>=85)? printf("%d(A)\n",score):
				(score>=75)? printf("%d(B)\n",score):
				printf("%d(C)\n",score));
			} else {
				((score>=55)? printf("%d(D)\n",score):
				printf("%d(F)\n",score));
			
			}
		i = i+1;
	}
}