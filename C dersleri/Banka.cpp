#include<stdio.h>
int main (){
	
	
	int menu;
	int bakiye = 500;
	int miktar;
	
	printf("Hosgeldiniz yapmak istediginiz islemi seciniz");
	printf("\n Menu: / Para cekme =1  / Para yatir = 2 / cikis = 3 \n");
	scanf("%d",&menu);
	switch(menu){
		
		
		
		       case 1:
		      		printf("hesabinizdaki kalan para: %d\n",bakiye);
			    printf("lutfen cekmek istediginiz tutari giriniz\n");
				scanf("%d",&miktar);
				bakiye= bakiye-miktar;
				printf("hesabinizdaki kalan para: %d \n",bakiye);
				break;
		    	
		    	
		    	
		    	if(bakiye < miktar){
				
				printf("yetersiz bakiye pis fakir");
		    	}
		    	else {
					
				printf("hesabinizdaki kalan para: %d \n",bakiye);
				bakiye=bakiye-miktar;
		    	}
				break;
		    	
			
			
			
			
			    case 2:
				printf("hesabinizdaki kalan para: %d\n",bakiye);
			    printf("lutfen yatirmak  istediginiz tutari giriniz\n");
				scanf("%d",&miktar);
				bakiye= bakiye+miktar;
				printf("hesabinizdaki kalan para: %d \n",bakiye);
				break;
				
				
				
				case 3:
				printf("hesabinizdaki kalan para: %d\n",bakiye);
			    printf("hayirli gunler\n");
				break;
				
				default:
				printf("lütfen mantikli isler yapiniz \n");
				break;
					
		
		
		
		
		
		
		
	}

	
	
	
	
	
	
	return 0;
}
