#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

int main(){

    int c;

    FILE *file;

    file = fopen("texto.txt", "r");

    if(file){
        while((c = getc(file)) != EOF){
            printf("%c", c);
        }
    }

    fclose(file);

    return 0;
}
