#include <stdio.h>
#include <stdlib.h>
// lib q permite o uso do 'atof' que veremos abaixo

#define MILHA 0.6213

int main(int argc, char *argv[]) {

    float km = atof(argv[1]);

	// atof -> array to float
	// |
	// '-> pega o argumento do terminal que vem em
	//     um array de caractéres (string) e o con-
	//     verte para float, permitindo a realiza-
	//     ção de operações matemáticas com ela.

    float ml = km * MILHA;

    printf("%.2fkm = %.2fml", km, ml);

    return 0;

}