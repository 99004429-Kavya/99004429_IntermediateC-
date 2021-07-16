#include<iostream>
#include<list>
#include <sstream>

using namespace std;

list<int> getlist(string MACaddress)
{
    stringstream s(MACaddress);
    string array[6];
    list<int> mac_list;
    int value;
    for(int i=0;i<6;i++)
    {
        getline(s,array[i],':');
        stringstream ss;
        ss<<array[i];
        ss >> hex >> value;
        mac_list.push_back(value);
    }
    return mac_list;
}

int main(){
    string MACaddress="A2:12:7B:88:C6:5B";
    list<int> anslist = getlist(MACaddress);
    for(auto i:anslist)
    {
        cout<<i<<endl;
    }
}