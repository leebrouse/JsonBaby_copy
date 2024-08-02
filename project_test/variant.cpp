#include<iostream>
#include<variant>

using namespace std;
int main(int argc, char const *argv[])
{
    variant<int,float,string> container;
    container=12;
    cout<<get<int>(container)<<'\n';

    container=3.14f;
    cout<<get<float>(container)<<'\n';

    container="hello world";
    cout<<get<string>(container)<<'\n';
   
  
  
    return 0;
}
