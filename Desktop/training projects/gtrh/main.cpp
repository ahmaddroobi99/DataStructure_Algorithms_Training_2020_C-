#include <iostream>

using namespace std;
template <class type>
template<class type2>
type larger(type x ,type2 y);
int main()
{


   cout<< larger (30.5,45.6)<<endl;


    return 0;
}
template <class type>
type larger (type x ,type2 y ){

if (x>y)return x;

    else return y ;

}
