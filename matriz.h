#include <stdio.h>
#include <stdlib.h>

typedef struct matriz {
	/* COMPLETE AQUI COM SEU CODIGO */
} Matriz;

// leitura da matriz
void leMatriz(Matriz *A);
// imprime uma matriz
void imprimeMatriz(Matriz A);
// calcula a multiplicacao de uma matriz por uma constante
Matriz MultiplicacaoConstante(Matriz A, int c);
// calcula a adicao de duas matrizes
Matriz AdicaoMatriz(Matriz A, Matriz B);
// calcula a subtracao de duas matrizes
Matriz SubtracaoMatriz(Matriz A, Matriz B);
// calcula a multiplicacao de duas matrizes
Matriz MultiplicacaoMatriz(Matriz A, Matriz B);
// calcula a transposta de uma matriz
Matriz MatrizTransposta(Matriz A);
// checa se uma matriz é simétrica
int MatrizSimetrica(Matriz A);
// checa se uma matriz é quadrada
int MatrizQuadrada(Matriz A);
// checa se uma matriz é esparsa
int MatrizEsparsa(Matriz A);