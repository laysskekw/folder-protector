#include <iostream>

int lock() 
{

    system("ren Private Keeper.ans");
    system("attrib +h +s Keeper.ans");
    return 0;
}

int unlock()
{
    system("attrib -s -h Keeper.ans");
    system("ren Keeper.ans Private");
    return 0;
}

int main()
{
    
    int choose;
    std::cout << "1) Lock your folder\n2) Unlock your folder\nChoose: ";
    std::cin >> choose;
    if (choose != 1 && choose != 2)
    {
        std::cout << "what a dumbass lmao";
        return 0;
    }
  
    if (choose == 1) lock();

    if (choose == 2) {
        std::string password;
        std::cout << "Insert your password: ";
        std::cin >> password;
        if (password == "password") {
            unlock();
        }
        else std::cout << "wrong password"; return 0;

    }
}

