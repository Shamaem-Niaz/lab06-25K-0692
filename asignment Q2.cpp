#include <stdio.h>
int main(){
	int n1,n2,sum;
	int opr;
	int count = 0;
	int div;
	
	
	printf("enter n1: ");
	scanf("%d" , &n1);
	printf("enter operator (1 for multiplication 2 for division): ");
	scanf("%d",&opr);
	printf("enter n2: ");
	scanf("%d",&n2);
	
	if (opr == 1){
		for (int i =0; i<n2; i++){
			sum = (sum+n1);
		}
		printf("ans= %d\n" ,sum );
	
	}else if (opr == 2){
		if (n2 == 0){
			printf("infinity");
		}
		div = n1;
		while (div>0){
			div = div-n2;
			count = count +1;
		}
		printf("%d",count);
	}
	return 0;
}

