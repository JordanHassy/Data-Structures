#include <iostream>

class PhoneNumber {
    int countrycode;
    int areacode;
    int prefix;
    int last4;

    public:
        PhoneNumber() : countrycode{1}, areacode{000}, prefix{000}, last4{0000} {}
        PhoneNumber(int cc, int ac, int pr, int last) : countrycode{cc}, areacode{ac}, prefix{pr}, last4{last} {}

        int getCountrycode() {
            return countrycode;
        }

        int getAreacode() {
            return areacode;
        }
        
        int getPrefix() {
            return prefix;
        }

        int getLast4() {
            return last4;
        }

        void setCountrycode(int cc) {
            countrycode = cc;
        }

        void setAreacode(int ac) {
            areacode = ac;
        }

        void setPrefix(int pr) {
            prefix = pr;
        }

        void setLast4(int last) {
            last4 = last;
        }
};