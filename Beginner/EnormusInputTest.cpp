#include<iostream>

using namespace std;

int main()
{
    int n{0},k{0},count{0};
    cin >> n >> k ;
    for(int i=0; i<n ; i++){
        int temp{0};
        cin >> temp ;
        count+= temp%k==0?1:0;
    }
    cout << count ;
    return 0;
}