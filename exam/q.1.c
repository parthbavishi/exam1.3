
//100
//81 81
//64 64 64
//49 49 49 49
//36 36 36 36 36




#include <stdio.h>

void generate_pattern(int n) {
    int value = 100;
    int decrement = 17;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", value);
        }
        printf("\n");
        value -= decrement;
    }
}

int main() {
    int n = 5;
    generate_pattern(n);
    
}

