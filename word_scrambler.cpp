#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
 
void permute(string str)
{
    sort(str.begin(), str.end());
 
    do {
       cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}

int main()
{
    string str; cin >> str;
    permute(str);
    return 0;
}