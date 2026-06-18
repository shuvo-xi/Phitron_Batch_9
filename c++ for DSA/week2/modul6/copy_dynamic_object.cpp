#include <bits/stdc++.h>

using namespace std;
class Cricket
{
    public:
    string country;
    int jersy;
    Cricket(string country,int jersy)
    {
        this->country=country;
        this->jersy=jersy;
    }
};
int main()
{
    Cricket* dhoni=new Cricket("india",100);
    Cricket* kholi=new Cricket("india",16);
    // kholi->country=dhoni->country;
    // kholi->jersy=dhoni->jersy;
    *kholi=*dhoni;
    delete dhoni;
    cout<< kholi->country<<kholi->jersy<<endl;
    return 0;
}" "