#include <iostream>

int main() {
    double u, v, w;
    int k;
    double s, t, f;
    double p, q, r, z;

    std::cout << "Input u v w k s t f p q r z: ";
    std::cin >> u >> v >> w >> k >> s >> t >> f >> p >> q >> r >> z;

    int day = 0;

    while (true) {
        double daily_hay = u * k;
        double daily_silage = v * k;
        double daily_feed = w * k;

        if (s < daily_hay || t < daily_silage || f < daily_feed) {
            std::cout << "Day: " << day;
            if (s < daily_hay) 
                std::cout << "Hay ends first" << std::endl;
            else if (t < daily_silage) 
                std::cout << "Silage ends first" << std::endl;
            else 
                std::cout << "Feed ends first";
            break;
        }

        s -= daily_hay;
        t -= daily_silage;
        f -= daily_feed;

        s -= s * q / 100;
        t -= t * r / 100;
        f -= f * z / 100;

        k -= k * p / 100;
        day++;
    }
}