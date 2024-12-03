	
#include <stdio.h>

	int main() {
    int arr[] = {6,13,2,7,89,1};
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("Mang hien tai: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int x;
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &x);
    int positions[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[count] = i; 
            count++;
        }
    }
    if (count > 0) {
        printf("Phan tu %d duoc tim thay tai vi tri: ", x);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}



