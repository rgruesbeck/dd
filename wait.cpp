#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void wait(int n){
  float sec = n * 60;
  float count = 0.0;
  float progress = 0.0;
  while (count <= sec){
    int barWidth = 100;

    std::cout << "[";
    int pos = barWidth * progress;
    for (int i = 0; i <= barWidth; ++i) {
        if (i < pos) std::cout << "=";
        else if (i == pos) std::cout << ">";
        else std::cout << " ";
    }
    std::cout << "] " << int(progress * 100.0) << " %\r";
    std::cout.flush();

    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    count += 0.10;
    progress = count / sec;
  }
}
