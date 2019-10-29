#include <stdio.h>
int main(){
	
	int f0=0;
	int f1=1;
	int i,n;
	int sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
			printf("%d\n",i);
		}
		else if(i==1){
			printf("%d\n",i);
		}
		else{
			sum=f0+f1;
			f0=f1;
			f1=sum;
			printf("%d\n",sum);
		}
	}
}
