#include<iostream>
using namespace std;

int main()
{
    int testcase,height[60],average,output,p=1;

    while(cin >> testcase)
    {
        if(testcase == 0) break;
        average = 0;

        for(int i=0; i<testcase; i++)
        {
              cin >> height[i];
              average = average + height[i];
        }

        average = average / testcase;
        output = 0;

        for(int i=0; i<testcase; i++)
            if(height[i] > average) output = output + (height[i] - average);

        cout<<"Set #"<<p<<"\n";
        cout<<"The minimum number of moves is "<<output<<'.'<<"\n\n";

        p++;

    }
    return 0;
}
