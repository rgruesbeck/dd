#include <iostream>
#include <fstream>
#include <string>
#include <ncurses.h>
#include "functions.h"
using namespace std;

int main()
{
  string line;
  ifstream pfile ("practice.txt");
  if (pfile.is_open())
  {
    while (getline (pfile, line)){
      //print line and wait 15 minutes
      cout << line << '\n';
      wait(15);
    }
    pfile.close();
  }
  else cout << "Unable to open file";

  return 0;
}
