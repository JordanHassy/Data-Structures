#include <iostream>
using namespace std;

int main() {
    string str;
    while(getline(cin, str)) {
        cout << "INSERT INTO `course_section` (`C_Sec_ID`, `Course_ID`, `Term_ID`, `Sec_Num`, `F_ID`, `C_Sec_Day`, `C_Sec_Start`, `C_Sec_End`, `Loc_ID`, `Max_Enrl`) \nVALUES (";
        int count = 0;
        int cols = 10;
        for(int i = 0; i < cols; ++i) {
            cout << "'";
            while(str[count] != ' ' && count < str.length()) {
                cout << str[count];
                count++;
            }
            count++;
            if(i<cols-1)
                cout << "', ";
            else
                cout << "');";
        }
        cout << '\n';
    }
}