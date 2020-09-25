#include <stdio.h>
main(){
	char name[50];
	unsigned int age;
	//printf("Hola Mundo\n");
	printf("Escribe tu nombre");
	fgets(name, sizeof(name),stdin);
	printf("Bienvenido %s",name);
	printf("Ingresa Tu Edad");
	scanf("%d",&age);
	printf("Vas a cumplir %d",age+1);
	return 0;
}
