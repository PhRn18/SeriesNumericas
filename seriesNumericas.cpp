#include <iostream>
#include <ctype.h>
#include <math.h>
using namespace std;

float fatorial(int numero) {
	float fat, n = numero;
	for (fat = 1; n > 1; n = n - 1)
	{
		fat = fat * n;
	}
	return fat;
}
void pAritmetica(float termoInicial,float razao,int quantidadeTermos) {
	float somaTermos = 0;
	for (int i = 0; i < quantidadeTermos; i++) {
		float termo = termoInicial + (razao * i);
		somaTermos += termo;
		cout << "Termo"<<i+1<<" = " << termo<< endl;
	}
	cout << "Soma dos termos da PA: " << somaTermos;
}
void pGeometrica(float termoInicial, float razao, int quantidadeTermos) {
	float soma = 0;
	for (int i = 0; i < quantidadeTermos; i++) {
		float fatorMultiplicativo = pow(razao, i);
		float termo = termoInicial*fatorMultiplicativo;
		soma += termo;
		cout << "Termo" << i + 1 << " = " << termo << endl;
	}
	cout << "Soma dos termos da PG: " << soma;
}
void exponencial(float expoente,int precisao) {
	float valor = 0;
	for (int i = 0; i < precisao; i++) {
		valor += pow(expoente, i) / fatorial(i);
	}
	cout << valor;
}
int main()
{
	//pAritmetica(10,-1, 10);
	//pGeometrica(1, 0.7, 500);
	//exponencial(1, 10000);
	return 0;
}