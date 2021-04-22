#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int day1,month1,year1,day2,month2,year2,day_diff,mon_diff,year_diff;
      int diff=0;
      cin>>day1>>month1>>year1;
      cin>>day2>>month2>>year2;

      day_diff = day1-day2;
      mon_diff = month1-month2;
      year_diff = year1-year2;

      if(year_diff>0)
      {
          diff = 10000;
      }
      else
      {
          if(mon_diff>0 && year_diff==0)
          {
              diff = 500*(mon_diff);
          }

          else
          {
              if(day_diff>0 && year_diff==0)
              {
                  diff = 15*day_diff;
              }
          }
      }

    // diff=(year1-year2>0)?10000:(month1-month2>0&&year_diff==0)?mon_diff*500:(day1-day2>0 && year_diff==0)?day_diff*15:0;  

      cout<<diff;
    return 0;
}

