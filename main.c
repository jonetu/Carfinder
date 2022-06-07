#include <stdio.h>
#include <string.h>
#define MAX 20
typedef struct{
	char brand[16];
	int year;
	char color[11];
	float price;
} carro;

int main(){
	int i;
	carro car_array[20];
	float toEvaluate;
	int count;
	char car_evaluate_brand[16];
	int car_evaluate_year;
	char car_evaluate_color[11];
	for (i = 0; i < MAX; i++){
		printf("CAR %d\n", i + 1);
		printf("brand:\n");
		scanf("%s", car_array[i].brand);
		printf("year:\n");
		scanf("%d", &car_array[i].year);
		printf("color:\n");
		scanf("%s", car_array[i].color);
		printf("price\n");
		scanf("%f", &car_array[i].price);
	}
	printf("set a price:\n");
	scanf("%f", &toEvaluate);
	printf("cars with the same or lower price:\n");

	for (i = 0, count = 0; i < MAX; i++){
		if (car_array[i].price <= toEvaluate){
			count = count + 1;
			printf("brand: %s\n", car_array[i].brand);
			printf("color: %s\n", car_array[i].color);
			printf("year: %d\n", car_array[i].year);
		}
		else{
			continue;
		}
	}
	if (count == 0){
		printf("do not have any car with the same or lower price");
	}
	else{
		printf("number of assembled cars = %d\n", count);
	}

	printf("Set a car brand\n");
	scanf("%s", car_evaluate_brand);

	for (i = 0, count = 0; i < MAX; i++){

		if (strcmp(car_evaluate_brand, car_array[i].brand) == 0){
			count = count + 1;
			printf("price: %.2f\n", car_array[i].price);
			printf("year: %d\n", car_array[i].year);
			printf("color: %s\n", car_array[i].color);
		}
		else{
			continue;
		}
	}

	if (count == 0){
		printf("dont have any cars with this brand\n");
	}
	else{
		printf("number of assembled cars = %d\n", count);
	}

	printf("Set the brand, year and color of a car:\n");
	scanf(" %s %d %s", car_evaluate_brand, &car_evaluate_year, car_evaluate_color);
	printf("Cars with the same mark, year and color:\n");
	for (i = 0, count = 0; i < MAX; i++){
		if (strcmp(car_evaluate_brand, car_array[i].brand) == 0 && strcmp(car_evaluate_color, car_array[i].color) == 0 && car_evaluate_year == car_array[i].year){
			count = count + 1;
			printf("price: %.2f\n", car_array[i].price);
		}
		else{
			continue;
		}
	}
	if (count == 0){
		printf("No cars with these same features were found\n");
	}

	return 0;
}
