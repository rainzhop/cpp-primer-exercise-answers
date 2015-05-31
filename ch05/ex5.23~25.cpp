#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
   int a, b;
   while (cin >> a >> b)
   {
       try
       {
           if (b == 0)
               throw runtime_error("second num should not be 0.");
           cout << "result of a/b is " << ((double)a)/b << endl;
       }
       catch (runtime_error err)
       {
           cout << err.what();
           cout << "\nwant input again? enter n to exit, other to continue" << endl;
           char c;
           cin >> c;
           if (!cin || c == 'n')
               break;
       }
   }
   return 0;
}
