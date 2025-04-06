#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>

using namespace std;

/* 1. Fie declaraţia:  int var,*pointer;. Verificaţi dacă expresia: (&pointer) are aceeaşi semnificaţie cu pointer   
şi  &(var) are aceeaşi semnificaţie cu var. Cum explicaţi aceasta ?  */

/*
int main() {
	int var = 10;
	int* pointer = &var;

	cout << &pointer << endl;
	cout << pointer << endl;

	cout << &var << endl;
	cout << var << endl;

	return 0;
}
*/

/* (&pointer) nu are aceeaşi semnificaţie cu pointer.
&(var) nu are aceeaşi semnificaţie cu var, deoarece var stocheaza valoarea numerica, iar &(var) stocheaza adresa de memorie. */


/* 2. Fie declaraţia:  double d,*pd;. Să se decidă dacă variabilele d şi pd au aceeaşi dimensiune. */

/*
int main() {
	double d = 5.6;
	double* pd = { nullptr };

	cout << sizeof(d) << endl;
	cout << sizeof(pd) << endl;

	return 0;
}
*/

/* Variabilele d si pd au aceeasi dimensiune. */


/* 3. Considerăm declaraţiile :
int n, const int a=10 ,
    *pci=&a;
Să se determine care dintre instrucţiuni sunt corecte :
n=a;  a=2;
n=*pci;  *pci=1;
pci++;
*/

/*
int main() {
	int n;
	const int a = 10;
    int* pci = &a;

	pci++;

	return 0;
}
*/

/*?*/


/* 4. Fie declaraţiile :
int n=10;  
const *cpi=&n;
Să se determine corectitudinea instrucţiunilor următoare :
*cpi=1;  cpi=&n;
cpi++;  n=cpi;
*/

/*
int main() {
	int n = 10;
	int const* cpi = &n;

	*cpi=1;					//eroare: cpi este constanta, valoarea nu poate fi modificata
	cpi = &n;
	cpi++;
	n=cpi;					//eroare: tipuri de valori diferite

	return 0;
}
*/


/* 5. Precizaţi ce tipăreşte programul următor :
#include<stdio.h>
long a[10]=
{10,11,12,13,14,15,16,17,
                     18,19};
void main()
{  long *pi;
   for(pi=&a[0];pi<&a[10];
                      pi++)
       printf(“\n%p:%ld”,
                   pi, *pi);
}
*/

/*
long a[10] = {10,11,12,13,14,15,16,17,18,19};

void main()
{  long *pi;
   for (pi=&a[0]; pi<&a[10]; pi++)
	   printf(“\n%p:%ld”, pi, *pi);
}
*/

/*?*/


/* 6. Precizaţi ce face programul următor:
#include<stdio.h>
int a[10]=
{10,11,12,13,14,15,16,17,
                     18,19};
void main()
{  int *pi;
   for(pi=a;pi<a+10;)
      printf(“\n%p:%d”,pi,
                   ++*pi++);
}
*/

/*
int a[10] = { 10,11,12,13,14,15,16,17,18,19 };

void main()
{
	int* pi;
	for (pi = a; pi < a + 10;)
		printf(“\n % p: % d”, pi,++ * pi++);
}
*/

/*?*/


/* 7. Fie declaraţia :  int a[10][10];
Care din expresiile următoare sunt echivalente?
a) *a[i] 	b) **(a+i)	
c) *(*a+i)  d) a[0][i]	
e) a[i][0]
*/

/*?*/


/* 8. Este corectă secvenţa char*s;gets(s); ? */

/*
int main() {
	char* s;
	gets(s);		//eroare: gets este nedefinit

	return 0;
}
*/


/* 9. Explicaţi care din instrucţiuni sunt greşite în secvenţa următoare :
char *s=”Test C”;
*s=”Ansi C”;
s=”Ansi C”;
*/

/*
int main() {
	char* s = ”Test C”;
	*s = ”Ansi C”;
	s = ”Ansi C”;

	return 0;
}
*/

/* A treia linie (s = ”Ansi C”;) este gresita, deoarece "Ansi C" este o valoare de tip string ce nu poate fi atribuita unei 
variabile care stocheaza o adresa de memorie. */


/* 10. Care dintre următoarele variante reprezintă o declaraţie corectă a unei variabile x de tipul “adresă a unei variabile întregi” ?
a) int x*;	b) int *x;	
c) int x;   d) int &x;	
e) int x&;
*/

/* Varianta corecta este d) int &x; */


/* 11. Se consideră declaraţia de variabile:
int m, *x,*y;
Care dintre următoarele atribuiri sunt corecte ?
a) x=m;	b) *x=*m;	
c) *y=*x;   d) y=&m;	
e) y=x;
*/

/*
int main() {
	int m, * x, * y;

	x = m;			//eroare: variabila m de tip int nu poate fi atribuita pointerului x
	*x = *m;		//eroare: variabila m nu este pointer
	*y = *x;
	y = &m;
	y = x;

	return 0;
}
*/

/* Atribuirile corecte sunt c) *y=*x;, d) y=&m; si e) y=x;. */


/* 12. Fie declaraţiile de variabile:
int a=2,b;  int *x,*y;
Precizaţi ce valori se vor afişa, în ordine, în urma execuţiei secvenţei de program de mai jos:
x=&a; a=5; printf(“%d”, *x);
b=a-2; y=&b; b+=(*y)+4;
printf(“%d”, b);
*y=*x; printf(“%d”, *y); 
if(x==y) putchar(‘1’); 
else putchar(‘0’);
a) 2,10,2,1	 b) 2,10,2,0
c) 5,7,5,0   d) 5,10,5,0
e) 5,10,5,1
*/

/*
int main() {
	x = &a; a = 5; printf(“ % d”, *x);
	b = a - 2; y = &b; b += (*y) + 4;
	printf(“ % d”, b);
	*y = *x; printf(“ % d”, *y);
	if (x == y) putchar(‘1’);
	else putchar(‘0’);

	return 0;
}
*/

/* d) 5,10,5,0 */


/* 13. Se consideră următoarea secvenţă de program:
int *q,**p,a=5,b=3;
*p=&a;              // (1)
q=*p;               // (2)
b+=*(&(**p));       // (3)
printf(“%d %d”,*q,b);  
Ce puteţi spune despre atribuirile (1), (2) şi (3)?
a) nici una dintre atribuiri nu este corectă
b) numai atribuirea (1) este corectă
c) numai atribuirile (1) şi (2) sunt corecte
d) toate sunt corecte şi secvenţa afişează de două ori numărul 5
e) toate atribuirile sunt corecte şi secvenţa afi-şează numerele 5 şi 8
*/

/*
int main() {
	int* q, ** p, a = 5, b = 3;
	*p = &a;              // (1)
	q = *p;               // (2)
	b += *(&(**p));       // (3)
	cout << *q << b;

	return 0;
}
*/

/* a) nici una dintre atribuiri nu este corectă */


/* 14. Fie atribuirea : *y=&(*(&z)); Cum trebuie scrise corect declaraţiile de variabile, astfel încât atribuirea să fie corectă ?
a) int *y,z;  b) int y,*z;
c) int y,**z  d) int **y,z;
e) int **y,*z;
*/

/* d) int **y,z; */


/* 15. Care dintre instrucţiunile (I),(II),(III),(IV) din programul următor sunt eronate? Precizaţi valorile obţinute în cazul 
instrucţiunilor corecte.
#include<stdio.h>
void main()
{
	const int x=3; 
      int u,v;
	x=4;                 // (I)
	*(int*)&x=8;         // (II)
	u=x;                 // (III)
	v=*(int*)&x;         // (IV)
}
a)I	b)II	c)III d)IV
e) nici una    
*/

/*
void main()
{
	const int x = 3;
	int u, v;
	//x = 4;                 // (I)
	*(int*)&x = 8;         // (II)
	u = x;                 // (III)
	v = *(int*)&x;         // (IV)
}
*/

/* a)I 
Valorile obtinute sunt:
x = 3;
u = 3;
v = 8; */