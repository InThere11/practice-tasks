#include <stdio.h>

int main() {
    double x1, y1, r1, x2, y2, r2;

 
    printf("Введіть координати та радіуси (x1 y1 r1 x2 y2 r2) через пробіл:\n");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

   
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distSq = dx * dx + dy * dy;
    double sumRSq = (r1 + r2) * (r1 + r2);
    double diffRSq = (r1 - r2) * (r1 - r2);

    int result;

    if (distSq == 0) {
        if (r1 == r2) {
            result = -1;
        } else {
            result = 0; 
        }
    } else if (distSq > sumRSq || distSq < diffRSq) {
        result = 0;     
    } else if (distSq == sumRSq || distSq == diffRSq) {
        result = 1;    
    } else {
        result = 2;     
    }

 
    printf("Кількість точок перетину: %d\n", result);

    return 0;
}
