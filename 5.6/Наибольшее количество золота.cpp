#include <iostream>
#include <vector>
#include <algorithm>

int knapsack(int W, const std::vector<int>& weights) {
    int n = weights.size();
    std::vector<std::vector<int>> K(n + 1, std::vector<int>(W + 1, 0));

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                K[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                K[i][w] = std::max(weights[i - 1] + K[i - 1][w - weights[i - 1]], K[i - 1][w]);
            } else {
                K[i][w] = K[i - 1][w];
            }
        }
    }

    return K[n][W];
}

int main() {
    int W, n;
    std::cin >> W >> n;
    std::vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        std::cin >> weights[i];
    }

    int maxGold = knapsack(W, weights);
    std::cout << maxGold << std::endl;

    return 0;
}
