
#include <iostream>
using namespace std;

int main()
{
    int number,temp;
    cout << "Enter a 4-digit number: ";
    cin >> number;

    if (number >= 1000 && number <= 9999)
        {
        int digits[4];


        digits[0] = number / 1000;
        digits[1] = (number % 1000) / 100;
        digits[2] = (number % 100) / 10;
        digits[3] = number % 10;


        for (int i = 0; i < 3; ++i)
            {
            for (int j = i + 1; j < 4; ++j)
             {
                if (digits[i] < digits[j])
                 {
                    temp = digits[i];
                    digits[i] = digits[j];
                    digits[j] = temp;
                 }
            }
        }

        int maxNumber = digits[0] * 1000 + digits[1] * 100 + digits[2] * 10 + digits[3];
        int minNumber = digits[3] * 1000 + digits[2] * 100 + digits[1] * 10 + digits[0];

        cout << "Maximum number formed is: " << maxNumber << endl;
        cout << "Minimum number formed is: " << minNumber << endl;
    }
    else
    {
        cout << "Please enter a valid 4-digit number " << endl;
    }

    return 0;
}

























/*#include <iostream>

using namespace std;

int main()
{
    int num,d1,d2,d3,d4,maxd,mind;
    int maxNumber,minNumber;
    cout << "Enter a number" << endl;
    cin >> num;

    if (num > 999 && num <=9999)
    {
        d1=  num/1000;
        d2=  (num/100) % 10;
        d3=  (num/10) %10;
        d4=  num%10;

        maxd=d1;
        if (d2 >maxd)
            maxd=d2;

        if (d3>maxd)
            maxd=d3;

        if (d4>maxd)
            maxd=d4;


        mind=d1;
        if (d2 <mind)
            mind=d2;


        if (d3<mind)
            mind=d3;


        if(d4<mind)
            mind=d4;



        cout << "The maximum digit is :" << maxd << endl;
        cout << "The minimum digit is :" << mind << endl;

       // maxNumber = maxd * 1000 + ((d1 == maxd) ? 0 : d1) * 100 + ((d2 == maxd) ? 0 : d2) * 10 + ((d3 == maxd || d4 == maxd) ? 0 : d3);
       // minNumber = mind * 1000 + ((d1 == mind) ? 9 : d1) * 100 + ((d2 == mind) ? 9 : d2) * 10 + ((d3 == mind || d4 == mind) ? 9 : d3);

        maxNumber = maxd * 1000 + ((d4 == maxd) ? 0 : d4) * 100 + ((d1 == maxd) ? 0 : d1) * 10 + ((d3 == maxd || d4 == maxd) ? d2 : 0);

        minNumber = mind * 1000 + ((d1 != mind) ? d1 : min(d2, min(d3, d4))) * 100 + ((d2 != mind) ? d2 : min(d3, d4)) * 10 + ((d3 != mind) ? d3 : d4);



        cout << "The maximum number is :" << maxNumber << endl;
        cout << "The minimum number is :" << minNumber << endl;

    }

    else
        {
            cout << "Enter a valid 4 digit number" << endl;
        }


    return 0;
}*/
