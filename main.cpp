
#include <iostream>

using namespace std;

int Year;
int FirstOfJanuaryDay = 1;
string Day = "";

void number_to_day(int number){
    if(number == 1){
        Day = "Mon";
    }
    if(number == 2){
        Day = "Tue";
    }
    if(number == 3){
        Day = "Wed";
    }
    if(number == 4){
        Day = "Thu";
    }
    if(number == 5){
        Day = "Fri";
    }
    if(number == 6){
        Day = "Sat";
    }
    if(number == 7){
        Day = "Sun";
    }
}

void day_to_number(string day){
    if(day == "Mon"){
        FirstOfJanuaryDay = 1;
    }
    if(day == "Tue"){
        FirstOfJanuaryDay = 2;
    }
    if(day == "Wed"){
        FirstOfJanuaryDay = 3;
    }
    if(day == "Thu"){
        FirstOfJanuaryDay = 4;
    }
    if(day == "Fri"){
        FirstOfJanuaryDay = 5;
    }
    if(day == "Sat"){
        FirstOfJanuaryDay = 6;
    }
    if(day == "Sun"){
        FirstOfJanuaryDay = 7;
    }
}

int month(string month_name, int number_of_days){
    
    int temp = FirstOfJanuaryDay;
    string Daytemp = Day;
    
    cout<<"\n\n"<<month_name<<"\n";
    for(int i = 1;i<=7;i++){
        number_to_day(FirstOfJanuaryDay);
        cout<<Day<<" ";
        day_to_number(Day);
        FirstOfJanuaryDay += 1;
        if(FirstOfJanuaryDay>7){
            FirstOfJanuaryDay = 1;
        }
    }  //for days of the week
    cout<<"\n";
    
    FirstOfJanuaryDay = temp;
    Day = Daytemp;
    
    for(int i = 1; i <= number_of_days; i++){
        number_to_day(FirstOfJanuaryDay);
        cout << i <<"  ";
        if(i<10){cout<<" ";}//Alignment
        day_to_number(Day);
        FirstOfJanuaryDay += 1;
        if(FirstOfJanuaryDay > 7){
            FirstOfJanuaryDay = 1; // Go back to Monday after a Sunday
        }
        if(i%7==0){
            cout<<"\n";
        }//Line Allignment
    }
    return 0;
}

int main()
{
    string v = "1.0.0";
    cout << "Kalender v " << v << endl;
    cout << "Day of the week on which the 1st of January falls (1 for Monday, 2 for Tuesday ...) : " ;
    input: cin >> FirstOfJanuaryDay;
    if(FirstOfJanuaryDay > 7 || FirstOfJanuaryDay < 1){
        cout << "This number is not appropriate. Please enter a number between 1 and 7." << endl;
        goto input;
    }
    cout << "Year : ";
    cin >> Year;
    cout << "Next leap year : ";
    int leap_year;
    cin >> leap_year;
    cout << "How many years do you want to generate (Try not to go over 4, or else some wrong results may appear) ? ";
    int years;
    cin >> years;
    for(int o = 1; o <= years; o++){
        int February = 28;
        if(Year == leap_year){
            February = 29;
            leap_year += 4;
        }
        cout<<"\n\n"<<Year;
        month("January", 31);
        month("February", February);
        month("March", 31);
        month("April", 30);
        month("May", 31);
        month("June", 30);
        month("July", 31);
        month("August", 31);
        month("September", 30);
        month("October", 31);
        month("November", 30);
        month("December", 31);
        Year += 1;
    }
    int finish; // In order to be able to search day within the Kalender
    cin >> finish;
    return 0;
}
