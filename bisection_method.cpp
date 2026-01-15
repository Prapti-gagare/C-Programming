#include <iostream>
#include <cmath>
using namespace std;
double M(double x)
{
    return x*x*x - x - 2;
}

int main(){
    double a, b, tol;
    int k, n = 0;
    cout << "Enter a and b (interval): ";
    cin >> a >> b;

    cout << "Enter k for tolerance = 10^(-k): ";
    cin >> k;
    tol = pow(10, -k);

    if(M(a)*M(b) >= 0){
        cout << "Invalid interval!";
        return 0;
    }

    double m_prev = a, m_curr;

    do{
        m_curr = (a + b) / 2.0;
        n++;

        if(M(a) * M(m_curr) < 0)
            b = m_curr;
        else
            a = m_curr;

        cout << "Iteration " << n 
             << "  Mid = " << m_curr 
             << "  |M(curr)-M(prev)| = " 
             << fabs(m_curr - m_prev) << endl;

        if(fabs(m_curr - m_prev) < tol)
            break;

        m_prev = m_curr;

    }
    while(true);

    cout << "\nRoot ≈ " << m_curr << endl;
    cout << "Tolerance = " << tol << endl;
    cout << "Total iterations = " << n << endl;

    return 0;
}
