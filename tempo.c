#include <stdio.h>
#include <stdlib.h>
#define int_MAX 1000

int main()
{
    int a, b, c, s;
    
    scanf("%d%d%d", &a, &b, &c);
    
    if((a<=int_MAX) && (b<=int_MAX) && (c<=int_MAX)){
    	
    	if(a-b == 0){
    		s=1;
		}else if(a-c == 0){
			s=1;
		}else if(b-c == 0){
			s=1;
		}else if((a+b)-c == 0){
			s=1;
		}else if((b+c)-a == 0){
			s=1;
		}else if((a+c)-b == 0){
			s=1;
		}else{
			s=0;
		}
		
		if(s==0){
			printf("N\n");
		}else{
			printf("S\n");
		}
		
	}else{
		exit(1);
	}
  
    return 0;
}
