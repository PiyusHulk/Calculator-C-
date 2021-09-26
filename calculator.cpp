#include <iostream>
#include <cmath>
#include<windows.h>
using namespace std;
typedef unsigned short int j;

class Calculator {
public:
    float GetAdd();
    float GetSub();
    float GetMul();
    float GetDiv();
    double GetExp();
    double Getsqroot();
    double Getcube();
    double Getsin();
    double Getcos();
    double Gettan();


    void SetAdd (float var1, float var2);
    void SetSub (float var1, float var2);
    void SetMul (float var1, float var2);
    void SetDiv (float var1, float var2);
    void SetExp (double var1, double var2);
    void Setsqroot (double var1);
    void Setcube (double var1);
    void Setsin (double var1);
    void Setcos (double var1);
    void Settan (double var1);




private:
    float ItsAdd;
    float ItsSub;
    float ItsMul;
    float ItsDiv;
    double ItsExp;
    double Itssqroot;
    double Itscube;
	double Itssin;
	double Itscos;
	double Itstan;


};

float Calculator::GetAdd() {       
    return ItsAdd;
}



float Calculator::GetSub() {
    return ItsSub;
} 



float Calculator::GetMul() {
    return ItsMul;
}     


float Calculator::GetDiv() {
    return ItsDiv;
}    



double Calculator::GetExp() {
    return ItsExp;
}
    
double Calculator::Getsqroot() {
    return Itssqroot;
}


double Calculator::Getcube() {
    return Itscube;
}

double Calculator::Getsin() {
    return Itssin;
}

double Calculator::Getcos() {
    return Itscos;
}

double Calculator::Gettan() {
    return Itstan;
}

void Calculator::SetAdd(float var1, float var2) {
    ItsAdd = var1 + var2;
}



void Calculator::SetSub(float var1, float var2) {
    ItsSub = var1 - var2;
}



void Calculator::SetMul(float var1, float var2) {
    ItsMul = var1 * var2;
}   



void Calculator::SetDiv(float var1, float var2) {
    ItsDiv = var1/var2;
} 

void Calculator::SetExp(double var1, double var2) {
     ItsExp = pow(var1,var2);
}

void Calculator::Setsqroot(double var1) {
     Itssqroot = pow(var1,2);
}           
         
void Calculator::Setcube(double var1) {
     Itscube = pow(var1,3);
}    


void Calculator::Setsin(double var1) {
     Itssin = sin(var1);
}     

void Calculator::Setcos(double var1) {
     Itscos = cos(var1);
}   

void Calculator::Settan(double var1) {
     Itstan = tan(var1);
}   

            
int main() {system("color 90");

j loop = 1;
    while (loop==1)
   
 {
        cout << "Calculator Made BY Piyus Kumar :) #ENJOY\n  \n \n \n ====>Please choose the option you would like to work on : <====="
        << "\t \n***********************\n"
        << "1. Addition\n"
        << "2. Subtraction\n"
        << "3. Multiplication\n"
        << "4. Division\n"
        << "5. Exponents\n"
        << "6. Square Root\n"
        << "7. Cube Root\n"
        << "8. Sin \n"
        << "9. Cos \n"
        << "10.Tan \n"
		<< "0. Quit\n" << endl;
		
        int Option;
        cin >> Option;
        
        if (Option == 1) {
           Calculator Compute;           
           float var1, var2;
           cout << "First number: ";
           cin >> var1;
           cout << "Second number: ";
           cin >> var2;
           Compute.SetAdd(var1, var2);
           float var3 =Compute.GetAdd();
           cout << "\nYour Output:"<<var3 << endl<<"\n\n";
           
           
        }else
           if (Option == 2) {
               Calculator Compute;
               float var1, var2;
               cout << "First number: ";
               cin >> var1;
               cout << "Second number: ";
               cin >> var2;
               Compute.SetSub(var1, var2);
               float var3 = Compute.GetSub();
               cout << "\nYour Output:"<<var3 << endl<<"\n\n";

               
           }
           else
              if (Option == 3) {
                   Calculator Compute;
                   float var1, var2;
                   cout << "First number: ";
                   cin >> var1;
                   cout << "Second number: ";
                   cin >> var2;
                   Compute.SetMul(var1, var2);
                   float var3 = Compute.GetMul();
		        cout << "\nYour Output:"<<var3 << endl<<"\n\n";

                  
        }
              else
                 if (Option == 4) {
                       Calculator Compute;
                       float var1, var2;
                       cout << "First number: ";
                       cin >> var1;
                       cout << "Second number: ";
                       cin >> var2;
                       Compute.SetDiv(var1, var2);
                       float var3 = Compute.GetDiv();
                       cout << "\nYour Output:"<<var3 << endl<<"\n\n";


                 }
                 else
                    if (Option == 5) {
                           Calculator Compute;
                           double var1, var2;
                           cout << "First number: ";
                           cin >> var1;
                           cout << "Second number: ";
                           cin >> var2;
                           Compute.SetExp(var1, var2);
                           double var3 = Compute.GetExp();
                           cout << "\nYour Output:"<<var3 << endl<<"\n\n";

                     }
                     
                  else                      
                    if (Option == 6) {
                           Calculator Compute;
                           double var1;
                           cout << "Enter number for Square root: ";
                           cin >> var1;
                           Compute.Setsqroot(var1);
                           double var3 = Compute.Getsqroot();
                  cout << "\nYour Output:"<<var3 << endl<<"\n\n";
                    
                     }
                     
                     else                      
                    if (Option == 7) {
                           Calculator Compute;
                           double var1;
                           cout << "Enter number for Square root: ";
                           cin >> var1;
                           Compute.Setcube(var1);
                           double var3 = Compute.Getcube();
                          cout << "\nYour Output:"<<var3 << endl<<"\n\n";
           
                     }
                     
                     
                      else                      
                    if (Option == 8) {
                           Calculator Compute;
                           double var1;
                           cout << "Enter number to Find SIN Of : ";
                           cin >> var1;
                           Compute.Setsin(var1);
                           double var3 = Compute.Getsin();
                            cout << "\nYour Output:"<<var3 << endl<<"\n\n";
          
                     }
                     
                     
                     
                        else                      
                    if (Option == 9) {
                           Calculator Compute;
                           double var1;
                           cout << "Enter number to Find COS Of : ";
                           cin >> var1;
                           Compute.Setcos(var1);
                           double var3 = Compute.Getcos();
                           cout << "\nYour Output:"<<var3 << endl<<"\n\n";
           
                     }
                     
                        else                      
                    if (Option == 10) {
                           Calculator Compute;
                           double var1;
                           cout << "Enter number to Find TAN Of : ";
                           cin >> var1;
                           Compute.Settan(var1);
                           double var3 = Compute.Gettan();
                      cout << "\nYour Output:"<<var3 << endl<<"\n\n";
                
                     }
                     
                     
                     
                     else
                        if (Option == 0) {
                            	cout << "\n===>You have selected to quit the Calculator<===\n";
                            	break;
                           
                           }
                        else
						 cout << "=====>*****That is not an option! >:(    *****<=====\n" << endl;                     
   }                               
    return 0;
}      
