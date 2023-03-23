/*
************************************************************************************************
*                                     PRINT PROGRAM DIALOGUES
*
* Description : Print program dialogues
* Arguments   : integer for switch logic
* Returns     : none
* Notes       : none
************************************************************************************************
*/
void ProgramDialogue(int com)
{
	switch (com)
	{
		case 1 : printf("Press [P] to pause...");
	}
}
/*$PAGE*/


/*
************************************************************************************************
*                                     PRINT SYSTEM DATE and TIME
*
* Description : Print system's current date and time
* Arguments   : none
* Returns     : none
* Notes       : none
************************************************************************************************
*/
  
void SysDateTime(void)
{
	time_t tm;
    char* curDateTime;
    time(&tm);
    curDateTime = ctime(&tm);
    printf("Stopwatch started at: %s", curDateTime);
}
/*$PAGE*/


/*
************************************************************************************************
*                                     PRINT PROGRAM MENU
*
* Description : Print program menu of user
* Arguments   : none
* Returns     : integer for switch logic
* Notes       : none
************************************************************************************************
*/
int ProgramMenu(void)
{
	
}
/*$PAGE*/
