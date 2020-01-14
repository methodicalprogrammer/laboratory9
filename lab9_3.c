#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[10];
    int i;

    printf("Type a phrase:\n");
    scanf("%s", &a);
    printf("%s", a);

    for(i=0; i<10; i++){
        if((a[i] = getchar()) != EOF){
            printf("OK\n");
        }
    }

   

    return 0;
}