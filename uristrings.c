#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int ordena(const void *str1, const void *str2) {
    return strcmp(str1, str2);
}
int main(void) {
    int n, i;
    char codigo[1000][5];

    while (scanf("%d ", &n) != EOF) {
        for (i = 0; i < n; i++){
            scanf("%s", codigo[i]);
        }
        qsort(codigo, n, 5, ordena);

        for (i = 0; i < n; i++){
            printf("%s\n", codigo[i]);
        }
       codigo[0][0] = '\0';
    }
    return 0;
}
