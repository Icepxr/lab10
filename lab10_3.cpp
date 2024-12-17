//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include <iomanip>
#include<cmath>
using namespace std;

int main(){
    int count=0;
    float sum =0,sum_pow=0;  
    float u_pow,u,stder;
    string textline;
    ifstream source("score.txt");

    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sum_pow += pow(atof(textline.c_str()),2);
        count ++;
    }

    u = (1.00/count)*sum;
    u_pow = pow(u,2);
    stder = sqrtf(((1.00/count)*sum_pow)-u_pow);
    cout << setprecision(3);
    cout << "Number of data = "<<count <<endl;
    cout << "Mean = "<<sum/count<<endl;
    
    
    cout << "Standard deviation = "<<stder<<endl;
}