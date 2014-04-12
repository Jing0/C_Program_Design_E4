/*
 * =====================================================================================
 *
 *       Filename:  lab10-3.c
 *
 *    Description:  按“年/月/日”格式输出系统日期，按“时：分：秒”格式输出系统时间。
 *
 *        Version:  1.0
 *        Created:  03/12/2014 11:52:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#include <time.h>
struct Date{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
};
int main(){
	time_t now;
	time(&now);
	struct Date today;
	struct tm *tpointer;
	tpointer=localtime(&now);
	today.year=tpointer->tm_year+1900;
	today.month=tpointer->tm_mon+1;
	today.day=tpointer->tm_mday;
	today.hour=tpointer->tm_hour;
	today.minute=tpointer->tm_min;
	today.second=tpointer->tm_sec;
	printf("date:%d/%d/%d\ntime:%d:%d:%d\n",today.year,today.month,today.day,today.hour,today.minute,today.second);
	return 0;
}
