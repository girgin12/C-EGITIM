#include<stdio.h>
int main(){
	
	int x=5;
	int y=-2;
	printf("%d\n",-x);// \d değeri int çevirir.
	printf("%d\n",-x*y);
	/*yukarıdaki örnekte x int y ,ise floattır. bu durumda format belirleyicinin floatı açıklayabilecek durumda olması gerekmektedir .çünkü float daha karmaşık yapıdadır ve %d bu karmaşklığı algılayamaz.
	*/
	
	printf("%d\n",x%y);
	printf("%d\n",x+y*(y-x)/x);
	
}
