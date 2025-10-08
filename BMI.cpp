#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float wt, ht, bmi;
    cout<<"the weight of the person is: ";
    cin>>wt;
    cout<<"the height of the person is: ";
    cin>>ht;
    bmi = wt/(ht*ht);
    cout<<fixed<<setprecision(2);
    cout<<bmi<<endl;
    if (bmi < 18.5)
        cout<<"category: underweight"<<endl;
    else if (bmi>= 18.5 && bmi < 24.9)
        cout<<"category:Normal weight"<<endl;
    else if (bmi >= 25 && bmi < 29.9)
        cout<<"category: overweight"<< endl;
    else
        cout<<"category: obese"<< endl;
    return 0;
}
