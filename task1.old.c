#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pozmen_hodnoty_zachovajuc_priemer(float *p, int l){
	if(l == 0){ 
		return;
	}
	
	float sum = 0;
	
	for(int i = 0; i<l; i++){
		sum += p[i];
	}
	
	float sum_avg = sum/l; //useless 
	
	srand(time(NULL));// 4.b
	
	float rand_num[l];
	float rand_num_sum = 0;
	
	for(int i = 0; i<l; i++){
		rand_num[i] = (((float)rand() %200)-100);
		rand_num_sum += rand_num[i];
	}
	
	rand_num_avg = rand_num_sum / l;
	for(int i = 0; i<l; i++){
		rand_num[i] -= rand_num_avg;
	}
	
	
	
	//sum = i + (r[i]-avg) 
	for(int i = 0; i<l; i++){
		p[i] + rand_num[i];
		
	}
	
}