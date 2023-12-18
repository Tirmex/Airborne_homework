#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

int main() {
    int q;
    std::cin >> q;

    std::unordered_map<int, int> dictionary;

    std::vector<int> results;

    for (int i = 0; i < q; i++) {
        int type;
        std::cin >> type;
        if (type == 1) {
            int x, y;
            std::cin >> x >> y;
            dictionary[x] = y;
        } else if (type == 2) {
            int x;
            std::cin >> x;
            if (dictionary.find(x) == dictionary.end()) {
                results.push_back(-1);
            } else {
                results.push_back(dictionary[x]);
            }
        }
    }

    for (int result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}
