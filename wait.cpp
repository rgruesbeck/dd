#include <chrono>
#include <thread>
using namespace std;

void wait(int n){
  int mins = n * 1000 * 60;
  std::this_thread::sleep_for(std::chrono::milliseconds(mins));
}
