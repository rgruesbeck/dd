#include <iostream>
#include <fstream>
#include <string>
#include <ncurses.h>
#include "functions.h"
using namespace std;

int main()
{
  string line;
  string FilePath;
  cout << "Choose a practice file: ";
  cin >> FilePath;
  ifstream pfile (FilePath);
  if (pfile.is_open())
  {
    while (getline (pfile, line)){
      //print line and wait 15 minutes
      cout << line + " 15 mins" << '\n';
      wait(15);
    }
    pfile.close();
  }
  else cout << "Unable to open file";

  return 0;
}
