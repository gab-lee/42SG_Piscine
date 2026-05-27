#include <unistd.h>

void ft_is_negative(int n){
	//display N/P if n is negative/positive
	char d = 'N';

	if(n < 0){
	write(1,&d,1);
	} 

	else{
	d = 'P';
	write(1,&d,1);
	}
}
