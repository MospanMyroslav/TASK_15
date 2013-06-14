#include <iostream> 
#include "Complex.h"
#include <stdlib.h>
using namespace std;

int main()
{
   Complex complex; 
    setlocale (0, "Russian");
   cout << "Входное комплексное число в виде A + Bi:\n";
   cin >> complex; 

   if ( !cin.fail() ) 
      cout << "Комплексное число было введено:\n" << complex << endl;
   else
      cout << "Неверный данные, введенные\n";
   system("pause");
}