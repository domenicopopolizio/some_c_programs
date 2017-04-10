#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
ARRAY BIDIMENSIONALI: programma per caricare dallo standard di input i valori degli elementj dell'array, il programma deve calcolare i l determinante della matrice A e stampare
sia la matrice che il determinante*/
int main(int argc, char *argv[]) {
	
	int i, j, x1, x2, x3, y1, y2, y3, det;
	int A[3][3];
	for(i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("Inserisci il valore di A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	x1 = A[0][0]*A[1][1]*A[2][2];
	x2 = A[1][0]*A[2][1]*A[0][2];
	x3 = A[2][0]*A[0][1]*A[1][2];
	y1 = -(A[0][2]*A[1][1]*A[2][0]);
	y2 = -(A[1][2]*A[2][1]*A[0][0]);
	y3 = -(A[2][2]*A[0][1]*A[1][0]);
	
	det = x1+x2+x3+y1+y2+y3;
	printf("DET: %d\nSTAMPA MATRICE:\n", det);
	for(i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("%d", A[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
