#include <iostream>
#include <fstream>
#include <string>
#include "functions.h"
using namespace std;

int main()
{
  string line;

  string FilePath;
  cout << "Choose a practice file: ";
  cin >> FilePath;
  ifstream pfile (FilePath);

  int duration;
  cout << "Choose a task duration: ";
  cin >> duration;

  if (pfile.is_open())
  {
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    while (getline (pfile, line)){
      //print line and wait 15 minutes
      cout << line << '\n';
      wait(duration);
      cout << "" << endl;
    }
    pfile.close();
  }
  else cout << "Unable to open file";

  return 0;
}
