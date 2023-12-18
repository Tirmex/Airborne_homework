#include <iostream>
#include <queue>

int main() {
    int q;
    std::cin >> q;

    std::queue<int> queue;

    for (int i = 0; i < q; i++) {
        int type;
        std::cin >> type;

        if (type == 1) {
            int x;
            std::cin >> x;
            queue.push(x);
        } else if (type == 2) {
            queue.pop();
        }

        if (queue.empty()) {
            std::cout << -1 << std::endl;
        } else {
            std::cout << queue.front() << std::endl;
        }
    }

    return 0;
