#include <iostream>
#include <ctime>
using namespace std;
void loveLife();
void schoolLife();
void financeLife();
int main()
{
 srand(time(0));
 int luckyNum;
 char readingChoice;
 char readingTwo;
 
 cout << "What is your lucky number? " << endl;
 cin >> luckyNum;
 
 do
 {
 cout << "Which future do you want your reading in " << endl;
 cout << "Love life: L " << endl;
 cout << "School Life: S" <<endl;
 cout << "Finance: F" << endl;
 cout << "Choice: " <<endl;
 cin >> readingChoice;
 
 switch (toupper(readingChoice))
 {
 case 'L':
 loveLife();
 break;
 case 'S':
 schoolLife();
 break;
 case 'F':
 financeLife();
 break;
 default:
 cout << "Retype";
 break;
 
 
 }
 cout << "Would you like another reading ?" << endl;
 cout << "Y: yes" << endl;
 cout << "N: no" << endl;
 cin >> readingTwo;
 //while (tolower(readingTwo) == 'y');
 }while (tolower(readingTwo) == 'y');
 
 return 0;
}
void loveLife()
{
 int loveFortune = rand() % 4 + 1;
 switch (loveFortune)
 {
 case 1:
 cout << "You will be single";
 break;
 case 2:
 cout << "You will find your soulmate";
 break;
 case 3:
 cout << "You will get cheated on";
 break;
 case 4:
 cout << "You will be happy";
 break;
 }
}
void schoolLife()
{
 int schoolFortune = rand () % 4 + 1;
 switch (schoolFortune)
 {
 case 1:
 cout << "You will pass !";
 break;
 case 2:
 cout << "You will fail";
 break;
 case 3:
 cout << "You will have a perfect gpa";
 break;
 case 4:
 cout << "Your gpa will drop";
 break;
 }
}
void financeLife()
{
 int financeFortune = rand () % 4 + 1;
 switch (financeFortune)
 {
 case 1:
 cout << "You will get a well paid job";
 break;
 case 2:
 cout << "You will get fired";
 break;
 case 3:
 cout << "You will start a business";
 break;
 case 4:
 cout << "You will get injured in your job";
 break;
 }
