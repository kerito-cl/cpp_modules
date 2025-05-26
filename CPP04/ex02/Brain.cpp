#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    for (int i = 0; i < 100 ; i++)
    {
        _ideas[i] = other._ideas[i];
    }
}
Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100 ; i++)
        {
            _ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

void Brain::setIdeas(std::string idea, int n)
{
    _ideas[n] = idea;

}

void Brain::getIdeas(int n)
{
    std::cout << _ideas[n] << std::endl;
}
