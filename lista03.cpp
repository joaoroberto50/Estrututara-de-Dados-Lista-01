#include <iostream>

using namespace std;

int *V, n, maior;

int *GeraVetor(int n, int *V){
	V = new int [n];
	return V;
}

int *EntraVetor(int n, int *V){
	for (int i = 0; i < n; i++)
	{
		cout<<"Informe o elemento indice "<<i+1<<": ";
		cin>>V[i];
	}
	return V;
}

int EncontraMaior(int n, int *V){
	for (int i = 0; i < n; i++)
	{
		if (i==0)
		{
			maior = V[i];
		}
		else{
			if(V[i]>maior){
				maior = V[i];
			}

		}
	}
	return maior;
}

void MostraVetor(int n, int *V){
	cout<<"\t\tImprimindo Vetor"<<endl;
	cout<<"================================================"<<endl;
	cout<<'[';
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
	cout<<"\nMaior elemento = "<<maior<<endl;
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
  	maior = EncontraMaior(n, V);
  	MostraVetor(n, V);
  	LiberaVetor(V);
	return 0;
}