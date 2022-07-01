#include <stdio.h>
#include <string.h>
#define MAX 50

void concatenacion (char c1 [MAX], char c2[MAX],char c3 [MAX]){
	strcpy(c3,c1);
	strcat(c3, " ");
	strcat(c3 , c2);
	
};

void invertir (char c3 [MAX]){

	strrev(c3);
	
};


int main(){
	
	char c1 [MAX] , c2 [MAX], c3[MAX];
	
	printf("Ingrese la primera cadena:");
	gets(c1);
	
	
	printf("\nIngrese la segunda cadena:");
	gets(c2);
	
	 
	 concatenacion( c1,c2,c3);
	printf("\ncadena concatenada:%s",c3);

		
		invertir (c3);
		printf("\ncadena invertida:%s",c3);
	

	
	return 0;
}

