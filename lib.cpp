
#include "lib.h"

float max(float array[], int n){

    array[n];
    float max=array[0];

    for (int i = 0; i < n; ++i) {
        if(max< array[i]){
            max=array[i];
        }
    }

    return max;
}
