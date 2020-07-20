#include <iostream>

unsigned int min(unsigned int a, unsigned int b) {
    return a > b ? b : a;
}

int main() {
    int N;
    unsigned int i;
    unsigned int count[1000001] = {0, };

    std::cin >> N;

    for (i = 2; i < N+1; i++) {
        count[i] = count[i-1] + 1;
        if (i % 2 == 0) count[i] = min(count[i], count[i/2] + 1);
        if (i % 3 == 0) count[i] = min(count[i], count[i/3] + 1);
        std::cout << "count[" << i << "] : " << count[i] << "\n";
    }

    std::cout << count[N];
    return 0;
}