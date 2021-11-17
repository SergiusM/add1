#include <iostream>

int main()
{
    int q1, p1, q2, p2, A, mins = 10000000,s= 10000000;
    std::cin >> q1 >> p1 >> q2 >> p2 >> A;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if ((i * q1 + j * q2) >= A)
            {
                s = i * p1 + j * p2;
            }
            if (s < mins)
            {
                mins=s;
            }
        }
    }
    std::cout << mins;
}
