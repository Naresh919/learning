//Find ASCII value
#include <stdio.h>
int main() {  
    char c;
    int a;
    printf("Enter a character: ");
    scanf("%c", &c);  
    scanf("%c", &a);
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d\n", c, c);
    
    return 0;
}
