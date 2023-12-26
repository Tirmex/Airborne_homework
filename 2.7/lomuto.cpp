#include <iostream>
#include <algorithm>
#include <vector>

#define int int64_t

int32_t main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<int> low, high;

    for (int i = 0; i < n; i++) {
        if (a[i] <= a[0]) {
            low.push_back(a[i]);
        } else {
            high.push_back(a[i]);
        }
    }

    std::swap(low[0], low[low.size() - 1]);

    for (int i = 0; i < low.size(); i++) {
        std::cout << low[i] << " ";
    }
    for (int i = 0; i < high.size(); i++) {
        std::cout << high[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
