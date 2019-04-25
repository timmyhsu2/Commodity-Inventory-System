#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <iomanip>
#include "functions.h"
using namespace std;
void search (vector<item> &item)
{
  cout<<"Please enter your search keyword (enter END to terminate function): ";
  string key;
  cin>>key;
  while (key != "END")
  {
    for (int i = 0; i < item.size(); i++)
    {
      if (item[i].name.find(key) != (-1))
      {
        if (item[i].flag == "out-of-stock")
        {
          cout<<left;
          cout<<setw(10)<<item[i].name;
          cout<<setw(20)<<item[i].flag;
          cout<<setw(5)<<item[i].stock;
          cout<<setw(5)<<item[i].price;
          cout<<setw(10)<<item[i].shops<<'\n';
        }
      }
    }
    for (int i = 0; i < item.size(); i++)
    {
      if (item[i].name.find(key) != (-1))
      {
        if (item[i].flag == "nearly-out-of-stock")
        {
          cout<<left;
          cout<<setw(10)<<item[i].name;
          cout<<setw(20)<<item[i].flag;
          cout<<setw(5)<<item[i].stock;
          cout<<setw(5)<<item[i].price;
          cout<<setw(10)<<item[i].shops<<'\n';
        }
      }
    }
    for (int i = 0; i < item.size(); i++)
    {
      if (item[i].name.find(key) != (-1))
      {
        if (item[i].flag == "in-stock")
        {
          cout<<left;
          cout<<setw(10)<<item[i].name;
          cout<<setw(20)<<item[i].flag;
          cout<<setw(5)<<item[i].stock;
          cout<<setw(5)<<item[i].price;
          cout<<setw(10)<<item[i].shops<<'\n';
        }
      }
    }
    cout<<"Please enter another keyword (enter END to terminate): ";
    cin>>key;
  }
}
