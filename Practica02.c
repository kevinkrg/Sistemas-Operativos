
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

main(){
	int return_value;
	int numero;

	printf("\n Introduzca un numero : \n");
	scanf("%d", &numero);

	printf("Creando procesos con fork\n");
	return_value=fork();
	if(return_value==0){
		printf("El pid del proceso hijo es %d\n", getpid());
	
		int factorial = 1;
    

		for(int i = 1; i <= numero; i++){
       

 		factorial = factorial * i;
 }
    
   
 
		printf("El factorial de %d es %d \n", numero , factorial);

	}
	else{
		printf("El pid del proceso padre es %d\n", getpid());


			int sumatoria = 0;
        	for(int i = 0; i <= numero; i++){
     
   
			sumatoria = sumatoria + i;
        

}
    
 
			printf("La sumatoria de %d es %d \n", numero, sumatoria);
}

}

