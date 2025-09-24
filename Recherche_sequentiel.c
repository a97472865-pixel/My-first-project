#include <stdio.h>
int main(){
	int i,num;
	int tab[6] = {3,6,9,10,5,2};
	printf("Entrer le chiffre a rechercher : ");
	scanf("%d",&num);
	for(i=0;i<6;i++){
		if(tab[i] == num){
			printf("nombre retrouve a la position numero %d",i+1);
			i = 7;
		}
	}
	if(i == 6){
		printf("nombre non retrouve !");
	}
	return 0;
}
