#include <iostream>
#include <stack>

int main() {
    int q;
    std::cin >> q;

    std::stack<int> stack;

    for (int i = 0; i < q; i++) {
        int type;
        std::cin >> type;

        if (type == 1) {
            int x;
            std::cin >> x;
            stack.push(x);
        } else if (type == 2) {
            stack.pop();
        }

        if (stack.empty()) {
            std::cout << -1 << std::endl;
        } else {
            std::cout << stack.top() << std::endl;
        }
    }

    return 0;
