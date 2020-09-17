#include <stdio.h>
main(){
	char name[50];
	printf("Hola Mundo\n");
	printf("Escribe tu nombre");
	fgets(name, sizeof(name),stdin);
	printf("Bienvenido %s",name);
	return 0;
}
