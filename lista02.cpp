#include <iostream>

using namespace std;

int *V, n, posicao;

int *GeraVetor(int n, int *V){
	V = new int [n];
	return V;
}

int *EntraVetor(int n, int *V){
	for (int i = 0; i < n; i++)
	{
		do{
			cout<<"Informe o elemento com valor positivo do indice "<<i+1<<": ";
			cin>>V[i];
			if(V[i]<0){
				cout<<"ERROR: valor inaceitavel.\n/Por favor digite um valor positivo."<<endl;
			}
		}while(V[i]<0);
	}
	return V;
}

int EncontraPosicao(int n, int *V){
	int maior;
	for (int i = 0; i < n; i++)
	{
		if (i==0)
		{
			posicao = i;
			maior = V[i];
		}
		else{
			if(V[i]>maior){
				maior = V[i];
				posicao = i;
			}
		}
	}
	return posicao;
}

void MostraVetor(int n, int *V){
	cout<<"\n\n[";
	for (int i = 0; i < n; i++)
	{
		if (i==n-1)
		{
			cout<<V[i]<<']'<<endl;
		}
		else{
			cout<<V[i]<<',';
		}
	}
	cout<<"\nO maior elemento eh "<<V[posicao]<<" na posicao "<<posicao<<" do vetor"<<endl;
}

void LiberaVetor(int *V){
	delete V;
}

int main(int argc, char const *argv[])
{
	cout<<"Qual o tamanho do vetor? ";
  	cin>>n;
  	V = GeraVetor(n, V);
  	V = EntraVetor(n, V);
  	posicao = EncontraPosicao(n, V);
  	MostraVetor(n, V);
  	LiberaVetor(V);
  	return 0;
}