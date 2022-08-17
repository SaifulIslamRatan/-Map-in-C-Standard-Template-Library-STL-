#include <iostream>
#include <map>
#include <string>
using namespace std;
/// Find out the frequency of each character
int main()
{
    map<char,int> Map;
    string String = "ABBAACDDD";
    for(int Index_I = 0; Index_I < String.size(); Index_I++){
        char Current_character = String[Index_I];
        if(Map.find(Current_character) == Map.end()){ /// New key found == Map.end()
            Map[Current_character] = 1;
        }
    else{
        ///Key already exists
        Map[Current_character] += 1;
        }
    }
    ///Printing the Map
    map<char,int>:: iterator it1;
    for(it1 = Map.begin(); it1 != Map.end(); it1++)
    {
        cout << it1-> first <<" "<< it1 -> second <<endl;
    }
    return 0;
}
