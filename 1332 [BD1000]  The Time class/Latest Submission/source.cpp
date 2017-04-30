#include <ctime>
#include <cstdio>
using namespace std;

class Time{
    int Hour, Minute, Second;
    public:
        Time();
        Time(int totalSeconds);
        int getHour();
        int getMinute();
        int getSecond(); 
    };

Time::Time(){
  long t;
  t = time(&t);
  char s[100];
  sprintf(s,"%s", ctime(&t));
  Hour = (s[11] - '0') * 10 + (s[12] - '0');
  Minute = (s[14] - '0') * 10 + (s[15] - '0');
  Second = (s[17] - '0') * 10 + (s[18] - '0');
}

Time::Time(int totalSeconds){
  Hour = totalSeconds / 3600;
  totalSeconds = totalSeconds - Hour * 3600;
  Minute = totalSeconds / 60;
  totalSeconds = totalSeconds - Minute * 60;
  Second = totalSeconds;
}

int Time::getHour(){
  return Hour;
}

int Time::getMinute(){
  return Minute;
}

int Time::getSecond(){
  return Second;
}