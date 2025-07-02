#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pozmen_hodnoty_zachovajuc_priemer(float *p, int l){
	
    float sum = 0;
	float rand_num[l];
    float rand_sum = 0;
    float rand_avg = 0;
    
    if(l==0){
        return;
    }
        
    for(int i = 0; i < l; i++){
        sum += p[i];
    }
    
    for(int i = 0; i < l; i++){
        rand_num[i] = (float)( rand() % 200 ) - 100.0;
    }
    
    for(int i = 0; i < l; i++){
        rand_sum += rand_num[i];
    }

	rand_avg = rand_sum/(float)l;

    for(int i = 0; i < l; i++){
        rand_num[i] - rand_avg;
    }

    for(int i = 0; i < l; i++){
        p[i] += rand_num[i];
    }

}

int main(){
	
	float pole[]={3.7, 5.3, 7.3, 180.9, 55.2};
	int l = sizeof(pole)/sizeof(float);
	int i = 0;
	
    srand(time(NULL));
    
	for(i = 0; i < l; i++){
		printf("%.2f\n", pole[i]);
	}
	
	pozmen_hodnoty_zachovajuc_priemer(pole, l);
	
	printf("new one:\n");

	for(i = 0; i < l; i++){
		printf("%.2f\n", pole[i]);
	}
	
	return 0;
}
