#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include "item.h"
#include "search.h"
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
          cout<<item[i].name<<"     "<<item[i].flag<<"     "<<item[i].stock<<"     "<<item[i].price<<"     "<<item[i].shops<<'\n';
        }
      }
    }
    for (int i = 0; i < item.size(); i++)
    {
      if (item[i].name.find(key) != (-1))
      {
        if (item[i].flag == "nearly-out-of-stock")
        {
          cout<<item[i].name<<"     "<<item[i].flag<<"     "<<item[i].stock<<"     "<<item[i].price<<"     "<<item[i].shops<<'\n';
        }
      }
    }
    for (int i = 0; i < item.size(); i++)
    {
      if (item[i].name.find(key) != (-1))
      {
        if (item[i].flag == "in-stock")
        {
          cout<<item[i].name<<"     "<<item[i].flag<<"     "<<item[i].stock<<"     "<<item[i].price<<"     "<<item[i].shops<<'\n';
        }
      }
    }
    cout<<"Please enter another keyword (enter END to terminate): ";
    cin>>key;
  }
}
