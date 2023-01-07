#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

//1)

/*

int maximo (int nums[])
{
int c;
int max;
max = nums[0];
    for (c=0;nums[c]!=0;c++)
    {
    if (nums[c]>max) 
        max=nums[c]; 
    }
return max;
}



void main () 
{
int lista[10000000];
int c;
    for (c=0;c<10;c++)
    {
    scanf ("%d",&lista[c]);
    if (lista[c]==0) c=10;
    }
        printf ("o maior numero lido é %d\n",maximo(lista));
}  





//2)

float media (int numrs[])
{
int c;
float soma;
soma = 0;
for (c=0;numrs[c]!=0;c++)
{
    soma = numrs[c]+soma ;
}
return(soma/(float)c);
}


void main ()
{
int lista[20];
int cont;
    for (cont=0;cont<20;cont++)
    {
    scanf ("%d",&lista[cont]);
    if (lista[cont]==0) cont=20;
    }
        printf ("A media é %f",media(lista));
}




//3


int maximo (int nums[])
{
int c;
int max;
max = nums[0];
    for (c=0;nums[c]!=0;c++)
    {
    if (nums[c]>max) 
        max=nums[c]; 
    }
return max;
}


int second (int lista[])
{
int c;
int second;
second = 0;
c = 0;
    for (lista[c];lista[c]!=0;c++)
    {
        if (lista[c] >= second && lista[c] < maximo(lista))
        second = lista[c];
    }
return second;
}



void main () 
{
int c;
int lista[10];

    for(c=0;c<10;c++)
    {
    scanf("%d",&lista[c]);
    if (lista[c]==0) c=10;
    }

        printf("O segundo maior nrº é o : %d \n" ,second (lista));
}



//4)

int bitsUm(unsigned int n)
{
    int comparador;
    int n;
    comparador = 1;

    scanf("%d", &n);
}


int[] binary(int n)

{
    int c[16];
    if (n % 2 == 0) c[0] = 0 
    else
    {
    if (n % 2 == 1) c[0] = 1;
    } 
}




void contador (int array[])
{
int c;
int n;
n = 0;

    for(c=15;c>=0;c--)
    {
        if(array[c]==1) n+=1;
        else n+=0;    
    }
printf("%d \n",n);
}


5)

void binario (int n)
{
int c;
int array[15];

    for (c=15;c>=0;c--)
    {
        if (n & (int) pow(2,c)) array[c]=1;
        else array[c]=0;
    }

    contador(array);
}

void main() 
{
int n;

scanf ("%d",&n);

    binario (n);
}


6)

int qDig (unsigned int n)
{
float c;
int num;
num = 1;

    if (n<10) printf("%d \n",1); 
    for (c=10;c<=n;c=c*10)
    {
        num += 1;
    }
    if (n>=10) printf("%d \n", num);
return 0;
}


void main ()
{
int n;
    scanf("%d",&n);
    qDig(n);
}




// 7)


char *strcatMy (char s1[], char s2[])
{
int i,j;

    for (i=0;s1[i]!= '\0';i++);
    for (j=0;s2[j]!= '\0';i++,j++)
        s1[i]=s2[j];
return s1;
}


void main ()
{
char s1[50];
char s2[50];
char *pCat;

scanf("%s %s",s1,s2);

pCat=strcatMy (s1,s2);

}



//8)

char *strcpyMy (char *dest, char source[])
{
int c;
int i;
    for (i=0;source[i]!='\0';c++,i++)
    dest[c]=source[i];

dest[c]= '\0';

return dest; 

}



void main ()
{
char dest[50];
char source[50];
char *result;

scanf ("%s",source);
result = strcpyMy (dest,source);

printf ("%s",result);
}




9)
int mystrcmp (char s1[], char s2[])
{
int i;

    for(i=0; s1[i] == s2[i] && s1[i] != '\0'; i++);

return (s1[i]-s2[i]);
}



void main () 
{

char s1[20];
char s2[20];
int result;

scanf ("%s %s",s1,s2);

result = mystrcmp (s1,s2);
printf ("%d",result);

}






char *mystrstr (char s1[], char s2[])
{
int i,j=0, pos=0;
    if (s2[0] == '\0') return s1;
    for(i=0; s1[i] != '\0'; i++)
    {
        if (s1[i] == s2[0]) pos=i;
        if (s1[i] == s2[j]) j++;
        if (s2[j] == '\0') return s1+pos;
    }
return NULL;
}



void main () 
{

char s1[20];
char s2[20];
int result;

scanf ("%s %s",s1,s2);

result = *mystrstr (s1,s2);
printf ("%d",result);

}


int cont=0;

int sumhtpo (int n)
{
  int r = 0;
  while (n != 1) {
    r += n;
      printf("%d \n",n);
    if (n%2 == 0) n = n/2;
    else n = 1+(3*n);
  }
  return r;
}





void main () 
{
sumhtpo (73);
}



//10)


char *strstrmy (char s1[], char s2[])
{
int c,i;
int pos;
pos = 0;



    for (c=0;s1[c]!='\0';c++)
    {
        for (i=0;s1[c+i]==s2[i];i++);

        if (s2[i]=='\0')
        {
            return s1+c;
        }
    }

}






void main ()
{
char s1[10];
char s2[10];
char *p;

scanf ("%s %s",s1,s2);
p = strstrmy (s1,s2);
printf("%s",p);
    
}





//11)


void strrev (char s[])
{
int c,final;
final = strlen(s)-1;
char s2[20];

strncpy(s2,s,20);

    for (c=0; s[c]!='\0';c++)
    {
        if (final>=c)
        {
        s[final]=s[c];
        final--;
        }
        else
        {
        s[final]=s2[c];
        final--;
        }
    }
}




void main ()
{
char s[20];

scanf("%s",s);

strrev(s);

printf("%s",s);
}





//12)

void strnoV (char s[])
{
int c;

    for(c=0;s[c]!='\0';c++)
    {
        if (s[c]=='a'||s[c]=='e'||s[c]=='i'||s[c]=='o'||s[c]=='u'||s[c]=='A'||s[c]=='E'||s[c]=='I'||s[c]=='O'||s[c]=='U')
        s[c]= "";
    }
}

void main ()
{
char s[20];

scanf ("%s",s);
strnoV(s);
printf("%s",s);
}



// algoritmo do ping-pong
void main ()
{
int n;

    for (n=1;n<=100;n++)
    {
        if ((n%3==0) && (n%5==0)) printf("ping pong \n");
        if (n%3==0) printf("ping \n");
        if (n%5==0) printf("pong \n");
        else printf("%d \n",n);
    }
}





//13)


  
void truncW(char s[], int n){
int i,j=0,rep=n;

    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
        {
            s[j]= ' ';
            j++;
            rep=n;
        }
        else
        {
            if(rep != 0)
            {
                s[j] = s[i];
                j++;
                rep--;
            }
        }
    }
    s[j] = '\0';
}


void main ()
{
char t[20];
int n;

fgets(t, sizeof t, stdin);
scanf ("%d",&n);

truncW(t,n);

printf("%s \n",t);
}





//14)

char charMaisFreq(char s[]){
    int i, contador[127]={0}, max,j;

    if(s[0] == '\0') return 0;

    for(i=0; s[i] != '\0'; i++){
        contador[s[i]]++;
    }

    for(i=0, j=0, max = contador[0]; contador[i] <127 ; i++){
        if (contador[i] > max){
            max=contador[i];
            j=i;
        }
    }
    return j;
}



//15)


int iguaisConsecutivos (char s[])
{
int c,i=1,result=0;

    for (c=0;s[c]!='\0';c++)
    {
        if (s[c]==s[c+1]) i++;
        else
        {
            if (i>result)
            {
                result=i;
                i=1;
            } 
        }
    }
return result;

}







void main ()
{
char s[20];
int x;

scanf("%s",s);
x=iguaisConsecutivos(s);
printf("%d",x);
}






//16)

int difConsecutivos (char s[])
{
int c,i=1,max=0;

    for (c=0;s[c]!='\0';c++)
    {
        if (s[c]!=s[c+1]) i++;
        else
        {
            if (i>max)
            {
                max=i;
                i=1;
            }
        }
    }
return max;

}


void main ()
{
char s[20];
int x;

scanf("%s",s);
x=difConsecutivos(s);
printf("%d",x);
}



//17)

int maiorPrefixo (char s1 [], char s2 [])
{
int valor=0,c,j;

    for (c=0,j=0;s1[c]!='\0' && s2[j]!='\0';c++,j++)
    {
        if (s1[c]==s2[c]) valor +=1;
        else
        {
            c++;
        }
    }
return valor;

} 


void main ()
{
char s1[20];
char s2[20];
int x;

scanf("%s %s",s1,s2);
x=maiorPrefixo(s1,s2);
printf("%d",x);
}



//18)




int maiorsufixo (char s1 [], char s2 [])
{
int valor=0,c,j;

    for (c=0,j=0;s1[c]!='\0' && s2[j]!='\0';c++,j++)
    {
        if (s1[c]==s2[c]) valor +=1;
        else
        {
            c++;
        }
    }
return valor;

} 


char *reverse (char s[])
{
int c;
int x;
x= strlen (s);
char s2[20];
strcpy (s2,s);

    for (c=0;s[c]!='\0';c++)
    {
        if (c<x)
        {
        s[c]=s[x-1];
        x--;
        }
        else
        {
        s[c]=s2[x-1];
        x--;
        }
    }
return s;

} 




void main ()
{
char s1[20];
char s2[20];
int x;

scanf("%s %s",s1,s2);
reverse (s1);
reverse (s2);
x=maiorsufixo(s1,s2)-1;
printf("%s %s",s1,s2);
}





//19)

char *reverse (char s[])
{
int c;
int x;
x= strlen (s);
char s2[20];
strcpy (s2,s);

    for (c=0;s[c]!='\0';c++)
    {
        if (c<x)
        {
        s[c]=s[x-1];
        x--;
        }
        else
        {
        s[c]=s2[x-1];
        x--;
        }
    }
return s;

}



int sufPref (char s1[], char s2[])
{
int c,x=0;
int reps=0;

    for (c=0;s1[c];c++)
    {
        if (s1[c]==s2[x])
        { 
        reps +=1;
        x++;
        }
    }

return reps;
}



void main ()
{
char s1[20];
char s2[20];
int x;

scanf("%s %s",s1,s2);
x=sufPref(s1,s2);
printf("%d",x);
}




//20)

int isSpace(char token)
{
    if (token == ' ' || token == '\n')
    {
        return 1;
    }
    else
        return 0;
}

int contaPalavras(char s[])
{
    int i, words = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((!(isSpace(s[i]))) && (isSpace(s[i + 1]) || s[i + 1] == '\0'))
        {

            words++;
        }
    }
    return words;
}

void main()
{
    char s[20];
    int x;

    fgets(s, sizeof s, stdin);
    x = contaPalavras(s);
    printf("%d", x);
}




//21)

int contaVogais (char s[])
{
int c,total=0;

    for(c=0;s[c]!='\0';c++)
    {
        if(s[c]=='a' ||s[c]=='e' ||s[c]=='i' ||s[c]=='o' ||s[c]=='u' ||s[c]=='A' ||s[c]=='E' ||s[c]=='I' ||s[c]=='O' ||s[c]=='U') total +=1;
    }
return total;
}




void main()
{
    char s[20];
    int x;

    fgets(s, sizeof s, stdin);
    x = contaVogais(s);
    printf("%d", x);
}



//22)


int charContido(char s1, char s2[]){
    int j, r=0;
    for(j=0; s2[j]!= '\0'; j++)
    {
        if (s1==s2[j]) r=1;
    }
    return r;
}

int contida (char s1[], char s2[])
{
    int i, r=1;

    for(i=0; s1[i] != '\0'; i++)
    {
        if (charContido(s1[i],s2) != 1) r=0;
    }
    return r;
}


void main()
{
    char s1[20];
    char s2[20];
    int x;

    fgets(s1, sizeof s1, stdin);
    fgets(s2, sizeof s2, stdin);
    x = contida(s1,s2);
    printf("%d", x);
}





//23)

int palindorome (char s[])
{
int c,x=strlen(s)-1,result=1;

    for(c=0;s[c]!='\0';c++,x--)
    {
        if(s[c]!=s[x] && c<x) 
        {
        result=0;
        }   
    }
return result;
}



void main()
{
    char s[20];
    int x;

    scanf("%s",s);
    x = palindorome(s);
    printf("%d", x);
}





//24)

int remRep (char s[])
{
int c,i;

    for(c=0;s[c]!='\0';c++)
    {
        if(s[c]==s[c+1]) 
        {
            for(i=c;s[i]!='\0';i++) s[i]=s[i+1];
            c--;
        }
    }
return (strlen(s));
}


void main()
{
    char s[20];
    int x;

    scanf("%s",s);
    x = remRep(s);
    printf("%d",x);
}





//25)

int limpaEspacos (char s[])
{
int c,i;

    for(c=0;s[c]!=0;c++)
    {
        if (s[c]==s[c+1] && s[c]==' ')
        {
            for(i=c;s[i]!=0;i++) s[i]=s[i+1];
        c--;
        }
    }
return(strlen(s));
}



void main()
{
    char s[100];
    int x;

    fgets(s,sizeof(s),stdin);
    x = limpaEspacos(s);
    printf("%d",x);
}



//26)

void insere (int s[], int N, int x)
{
int c,i,t,sitio;
int copy[100]={1,2,3,4,6,7,1,2};

    for(c=0;c<8;c++)
    {
        if(s[c]<x && s[c+1]>x)  
        {
            sitio=c+1;
            for(i=c+1;i<8;i++) 
            {
            s[i+1]=copy[i];
            }
        }
    }
s[sitio]=x;

for (t = 0; t < 9; t++)
    {
        printf("novo %d\n", s[t]);
    }
}


void main()
{
    int s[100]={1,2,3,4,6,7,1,2};
    insere(s,4,5);
}



//27)

void merge (int r [], int a[], int b[], int na, int nb)
{
int i,c,j,final;
c=0,j=0;

    for(final=0;final<(na+nb);final++)
    {
        if (a[c]<b[j] && j<nb && c<na) 
        {
        r[final]=a[c];
        c++;
        }
        else if (a[c]>=b[j] && j<nb && c<na) 
        {
        r[final]=b[j];
        j++;
        }
        else if (nb>na)
        {
        r[final]=b[j];
        j++;
        }
        else if (nb<na)
        {
        r[final]=a[c];
        c++;
        }
        else if (c<j)
        {
        r[final]=a[c];
        c++;
        }
        else
        {
        r[final]=b[j];
        j++;
        }
    }

for (i = 0; i < (na+nb); i++)
    {
        printf("novo %d\n", r[i]);
    }
}


void main()
{
    int a[10]={5,12,13,14,15,16,17,18,19,19};
    int b[10]={1,1,1,1,1,1,1,1,1,1};
    int r[20];
    merge(r,a,b,10,10);
}



//28)



int crescente (int a[], int i, int j)
{
int c;

    for(c=0;a[c]!=0;c++)
    {
        if (c>=i && c<j)
        {
            if(a[c]>a[c+1]) return 0;
        }
    }
return 1;
}




void main()
{
    int a[100]={100,101,102,103};
    int i=0,j=3,x;
    x=crescente(a,i,j);
    printf("resultado é %d \n",x);

}


//29)

int retiraNeg (int v[], int N)
{
printf("tamanho inicial %d \n",N);
int c,j,x;
int copy[N];

for (x=0;x<N;x++)
{
    copy[x]=v[x];
}

    for(c=0,j=0;c<N,j<N;c++,j++)
    {
        if (copy[c]>=0)
        {
            v[j]=copy[c];
        }
        if (copy[c]<0)
        {
            j--;
            N--;
        }
    }
printf("tamanho final %d \n",N);
return N; 
}


void main()
{
    int v[100]={-1,-2,-3,-4,0,0,0,-1007746960,32765,110,111,112,113,114,115,116,117,118,119,-12};
    retiraNeg(v,20);
}



//30)

int menosFreq (int v[], int N)
{
int c,j,lessF=v[0],vezes,n=N;

    for (c=0;c<N;c++)
    {
    vezes=0;
        for (j=0;j<N;j++)
        {
            if (v[c]==v[j]) vezes++;
        }

        vezes--;

        if (vezes<n)
        {
        lessF=v[c];
        n=vezes;
        }  
    }
return lessF;
}


void main()
{
    int v[20]={2,2,2,3,3,3,4,4,5,5,5,5,5,5,5,6,6,6,6,6};
    int x;
    x=menosFreq(v,20);
    printf("%d \n",x);
}




//31)

int maisFreq (int v[], int N)
{
int c,j,moreFreq=v[0],vezes,guarda=0;

    for(c=0;c<N;c++)
    {
    vezes=0;

        for(j=0;j<N;j++)
        {
            if (v[c]==v[j]) vezes++;
        }

        vezes--;

        if(vezes>guarda)
        {
            guarda=vezes;
            moreFreq=v[c];
        }
    }

return moreFreq;
}


void main()
{
    int v[20]={2,2,2,3,3,3,4,4,5,5,5,5,5,5,5,6,6,6,6,6};
    int x;
    x=maisFreq(v,20);
    printf("%d \n",x);
}




//32)

int maxCresc (int v[], int N)
{
int c,vezes=1,total=1;

    for(c=0;c<N;c++)
    {
        if((c+1)<N && v[c]<=v[c+1]) vezes++;

        if((c+1)<N && v[c]>v[c+1])
        {
            if(vezes>total) total=vezes;
            vezes=1;
        }

        if(c==N-1)
        {
            if(vezes>total) total=vezes;
        }
    }

return total;
}



void main()
{
    int v[7]={1,2,5,4,6,9,12};
    int x;
    x=maxCresc(v,7);
    printf("%d \n",x);
}




//33)

int temReps(int v[], int n, int v1){
    int i;
    for(i=0; i<n; i++){
        if (v[i] == v1) return 1;
    }
    return 0;
}

int elimRep( int v[], int n)
{
    int i,j;

    for(i=0; i<n; i++)
    {
        if(temReps(v,i,v[i]))
        {
            for(j=i; j<n;j++) v[j] = v[j+1];
            n--;
            i--;
        }
    }
return n;
}


void main()
{
    int v[4]={1,2,3,1};
    int x;
    x=elimRep(v,4);
    printf("%d \n",x);
}




//34)

int elimRepOrd (int v[], int n)
{
int c,j,i,nRet=n;
int count;

    for (c=0;c<nRet;c++)
    {
        for(count=0,i=c;v[i]==v[i+1] && i+1<nRet;count++,i++);
        if (count!=0)
        {
            for(j=c+1;j+count<n;j++)
                v[j]=v[j+count];
            nRet-=count;
        }

    }

for (c=0;c<nRet;c++)
{
    printf("%d \n",v[c]);
}
return nRet;
}



int elimRepOrd_h (int v[], int n)
{
int c,j,p=n;
int count=1;

    for (c=0;c<n;c++)
    {
        count=1;

        if (v[c]==v[c+1]) 
        {
            for (j=c;j<n;j++)
            {
                if (v[j]==v[j+1]) 
                {
                    count++;
                    j=n;
                }

            }
        v[c+1]=v[c+count];
        p-=count-1;
        c+=count;
        }
    }

for (c=0;c<p;c++)
{
    printf("%d \n",v[c]);
}
return p;
}


void main()
{
    int v[12]={1,1,1,2,3,4,4};
    int x;
    x=elimRepOrd(v,7);
    printf("numero de elementos %d \n",x);
}





//35)

int comunsOrd (int a[], int na, int b[], int nb)
{
    int i,j,com=0;
    i=j=0;
    while (i<na && j<nb){
        if(a[i]<b[j]) i++;
        else if (a[i]>b[j]) j++;
        else if (a[i] == b[j])
        {
            com++;
            i++;
            j++;
        }
    }
    return com;
}


void main()
{
    int a[50]={1,2,3,4,4};
    int b[50]={1,2,3,4,5};
    int x;
    x=comunsOrd(a,5,b,5);
    printf("numero de reps %d \n",x);
}




//36)

int comuns (int a[], int na, int b[], int nb)
{
int cA,cB,cont=0,vezes=0;

    for (cA=0;cA<na;cA++)
    {  
        for (cB=0;cB<nb;cB++)
        {
            if (a[cA]==b[cB])
            {
                cont++;
                break;
            }
        }
    }
return cont;
}

void main()
{
    int a[50]={1,5,3,2,2};
    int b[50]={1,2,4,4,1,2};
    int x;
    x=comuns(a,5,b,5);
    printf("numero de reps %d \n",x);
}


//37)

int minInd (int v[], int n)
{
int j,c,cont,final=v[0];

    for (c=0;c<n;c++)
    {
        cont=0;
        for(j=0;v[c]<=v[j] && j<n;j++) cont++;

        if (cont==n)
        {
            final=v[c];
            return c;
        }
    }
}



void main()
{
    int v[50]={4,2,3,8,4};
    int x;
    x=minInd(v,5);
    printf("menor %d \n",x);
}


//38)

void somasAc (int v[], int Ac [], int N)
{
int c;

    for(c=0;c<N;c++)
    {
        if(c==0) Ac[0]=v[0];
        else Ac[c]+= Ac[c-1]+v[c];
    }


    for (c=0;c<N;c++)   
    {
    printf("%d",Ac[c]);
    }
}


void main()
{
    int v[50]={1,2,3,4};
    int Ac[50];
    somasAc(v,Ac,4);
}



//39)

int triSup (int N, float m [N][N]) 
{
int c,l,final; 

    for(l=1;l<N;l++)
    {
        for(c=0;c<l;c++)
        {
            if (m[l][c] != 0 ) return 0;
        }
    }
return 1;
}


void main()
{
    int x;
    float m[3][3] = { {1,1,1},
                      {0,1,1},
                      {0,1,1} };                     

    x=triSup(3,m);
    printf("se sim 1, se nao 0 %d \n",x);
}




//40)

void transposta (int N, float m [N][N])
{
int line,col;
float copy[N][N];

for(line=0;line<N;line++)
{
    for(col=0;col<N;col++)
    {
    copy[line][col]=m[line][col];
    }
}

    for(line=0;line<N;line++)
    {
        for(col=0;col<N;col++)
        {
            m[line][col]=copy[col][line];
        }
    }
}



void main()
{
    float m[3][3] = { {1,1,1},
                      {0,1,1},
                      {0,1,1} };                     

    transposta(3,m);
}



//41)

void addTo (int N, int M, int a[N][M], int b[N][M])
{
int line,col;

    for(line=0;line<N;line++)
    {
        for(col=0;col<M;col++)
        {
            a[line][col]=a[line][col]+b[line][col];
        }
    }
}




//42)

int unionSet (int N, int v1[N], int v2[N], int r[N])
{
int c;

    for(c=0;c<N;c++)
    {
        if (v1[c]==1 || v2[c]==1) r[c]=1;
        else r[c]=0;
    }
return 0;
}


//43)

int intersectSet (int N, int v1[N], int v2[N],int r[N])
{
int c;

    for(c=0;c<N;c++)
    {
        if (v1[c]==1 && v2[c]==1) r[c]=1;
        else r[c]=0;
    }
return 0;
}




//44)

int intersectMSet (int N, int v1[N], int v2[N], int r[N]){
    int i;
    for(i=0; i<N; i++){
        if(v1[i] > v2[i]) r[i] = v2[i];
        else r[i]=v1[i];
    }
    return 0;
}




int unionMSet(int N, int v1[N], int v2[N], int r[N]){
    int i;
    for(i=0; i<N ;i++){
        if(v1[i]>v2[i]) r[i] = v2[i];
        else r[i]=v1[i];
    }
    return 0;
}




//46)

int cardinalMSet (int N, int v[N])
{
int c,final=0;

    for(c=0;c<N;c++)
    {
        final= v[c]+final;
    }

return final;
}



//47)

typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;
typedef struct posicao 
{
int x, y;
}
Posicao;


Posicao posFinal (Posicao inicial, Movimento mov[], int N)
{
int c; 

    for(c=0;c<N;c++)
    {
        if(mov[c]== Norte) inicial.y ++;
        if(mov[c]== Sul) inicial.y --;
        if(mov[c]== Este) inicial.x ++;
        if(mov[c]== Oeste ) inicial.y --;
    }
return Posicao;
}




//48)

typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;
typedef struct posicao {
int x, y;
} Posicao;


int caminho (Posicao inicial, Posicao final, Movimento mov[], int N)
{
int i;

    for(i=0;i<N;i++)
    {
        if(inicial.y<final.y)
        { 
        mov[i]=Sul;
        inicial.y++;
        }

        if(inicial.y>final.y) 
        {
        mov[i]=Norte;
        inicial.y--;
        }

        if(inicial.x<final.x) 
        {
        mov[i]=Este;
        inicial.x++;
        }

        if(inicial.x>final.x) 
        {
        mov[i]=Oeste;
        inicial.x--;
        }
    }
if (inicial.x==final.x && inicial.y==final.y) return 0;
else return -1;
}




//49)

int dist(Posicao pos){
    int dist;
    dist = abs(pos.x) + abs(pos.y);
    return dist;
}

int maiscentral (Posicao pos[], int N){
    int i, mC=0, min= dist(pos[0]);
    for(i=0; i<N; i++){
        if ( dist(pos[i]) < min){
            min = dist(pos[i]);
            mC=i;
        }
    }
    return mC;
}



//50)

typedef struct posicao {
int x, y;
} Posicao;


int vizinhos (Posicao p, Posicao pos[], int N)
{
int c,total=0;

    for(c=0;c<N;c++)
    {
        if((p.x==pos[c].x+1 && p.y==pos[c].y) || (p.x==pos[c].x-1 && p.y==pos[c].y) || (p.y==pos[c].y+1 && p.x==pos[c].x) || (p.y==pos[c].y-1 && p.x==pos[c].x)) total++;
    }
return total;
}




typedef struct nodo {
    int valor;
    struct nodo * prox;
} *LInt;

int calcula(LInt l);






void main()
{
    float m[3][3] = { {1,1,1},
                      {0,1,1},
                      {0,1,1} };                     

    transposta(3,m);
}

*/
































