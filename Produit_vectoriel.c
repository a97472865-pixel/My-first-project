#include <stdio.h>
int main(){
	int i;
	int vect_1[3] = {2,4,1};
	int vect_2[3] = {3,1,5};
	int result[3];
	result[0] = (vect_1[1]*vect_2[2])-(vect_1[2]*vect_2[1]);
	result[1] = (vect_1[2]*vect_2[0])-(vect_1[0]*vect_2[2]);
	result[2] = (vect_1[0]*vect_2[1])-(vect_1[1]*vect_2[0]);
	for(i=0;i<3;i++){
		printf("|%d|\n",result[i]);
	}
	return 0;
}
