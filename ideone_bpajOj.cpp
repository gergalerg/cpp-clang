#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
    int a,b,c,x,y = 0;
    double answerpos,answerneg;
    double square;
    
	std::cout << "~~Quadratic Equation Solver~~ \nEnter A, B, and C: ";
    std::cin >> a >> b >> c;
    //'a' CANNOT = 0 in a quadratic equation. Should return to top, don't know how.
    if(a==0){
        std::cout << "That's not a quadratic equation yo!" << std::endl;
        
        return 0;
    }
    
    //Quadratic equation formula. x=-b±(√b^2-4(ac))/2*a
    square = sqrt(b*b-(4*a*c));
    answerpos = (-b+square)/(2*a);
    answerneg = (-b-square)/(2*a);
    
    std::cout << "\n" << std::endl;
    std::cout << "x = " << std::setprecision(3) << answerpos << std::endl;
    std::cout << "x = " << std::setprecision(3) << answerneg << std::endl;
    //std::cout << square << std::endl;
    
        y = ((a*answerpos*answerpos)+(b*answerpos));
        x = ((a*answerneg*answerneg)+(b*answerneg));
    
        if((y==c*-1)&&(x==c*-1)){
            std::cout << "Math check - Correct" << std::endl;
        }
        else{
            std::cout <<"Math check - Wrong.\nRepeating decimals don't check properly.\nWorked: " << x << std::endl;
        }
    
    return 0;
}
