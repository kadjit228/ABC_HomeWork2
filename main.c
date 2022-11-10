#include <stdio.h>
char* input_mass() {
    char b[1000];
    int i = 0;
    do {
        char ch = fgetc(stdin);
        b[i++] = ch;
    } while(b[i - 1] != '\n');
    b[i] = '\0';
    char* p = b;
    return p;
}


int main() {
    char* str = input_mass();
    int j = 0;
    while(str[j] != '\0') {
        if (str[j] == 'a' || str[j] == 'e' || str[j] == 'o' || str[j] == 'i' || str[j] == 'u' || str[j] == 'y' || str[j] == 'A' || str[j] == 'E' || str[j] == 'O' || str[j] == 'I' || str[j] == 'U' || str[j] == 'Y'){
            printf("%d", str[j]);
        } else {
            printf("%c", str[j]);
        }
        j++;
    }
    return 0;
}