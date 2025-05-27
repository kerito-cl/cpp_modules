#include "Serializer.hpp"

int main() 
{
    Data data;
    data.id = 42;
    data.name = "Kero Data";


    uintptr_t raw = Serializer::serialize(&data);

    std::cout << "Unsigned Int:    " << raw << "\n";

    Data* deserialized = Serializer::deserialize(raw);

    std::cout << "Original Pointer:    " << &data << "\n";
    std::cout << "Deserialized Pointer:" << deserialized << "\n";

    if (deserialized == &data) 
    {
        std::cout << "Data ID: " << deserialized->id << ", Name: " << deserialized->name << "\n";
    } 

    return 0;
}