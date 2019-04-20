#include <iostream>
#include "soma.h"
#include "sub.h"
#include "mut.h"
#include "divi.h"

using namespace std;

int main(){
  int a;
  int b;
  int op = 0;
  
  cout <<"Digite o 1o valor: ";
  cin >> a;
  
  cout <<"Digite o 2o valor: ";
  cin >> b;
  
  cout <<"Que operacao deseja realizar?" << endl << "1. Adicao  2.Subtracao 3.Multiplicacao 4.Divisao" << endl;
  cin >> op;
  
  switch(op){
    
    case 1:
      cout << soma(a,b);
      break;
    
    case 2:
      cout << sub(a,b);
      break;
    
    case 3:
      cout << mut(a,b);
      break;
    
    case 4:
      cout << divi(a,b);
      break;
      
  };
  return 0;
}
