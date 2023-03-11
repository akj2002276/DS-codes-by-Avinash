// Template by avinash jha
// memercum_coder
// binary seach code


#include<bits/stdc++.h>
using namespace std;
// #define int long long
// const int N = 1e5 + 10;
// const int MAX = 200007;
// const int m = 1000000007;


// void solve(int *arr, int n){
// }
// #define       forn(i,n)              for(int i=0;i<n;i++)
// #define          all(v)              v.begin(), v.end()
// #define         rall(v)              v.rbegin(),v.rend()
 
// #define            pb                push_back
// #define          sz(a)               (int)a.size()



int main(){
    int size; cin>>size;
    int arr[size];
    for (int i = 0; i < size; ++i)
    {
        cin>>arr[i];
    }
    int x; cin>>x; // number which is req to search
    sort(arr, arr+size);
    int startindex = 0;
    int endindex = size-1;
    bool check = false;
    while(startindex<=endindex){
        int middleindex = (startindex+endindex)/2;
        if (arr[middleindex] == x)
        {
            cout<<middleindex<<endl;
            check = true;
            break;
        }
        else if (x > arr[middleindex])
        {
            startindex = middleindex + 1;
        }
        else{
            endindex = middleindex - 1;
        }
    }
    if (check == false)
    {
        cout<<"-1"<<endl;
    }

}  