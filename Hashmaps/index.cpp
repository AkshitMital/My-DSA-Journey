#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //creation
    unordered_map<string,int> m;

    //insertion
    pair<string,int> pair1 = make_pair("mittal",35);
    m.insert(pair1);

    pair<string,int> pair2 = make_pair("akshit",33);
    m.insert(pair2);

    //updation
    m["akshit"] = 35;

    cout<< m["mittal"]<<endl;
    cout<< m.at("akshit")<<endl;

    // cout<< m.at("unknownkey")<<endl;
    cout<< m["unknownkey"]<<endl;//this makes the value of unknownkey "0"
    cout<< m.at("unknownkey")<<endl;

    cout<<"Sizeof the map: "<<m.size()<<endl;
    cout<<m.count("akshit")<<endl;

    //erase
    m.erase("unknownkey");

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //iterator
    unordered_map<string,int> :: iterator it = m.begin();

    while (it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    

    return 0;
}