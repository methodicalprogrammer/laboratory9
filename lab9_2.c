#include <stdio.h>
#include <stdlib.h>

void selectionSort(int a[], int n) {
    int i, j;
    int temp;

    for(i=1; i<n; i++){
        for(j=n; j>=i; j--){
            if (a[j-1]>a[j]){
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
}

int main() {
    int a[] = {2, 3, 4, -1, 0, 100, 99, 5, 7, 10, 1};
    int i;
    
    selectionSort(a, 11);

    for(i=0; i<11; i++) {
        printf("%4d", a[i]);
    }
    printf("\n");
    return 0;
    
}