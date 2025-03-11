#include <iostream>


using namespace std;

int main()
{
    int a = 5;
    int *pa = &a;
    int b = *pa;


    if (a == b)
    {
        cout <<"rownowazne" << endl;
    }
    else
    {
        cout <<"nierownowazne"<<endl;
    }


    return 0;
}