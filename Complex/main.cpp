#include <iostream> 
#include "Complex.h"
#include <stdlib.h>
using namespace std;

int main()
{
   Complex complex; 
    setlocale (0, "Russian");
   cout << "������� ����������� ����� � ���� A + Bi:\n";
   cin >> complex; 

   if ( !cin.fail() ) 
      cout << "����������� ����� ���� �������:\n" << complex << endl;
   else
      cout << "�������� ������, ���������\n";
   system("pause");
}