#include <stdio.h>

int sum (int x, int y){

return(x + y);
}

main(){
	int a , b,c;
	
printf("Ingrese un numero:");
scanf("%d",&a);

printf("Ingrese otro numero:");
scanf("%d",&b);
	
	
	c=sum(a,b);
	
	printf("el Resultado de la suma es:%d",c);
	
	
	return 0;
}	

