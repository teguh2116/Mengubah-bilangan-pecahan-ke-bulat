#include <iostream>
using namespace std;
typedef struct pecahan{
        int pb;
        int py;
        };
int main(int argc, char *argv[])
{
    pecahan p1,p2;
    cout<<"masukan pembilang = ";
    cin>>p1.pb;
    cout<<"masukan penyebut = ";
    cin>>p1.py;
    cout<< "\t\t "<<endl;
    cout<< "\t\t "<<p1.pb<<endl;
    cout<< "pecahan =\t --"<<endl;
    cout<< "\t\t "<<p1.py<<endl;
    if ("/")
    {
    cout<<"hasilya = "<<(p1.pb)/(p1.py)<<endl;
    }
return 0;
}
