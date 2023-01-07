#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

//51)

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;



int length(LInt lista)
{
    int comp = 0;
    while (lista)
    {
        lista = lista->prox;
        comp++;
    }
    return comp;
}


//52)
void freeL (LInt lista)
{
    while(lista)
    {
        free(lista);
        lista=lista->prox;
    }
}

//53)
void imprimeL (LInt lista)
{
    while(lista)
    {
        printf("%d \n",lista->valor);
        lista=lista->prox;
    }
}


//54)

LInt reverseL (LInt l)
{
LInt aux,anterior=NULL;

    while(l)
    {
        aux=l->prox;
        l->prox=anterior;
        anterior=l;
        l=aux;
    }
return anterior;
}


//55)
void insertOrd (LInt *lista, int x)
{
LInt new;

    new=malloc(sizeof(struct lligada));
    new->valor=x;
    LInt aux = (*lista);

    if(aux==NULL)
    {
        new->prox=NULL;
        (*lista)=new;
        return;
    }

    if(aux->valor>x)
    {
        new->prox=aux;
        (*lista)=new;
        return; 
    }

    while(aux->prox && aux->prox->valor<=x)
    {
        aux=aux->prox;
    }
    new->prox=aux->prox;
    aux->prox=new;
}



//56)

int removeOneOrd (LInt *lista, int x)
{
LInt aux = *lista;
LInt antes=NULL;

    if(aux==NULL)
    {
        return 1;
    }

    if(aux->valor==x)
    {
        free(aux);
        *lista=(*lista)->prox;
        return 0;
    }

    while(aux)
    {
        if(aux->valor==x)
        {
            antes->prox=aux->prox;
            free(aux);
            return 0;
        }
    antes=aux;
    aux=aux->prox;
    }
return 1;
}


//57)

void merge (LInt *r, LInt l1, LInt l2)
{
LInt aux,aux2;
int cont;

    if(l1==NULL )
    {
        *r=l2;
        return;
    }

    if(l2==NULL)
    {
        *r=l1;
        return;
    }

        if (l1->valor<l2->valor)
        {
           aux2=l1->prox;
           l1->prox=l2;
           l2=l1;
           l1=aux2;
        }
        else
        {
        
            aux=l2;
            while(aux->prox && aux->prox->valor < l1->valor) aux=aux->prox;
            
            aux2=l1->prox;
            l1->prox=aux->prox;
            aux->prox=l1;
            l1=aux2;
        }
        merge(r,l1,l2);

}



//58)

 
void splitQS (LInt l, int x, LInt *mx, LInt *Mx)
{
        if(l==NULL) return;
        if(l->valor<x)
        {  
            *mx=l;
            *Mx=NULL;
            splitQS(l->prox,x,&((*mx)->prox),Mx);
        }
        else
        { 
            *mx=NULL;
            *Mx=l;
            splitQS(l->prox,x,mx,&((*Mx)->prox));
        }
}



//59)

LInt parteAmeio (LInt *l){
int x;
LInt pointer=*l;
LInt primeira=*l;

x=length(*l)/2;


    if (x==0)
    {
        return NULL;
    }

    for (;x>1;x--)
    {
        *l=(*l)->prox;
        primeira=primeira->prox;
    }
    *l=(*l)->prox;
    
    primeira->prox=NULL;
    primeira=pointer;



return primeira;
}



//60)

int removeAll (LInt *lista, int x)
{
LInt aux;
aux=*lista;
LInt ant=NULL;
int cont=0;

    while (aux)
    {
        if(ant==NULL && aux->valor==x)
        {
            *lista=(*lista)->prox;
            cont++;
        }

        if(ant!=NULL && aux->valor==x)
        {
            ant->prox=aux->prox;
            cont++;
        }
    if(aux->valor!=x) ant=aux;
    aux=aux->prox;
    }
return cont;
}



//61)

int removeDups (LInt *lista)
{
LInt aux=*lista;
LInt procura=(*lista)->prox;
LInt remove;
LInt ant;
int vezes=0;
int avancou;

    while(aux)
    {
        ant=aux;
        procura=aux->prox;

        while(procura)
        {
            avancou=0;
            if(procura->valor==aux->valor)
            {
                remove=procura;
                ant->prox=procura->prox;
                procura=procura->prox;
                free(remove);
                avancou=1;
            }

            if(avancou==0)
            {
                ant=procura;
                procura=procura->prox;
            }
        }
    aux=aux->prox;
    }
}


//62)

int removeMaiorL (LInt *lista)
{
LInt aux=*lista;
LInt ant;
LInt remover;
int max=0;

    while(aux)
    {
        if(aux->valor>max) max=aux->valor;
    aux=aux->prox;
    }
    aux=*lista;

    if( (*lista)->valor==max ) 
    {
        *lista=(*lista)->prox;
        return(max);
    }

    while(aux)
    {
        if(aux->valor==max)
        {
            remover=aux;
            ant->prox=aux->prox;
            free(remover);
            return (max);
        }
    ant=aux;
    aux=aux->prox;
    }
}

int removeMaiorL2 (LInt *lista)
{
LInt aux=*lista;
LInt ant,antMax;
LInt remover;
int max=0;

    while(aux)
    {
        if(aux->valor>max)
        {
            remover=aux;
            antMax=ant;
            max=aux->valor;
        }
         
        ant=aux;
        aux=aux->prox;

    }
    antMax->prox=remover->prox;
    free(remover);
    return (max);
}



//63)

void init (LInt *lista)
{
LInt aux = *lista;
LInt ant=NULL;


    while(aux && aux->prox) 
    {
    ant=aux;
    aux=aux->prox;
    }

    ant->prox=NULL;
    free(aux);
    if(aux==*lista) *lista=NULL;
}


//64)

void appendL (LInt *lista, int x)
{
LInt aux=*lista;
LInt new=malloc (sizeof(struct lligada));
new->valor=x;
new->prox=NULL;

    if(aux==NULL) 
    {
        *lista = new;
        return;
    }

    while(aux && aux->prox)
    {
        aux=aux->prox;
    }

    aux->prox=new;
}



//65)

void concatL (LInt *a, LInt b)
{
LInt aux=*a;

    if(*a==NULL)
    {
    *a=b;
    return;
    }

    if(b==NULL) return;

    while(aux && aux->prox)
    {
        aux=aux->prox;
    }
    aux->prox=b;
}



//66)

LInt cloneL (LInt l)
{
LInt aux=l;
LInt ant;
LInt clone;
LInt inicioClone=NULL;

    if(l==NULL) return NULL;

    ant=NULL;
    while(aux)
    {
        clone=malloc(sizeof(struct lligada));
        if(inicioClone==NULL) inicioClone=clone;
        clone->valor=aux->valor;
        clone->prox=NULL;
        if(ant) ant->prox=clone;

    aux=aux->prox;
    ant=aux;
    }

return inicioClone;
}




//67)

void imprimeL (LInt lista)
{
    while(lista)
    {
        printf("%d \n",lista->valor);
        lista=lista->prox;
    }
}

LInt reverseL (LInt l)
{
LInt aux,anterior=NULL;

    while(l)
    {
        aux=l->prox;
        l->prox=anterior;
        anterior=l;
        l=aux;
    }
return anterior;
}

LInt cloneL (LInt l)
{
LInt aux=l;
LInt ant;
LInt clone;
LInt inicioClone=NULL;

    if(l==NULL) return NULL;

    ant=NULL;
    while(aux)
    {   
        clone=malloc(sizeof(struct lligada));
        if(inicioClone==NULL) inicioClone=clone;
        clone->valor=aux->valor;
        clone->prox=NULL;
        if (ant)
            ant->prox=clone;
        

    ant=clone;
    aux=aux->prox;
    }

return inicioClone;
}


LInt cloneRev (LInt lista)
{
    printf("---------------\n");
    LInt copia = cloneL (lista);
    imprimeL(copia);
    LInt final = reverseL (copia);

return final;
}


//68)

int maximo (LInt l)
{
    int max=0;

    while(l)
    {
        if(l->valor > max) max=l->valor;
    l=l->prox;
    }
return max;
}


//69)

int take (int n, LInt *l)
{
LInt aux=*l;
LInt apartir;
int i=0;

    while (aux && n>=0)
    {
        aux=aux->prox;
        n--;
        i++;
    }
    if (n>=0) return i;

    apartir=aux->prox;
    aux->prox=NULL;

    aux=apartir;

    while(aux)
    {
        apartir=aux->prox;
        free(aux);
        aux=apartir;
    }
}


//70)

int length(LInt lista)
{
    int comp = 0;
    while (lista)
    {
        lista = lista->prox;
        comp++;
    }
    return comp;
}


int drop (int n, LInt *l){
LInt nextElim;
int kills=0;

    if(length (*l) <= n) n=length(*l);

    while(*l && n>0)
    {
        nextElim=(*l)->prox;
        free(*l);
        *l=nextElim;
        n--;
        kills++;
    }
    
return kills;
}


//71)

LInt Nforward (LInt l, int N)
{
    while(N>0)
    {
        l=l->prox;
        N--;
    }
return l;
}


//72)

int listToArray (LInt l, int v[], int N)
{
int c=0,elementos=0;

    if(l==NULL) return 0;

    while(l && c<N)
    {
        v[c]=l->valor;
        l=l->prox;
        c++;
        elementos++;
    }
return elementos;
}


//73)

LInt arrayToList (int v[], int N)
{
LInt new=NULL;
LInt ant=NULL;
int c=0,total=N;
LInt comecou;

if(N==0) return new;

    while(N>0)
    {
        new=malloc(sizeof(struct lligada));
        new->valor=v[c];
        if(N!=total)
        {
        ant->prox=new;
        }
        ant=new;

        new->prox=NULL;
        if(N==total) comecou=new;
        c++;
        N--;
        new=new->prox;
    }

return comecou;
}


//74)

LInt somasAcL (LInt l)
{
LInt aux=l;
LInt somas=NULL;
LInt ant=NULL;
LInt begin;
int somatorio=0,protect=0;

    if(l==NULL) return somas;

    while(aux)
    {
        somas=malloc(sizeof(struct lligada));

        if(protect==0) begin=somas;

        somatorio+=aux->valor;

        somas->valor=somatorio;

        somas->prox=NULL;

        if(protect!=0) ant->prox=somas;

        ant=somas;
        protect++;
        aux=aux->prox;
    }
return begin;
}


//75)

void remreps(LInt l)
{
if(l==NULL) return;
int x=l->valor;
LInt ant=l, atual=l->prox, aux;

	while(atual)
    {
		if(atual->valor==x)
        {
			aux=atual;
			atual=atual->prox;
			free(aux);
			ant->prox=NULL;
		}
        else
        {
			x=atual->valor;
			ant->prox=atual;
			ant=ant->prox;
			atual=atual->prox;
		}
	}
	return;
}


//76)

LInt rotateL (LInt l)
{
    imprimeL(l);
    if(l==NULL) return l;
    if(l->prox==NULL) return l;
   

LInt aux;
LInt guarda=l;

    l=l->prox;
    aux=l;

    while(aux->prox)
    {
        aux=aux->prox;
    }
    
    aux->prox=guarda;
guarda->prox=NULL;
    
return l;

}

//77)

LInt parte(LInt l){

	if (l == NULL) return l;

	LInt atual = l->prox, ant = l, new = newLInt (0, NULL), auxn = new;
	int i;

	for (i = 2; atual != NULL; i++) {
		if (i % 2 == 0) {
			auxn->prox = atual;
			auxn = auxn->prox;
			ant->prox = atual->prox;
			atual = atual->prox;
			auxn->prox = NULL;
		}
		else {
			ant = ant->prox;
			atual = atual->prox;
		}
	}

	auxn = new;
	new = new->prox;
	free (auxn);

return new;
}



//78)

typedef struct nodo {
int valor;
struct nodo *esq, *dir;
} *ABin;



int altura (ABin tree)
{
    int alt_dir=0;
    int alt_esq=0;

    if(tree==NULL) return 0;

    alt_dir=altura(tree->dir);
    alt_esq=altura(tree->esq);

    if(alt_dir>=alt_esq) return (alt_dir +1);
    else return (alt_esq +1);
}


//79)

ABin copiadora (int x, ABin e, ABin d)
{
    ABin folha;

    folha=malloc(sizeof(struct nodo));

    folha->valor=x;
    folha->esq=e;
    folha->dir=d;
}


ABin cloneAB (ABin tree)
{
ABin copia; 

if(tree==NULL) return NULL;

copia=copiadora(tree->valor,cloneAB(tree->esq),cloneAB(tree->dir));

return copia;
}



//80)

ABin aux (ABin tree)
{
    ABin esquerda=tree->esq;

    if(tree==NULL) return tree;
    tree->esq = aux (tree->dir);
    tree->dir = aux (esquerda);

return tree;
}


void mirror (ABin *tree)
{
    if(tree==NULL) return;
    else (*tree)=aux(*tree);

}


//81)

void auxInorder (ABin tree, LInt *lista)
{
    LInt new;

    if(tree)
    {
        auxInorder(tree->dir,lista);
        new=malloc(sizeof(struct lligada));
        new->valor=tree->valor;

        new->prox=*lista;
        *lista=new;

        auxInorder(tree->esq,lista);
    }
}


void inorder (ABin tree, LInt *lista)
{
    *lista=NULL;
    auxInorder(tree,lista);
} 



//82)

void aux_preorder (ABin tree, LInt *l)
{
LInt new;

    if(tree)
    {
        aux_preorder(tree->dir,l);
        aux_preorder(tree->esq,l);

        new=malloc(sizeof(struct lligada));
        new->valor=tree->valor;
        new->prox=*l;
        *l=new;

    }
}




void preorder (ABin tree, LInt *l)
{
    *l=NULL;
    aux_preorder(tree,l);
}



//83)

void aux_pos (ABin tree, LInt *l)
{
    LInt new;

    if(tree)
    {
        new=malloc(sizeof(struct lligada));
        new->valor=tree->valor;
        new->prox=*l;
        *l=new;

        aux_pos(tree->dir,l);
        aux_pos(tree->esq,l);
    }
}





void posorder (ABin tree, LInt *l)
{
    *l=NULL;
    aux_pos(tree,l);
}



//84)

int depth (ABin a, int x)
{
int esq,dir;
int profundidade=1;

    if(a==NULL) profundidade=0;
    else if(a->valor==x) profundidade=1;
    else
    {
        depth(a->dir,x);
        depth(a->esq,x);
        if(dir==1 && esq!=1) profundidade=dir++;
        if(dir!=1 && esq==1) profundidade=esq++;
        else
        {
            if(esq<dir) profundidade=esq++;
            else profundidade=dir++;
        }
    }

return profundidade;
}



//85)

int freeAB (ABin a)
{
int nr;

if(a==NULL) nr=0;
else
    {
        nr=1+freeAB(a->esq)+freeAB(a->dir);
        free(a);
    }

return nr;
}



//86)


int pruneAB(ABin *a, int l)
{
    if(*a==NULL) return 0;

    int x=0;

    x+=pruneAB(&((*a)->dir),l-1);
    x+=pruneAB(&((*a)->esq),l-1);

    if(l<1)
    {
        free(*a);
        x++;
        *a=NULL;
    }
    else if(l==1)
    {
        (*a)->dir=NULL;
        (*a)->esq=NULL;
    }
return x;
}


//87)

int iguaisAB(ABin a, ABin b)
{
int i;
	if(a== NULL && b== NULL) i=1;
	else if(a==NULL || b == NULL) i=0;
	else
    {
	 	if(a->valor==b->valor)
        {
	 		if(iguaisAB(a->esq,b->esq)==0 || iguaisAB(a->dir,b->dir)==0) i=0;
	 		else i=1;
	 	}
	 	else i=0;
	 }
return i;
}


//88)

LInt nivelL (ABin a, int n)
{
LInt lista;
LInt comeco;

if(a==NULL) lista==NULL;

    if(n>1)
    {
        lista=nivelL(a->esq,n-1);
        lista->prox=nivelL(a->dir,n-1);
        
    }
    if(n=1)
    {
        if(lista==NULL) comeco=lista;
        lista=malloc(sizeof(struct lligada));
        lista->valor=a->valor;
        lista->prox=NULL;
        n--;
    }

return comeco;
}



//caguei nas arvores binarias;


//44)

int addOrd(ABin *a, int x)
{
int flag=0;

	while((*a)!=NULL && flag==0)
    {
		if((*a)->valor==x) flag=1;
		else if((*a)->valor > x) a=&((*a)->dir);
		else a = &((*a)->esq);
	}
	if ((*a)==NULL && flag==0)
    {
		(*a)=malloc(sizeof(ABin));
		(*a)->valor=x;
		(*a)->esq=NULL;
		(*a)->dir=NULL;
	}
	return flag;
}

//45)

int lookupAB(ABin a, int x)
{
int flag=0;

	while(a!= NULL && flag==0)
    {
		if(a->valor==x) flag=1;
		else if(a->valor>x) a=a->esq;
		else a=a->dir;
	}

return flag;
}



//46)


//chegai fogo as arvores!!!






































