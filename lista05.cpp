#include <iostream>

using namespace std;

int **M, **Mt, n;

int **GeraMatriz(int n, int **M){
  M = new int *[n];
  for(int i=0; i<n; i++){
    M[i]= new int [n];
  }
  return M;
}

int **GeraTransposta(int n, int **Mt){
  Mt = new int *[n];
  for(int i=0; i<n; i++){
    Mt[i]= new int [n];
  }
  return Mt;
}

int **EntraMatriz(int n, int **M){
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout<<"Iforme o valor A"<<i+1<<'x'<<j+1<<": ";
      cin>>M[i][j];
    }
  }
  return M;
}

int **CriaTransposta(int n, int **M, int **Mt){
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      Mt[j][i]=M[i][j];
    }
  }
  return Mt;
}

void MosraMatrizes(int n, int **M, int **Mt){
  cout<<"\n======================================="<<endl;
  cout<<"\nMatriz = "<<endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(j==n-1){
        cout<<M[i][j]<<';'<<endl;
      }
      else{
        cout<<M[i][j]<<", ";
      }
    }
  }
  cout<<"\n=======================================\n"<<endl;
  cout<<"Matriz Transposta = "<<endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(j==n-1){
        cout<<Mt[i][j]<<';'<<endl;
      }
      else{
        cout<<Mt[i][j]<<", ";
      }
    }
  }
}

void LiberaMatrizes(int n, int **M, int **Mt){
  for(int i = 0; i<n; i++){
    delete Mt[i];
  }
  delete Mt;
  for(int i = 0; i<n; i++){
    delete M[i];
  }
  delete M;
}

int main() {
  cout<<"Qual o tamanho da Matriz? ";
  cin>>n;
  M = GeraMatriz(n, M);
  Mt = GeraTransposta(n, Mt);
  M = EntraMatriz(n, M);
  Mt = CriaTransposta(n, M, Mt);
  MosraMatrizes(n, M, Mt);
  LiberaMatrizes(n, M, Mt);
  return 0;
}