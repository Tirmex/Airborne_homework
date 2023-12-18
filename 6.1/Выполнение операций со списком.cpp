#include <iostream>
#include <list>
#include <string>

int main() {
    int q;
    std::cin >> q;

    std::list<int> myList;
    for (int i = 0; i < q; i++) {
        int queryType;
        std::cin >> queryType;

        if (queryType == 1) {
            int x, y;
            std::cin >> x >> y;
            auto it = myList.begin();
            if (x == 0) {
                myList.push_front(y);
            } else {
                std::advance(it, x - 1);
                myList.insert(std::next(it), y);
            }
        } else if (queryType == 2) {
            int x;
            std::cin >> x;
            auto it = myList.begin();
            std::advance(it, x - 1);
            std::cout << *it << std::endl;
        } else if (queryType == 3) {
            int x;
            std::cin >> x;
            auto it = myList.begin();
            std::advance(it, x - 1);
            myList.erase(it);
        }
    }

    return 0;
}
