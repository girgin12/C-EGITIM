#include<stdio.h>
int main(){
	
	int x=5;
	int y=-2;
	printf("%d\n",-x);// \d de�eri int �evirir.
	printf("%d\n",-x*y);
	/*yukar�daki �rnekte x int y ,ise floatt�r. bu durumda format belirleyicinin float� a��klayabilecek durumda olmas� gerekmektedir .��nk� float daha karma��k yap�dad�r ve %d bu karma�kl��� alg�layamaz.
	*/
	
	printf("%d\n",x%y);
	printf("%d\n",x+y*(y-x)/x);
	
}
