#include <vector>
#include <iostream>

std::vector<int> findPrimes(int max)
{
    std::vector<int> primes;

    primes.push_back(2);

    for (int i = 3; i < max; i += 2)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else if (j == i - 1)
            {
                primes.push_back(i);
            }
        }
    }

    return primes;
}

int main()
{
    int max = 0;

    std::cout << "What is your max prime?";
    std::cin >> max;

    std::vector<int> primes = findPrimes(max);

    for (auto prime : primes)
    {
        std::cout << prime << ' ';
    }

    return 0;
}