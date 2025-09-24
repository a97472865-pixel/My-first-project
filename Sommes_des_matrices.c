#include <stdio.h>
int main(){
	int i,j;
	int matrice_1[3][3] = {{2,5,3},{7,5,2},{3,5,2}},
		matrice_2[3][3] = {{5,2,1},{2,1,3},{4,2,-3}},
		result[3][3];
	
	//Somme des matrices
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			result[i][j] = matrice_1[i][j] + matrice_2[i][j];
		}
	}
	
	//Affichage de la matrice resultat
	for(i=0;i<3;i++){
		printf("|");
		for(j=0;j<3;j++){
			printf(" %d ",result[i][j]);
		}
		printf("|");
		printf("\n");
	}
	return 0;
}
