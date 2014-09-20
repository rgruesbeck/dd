#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void wait(int n){
  int count = 0;
  int sec = n * 60;
  while (count < sec){
    cout << count << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    count += 1;
  }
}
