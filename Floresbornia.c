#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int N =1, i;
	float maiorx, menorx, maiory, menory;
	double r, cx, cy;
	float *x;
	float *y;
	scanf("%d", &N);
	
	while(N!=0){
		if(N<=100){
			x = (float*) malloc(N * sizeof(float));
			y = (float*) malloc(N * sizeof(float));
			
			for(i = 0; i < N;i ++){
				scanf("%f %f", &x[i], &y[i]);
				maiorx  = x[i];
				menorx = x[i];
				maiory = y[i];
				menory = y[i];
			}
		
			for(i=0; i<N; i++){
				
				if(maiorx < x[i]){
					maiorx = x[i];
				}
				if(menorx > x[i]){
					menorx=x[i];
				}
				if(maiory < y[i]){
					maiory = y[i];
				}
				if(menory > y[i]){
					menory = y[i];
				}
			}
			cx = (maiorx + menorx) / 2;
			cy = (maiory + menory) / 2;
			r = sqrt((maiorx - cx) * (maiorx - cx) + (maiory - cy) * (maiory - cy));
			
			printf("%.2f\t%.2f\t%.2f\n", cx, cy, r);
			
			scanf("%d", &N);
			free(x);
			free(y);
		}
	}
	return 0;
}
