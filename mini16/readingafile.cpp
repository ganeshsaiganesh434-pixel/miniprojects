#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    ifstream fin;
    fin.open("test.txt");
    ch=fin.get();

while(!fin.eof()){
    cout<<ch;
    ch=fin.get();
}
fin.close();
return 0;
}