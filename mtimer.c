#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

	if(argc == 1){

		printf("Usage: timer MINUTE\n");
		return 1;

	}
		
	double n;
	unsigned int sec;

	sscanf(argv[1],"%lf",&n);
	sec = (unsigned int)(n*60);

	if(sec == 0){

		printf("It's too short to count.\n");
		return 1;

	}

	sleep(sec);

	printf("It's timer!!\a\n");

	return 0;

}
