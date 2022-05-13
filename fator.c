#include <stdio.h>
#include <math.h>

int main (void){

    int n, fat;

    scanf("%d", &n);

    while(0 < n && n < 13){
        for(fat = 1; 1 <= n; n = n - 1){
           fat = fat * n;
        }
    }
         printf("%d\n", fat);
         scanf("%d", &n);

    return 0;
}
