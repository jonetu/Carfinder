#include <stdio.h>
#include <string.h>
#define MAX 20
typedef struct {
	char marca[16];
	int ano;
	char cor[11];
	float preco;
}carro;

int main(){
	int i;
	carro vetcarro[20];
	float avaliar;
	int contador;
	char carro_avaliar_marca[16];
	int carro_avaliar_ano;
	char carro_avaliar_cor[11];
	for(i=0;i<MAX;i++){
		printf("CAR %d\n",i+1);
		printf("brand:\n");
		scanf("%s",vetcarro[i].marca);
		printf("year:\n");
		scanf("%d",&vetcarro[i].ano);
		printf("color:\n");
		scanf("%s",vetcarro[i].cor);
		printf("price\n");
		scanf("%f",&vetcarro[i].preco);
	}
	printf("set a price:\n");
	scanf("%f",&avaliar);
	printf("cars with the same or lower price:\n");
	
	for(i=0,contador=0;i<MAX;i++){
		if(vetcarro[i].preco <= avaliar ){
			contador = contador + 1;
			printf("brand: %s\n",vetcarro[i].marca);
			printf("color: %s\n",vetcarro[i].cor);
			printf("year: %d\n",vetcarro[i].ano);		
						
		}else {
			continue;
		}
	}
	if(contador == 0){
		printf("do not have any car with the same or lower price");
	}else{
		printf("number of assembled cars = %d\n", contador);
	}
	

	
	printf("Set a car brand\n");
	scanf("%s",carro_avaliar_marca);
	
	for(i=0,contador=0;i<MAX;i++){
		
		if(strcmp(carro_avaliar_marca,vetcarro[i].marca)==0){
			contador = contador + 1;
			printf("price: %.2f\n",vetcarro[i].preco);
			printf("year: %d\n",vetcarro[i].ano);
			printf("color: %s\n",vetcarro[i].cor);
	
		}else{
			continue;
		}
		
	}
	if (contador == 0){
		printf("dont have any cars with this brand\n");
	}else{
		printf("number of assembled cars = %d\n", contador);
	}
	
	printf("Set the brand, year and color of a car:\n");
	scanf(" %s %d %s",carro_avaliar_marca,&carro_avaliar_ano,carro_avaliar_cor);
	printf("Cars with the same mark, year and color:\n");
	for(i=0,contador=0;i<MAX;i++){
		if(strcmp(carro_avaliar_marca,vetcarro[i].marca)==0 && strcmp(carro_avaliar_cor,vetcarro[i].cor)==0 && carro_avaliar_ano==vetcarro[i].ano){
			contador = contador + 1;
			printf("price: %.2f\n",vetcarro[i].preco);
		}else{
			continue;
		}		
	}
	if (contador==0){
		printf("No cars with these same features were found\n");
	}
	
	
	
	
	
	
	return 0;
}
