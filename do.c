#include <stdio.h>

int main (){
    int i;

   do {
        scanf("%d", &i);
        printf("%d\n", i);
        i = i + 2;
   } while (i <= 100 );

    return 0;

}
