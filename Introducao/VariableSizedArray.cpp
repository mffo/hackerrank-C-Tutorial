#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  
vector< vector<int> > a;

  int n,q,q1,q2,valor,tamanho;
  cin>>n>>q;

  for (int i = 0; i < n; i++) 
  {
      cin>>tamanho;
      vector <int> k;
      
      for(int j =0; j<tamanho;j++)
      {
        cin>>valor;
        k.push_back(valor);
      }
      
      a.push_back(k);
  }


  for(int i=0;i<q;i++)
  {
    cin>>q1>>q2;
    cout<<a[q1][q2]<<endl;
  }
  

  
  return 0;
}
