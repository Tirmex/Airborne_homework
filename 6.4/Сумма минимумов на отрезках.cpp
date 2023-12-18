#include <iostream>
#include <vector>
#include <deque>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::deque<int> window;
    long long sumOfMin = 0;

    for (int i = 0; i < n; i++) {
        while (!window.empty() && window.front() <= i - k) {
            window.pop_front();
        }
        while (!window.empty() && a[window.back()] >= a[i]) {
            window.pop_back();
        }
        window.push_back(i);
        if (i >= k - 1) {
            sumOfMin += a[window.front()];
        }
    }

    std::cout << sumOfMin << std::endl;

    return 0;
