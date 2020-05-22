#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
#define max 4

int main(int argc, char const *argv[])
{
	int TAM;
	cout << "fala ae cuzaum, de quantos espaços de memoria vc vai precisar?" << endl;
	cin >> TAM;
	int *vetor = new int[TAM];
	for(int i = 0; i <TAM; i++){
		cout << "valor alocado da posição " << i << endl;
		cin >> vetor[i];
	}
	for (int i =0; i < TAM; i++){
		cout << vetor[i] << "," ;
	}
	delete vetor;
	return 0;
}
