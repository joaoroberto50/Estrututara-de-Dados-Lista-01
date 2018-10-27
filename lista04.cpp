#include <iostream>

using namespace std;

int **M, *V, n, maior;

int **GeraMatriz(int n, int **M){
	M = new int *[n];
	for (int i = 0; i < n; i++)
	{
		M[i] = new int [n];
	}
	return M;
}

int *GeraVetor(int n, int *V){
	V = new int [n];
	return V;
}

int **EntraMatriz(int n, int **M){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<"Digite o valor do A"<<i+1<<j+1<<": ";
			cin>>M[i][j];
		}
	}
	return M;
}

int *EntraVetor(int n, int **M, int *V){
	int premaior;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j==0)
			{
				premaior = M[i][j];
			}
			else{
				if(M[i][j] > premaior){
					premaior = M[i][j];
				}
			}
		}
		V[i] = premaior;
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

void MostraMatriz(int n, int **M){
	//cout<<"\n [";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j==n-1)
			{
				cout<<M[i][j]<<';'<<endl;
			}
			else{
				cout<<M[i][j]<<',';
			}
		}
	}
	cout<<"\nMaior elemento = "<<maior<<endl;
}

void LiberaMatriz(int n, int **matriz){
	for (int i=0; i<n; i++){
		delete M[i];
	}
	delete M;
}

void LiberaVetor(int *V){
	delete V;
}


int main(int argc, char const *argv[])
{
	cout<<"Qual o tamanho do vetor? ";
  	cin>>n;
  	M = GeraMatriz(n, M);
  	V = GeraVetor(n, V);
  	M = EntraMatriz(n, M);
  	V = EntraVetor(n, M, V);
  	maior = EncontraMaior(n, V);
  	MostraMatriz(n, M);
  	LiberaMatriz(n, M);
  	LiberaVetor(V);
	return 0;
}