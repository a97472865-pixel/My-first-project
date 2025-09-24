#include <stdio.h>
int main(){
	int i,choice,test = 0;
	int tab[6] = {3,4,5,6,2,9};
	printf("Vous voulez verifiez quel ordre ?\n");
	printf("1-Croissant\n");
	printf("2-Decroissant\n");
	printf("Faitez votre choix : ");
	scanf("%d",&choice);
	if(choice == 1){
		for(i=0;i<5;i++){
			if(tab[i] > tab[i+1]){
				printf("Ce tableau n'est pas trie !");
				test = 1;
				break;
			}
		}
		
		if(test == 0){
			printf("Ce tableau est trie !");
		}
		
	}
	else if(choice == 2){
		for(i=0;i<5;i++){
			if(tab[i] < tab[i+1]){
				printf("Ce tableau n'est pas trie !");
				test = 1;
				break;
			}
		}
		
		if(test == 0){
			printf("Ce tableau est trie !");
		}
	}
	else{
		printf("choix indisponible !");
	}
	return 0;
	
}
