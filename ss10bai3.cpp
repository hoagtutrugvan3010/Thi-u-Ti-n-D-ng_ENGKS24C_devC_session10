#include<stdio.h>

int main(){
	int arr[]={4,1,7,2};
	int length = sizeof(arr)/sizeof(int);
	for(int i=0;i<length;i++){
		printf("%d\t",arr[i]);
	}
	for(int i=1;i<length;i++){
		int key =arr[i];
		int j=i-1;
		while (j>=0 && key<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		
	}
	printf("\n");
		for(int i=0;i<length;i++){
		printf("%d\t",arr[i]);
	}
 return 0;
 }

