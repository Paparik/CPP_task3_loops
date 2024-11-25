#include <iostream>
#include <vector>

int main() {
    int T;
    std::cout << "Input T: ";
    std::cin >> T;

    int n;
    std::cout << "Input n: ";
    std::cin >> n;

    std::vector<int> arrival(n);
    std::vector<int> duration(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Input t and l " << i + 1 << ": ";
        std::cin >> arrival[i] >> duration[i];
    }

    int servedClients = 0;
    int totalServiceTime = 0;
    int currentTime = 0;

    for (int i = 0; i < n; ++i) {
        if (arrival[i] >= currentTime && arrival[i] + duration[i] <= T) {
            servedClients++;
            totalServiceTime += duration[i];
            currentTime = arrival[i] + duration[i];
        }
    }

    std::cout << "Clients served: " << servedClients;
    std::cout << "Working time of the master: " << totalServiceTime;
}