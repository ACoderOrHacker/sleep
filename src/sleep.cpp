#include <chrono>
#include <thread>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <milliseconds>" << std::endl;
        return 1;
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(std::stoi(argv[1])));

    return 0;
}