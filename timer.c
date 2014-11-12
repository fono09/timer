#include<stdio.h>
#include<unistd.h>
#include <time.h>
#include <stdlib.h>

int main(int argc,char *argv[]){

	if(argc == 0){
		printf("引数ください");
	}

	srand((unsigned)time(NULL));
		
	double n;
	unsigned int sec;

	sscanf(argv[1],"%lf",&n);
	sec = (unsigned int)(n*60);

	if(sec == 0){
		
		switch(rand()%5){
			case 0:printf("もっと長い時間を指定してください。\n");break;
			case 1:printf("短すぎます。\n");break;
			case 2:printf("そんな時間測れません！\n");break;
			case 3:printf("なんでいじわるするの？\n");break;
			case 4:printf("もう！やめてください！！\n");break;
		}
		return 0;

	}
	if(rand()%10<9){
		sleep(sec);
		
		switch(rand()%5){
			case 0:printf("時間です\a\n");break;
			case 1:printf("時間だよ！\a\n");break;
			case 2:printf("時間でござる！\a\n");break;
			case 3:printf("GAME OVER\a\n");break;
			case 4:printf("時間らしいぜ～\a\n");break;
		}
	}else{
		int late=rand()%5+1;
		sleep(sec+late*60);

		switch(rand()%5){
			case 0:printf("ごめーん、%d分過ぎちゃった～テヘペロ\a\n",late);break;
			case 1:printf("実は%d分過ぎてます。\a\n",late);break;
			case 2:printf("%d分前に時間でした。\a\n",late);break;
			case 3:printf("ね、寝坊した！起床事故！！！\a\n");break;
			case 4:printf("またのご利用をお待ちしております。\a\n");break;
		}
	}
	return 0;

}
