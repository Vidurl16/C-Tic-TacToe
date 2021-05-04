/*
Student number: 401914025
Student name: Vidur Lutchminarain
Year: BSc IT second year
Assignment for Programming 621
Question 1

Desctription: I made a function (reduce), to reduce a fraction. To find the the reduction of a fraction
              we need to find the greatest common divisor, this is fone woth a loop and a '.
*/
#include <iostream>

using namespace std;
//variables needed for multiple functions:
int m;
int n;

//reduce function declared below:
int reduce(int num, int denom);



int main()
{

//asks for the numerator and denominator:
cout<<"Please enter the numerator:"<<endl;
cin>>m;

cout<<"Please enter the denominator:"<<endl;
cin>>n;

//if statement checks if the reduction function was successful
if(reduce(m,n) == 1){
        cout<<"The reduction is: "<< m <<'/'<<n<<endl; //Outputs the results
}
else
{
    cout<<"fractional error"<<endl;
}
return 0;
}



//Function returns the reduced fraction
int reduce(int num, int denom)
{
    if(num <= 0||denom <= 0){   //Checks if it is greater than 0
        return 0;
    }else
    {
        //temp variables used for the loop
        int num1 = num;
        int num2 = denom;
        int temp;
        //while loop and a sorting with a mod condition to find the highest common denom
        while( (num1 % num2) > 0){
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }

        m = num/num2;//div by gcd
        n = denom/num2;//div by gcd

        return 1;
    }

}





