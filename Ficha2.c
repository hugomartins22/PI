#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <string.h>

/*
1)

int main ()
{
int x [15] = {1, 2, 3, 4, 5,6, 7, 8, 9,10,11,12,13,14,15};
int *y, *z, i;
y = x;
z = x+3;

    for (i=0; i<5; i++) 
    {
    printf ("%d %d %d\n",x[i], *y, *z);
    y = y+1; z = z+2;
    }
}

1,1,4
2,2,6
3,3,8



//3)

void swap (int v[20], int i, int j)
{
int c;
int f;
int s;

    for (c=0;c<=20;c++)
    {
        (if v[c]==v[i]) 
    }
}





void main ()
{
int i,j;
int array[20];

    scanf ("%d %d",&i,&j);
    swap (array,i,j);
    printf ("%d",array);
}


int sumhtpo (int n){
  int r = 0;
  while (n != 1) {
    r += n;
    if (n%2!=0)
        printf("%d ",n);
    if (n%2 == 0)
    {
n = n/2;

    } 
    else
    {
n = 1+(3*n);
    
    } 
  }
  return r;
}

void main ()
{

sumhtpo(41);


    
}

*/

int hash (char s[])
 {
  int r = 0;
  while (*s) {r += *s; s++;}
  return r;
}



int next(char s[], int n) {
 while (n > 0) {
   n--;
   if (s[n] < 'z') {
     s[n]++;
     return 1;
   } else {
     s[n] = 'A';
   }
 }
 return 0;
}

int main () {
 char s[10];
 int n,i;
 int c;
 for (n=0;n<10;n++) {
   for (i=0;i<n;i++) s[i] = 'A';
   s[n] = '\0';
   do {
       if (hash(s)==527)
       {
printf("%s\n",s); break;
       }
            
   } while(next(s,n));
 }

}





























