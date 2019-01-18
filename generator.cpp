///#include <cstdio>
#include <random>
#include <iostream>

int main ()
{
	///freopen("test.in", "w", stdout);
    std::random_device rd;
    std::default_random_engine gen(rd());
    //std::uniform_int_distribution<> rand_n(5,10);
    std::uniform_int_distribution<long long> rand(0, 100000);
	std::cout << rand(gen) << " " << rand(gen) << "\n";
    return 0;
}
