#include <stdio.h>

int main () {
	
	
	int menu;
	int bakiye = 500;
	int miktar;
	
	printf("Hosgeldiniz lutfen yapmak istediginiz islemi seciniz :\n ");
	printf("1 PARA CEKME / 2 PARA YATIRMA / 3 CIKIS \n");
	scanf("%d",&menu);
	
	switch(menu){
		
		
		case 1: printf("hesabinizdaki  para:  %d",bakiye);
		        printf("\nlütfen cekmek istediginiz tutari giriniz \n");
		        scanf("%d",&miktar);
		        
		        bakiye = bakiye - miktar;
		        
		        printf("hesabinizda kalan para: \n %d",bakiye);
		        
		        break;
		        
		        if (bakiye < miktar) {
		        	
		        	printf("yetersiz bakiye \n");	
				}
				
		        else {
		        	printf("hesabinizda kalan para: %d  \n",bakiye);
		        	 bakiye = bakiye - miktar;
		        
				}
		        
		        	 break;
		        
		
		case 2: printf("hesabinizdaki  para:  %d",bakiye);
		        printf("\n lütfen yatirmak istediginiz tutarý giriniz \n");
		        scanf("%d",&miktar);
		        
		        bakiye = bakiye + miktar;
		        
		        printf("hesabinizda kalan para: \n %d",bakiye);
		        
		        break;
				
				
				
				case 3: 	printf("hayirli gunler dileriz \n");
				           
		        
		        break;	
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
