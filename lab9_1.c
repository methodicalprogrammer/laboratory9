#include <stdio.h> 
   
void towerOfHanoi(int n, int start, int target, int temp) 
{ 
    if (n == 1) 
    { 
        printf("\n Move disk 1 from rod %d to rod %d", start, target); 
        return; 
    } 
    towerOfHanoi(n-1, start, temp, target); 
    printf("\n Move disk %d from rod %d to rod %d", n, start, target); 
    towerOfHanoi(n-1, temp, target, start); 
} 
  
int main() 
{ 
    int n = 4;
    towerOfHanoi(n, 1, 3, 2);
    return 0; 
} 
