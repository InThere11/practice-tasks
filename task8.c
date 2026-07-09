#include <stdio.h>
#include <string.h>
#include <ctype.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    char word[20]; 
    
  
    printf("Введіть слово: ");
    scanf("%19s", word); 
    
    int len = strlen(word);
    int counts[256] = {0}; 
    
    for (int i = 0; i < len; i++) {
        counts[toupper((unsigned char)word[i])]++;
    }
    
    unsigned long long result = factorial(len);
    
    for (int i = 0; i < 256; i++) {
        if (counts[i] > 1) {
            result /= factorial(counts[i]);
        }
    }
    
    printf("Кількість анаграм: %llu\n", result);
    
    return 0;
}
