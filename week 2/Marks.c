#include <stdio.h>

int main() {
    int p, c, b, m, q;
    float a;
    printf("Enter the marks of the 5 subjects out of 100: ");
    scanf("%d %d %d %d %d", &p, &c, &b, &m, &q);
    a= (float)(p + c + b + m + q) / 500 * 100;
    printf("The total percentage is %f%%\n", a); 
    if (a>= 90) {
        printf("The grade is A\n");
    } else if (a>= 80) {
        printf("The grade is B\n");
    } else if (a>= 70) {
        printf("The grade is C\n");
    } else if (a>= 60) {
        printf("The grade is D\n");
    } else if (a>= 40) {
        printf("The grade is E\n");
    } else {
        printf("The grade is F\n");
    }
    return 0;
}
