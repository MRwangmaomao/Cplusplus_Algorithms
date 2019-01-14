// Class_Templates.cbp
#include <iostream>

using namespace std;

class Animal
{
protected:
    string m_name;

public:
    Animal(string name) : m_name(name)
    {

    }

    // The interface that has to be implemented
    // in derived class
    virtual string MakeSound() = 0;

    string GetName()
    {
        return m_name;
    }

};

class Dog : public Animal
{
public:
    // Forward the constructor arguments
    Dog(string name) : Animal(name) {}

    // Copy assignment operator overloading
    void operator = (const Dog &D)
    {
         m_name = D.m_name;
    }

    // here we implement the interface
    string MakeSound() override
    {
        return "woof-woof!";
    }

};

class Cat : public Animal
{
public:
    // Forward the constructor arguments
    Cat(string name) : Animal(name) {}

    // Copy assignment operator overloading
    void operator = (const Cat &D)
    {
         m_name = D.m_name;
    }

    // here we implement the interface
    string MakeSound() override
    {
        return "meow-meow!";
    }

};

template<typename T>
void GetNameAndMakeSound(T& theAnimal)
{
    cout << theAnimal.GetName() << " goes ";
    cout << theAnimal.MakeSound() << endl;
}

template <typename T>
class AnimalTemplate
{
private:
    T m_animal;

public:
    AnimalTemplate(T animal) : m_animal(animal) {}

    void GetNameAndMakeSound()
    {
        cout << m_animal.GetName() << " goes ";
        cout << m_animal.MakeSound() << endl;//对应实际对象
    }
};

int main()
{
    Dog dog = Dog("Bulldog");
    AnimalTemplate<Dog> dogTemplate(dog); //模板对象 Dog为模板类的实体 dog为构造函数的参数
    cout << dog.MakeSound();//对象和方法
    dogTemplate.GetNameAndMakeSound();//模板对象的方法

    Cat cat = Cat("Persian Cat");
    AnimalTemplate<Cat> catTemplate(cat);
    catTemplate.GetNameAndMakeSound();

    return 0;
}
