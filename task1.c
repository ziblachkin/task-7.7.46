#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void try(float *p, int l){
    
    if(p==0){
        return;
    }
    
    float sum = 0;
    
    for(int i = 0; i < l; i++){
        sum += p[i];
    }

    //float avg = sum / l;
    
    float rand_num[l];
    float rand_sum = 0;
    
    srand(time(NULL);

    for(int i = 0; i < l; i++){
        rand_num[i] = (float(rand() % 200 ) -100 );    
    }
    
    for(int i = 0; i < l; i++){
        rand_sum += rand_num[i];
    }
    
    float rand_avg = rand_sum / l;

    for(int i = 0; i < l; i++){
        rand_num[i] - rand_avg;
    }

    for(int i = 0; i < l; i++){
        p[i] + rand_num[i];
    }

}

