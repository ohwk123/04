#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z;
	printf("input the second:");
	scanf("%i", &x);
	y = x/60;
	z = y/60;
	printf("%i : %i : %i", z, y, x%60);
	
	return 0;
}
