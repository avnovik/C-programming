#include <stdio.h>
#include <stdlib.h>

#define Age 327
#define Saving 21345

struct _retire_info
{
  int months; //number of months it is applicable to
  double contribution; //how many dollars are contributed (or spent if negative) from the account per month 
  double rate_of_return; //rate of returns  (which we will assume to be "after inflation")
};
typedef struct _retire_info retire_info;
/*
int startAge,   //in months
double initial, //initial savings in dollars
retire_info working, //info about working
retire_info retired) //info about being retired
*/
void retirement (int startAge, double initial, retire_info working, retire_info retired)
{
// First, it should compute your retirement account balance each 
//   month while you are working.  To do this, you need to calculate
//   the account balance increase from returns (balance * rate of return),    
//and add that to the current balance.  You then need to add the
//   monthly contribution to the balance.
    printf("Age %3d month %2d you have $%.2lf\n", startAge/12,startAge%12, initial);
    for (int i = 0; i < working.months; i++) {
            
        startAge++;
        initial = initial * working.rate_of_return + working.contribution + initial;
        printf("Age %3d month %2d you have $%.2lf\n", startAge/12,startAge%12, initial);
    }
    for (int i = 0; i < retired.months - 1; i++) {
           
        startAge++;
        initial = initial * retired.rate_of_return - retired.contribution + initial;
        printf("Age %3d month %2d you have $%.2lf\n", startAge/12,startAge%12, initial);
    }
}

int main (void)
{
    retire_info working;
    retire_info retired;

    working.months = 489;
    working.contribution = 1000;
    working.rate_of_return = (0.045/12);

    retired.months = 384;
    retired.contribution = 4000;
    retired.rate_of_return = (0.01/12);

    retirement(Age, Saving, working, retired);
}


