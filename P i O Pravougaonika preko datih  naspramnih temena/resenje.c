#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, y1, x2, y2, x3, y3, x4, y4;  
    double a, b;
    
    printf("\nUneti gornje levo teme (x, y): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Uneti donje desno teme (x, y): ");
    scanf("%lf %lf", &x2, &y2);

    x3= x1; // donje levo teme, x kord. je ista kao x od gornje levo, 
    y3 =  y2; // donje levo teme,y kord. ista kao donje desno y   
    
    x4 = x2; // gornje desno teme, x kord. je ista kao x od gornje desno, 
    y4 =  y1; // gornje desno teme, y kord. ista kao gornje levo   
    
    a = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    
    printf("Obim = %.2lf\nPovrsina: %.2lf\n", (2 * (a + b)), a * b);
    
    return 0;
}

