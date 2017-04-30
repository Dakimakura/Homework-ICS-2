#include "date.h"
#include <time.h>
#include <stdio.h>

int GetYear(const Date* date){
  return date->year;
}

int GetMonth(const Date* date){
  return date->month;
}

int GetDay(const Date* date){
  return date->day;
}

void SetYear(Date* date, int year){
  date->year = year;
}

void SetMonth(Date* date, int month){
  date->month = month;
}

void SetDay(Date* date, int day){
  date->day = day;
}

void SetDate(Date* date, int year, int month, int day){
  date->year = year;
  date->month = month;
  date->day = day;
}

Date* CreateDate(int year, int month, int day){
  Date* date = (Date*)malloc(sizeof(Date));
  date->year = year;
  date->month = month;
  date->day = day;
  return date;
}

void DestroyDate(Date** point){
  free(*point);
  *point = NULL;
}

Date* CopyDate(const Date* date){
  Date* date1 = (Date*)malloc(sizeof(Date));
  date1->year = date->year;
  date1->month = date->month;
  date1->day = date->day;
  return date1;
}

char* GetDateString(const Date* date){
  char* newstring = (char*)malloc(11);
  int temp = GetYear(date);
  newstring[0] = ((temp / 1000) % 10) + '0';
  newstring[1] = ((temp / 100) % 10) + '0';
  newstring[2] = ((temp / 10) % 10) + '0';
  newstring[3] = ((temp / 1) % 10) + '0';
  newstring[4] = '-';
  temp = GetMonth(date);
  newstring[5] = ((temp / 10) % 10) + '0';
  newstring[6] = ((temp / 1) % 10) + '0';
  newstring[7] = '-';
  temp = GetDay(date);
  newstring[8] = ((temp / 10) % 10) + '0';
  newstring[9] = ((temp / 1) % 10) + '0';
  newstring[10] = '\0';
  return newstring;
}

void DestroyDateString(char** point){
  free(*point);
  *point = NULL;
}

int tomonth(const char* sss){
  int itt;
  char *map[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  char mon[5];
  mon[0] = sss[4];
  mon[1] = sss[5];
  mon[2] = sss[6];
  mon[3] = '\0';
  for (itt = 0; itt < 12; itt ++)
     if (!strcmp(mon,map[itt]))
           break;
  return itt + 1;
}

void IncreaseDate(Date* date){
  time_t timep;
//  time = toit(date->year, date->month, date->day);
  struct tm *ppp;
  time(&timep);
  ppp = localtime(&timep);
  ppp->tm_mon = date->month-1;
  ppp->tm_mday = date->day;
  ppp->tm_year = (date->year - 1900 + 110);
  timep = mktime(ppp);
  timep += 86400;
  char sss[100];
  sprintf(sss,"%s", ctime(&timep));
  date->year = (sss[20] - '0') * 1000 + (sss[21] - '0') * 100 + (sss[22] - '0') * 10 + (sss[23] - '0') - 110;
  date->month = tomonth(sss); //todo 
  date->day = (sss[8] - '0') * 10 + (sss[9] - '0');
}

void DecreaseDate(Date* date){
  time_t timep;
//  time = toit(date->year, date->month, date->day);
  struct tm *ppp;
  time(&timep);
  ppp = localtime(&timep);
  ppp->tm_mon = date->month-1;
  ppp->tm_mday = date->day;
  ppp->tm_year = (date->year - 1900 + 110);
  timep = mktime(ppp);
  timep -= 86400;
  char sss[100];
  sprintf(sss,"%s", ctime(&timep));
  date->year = (sss[20] - '0') * 1000 + (sss[21] - '0') * 100 + (sss[22] - '0') * 10 + (sss[23] - '0') - 110;
  date->month = tomonth(sss); //todo 
  date->day = (sss[8] - '0') * 10 + (sss[9] - '0');  
}