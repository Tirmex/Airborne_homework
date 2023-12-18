#include <iostream>
#include <set>

int main() {
    int q;
    std::cin >> q;

    std::set<int> mySet;
    for (int i = 0; i < q; i++) {
        int queryType, x;
        std::cin >> queryType >> x;

        if (queryType == 1) {
            mySet.insert(x);
        } else if (queryType == 2) {
            if (mySet.find(x) != mySet.end()) {
                std::cout << 1 << std::endl;
            } else {
                std::cout << 0 << std::endl;
            }
        }
    }

    return 0;
}
