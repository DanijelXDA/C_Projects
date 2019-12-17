#include "Trougao.h"
#include <math.h>

float hipotenuza(float a, float b)
{
    return sqrt( ((a * a) + (b * b)) );
}

float obim(float a, float b)
{
    return a + b + hipotenuza(a, b);
}

float povrsina(float a, float b)
{
    return (a* b) / 2;
}
