#include<iostream>
#include<string>
#include<vector>
#include "Animal.cpp"

int main()
{
	double d = 3.14159999999999999999992;
	float f = 2.71828;
	int i = 42;

	// TODO: Convert double to int
	std::cout << static_cast<int>(d) << std::endl;

	// TODO: Convert int to float
	std::cout << static_cast<float>(i) << std::endl;

	// TODO: Convert double to float
	std::cout << static_cast<float>(d) << std::endl;

	//------------------------------------------------------------------

	// TODO: Create Animal pointers pointing to Dog and Cat
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	std::shared_ptr<Dog> p_dog = std::make_shared<Dog>();
	std::shared_ptr<Dog> p_dog2 = p_dog;
	std::shared_ptr<Dog> p_dog_weak = p_dog;
	std::unique_ptr<Dog> p_u_dog;

	p_dog->fetch();
	p_dog2->fetch();

	dog->makeSound();
	cat->makeSound();

	// TODO: Try both static_cast and dynamic_cast to convert
	Dog* staticDog = static_cast<Dog*>(dog);
	std::cout << "Static_Cast Dog" << std::endl;
	staticDog->makeSound();
	staticDog->fetch();

	Cat* staticCat = static_cast<Cat*>(cat);
	std::cout << "Static_Cast Cat" << std::endl;
	staticCat->makeSound();
	staticCat->scratch();

	Cat* dynamicCat = dynamic_cast<Cat*>(cat);
	std::cout << std::endl << "Dynamic_Cast Cat" << std::endl;
	dynamicCat->makeSound();
	dynamicCat->scratch();

	Dog* dynamicDog = dynamic_cast<Dog*>(dog);
	std::cout << std::endl << "Dynamic_Cast Dog" << std::endl;
	dynamicDog->makeSound();
	dynamicDog->fetch();

	// TODO: Test what happens when casting to wrong type
	Dog* wrongStaticDog = static_cast<Dog*>(cat);
	std::cout << std::endl << "Wrong_Static_Cast Dog*" << std::endl;
	wrongStaticDog->makeSound();
	wrongStaticDog->fetch();

	Cat* wrongStaticCat = static_cast<Cat*>(dog);
	std::cout << std::endl << "Wrong_Static_Cast Cat*" << std::endl;
	wrongStaticCat->makeSound();
	wrongStaticCat->scratch();

	Cat* WrongDynamicCat = dynamic_cast<Cat*>(dog);
	if (WrongDynamicCat)
	{
		std::cout << std::endl << "Wrong_Dynamic_Cast Cat" << std::endl;
		WrongDynamicCat->makeSound();
		WrongDynamicCat->scratch();
	}
	else
	{
		std::cout << std::endl << "Cat is not a Dog" << std::endl;
	}

	Dog* WrongDynamicDog = dynamic_cast<Dog*>(cat);
	if (WrongDynamicDog)
	{
		std::cout << std::endl << "Wrong_Dynamic_Cast Dog" << std::endl;
		WrongDynamicDog->makeSound();
		WrongDynamicDog->fetch();
	}
	else
	{
		std::cout << std::endl << "Dog is not a cat" << std::endl;
	}

	//------------------------------------------------------------------

	/*std::string name = "Mei Huang";
	std::wstring namew = L"¡´ËÓ"; //wstring is unicode

	std::cout << "Hello " << name << std::endl;

	//------------------------------------------------------------------

	std::vector<int> arr;
	arr.push_back(4);
	arr.push_back(5);
	arr.push_back(6);*/

	//slow
	/*for (int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << std::endl;
	}*/

	//faster
	/*for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	/*for (auto it = arr.begin(); it != arr.end(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	/*for (int i : arr)
	{
		std::cout << i << std::endl;
	}*/

	//------------------------------------------------------------------

	return 1;
}