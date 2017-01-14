struct datetime{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int sec;
};

program SEND_TIME{
	version SEND_TIME_1 {
		datetime SEND(void)=1;
	} = 1 ;
} = 0x2fffffff;
