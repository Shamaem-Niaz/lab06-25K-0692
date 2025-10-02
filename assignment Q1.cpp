#include <stdio.h>
int main(){
	int n;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	while (n>0){
		printf("%d\n" , n);
		n=n-1;
	}
	return 0;
}
