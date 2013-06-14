#include <iostream> 
#include <iomanip> 
#include "Complex.h"
using namespace std;

Complex::Complex( void ):
   real( 0 ),
   imaginary( 0 )
{
   
} 


ostream &operator<<( ostream &output, const Complex &c )
{
   output << c.real << showpos << c.imaginary << "i\n" << showpos;
   return output; 
} 


istream &operator>>( istream &input, Complex &c )
{
   int number;
   int multiplier;
   char temp; 

   input >> number; 

  
   if ( input.peek() == ' ' ) 
   {
      c.real = number;
      input >> temp;

      multiplier = ( temp == '+' ) ? 1 : -1;

      
      if ( input.peek() != ' ' ) 
         input.clear( ios::failbit );      
      else 
      {
        
         if ( input.peek() == ' ' ) 
         {
            input >> c.imaginary;
            c.imaginary *= multiplier;
            input >> temp;

            if ( input.peek() != '\n' ) 
               input.clear( ios::failbit ); 
         } 
         else
            input.clear( ios::failbit ); 
      } 
   } 
   else if ( input.peek() == 'i' ) 
   {
      input >> temp;

     
      if ( input.peek() == '\n' ) 
      {
         c.real = 0;
         c.imaginary = number;
      } 
      else
         input.clear( ios::failbit ); 
   } 
   else if ( input.peek() == '\n' ) 
   {
      c.real = number;
      c.imaginary = 0;
   } 
   else
      input.clear( ios::failbit ); 

   return input;
}