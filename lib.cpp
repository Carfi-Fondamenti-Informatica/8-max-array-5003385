
#include "lib.h"

float max(float array[], int n){

    float max=0;

    if (n=1){
        max=array[0];
    }

    for (int i=1; i<n-1; i++){
        if (array[i-1]>=array[i]){
            max=array[i-1];
        } else {
            if(array[i]>=array[i+1]){
                max=array[i];
            } else {
                max=array[i+1];
            }
        }
    }

    return max;
}
