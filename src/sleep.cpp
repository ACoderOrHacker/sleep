#include <chrono>
#include <stdexcept>
#include <thread>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    if (argc != 2 || argc == 1) {
        std::cerr << "Usage: " << argv[0] << " <milliseconds>" << std::endl;
        return 1;
    }

    try {
        std::this_thread::sleep_for(std::chrono::milliseconds(std::stoll(argv[1])));
    } catch (std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    } catch (std::out_of_range &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    

    return 0;
}