/*
Sample Input and Output
3
0 1
1 2
2 0
*/


#include <bits/stdc++.h>
using namespace std;
  
// An interval has a start
// time and end time
struct Interval {
    int start, end;
};
  
// Compares two intervals
// according to starting times.
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}
  
int main()
{
    int n;
    cin >> n;
    Interval arr[n];

    for (int i = 0; i < n; i++)
        {
            cin>>arr[i].start>>arr[i].end ;
        }
   
  
    // sort the intervals in increasing order of
    // start time
    sort(arr, arr + n, compareInterval);
    
    int state =0;
    for (size_t i = 0; i < n-1; i++)
    {
        if(arr[i].end != arr[i+1].start){
            
            cout<<"false";
            break;
        }
        else{
            state++;
        }
    }
    if(state==n-1){
        cout<<"TRUE";
    }
  
    return 0;
}