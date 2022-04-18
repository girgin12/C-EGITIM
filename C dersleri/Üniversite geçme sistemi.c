#include <stdio.h>

int main() {
	
	int devamsizlik;
	int vize;
	int final;	 
	int vizeoran;
	float ortalama;
	
     
	
	printf("devamsizlik durumunu giriniz:");
	 scanf("%d",&devamsizlik);
	 
	 
	 
		if(devamsizlik >= 5) {
		
		printf("kaldiniz\n uzgunuz sinif tekrari,notunuz:dz",devamsizlik);	+
		
		goto son;
	}
	
	printf("\n vize notunu giriniz:");
	scanf("%d",&vize);
		printf("final notunu giriniz:");
	scanf("%d",&final);
	
		if(final  < 50) {
		
		printf("kaldiniz\n uzgunuz sinif tekrari,notunuz:FF",final);	
		goto son;
	}
	 vizenot:
		printf("vize notunuzun ortalamaya etkisi  ornek = 40:");
	scanf("%d",&vizeoran);
	
	if(vizeoran > 50 ){
			
		printf("vize oraný ortalamaya etkisi %50 nin üzerinde olamaz");		
		goto vizenot;
	}
	
	
	
	
	ortalama = ((vize * vizeoran)/100) + (final*(100-vizeoran)/100);
	
	 if (ortalama >= 90  ){
			
		printf("tebrikler AA ile geçtiniz %f",ortalama);
	}
	
		else if (ortalama >= 80 && ortalama < 89){
		
		
		printf("tebrikler BA ile gectiniz",ortalama);
	}
	
		else if (ortalama >= 70 &&  ortalama < 79){
		
		
		printf("tebrikler BB ile gectiniz",ortalama);
	}
		else if (ortalama >= 60 && ortalama < 69){
		
		
		printf(" CB ile gectiniz",ortalama);
	}
		else if (ortalama >= 50 &&  ortalama < 59){
		
		
		printf(" CC ile gectiniz",ortalama);
		
	}
		else if (ortalama >= 0 && ortalama < 49){
		
		
		printf("uzgunum  FF ile Sinif tekrari",ortalama);
	}
	
			son:
	return 0;
	
	
	
}
