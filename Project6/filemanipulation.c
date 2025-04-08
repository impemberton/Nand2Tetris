#include <stdio.h>
int main() {
    FILE *test;

    test = fopen("test.txt", "w");
    fclose(test);
    
}