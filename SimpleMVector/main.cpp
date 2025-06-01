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
	if (dynamicCat) {
		std::cout << std::endl << "Dynamic_Cast Cat" << std::endl;
		dynamicCat->makeSound();
		dynamicCat->scratch();
	}

	Dog* dynamicDog = dynamic_cast<Dog*>(dog);
	if (dynamicDog) {
		std::cout << std::endl << "Dynamic_Cast Dog" << std::endl;
		dynamicDog->makeSound();
		dynamicDog->fetch();
	}

	// TODO: Test what happens when casting to wrong type
	Dog* wrongStaticDog = static_cast<Dog*>(cat);
	std::cout << std::endl << "Wrong_Static_Cast Dog*" << std::endl;
	wrongStaticDog->makeSound();
	wrongStaticDog->fetch();

	Cat* wrongStaticCat = static_cast<Cat*>(dog);
	std::cout << std::endl << "Wrong_Static_Cast Cat*" << std::endl;
	wrongStaticCat->makeSound();
	wrongStaticCat->scratch();

	//------------------------------------------------------------------

	/*std::string name = "Mei Huang";
	std::wstring namew = L"°¥À”"; //wstring is unicode

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