#include <stdio.h>

void main() {
    int x = 2;
    
    // Khối switch này sẽ có: 1 switch, 2 case, 1 default
    switch (x) {
        case 1:
            printf("Mot\n");
            break;
        case 2:
            printf("Hai\n");
            break;
        default:
            printf("Khong xac dinh\n");
            break;
    }
}