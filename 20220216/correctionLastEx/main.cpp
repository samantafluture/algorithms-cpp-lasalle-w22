//Name; 2022-02-16; LAB 5 (do..while, for loops)
#include <iostream>
using namespace std;

int main()
{
    //int i;
    char n;
 do{
   cout << "\n\nPress 1 to output 0 to 200.\n";
   cout << "Press 2 to output 0 to 50.\n";
   cout << "Press 3 to output 0 to 20.\n";
   cout << "Press 4 to Quit.\n";
   cin >> n;
   switch (n)
   {
     case '1' :
     {
       for (int i = 0; i <= 200; i+=10)
       {
         cout << i << endl;
       }
     }
     break;
     case '2':
     {
       for (int i = 0; i <= 50; i+=5)
       {
           cout << i << endl;
       }
       break;
     }
     case '3':
     {
         /*
      //version 2 using modulo
        for (int i = 0; i <= 20; i++)
        {
           if(i%2 != 0)
           {
               cout << i << endl;
           }
           else{
             if(i != 20){cout << i << ", ";}
             else{cout << i ;}
           }
        }
    */
      //version 1
      int count = 0;
       for (int i = 0; i <= 20; ++i)
       {
           if(i != 20){cout << i << ", ";}
           else{cout << i ;}

           count++;
           if(count == 2) //you can change to 3,4,...
           {
               cout << endl;
               count = 0;
           }
        }
       // */
       break;
     }
     case '4':
       {cout << "Bye!\n";}
     break;
     default :{cout << "Enter 1, 2, 3, or 4 to quit.\n";}

 }//end switch
  }while ( n != '4');  //n < 1 && n>=4);//end do

  return 0;
}