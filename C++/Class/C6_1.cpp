#include <bits/stdc++.h>
using namespace std;
#define PI 3.14
class area
{
    float s;
public:
    inline int calc(int a)
    {
        return a * a;
    }
    inline float calc(float a)
    {
        return a * a;
    }
    inline int calc(int x, float y)
    {
        return x * y;
    }
    float calc(int x, int y, int z)
    {
        s = (x + y + z) / 2;
        return sqrt(s * (s - x) * (s - y) * (s - z));
    }
    float calc(float r,char c){
        return PI*r*r;
    }
};

int main(void)
{
    area side;
    int c;
    while (1)
    {
        cout << " ------CALCULATE AREA------\n\t1. Square\n\t2. Rectangle\n\t3. Triangle\n\t4. Circle\n\t5. Exit\nEnter Your choice: ";
        cin >> c;
        switch (c)
        {
        case 1:
            float s;
            cout << "\nEnter the side: ";
            cin >> s;
            if((int)s==s) cout << "Area of square is: " << side.calc((int)s) << "\n\n";
            else  cout << "Area of square is: " << side.calc(s) << "\n\n";
            break;

        case 2:
            float x, y;
            cout << "\nEnter the sides: ";
            cin >> x >> y;
            cout << "Area of rectangle is: " << side.calc(x, y) << "\n\n";
            break;

        case 3:
            float a, b, c;
            cout << "\nEnter the sides: ";
            cin >> a >> b >> c;
            cout << "Area of triangle is: " << side.calc(a, b, c) << "\n\n";
            break;

        case 3:
            float a, b, c;
            cout << "\nEnter the sides: ";
            cin >> a >> b >> c;
            cout << "Area of triangle is: " << side.calc(a, b, c) << "\n\n";
            break;
        
        case 4:
            float r;
            char c='r';
            cout<<"\nEnter the radius: ";
            cin>>r;
            cout<<"Area of circle is: "<< side.calc(r,c)<<"\n\n";
            break;

        case 5:
            goto end;
        
        default:
            cout << "Invalid Input Try Again...\n\n";
            break;
        }
    }
end:;
}