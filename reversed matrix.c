#include<stdio.h>
#define N 10000
int main(){
	int arr[N];
	int i,n;
	printf("enter size of the array:");
	scanf("%d",&n);
	printf("enter an array:");
	for(i=0;i<n;i++){
		scanf("%d",& arr[i]);
	}
	printf("reversed array");
	for(i=n-1;i>=0;i--){
		printf("%d",arr[i]);
	}
	return 0;
}
