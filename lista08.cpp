#include <iostream>

using namespace std;

int *V1, *V2, *V3, n;

int *GeraVetor1(int n, int *V1){
	V1 = new int [n];
	return V1;
}

int *GeraVetor2(int n, int *V2){
	V2 = new int [n];
	return V2;
}

int *GeraResultado(int n, int *V3){
	n = n*2;
	V3 = new int [n];
	return V3;
}

int *EntraVetor1(int n, int *V1){
	for (int i = 0; i < n; i++)
	{
		cout<<"Informe o elemento indice "<<i+1<<": ";
		cin>>V1[i];
	}
	return V1;
}

int *EntraVetor2(int n, int *V2){
	for (int i = 0; i < n; i++)
	{
		cout<<"Informe o elemento indice "<<i+1<<": ";
		cin>>V2[i];
	}
	return V2;
}

int *EntraResultado(int n, int *V1, int *V2, int *V3){
	int x = n*2;
	for (int i = 0, j = 0, k = 0; i < x, j < n, k < n; i++)
	{
		if(i%2==0){
			V3[i]=V1[j];
			j++;
		} 
		else{
			V3[i]=V2[j]; 
			k++;
		}
	}
	return V3;
}

void MostraVetor(int n, int *V1, int *V2, int *V3){
	cout<<"\t\tImprimindo Vetor"<<endl;
	cout<<"================================================"<<endl;
	cout<<"Vetor 1 = [";
	for (int i = 0; i < n; i++)
	{
		if (i==n-1)
		{
			cout<<V1[i]<<']'<<endl;
		}
		else{
			cout<<V1[i]<<',';
		}
	}
	cout<<"Vetor 2 = [";
	for (int i = 0; i < n; i++)
	{
		if (i==n-1)
		{
			cout<<V2[i]<<']'<<endl;
		}
		else{
			cout<<V2[i]<<',';
		}
	}
	cout<<"Vetor Resultado = [";
	n = n*2;
	for (int i = 0; i < n; i++)
	{
		if (i==n-1)
		{
			cout<<V3[i]<<']'<<endl;
		}
		else{
			cout<<V3[i]<<',';
		}
	}
}

void LiberaVetor(int *V1, int *V2, int *V3){
	delete V1;
	delete V2;
	delete V3;
}

int main(int argc, char const *argv[])
{
	cout<<"Informe o tamanho dos Vetores: ";
	cin>>n;
	V1 = GeraVetor1(n, V1);
	V2 = GeraVetor2(n, V2);
	V3 = GeraResultado(n, V3);
	V1 = EntraVetor1(n, V1);
	V2 = EntraVetor2(n, V2);
	V3 = EntraResultado(n, V1, V2, V3);
	MostraVetor(n, V1, V2, V3);
	LiberaVetor(V1, V2, V3);
	return 0;
}