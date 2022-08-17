#include <iostream>
#include <map>
#include<string>
using namespace std;

int main()
{
    ///Map Declaration
    map<string,double> Map;
    ///Value Assign
    Map["ABC"] = 3.1416; /// New field created
    Map["DEF"] = 5.5;    /// New field created
    Map["GHI"] = 3.5;    /// New field created
    Map["DEF"] = 7.8;    /// Existing value updated

    cout<< Map.size() <<endl;
    ///Value Remove
    Map.erase("GHI");
    cout<< Map.size() <<endl;

    ///Key presence check
    map<string,double> :: iterator it;
    it = Map.find("GHI"); ///if found, iterator return.otherwise,m.end()

    if(it == Map.end()){
        cout<< "Key doesn't exists" <<endl;
    }
    else{
        cout<<"Key exist"<<endl;
    }
    /// Full map traverse
    Map["Jk"] = 999;
    cout << "Printing the full map" <<endl;
    map<string,double> :: iterator it1;
    for(it1 = Map.begin(); it1 != Map.end();it1++){
        cout<<it1->first<<" "<<it1->second<<endl;
    }
    return 0;
}
