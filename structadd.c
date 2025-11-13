struct complex
{
double real;
double img;
};
int main()
{
    struct complex c1;
    c1.real=10;
    c1.img=20;
    struct complex c2;
    c2.real=5;
    c2.img=2;

    struct complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;

     printf("Sum = %.2lf + %.2lfi\n", c3.real, c3.img);

    return 0;
}