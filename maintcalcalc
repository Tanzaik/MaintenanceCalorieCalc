#include <string>
#include <iostream>
using namespace std;

int main()
{
   string male;
   male = "male";
   string female;
   female = "female";
   string cutting;
   cutting = "cutting";
   string bulking;
   bulking = "bulking";
   string maintaining;
   string op;
   double numAge;
   double num1, num2;
   double num3;
   double numbero;
   double mod1;
   double mod2;
   double num4;
   double x;
   string od;
   double val1, val2, val3, cut1, cut2, cut3;
   
   cout << "Enter your age" << endl;
   cin >> numAge;
   
   if (numAge <= 5) {
       
       cout << "Invalid Age" << endl;
       return 0;
   }
   
   if (numAge >= 99) {
       
       cout << "Invalid Age" << endl;
       return 0;
   }
   
   
   cout << "Enter your height (cm)" << endl;
   cin >> num1;
   
   
   
   cout << "Enter weight (kg)" << endl;
   cin >> num3;
   
   numbero = num3 * 2.2046;
   
   
   
   cout << "Scale of 1-5, how active are you? (1 = no exercise, 5 = heavily active) " << endl;
   cin >> num4;
   
   
   if ((num4 = '1')) {
       x = num4;
       x = 1.2;
   }
   if ((num4 = '2')) {
       x = num4;
       x = 1.40;
   }
   if ((num4 = '3')) {
       x = num4;
       x = 1.55;
   }
   if ((num4 = '4')) {
       x = num4;
       x = 1.65;
   }
   if ((num4 = '5')) {
       x = num4;
       x = 1.725;
   }
   else{
               cout << "Undefined " << endl;
                return 0;
   }
   
   
   cout << "Enter your gender (male/female)" << endl;
   cin >> op;
   
   if (op == "male"){
     
        val1 = ((10 * num3) + (6.25 * num1) - ( 5 * numAge) - 161) * x;
        cout << "Your maintenance calories is " << val1;
 }
   
 else if (op == "female") {
     
        val2 = ((10 * num3) + (6.25 * num1) - ( 5 * numAge) + 5) * x;
        cout << "Your maintenance calories is " << val2;
 }
 
 else {
     cout << "Error, Try again" << endl;
     return 0;
 }
   
 
   return 0;
}
