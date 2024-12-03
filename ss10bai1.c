#include<stdio.h>

int main(){
	int arr[]={4,1,7,2};
	int length = sizeof(arr)/sizeof(int);
	int n,check=0;

	printf("nhap phan tu : ");
	scanf("%d",&n);
	for(int i=0;i<length;i++){
		if(n==arr[i]){
			printf("vi tri cua phan tu la %d",i+1);
			check=1;
			break;
		}
	}
	if(check==0){
		printf("phan tu ko ton tai trong mang");
	}


 return 0;
 }

