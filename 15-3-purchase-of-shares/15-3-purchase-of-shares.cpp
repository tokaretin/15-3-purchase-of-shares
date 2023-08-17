#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = { 1, 7, 5, 3, 5, 6, 8 };
    int max_pr = 0;
    int min_w = vec[0];

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] < min_w)
        {
            min_w = vec[i];
        }

        if (max_pr < vec[i] - min_w)
            max_pr = vec[i] - min_w;
    }

    std::cout << max_pr;
    return 0;
}

