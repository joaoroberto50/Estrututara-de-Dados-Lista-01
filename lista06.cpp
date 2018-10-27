#include <iostream>

using namespace std;

int **M1, **M2, **M3, n1, n2;

int **GeraMatriz1(int n1, int **M1){
	M1 = new int *[n1];
	for (int i = 0; i < n1; i++)
	{
		M1[i] = new int [n1];
	}
	return M1;
}

int **GeraMatriz2(int n2, int **M2){
	M2 = new int *[n2];
	for (int i = 0; i < n2; i++)
	{
		M2[i] = new int [n2];
	}
	return M2;
}

int **GeraResultado(int n1, int **M3){
	M3 = new int *[n1];
	for (int i = 0; i < n1; i++)
	{
		M3[i] = new int [n1];
	}
	return M3;
}

int **EntraMatriz1(int n1, int **M1){
  for(int i=0; i<n1; i++){
    for(int j=0; j<n1; j++){
      cout<<"Iforme o valor A"<<i+1<<'x'<<j+1<<": ";
      cin>>M1[i][j];
    }
  }
  return M1;
}

int **EntraMatriz2(int n2, int **M2){
  for(int i=0; i<n2; i++){
    for(int j=0; j<n2; j++){
      cout<<"Iforme o valor A"<<i+1<<'x'<<j+1<<": ";
      cin>>M2[i][j];
    }
  }
  return M2;
}

int **AlimentaResultado(int n1, int **M1, int **M2, int **M3){
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			M3[i][j] = M1[i][j] + M2[i][j];
		}
	}
	return M3;
}

void MostraMatriz(int n1, int **M3){
	cout<<"Matriz Resultado = "<<endl;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			if (j==n1-1)
			{
				cout<<M3[i][j]<<';'<<endl;
			}
			else{
				cout<<M3[i][j]<<',';
			}
		}
	}
}

void LiberaMatreizes(int n1, int **M1, int **M2, int **M3){
	for(int i = 0; i<n1; i++){
		delete M3[i];
	}
	delete M3;
	for(int i = 0; i<n1; i++){
		delete M2[i];
	}
	delete M2;
	for(int i = 0; i<n1; i++){
		delete M1[i];
	}
	delete M1;
}

int main(int argc, char const *argv[])
{
	cout<<"Qual o tamanho da Matriz 1? ";
	cin>>n1;
	cout<<"Qual o tamanho da Matriz 2? ";
	cin>>n2;
	if(n1 != n2){
		cout<<"Impossivel calcular o produto das Matrizes"<<endl;
	}
	else{
		M1 = GeraMatriz1(n1, M1);
		M2 = GeraMatriz2(n2, M2);
		M3 = GeraResultado(n1, M3);
		M1 = EntraMatriz1(n1, M1);
		M2 = EntraMatriz2(n2, M2);
		M3 = AlimentaResultado(n1, M1, M2, M3);
		MostraMatriz(n1, M3);
		LiberaMatreizes(n1, M1, M2, M3);
	}
	return 0;
}