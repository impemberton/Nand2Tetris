#include <stdio.h>
#include <string.h>

int main() {
    char * comp_table[28] = {"0","1","-1","D",
                             "A","!D","!A","-D",
                             "-A","D+1","A+1","D-1",
                             "A-1","D+A","D-A","A-D",
                             "D&A","D|A","M","!M",
                             "-M","M+1","M-1","D+M",
                             "D-M", "M-D","D&M","D|M"};                         
    char * comp_bin_table[28] = {"0101010","0111111","0111010","0001100",
                                 "0110000","0001101","0110001","0001111",
                                 "0110011","0011111","0110111","0001110",
                                 "0110010","0000010","0010011","0000111",
                                 "0000000","0010101","1110000","1110001",
                                 "1110011","1110111","1110010","1000010",
                                 "1010011","1000111","1000000","1010101"};

    char * dest_table[8] = {"null","M","D","MD","A","AM","AD","AMD"};
    char * dest_bin_table[8] = {"000","001","010","011","100","101","110","111"};
    
    char * jump_table[8] = {"null","JGT","JEQ","JGE","JLT","JNE","JLE","JMP"};
    char * jump_bin_table[8] = {"000","001","010","011","100","101","110","111"};

    char dest[4];
    char comp[3];
    char jump[4];
    int i;

    puts("Type a destination:");
    fgets(dest, 10, stdin);
    dest[strcspn(dest, "\n")] = 0;
    puts(dest);

    for (i = 0; i < 8; i++) {
        if(!strcmp(dest_table[i],dest)) {
            printf("%s", dest_bin_table[i]);
        }
    }
    puts("Type a comp:");
    fgets(comp, 10, stdin);
    comp[strcspn(comp, "\n")] = 0;
    puts(comp);

    for (i = 0; i < 28; i++) {
        if(!strcmp(comp_table[i],comp)) {
            printf("%s", comp_bin_table[i]);
        }
    }
    puts("Type a jump:");
    fgets(jump, 10, stdin);
    jump[strcspn(jump, "\n")] = 0;
    puts(jump);

    for (i = 0; i < 8; i++) {
        if(!strcmp(jump_table[i],jump)) {
            printf("%s", jump_bin_table[i]);
        }
    }
}