#include<stdio.h>

int main(){
	int arr[]={5,3,8,12,1};
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
	
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            return mid; 
        }
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1; 
        }
    
    return -1; 
}


 return 0;
 }

