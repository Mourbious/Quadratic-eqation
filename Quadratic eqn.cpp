#include <bits/stdc++.h>
using namespace std;

int main() {

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: \n";
    cin >> a >> b >> c;
    system("cls");
    
    if(a==0){
    	cout<<"Given equation is not quadratic!!!!!";
	}
	else{
	cout<<"\n Your Quadratic Equation is : ("<<a<<")x^2 + ("<<b<<")x + ("<<c<<")\n";
    discriminant = b*b - 4*a*c;
        
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "\n Roots are real and different." << endl;
        cout << "\n x1 = " << x1 << endl;
        cout << "\n x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "\n Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "\n x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "\n Roots are complex and different."  << endl;
        cout << "\n x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "\n x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
}
    return 0;
}
