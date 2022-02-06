#include <iostream>

using namespace std;

int Year = 2022;
int FirstOfJanuaryDay = 6;
string Day = "";
int leap_year = 2024;
// day to find
int date;
string mon;
int yer;

void number_to_day(int number){
    if(number == 1){
        Day = "Monday";
    }
    if(number == 2){
        Day = "Tuesday";
    }
    if(number == 3){
        Day = "Wednesday";
    }
    if(number == 4){
        Day = "Thursday";
    }
    if(number == 5){
        Day = "Friday";
    }
    if(number == 6){
        Day = "Saturday";
    }
    if(number == 7){
        Day = "Sunday";
    }
}

void day_to_number(string day){
    if(day == "Monday"){
        FirstOfJanuaryDay = 1;
    }
    if(day == "Tuesday"){
        FirstOfJanuaryDay = 2;
    }
    if(day == "Wednesday"){
        FirstOfJanuaryDay = 3;
    }
    if(day == "Thursay"){
        FirstOfJanuaryDay = 4;
    }
    if(day == "Friday"){
        FirstOfJanuaryDay = 5;
    }
    if(day == "Saturday"){
        FirstOfJanuaryDay = 6;
    }
    if(day == "Sunday"){
        FirstOfJanuaryDay = 7;
    }
}

int month(string month_name, int number_of_days){
    for(int i = 1; i <= number_of_days; i++){
        number_to_day(FirstOfJanuaryDay);
        if(i == date && month_name == mon && Year == yer){
            cout << Day << " " << i << " " << month_name << " " << Year << endl;
        }
        day_to_number(Day);
        FirstOfJanuaryDay += 1;
        if(FirstOfJanuaryDay > 7){
            FirstOfJanuaryDay = 1; // Go back to Monday after a Sunday
        }

    }
    return 0;
}

int main(){
    cout << "Date to find : " ;
    cin >> date >> mon >> yer;
    int space = (yer-Year)+1;
    for(int c; c <= space; c++){
        int February = 28;
        if(Year == leap_year){
            February = 29;
            leap_year += 4;
        }
        month("January", 31);
        month("February", February);
        month("March", 31);
        month("April", 30);
        month("Mai", 31);
        month("June", 30);
        month("July", 31);
        month("August", 31);
        month("September", 30);
        month("October", 31);
        month("November", 30);
        month("December", 31);
        Year += 1;
    }

    return 0;
}
