#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <iomanip>
#include "functions.h"
using namespace std;

void write_list (string output_name, vector<item> &item)
{
  ofstream output(output_name.c_str());
  for (int i = 0; i < item.size(); i++){
    output<<left;
    output<<setw(10)<<item[i].name;
    output<<setw(20)<<item[i].flag;
    output<<setw(5)<<item[i].stock;
    output<<setw(5)<<item[i].price;
    output<<setw(10)<<item[i].shops<<'\n';
  }
  output.close();
}
