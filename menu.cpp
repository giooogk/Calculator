#include <iostream>
#include "soma.h"
#include "sub.h"
#include "mut.h"
#include "div.h"

int main(){
  int a;
  int b;
  int op = 0;
  cout <<"Digite o 1o valor: ";
  cin >> a;
  cin.ignore ();
  cout <<"Digite o 2o valor: ";
  cin >> b;
  cin.ignore ();
  
  cout <<"Que operacao deseja realizar?\n
\1. Adicao\t2.Subtracao\t3.Multiplicacao\t4.Divisao\n\n=>";
  cin.ignore ();
  
  switch(op){
    case 1:
      int soma(int a, int b);
      break;
    case 2:
      int sub(int a, int b);
      break;
    case 3:
      int mut(int a, int b);
      break;
    cade 4:
      int div(int a, int b);
      break;
      
  }
  system ("pause");
  return 0;
}
