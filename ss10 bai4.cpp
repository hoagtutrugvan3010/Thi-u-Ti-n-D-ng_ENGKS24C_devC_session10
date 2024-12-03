#include<stdio.h>

int main(){
	int arr[]={9,13,4,85};
	int length=sizeof(arr)/sizeof(int);
	for(int i=0;i<length;i++){
		printf("%d\t",arr[i]);
	}
	for(int i=0;i<length;i++){
		int min = arr[i];
		for(int j=i+1;j<length;j++){
			if(arr[j]<min){
				min = arr[j];
				arr[j]=arr[i];
				arr[i]=min;
				
			}
		}
	}
	printf("\n");
	
	for(int i=0;i<length;i++){
		printf("%d\t",arr[i]);
	}

 return 0;
 }

