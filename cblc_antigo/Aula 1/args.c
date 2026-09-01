#include <stdio.h>

int main(int argc, char *argv[]) {

    // int argc -> parametro usado para guardar a qnt total de argumentos
    //             passados pela linha de comando quando executado
	// *Explicação: você poderá passar argumentos na hora de executar
	//              o programa, como veremos mais abaixo.

    // char *argv[] -> array de caractéres (string)

    printf("Olá, %s!\n", argv[1]);
    // saída: "Olá, (nome)!"

    	// * Obs: o nome será dado pelo terminal usando:
	// *      :~/$ ./args Nome

    return 0;

}