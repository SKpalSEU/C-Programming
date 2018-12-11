#include<stdio.h>
int main()
{
    int yr,lp_yer,difference,total_days,day_of_week,week_day;
    scanf ("%d",&yr);
    lp_yer=(yr%100)/4;
    difference=(yr%100);
    total_days=(difference*365)+lp_yer;
    day_of_week=total_days%7;
    if (day_of_week==0)
    {
        printf ("the day on jan 1st of this yer is monday");
    }
    else if (day_of_week==1)
    {
        printf ("the day on jan 1st of this yer is tuesday");
    }
    else if (day_of_week==2)
    {
        printf ("the day on jan 1st of this yer is wednesday");
    }
    else if (day_of_week==3)
    {
        printf ("the day on jan 1st of this yer is thasday");
    }
    else if (day_of_week==4)
        {
            printf ("the day on jan 1st of this yer is friday");
        }
        else if (day_of_week==5)
        {
            printf ("the day on jan 1st of this yer is saturday");
        }
        else if (day_of_week==6)
        {
            printf ("the day on jan 1st of this yer is sanday");
        }
        return 0;
}
