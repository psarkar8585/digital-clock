#include<iostream>
#include<Windows.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int hour = 0 , minitue = 0 ,second = 0 , h = 0 , m = 0, s = 0;

    cout<<"Enter time in Format HH:MM:SS\n\n";
    cin>>hour >> minitue >> second ;

    start:
    for (hour ;hour <24;hour++){
        for (minitue ; minitue <60 ; minitue ++){

            for (second ; second < 60; second++){
                system("CLS");
                cout <<"Time is :" <<hour<<" : "<< minitue <<" : " << second;

                    if(hour>12){
                    cout<< "PM";
                    }
                    else{
                    cout<<"AM";
                    }
                for(double i=0;i<99999999;i++){
                    i++;
                    i--;
                }
            }
            second=0;
        }
        minitue=0;
    }
     hour=0;
     goto start;

                
}