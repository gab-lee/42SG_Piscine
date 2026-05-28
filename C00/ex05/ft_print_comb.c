#include <unistd.h>

void ft_print_comb(void){
	//display all n from 000 - 999 such that no digit repeats
	int n = 0;
while (n<=999){ 
	char hundredsP = (n / 100) + '0';
	char tensP = ((n / 10)%10) + '0';
	char onesP = (n % 10) +'0';
	
	if (hundredsP == tensP || hundredsP == onesP || tensP == onesP){
	n++;
	}

	else{	
	write(1,&hundredsP,1);
	write(1,&tensP,1);
	write(1,&onesP,1);
	write(1,",",1);
	n++;
	}
}
}	
