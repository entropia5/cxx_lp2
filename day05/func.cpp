//day05


/* 
#include <format>
#include <iostream>

using std::format;
using std::cout;

void func() {
    cout << "this is func()\n";
}

int main() {
    cout << "this is main()\n";
    func();
}


*/



#include <iostream>
#include <format>

using std::format;
using std::cout;


void Inc1 (int value)
{
    value ++;
    
}


void Inc2 (int& value)
{
    value ++;
    
}


void Inc3 (const int& value)
{
    
}
int main ()
{
    int a = 5;
    
    Inc1(a);
    cout << format("Inc1 value is a {}\n", a);
    
    Inc2(a);
    cout << format("Inc2 value is a {}\n", a);
    
    Inc3(a);
    cout << format("Inc3 value is a {}\n", a);
    
    
    
    
    
    
    return 0;
}





