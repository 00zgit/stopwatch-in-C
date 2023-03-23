/*
************************************************************************************************
*                                          free software
*                                              ---
*
*                                     (f) Free-to-use license
*                                       None Rights Reserved
*
*
* Filename     : stopwatch.c
* Programmer(s): Arruda R
* Description  : this program emulates a stopwatch
************************************************************************************************
*/
/*$PAGE*/


/*
************************************************************************************************
*                                        INCLUDE FILES
************************************************************************************************
*/
#include "INCLUDES.h"
/*$PAGE*/


/*
************************************************************************************************
*                                        CONTANTS & MACROS
************************************************************************************************
*/
#define INCREMENT(x) ++x
const int dialogue_stop		0;
const int dialogue_start 	1;
const int dialogue_lap		2;
const int dialogue_continue 3;
/*$PAGE*/


main () 
{
	/*
	************************************************************************************************
	*                                        GLOBAL VARIABLES
	************************************************************************************************
	*/
	int		g_loop_case;				/*	*/
	int		g_second, g_minute, g_hour;	/*	*/
	char	g_key;						/*	*/
	
	g_second	= 0;
	g_minute	= 0;
	g_hour		= 0;
	g_key		= ' ';
	/*$PAGE*/
	
	
	loop_case = ProgramMenu();
	
	LOOP:
	switch (loopCase)
	{
		case 1:
		{
			while (1)
			{
				//	counter system
				system("cls");
				
				printf("\n\n> STOPWATCH\n");
				printf("\t    %02d : %02d : %02d \n",hour,minute,second);
				printf("\t |================|\n\n\n");
				
				++second;
				
				if (second == 60)
				{
					second = 0;
					++minute;
				}
				if (minute == 60)
				{
					minute = 0;
					second = 0;
					++hour;
				}
				
				sleep(1);
				
				//	stop system
				ProgramDialogue(1);
				key = getch();
				if(key == 'P' || key == 'p')
				{
					loop = 0; // change case
					break;
				}
				/*
				else if(key == 'L' || key == 'l'){
					
				}
				*/
			}
		}
		case 0:
		{
			printf("\n\nPress [C] to continue...");
			key = getch();
			if(key == 'C' || key == 'c')
			{
				loop = 1;
			}
			break;
		}
	}
	goto LOOP;
	
	return 0;
}
