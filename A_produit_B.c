#include <stdio.h>
int main(){
	int a,b,i,j,p,r;
	printf("Entrez le premier nombre : ");
	scanf("%d",&a);
	printf("Entrez le deuxieme nombre : ");
	scanf("%d",&b);
	while((a>0)&&(b>0)){
		p=a*b;
		r=0;
		for(i=0;i<p;i++){
			r=r+1;
			printf("%d=",r);
		}
		a--;
		b--;
	}
	return 0;
}
