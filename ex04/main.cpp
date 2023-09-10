#include "replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std :: cout << "invalid argument\n";
        return 0;
    }
    std :: string str;
    std :: ofstream replace("file.replace");
    std :: ifstream file(av[1]);
    if (file.is_open())
    {
        while (getline(file, str))
        {
            if (str.find(av[2]))
                replaceSubstr(str,av[3]);
            replace << str << "\n";
        }
    }
}

