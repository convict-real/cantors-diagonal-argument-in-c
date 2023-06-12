#include <stdio.h>
#include <math.h>
#include <float.h>
#include <Windows.h>
#include <string.h>

int main()
{
    float number = 0.f;
    
    while (1) {
        while (number < 1.f) {           
            printf("%f\n", number += FLT_EPSILON);
        }
        
        if (number == 1.f) {
            system("pause");
            return 0;
        }
    }
}
