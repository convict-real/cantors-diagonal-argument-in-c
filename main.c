#include <stdio.h>
#include <math.h>
#include <float.h>
#include <Windows.h>
#include <string.h>

#define EPSILON 1e-7f

int main()
{
    float number = 0.f;
    int decimal_places = (int)log10(1 / EPSILON);
    
    while (1) {
        while (number < 1.f) printf("%.*f\n", decimal_places, number += EPSILON);
        
        if (number >= 1.f) {
            system("pause");
            return 0;
        }
    }
}
