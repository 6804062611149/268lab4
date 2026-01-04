#include <stdio.h>

int main () {
	int score;
	for (;scanf("%d",&score) == 1 && score != -1;){
        if (score >= 68) {
            if (score >= 85)      printf("%d(A)\n", score);
            else                  printf("%d(C)\n", score);
        } else {
            if (score >= 55)      printf("%d(D)\n", score);
            else                  printf("%d(F)\n", score);
        }
    }
}
