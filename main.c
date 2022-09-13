#include <stdio.h>
#include <time.h>

main(){
	int second,minute,hour;
	
	second=minute=hour=0;
	
	while(1){
		system("cls");
		
		printf("\n\n> STOPWATCH\n");
		printf("\t    %02d : %02d : %02d \n",hour,minute,second);
		printf("\t |================|\n\n\n");
		
		second++;
		
		if(second == 60){
			second = 0;
			minute++;
		}
		if(minute == 60){
			minute = 0;
			second = 0;
			hour++;
		}
		
		sleep(1);
	}
}
