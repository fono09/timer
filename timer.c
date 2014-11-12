#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){

	if(argc == 0){

		printf("引数ください\n");

	}
		
	double n;
	unsigned int sec;

	sscanf(argv[1],"%lf",&n);
	sec = (unsigned int)(n*60);

	if(sec == 0){

		printf("短すぎます\n");
		return 0;

	}

	sleep(sec);

	
	printf("時間です\a\n");

	return 0;

}
