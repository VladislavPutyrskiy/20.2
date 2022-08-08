#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>

int main()
{   
    std::srand(std::time(nullptr));
    int letter;
    std::string a, b;
    std::stringstream line;
    int width = 0;
    int high = 0;
    std::cout << "input the width and the high\n";
    std::cin >> a >> b;
    try
    {
        width = stoi(a);
        high = stoi(b);
    }
    catch (std::exception& err)
    {
        std::cout<<"incorrect input";
        return 0;
    }
    for (int i = 0; i < high; i++)
    {
        for (int j = 0; j < width; j++)
        {   
            letter = rand()%2;
            line << letter;
        }
        line << std::endl;
    }
    std::ofstream file("figure.txt");
    if (file.is_open())
    {
        file << line.str();
    }
    else
    {
        std::cout << "something wrong with file";
    }
}

