#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int find_min_abs(const std::vector<int>& arr) {
    if (arr.empty()) {
        return 0;
    }
    auto min_it = std::min_element(arr.begin(), arr.end(), [](int x, int y) { return std::abs(x) < std::abs(y); });
    return std::abs(*min_it);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int& k : arr) {
        std::cin >> k;
    }
    int min_abs = find_min_abs(arr);
    std::cout << min_abs << std::endl;
    return 0;
}
