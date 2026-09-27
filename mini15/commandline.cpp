#include<iostream>
using namespace std;
int main(int argc,char *argv[],char *envp[] ){


    
    cout << "You have entered " << argc
    << " arguments:" << "\n";

    for (int i = 0; i < argc; ++i)
        cout << argv[i] << "\n";

    getchar();

    for (int i = 0; envp[i] != NULL; i++)
        printf("\n%s", envp[i]);

    getchar();

    return 0;
}