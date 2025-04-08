#include <stdio.h>
#include <string.h>

int main() {
    char * dest_table[8] = {"null","M","D","MD","A","AM","AD","AMD"};
    char * dest_bin_table[8] = {"000","001","010","011","100","101","110","111"};
    
    char * jump_table[8] = {"null","JGT","JEQ","JGE","JLT","JNE","JLE","JMP"};
    char * jump_bin_table[8] = {"000","001","010","011","100","101","110","111"};

    char dest[4];

    puts("Type a destination:");
    gets(dest);
    puts(dest);

    for (int i = 0; i < 8; i++) {
        if(!strcmp(dest_table[i],dest)) {
            printf("%s", dest_bin_table[i]);
        }
    }
}