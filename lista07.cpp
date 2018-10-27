#include <iostream>

using namespace std;

int *V, n, *posicao;


int *GeraVetor(int n, int *V){
	V = new int [n];
	return V;
}

int *AlocaPosicao(int *posicao){
	posicao = new int [1];
}

int *EntraVetor(int n, int *V){
	for (int i = 0; i < n; i++)
	{
		cout<<"Informe o elemento indice "<<i+1<<": ";
		cin>>V[i];
	}
	return V;
}

int *EncontraIgual(int n, int *posicao, int *V){
	cout<<"Valor que deseja encontrar: ";
	int x;
	cin>>x;
	for (int i = 0; i < n; i++)
	{

		if (x==V[i])
		{
			posicao[0] = i;
			break;
		}
		else{
			posicao = NULL;
		}
	}
	return posicao;
}

void MostraResultado(int *posicao){
	if(posicao == NULL){
		cout<<"Valor nao encontrado no Vetor"<<endl;
	}
	else{
		cout<<"Valor encontrado na posiçao: "<<*posicao<<endl;
	}
}

void LiberaVetor(int *V, int *posicao){
	delete V;
	delete posicao;
}

int main(int argc, char const *argv[])
{
	cout<<"Qual o tamanho do vetor? ";
  	cin>>n;
  	V = GeraVetor(n, V);
  	posicao = AlocaPosicao(posicao);
  	V = EntraVetor(n, V);
  	posicao = EncontraIgual(n, posicao, V);
  	MostraResultado(posicao);
  	LiberaVetor(V, posicao);
	return 0;
}