#include <stdio.h>
#include "matriz.h"

int main() {
	char op;

	printf("Digite a operacao que deseja realizar:\n");
	printf("  C - Multiplicação de uma matriz por uma constante\n");
	printf("  A - Adicao de matrizes\n");
	printf("  U - Subtracao de matrizes\n");
	printf("  M - Multiplicacao de matrizes\n");
	printf("  T - Transposta de uma matriz\n");
	printf("  S - Checar se uma matriz e simetrica\n");
	printf("  Q - Checar se uma matriz e quadrada\n");
	printf("  E - Checar se uma matriz e esparsa\n");
	scanf("%c", &op);

	// Multiplicação de uma matriz por uma constante
	if (op == 'C') {
		// leitura da matriz
		Matriz A;
		printf("Digite as informações da matriz:\n");
		leMatriz(&A);
		// leitura da constante
		int c;
		printf("Digite a constante:\n");
		scanf("%d", &c);
		// calculo da multiplicacao
		Matriz B;
		B = MultiplicacaoConstante(A, c);
		// impressao do resultado
		printf("O resultado e:\n");
		imprimeMatriz(B);
	}

	// Adicao de matrizes
	if (op == 'A') {
		// leitura da primeira matriz
		Matriz A;
		printf("Digite as informações da primeira matriz:\n");
		leMatriz(&A);
		// leitura da segunda matriz
		Matriz B;
		printf("Digite as informações da segunda matriz:\n");
		leMatriz(&B);
		// calculo da adicao
		Matriz C;
		C = AdicaoMatriz(A, B);
		// impressao do resultado
		printf("O resultado e:\n");
		imprimeMatriz(C);
	}

	// Subtracao de matrizes
	if (op == 'U') {
		// leitura da primeira matriz
		Matriz A;
		printf("Digite as informações da primeira matriz:\n");
		leMatriz(&A);
		// leitura da segunda matriz
		Matriz B;
		printf("Digite as informações da segunda matriz:\n");
		leMatriz(&B);
		// calculo da subtracao
		Matriz C;
		C = SubtracaoMatriz(A, B);
		// impressao do resultado
		printf("O resultado e:\n");
		imprimeMatriz(C);
	}

	// Multiplicacao de matrizes
	if (op == 'M') {
		// leitura da primeira matriz
		Matriz A;
		printf("Digite as informações da primeira matriz:\n");
		leMatriz(&A);
		// leitura da segunda matriz
		Matriz B;
		printf("Digite as informações da segunda matriz:\n");
		leMatriz(&B);
		// calculo da multiplicacao
		Matriz C;
		C = MultiplicacaoMatriz(A, B);
		// impressao do resultado
		printf("O resultado e:\n");
		imprimeMatriz(C);
	}

	// Transposta da matriz
	if (op == 'T') {
		// leitura da matriz
		Matriz A;
		printf("Digite as informações da matriz:\n");
		leMatriz(&A);
		// calculo da transposta
		Matriz B;
		B = MatrizTransposta(A);
		// impressao do resultado
		printf("O resultado e:\n");
		imprimeMatriz(B);
	}

	// Checa de matriz é simétrica
	if (op == 'S') {
		// leitura da matriz
		Matriz A;
		printf("Digite as informações da matriz:\n");
		leMatriz(&A);
		// calculo da transposta
		if (MatrizSimetrica(A)) printf("A matriz e simetrica\n");
		else printf("A matriz nao e simetrica\n");
	}

	// Checa de matriz é quadrada
	if (op == 'Q') {
		// leitura da matriz
		Matriz A;
		printf("Digite as informações da matriz:\n");
		leMatriz(&A);
		// calculo da quadrada
		if (MatrizQuadrada(A)) printf("A matriz e quadrada\n");
		else printf("A matriz nao e quadrada\n");
	}

	// Checa de matriz é esparsa
	if (op == 'E') {
		// leitura da matriz
		Matriz A;
		printf("Digite as informações da matriz:\n");
		leMatriz(&A);
		// calculo da esparsa
		if (MatrizEsparsa(A)) printf("A matriz e esparsa\n");
		else printf("A matriz nao e esparsa\n");
	}

	return 0;
}