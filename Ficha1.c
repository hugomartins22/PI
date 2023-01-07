#include <stdio.h>
#include <assert.h>
#include <math.h>

// 1.

// 1) x=12 , y=16

// 2) x=0 , y=0

/* 3) a 65
      b 66 2 50
      c 98
*/

// 4) x 100 y 200


// 2)

// a) x=3 y=5

// b) x=11 y=66

// c) _#_#_#_#_#_#_#_#_#_#

/* d) 
1
01
11
001
101
011
111
0001
1001
0101
1101
0011
1011
0111
1111
*/

// 3)

//1.
/*
int main () 
{
int lines;
int contador;
scanf ("%d",&lines);
      for (;lines>0;lines--)
{
      printf ("##### \n");
}
return 0;
}

//2


int auxiliar (int valor,int mult, int soma)
{

      return (valor*mult+soma);
}


void main () {
      int lines;
      int cont;


      printf("resultado=%d",auxiliar(3,4,5));
scanf ("%d",&lines);
      for (cont=0;cont<lines;cont++)
      {
            if (cont%2==0)
            { 
                  printf ("#_#_#\n");
            } 
            else
            { 
                  printf ("_#_#_\n");
            }
      }
}


//3.

int auxilio (int vezes)
{
int num ;
      for (num=0;num<vezes;num++)
      {
      printf ("#");
      }
      printf ("\n");
return 0;    
}
  

void main () 
{
int col;
int conta;

assert(scanf ("%d",&col)==1);
      for (conta=0;conta<col;conta++)
      {
            auxilio (conta+1);
      }
      for (conta=(col-2);conta>=0;conta--)
      {
      auxilio (conta+1);
      }
}


*/


void vazios (linha)                                                          
{
int vezes ; 
      for (vezes=5;vezes>=linha;vezes--)
      {
      printf (" ");
      } 
}




void cheios (linha)                                                           
{
int vezes ;
      for (vezes=1;vezes<=linha;vezes++)
      {
      printf ("#");
      } 
}

void cheios2 (linha)                                                           
{
int vezes ;
      for (vezes=1;vezes<=(linha-1);vezes++)
      {
      printf ("#");
      } 
}

void main () 
{
int size;
int cont;

scanf ("%d",&size) ;
      for (cont = 0;cont < size;cont++)
      {
            vazios (cont+1);
            cheios (cont+1);
            cheios2 (cont+1);
            vazios (cont+1);
            printf ("\n");
      }
}



















