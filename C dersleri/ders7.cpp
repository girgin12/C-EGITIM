#include<stdio.h>
int main(){
	int x=5;
	int y=3;
    int i ;
	// ilk de�er olarak x=5 e y=3 e e�itlendi.
	x=y;
	//�u anda e�itli�in sa��nda bulunan y'nin de�eri olan 3 x e de atand�.
	y= x+3;
	//�imdi de x=3 de�eri i�in 3+3=6 de�eri e�itli�in solundaki y'ye atand�.
	printf("%d\n",x);
	i=x+y;
	// son x ve y de�erleri toplan�p i ye atan�yor.
	i=i-2;
	//i' den 2 ��kart�l�p yine i'ye atan�yor.
	i=i+1;
	//i'nin de�erini 1 art�r�r ve yine i ye e�itle.
	i-=1;
	printf("%d\n",y);
	//i=i+1 ile ayn�
	
	
	i= x+y;
	i=i-2;
printf("%d",i);
	return 0;
	}

