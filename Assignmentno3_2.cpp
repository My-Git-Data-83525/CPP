#include <iostream>
using namespace std;
class Time
{
private:
    int *hptr;
    int *mptr;
    int *sptr;

public:
    Time();
    Time(int h, int m = 0, int s = 0);
    ~Time();
    int getHour();
    int getMinute();
    int getSeconds();
    void printTime();
    void setHour(int hour);
    void setMinute(int);
    void setSeconds(int seconds);
};

int main()
{
    Time *ptr = new Time(5, 30);
    // Time t(10,12);
    ptr->getTime();
    delete ptr;
    ptr = NULL;
}
Time::Time(int h, int m , int s )
{
    hptr = new int;
    mptr = new int;
    sptr = new int;
    *hptr = h;
    *mptr = m;
    *sptr = s;
}
Time::Time() : Time(00, 00, 00) {}
Time::~Time()
{
    delete hptr;
    delete mptr;
    delete sptr;
    hptr = NULL;
    mptr = NULL;
    sptr = NULL;
}

int Time::getHour()
{
    return *hptr;
}
int Time::getMinute()
{
    return *mptr;
}
int Time::getSeconds()
{
    return *sptr;
}
void Time::printTime()
{
    cout << "TIME -" << *hptr << ":" << *mptr << ":" << *sptr << endl;
}
void Time::setHour(int hour)
{
    *hptr = hour;
}
void Time::setMinute(int min)
{
    *mptr = min;
}
void Time::setSeconds(int seconds)
{
    *sptr = seconds;
}
