#include <iostream>

int main() {
    int time;
    int total_time = 0;

    std::cout << "Input processing time for each part:";

    while (std::cin >> time) 
    {
        total_time += time;
    }

    std::cout << "Total processing time for all parts: " << total_time;
}