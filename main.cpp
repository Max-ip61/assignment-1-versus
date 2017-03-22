#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream file ("eurovision.csv");
  file.open();
  char v;
  v << file[0];
}
