#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include "item.h"
#include "access_stock.h"
using namespace std;
void access(vector<item> &item){
  for (int i = 0; i < item.size(); i++){
    cout<<left;
    cout<<setw(10)<<item[i].name<<setw(20)<<item[i].flag<<setw(5)<<item[i].stock<<setw(5)<<item[i].price<<setw(10)<<item[i].shops<<'\n';
  }
}
