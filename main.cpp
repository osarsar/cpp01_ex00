#include <iostream>

class zombie
{
    private:
        std::string name;

    public:
        ~zombie();
        void anounce(void);
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
};

void zombie::anounce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

zombie* zombie::newzombie(std::string name)
{
    zombie Z1;
    
    Z1.name = name;
    return (Z1);
}

void zombie::randomChump( std::string name )
{
    zombie Z2;

    Z2.name = name;
    Z2.anounce();
}

zombie::~zombie()
{
    std::cout << "the Zombie: " << this->name << " :has been destroyed\n";
}
