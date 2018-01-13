#include <iostream>
using namespace std;

class atendimento{
  //dados do cliente
private:
  static const int cont = 60000;
  int rg[cont];
  string nome[cont];

public:
    void atend(){
       int x = 0;
       cout << "--- Nova compra ---"<< endl;

       while (x != -1) {
       cout << "Nome do cliente :  "<< endl;
       cin >> nome[x] ;

     }
      }
 };
