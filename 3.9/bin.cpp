#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
 
 
int main() {
    int n;
    cin >> n;
    int x;
    vector<int> nums;
 
    for(int i = 0; i < n; ++i) {
        cin >> x;
        nums.push_back(x);
    }
    cin>>x;
    int l = 0, r = n - 1;
    int pos = 0;
    while(l <= r) {
        pos =  l + (r - l) / 2;
        if(nums[pos] == x) {
            break;
        }
        else if(nums[pos] > x)  {
            r = pos - 1;
        } else l = pos+1;
    }
    
    if(l>r) {
        pos = -1;
    }
    cout<<pos;
    return 0;
}
