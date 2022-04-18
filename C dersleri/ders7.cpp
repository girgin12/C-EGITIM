#include<stdio.h>
int main(){
	int x=5;
	int y=3;
    int i ;
	// ilk deðer olarak x=5 e y=3 e eþitlendi.
	x=y;
	//þu anda eþitliðin saðýnda bulunan y'nin deðeri olan 3 x e de atandý.
	y= x+3;
	//þimdi de x=3 deðeri için 3+3=6 deðeri eþitliðin solundaki y'ye atandý.
	printf("%d\n",x);
	i=x+y;
	// son x ve y deðerleri toplanýp i ye atanýyor.
	i=i-2;
	//i' den 2 çýkartýlýp yine i'ye atanýyor.
	i=i+1;
	//i'nin deðerini 1 artýrýr ve yine i ye eþitle.
	i-=1;
	printf("%d\n",y);
	//i=i+1 ile ayný
	
	
	i= x+y;
	i=i-2;
printf("%d",i);
	return 0;
	}

