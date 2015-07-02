#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    queue<pair<string,int>> customer; // size = n
    map<int,int> ser(16);
    customer.push(make_pair("A",2));
    customer.push(make_pair("B",1));
    customer.push(make_pair("C",9));
    customer.push(make_pair("D",200));
    ser[5]=0;
    ser[10]=0;
    ser[15]=0;
    int time;
    int temp=0;

    for(int n=0;customer.size()!=0;n++){
        if(ser[5]==0){
        cout<<customer.front().first<<" wait "<<temp<<" service by s1"<<endl;
        ser[5]=customer.front().second*5;
        temp=temp+ser[5];
        }
        else if(ser[10]==0){
            cout<<customer.front().first<<" wait "<<temp<<" service by s2"<<endl;
            ser[10]=customer.front().second*10;
            temp=temp+ser[10];
        }
        else if(ser[15]==0){
            cout<<customer.front().first<<" wait "<<temp<<" service by s3"<<endl;
            ser[15]=customer.front().second*15;
            temp=temp+ser[15];
        }
        customer.pop();
        //auto time=minmax({ser[5],ser[10],ser[15]});
        //ser[5]=ser[5]-time.first;
        //ser[10]=ser[10]-time.first;
        //ser[15]=ser[15]-time.first;
    }
}
