#include <stdio.h>
int main(){
	int intermediaire,i=0,max = 6;
	int tab[7] = {3,6,4,8,5,6,1};
	while(max != i){
		intermediaire = tab[i];
		tab[i] = tab[max];
		tab[max] = intermediaire;
		i = i + 1;
		max = max - 1;
	}
	printf("Inversion de tableau\n");
	for(i=0;i<7;i++){
		printf("%d ",tab[i]);
	}
	return 0;
}
