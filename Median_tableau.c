#include <stdio.h>
int main(){
	int i,j,T,n;
	float med;
	int tab[n];
	printf("entrez la taille du tableau : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Valeur %d du tableau : ",i+1);
		scanf("%d",&tab[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(tab[i]>tab[j]){
				T = tab[i];
				tab[i] = tab[j];
				tab[j] = T;
			}
			printf("%d",tab[i]);
		}
	}
	for(i=0;i<n;i++){
		if((n%2) == 0){
			med = tab[n/2];
		}
		
		else{
			med = (tab[(n/2)-1] + tab[n/2])/2;
		}
	}
	printf("%f",med);
	return 0; 
}
