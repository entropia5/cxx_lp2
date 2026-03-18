//оба фрагмента кода дают одинаковый результат.

/*

#include <iostream>
int main(){
   int choice = 2;
   if (choice == 1)
   {
      std::cout << "Option One" << std::endl;
   }
   if (choice == 2)
   {
      std::cout << "Option Two" << std::endl;
   }
return 0;
}

*/

#include <iostream>

int main(){
   int choice = 2;
   switch (choice)
   {
      case 1:
         std::cout << "Option One" << std::endl;
         break;
      case 2:
         std::cout << "Option Two" << std::endl;
         break;
   }
return 0;
}