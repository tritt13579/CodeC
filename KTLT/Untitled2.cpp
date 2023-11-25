#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	if ((argc<3)||(argc>10))
      	printf("Sai ");
    else{
    for(int i=1; i<argc-1; i++){
    	int t=atoi(argv[i]);
    	int d= atoi(argv[i+1]);
    	if (t>d){
    		 printf("Day khong tang");
    	     return 0;
		}
	}
    printf("Day tang");
}
}

