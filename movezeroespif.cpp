#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int pos = 0;
    int cont = 0;
    // Começou de frente pra trás
    for (int i = 0; i != nums.size(); i++)
    {
        // Contagem do número de zeros
        if (nums[i] == 0)
            cont++;
        else
        {
            // Vai pegando os cara
            nums[pos] = nums[i];
            // E atualizando os pointers
            pos++;
        }
    }
    // Coloca o número de zeros
    for (int i = 0; i != cont; i++)
    {
        nums[nums.size() - i - 1] = 0;
    }
}

int main()
{
    vector<int> nums = {0, 1, 2, 0, 3, 0, 1, 0};
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
        std::cout << nums.at(i) << ' ';
}