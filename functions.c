//header files
#include <stdio.h>


int su_m (int x,int y){
	 int summ;
	 summ=x+y;
	 return summ;
}

int main(){
	int result;

	result=su_m(1,3);
	printf("addition is  %d", result);
	return(0);
}

