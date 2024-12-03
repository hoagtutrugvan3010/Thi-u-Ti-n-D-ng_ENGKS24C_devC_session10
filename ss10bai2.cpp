#include<stdio.h>

int main(){
	int arr[]={4,1,7,2};
	int length = sizeof(arr)/sizeof(int);
	for(int i=0;i<length;i++){
		printf("%d\t",arr[i]);
	}
	for(int i=0;i<length;i++){
		for(int j=0;j<length-1-i;j++){
		if	(arr[j+1]<arr[j]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
	}
	printf("\n");
		for(int i=0;i<length;i++){
		printf("%d\t",arr[i]);
	}

 return 0;
 }

