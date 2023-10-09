#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

class Animal {

private:
    string name;
    string species;

     inline static int numOfAnimals = 0;

public:

    Animal(string theName, string theSpecies) {
        // this is what happens when the constructor is called

        // theName is passed to the constructor and then assigned to the private field, name
        name = theName;

        // theSpecies is passed and assigned to the private field
        species = theSpecies;

        numOfAnimals++;

    }
    // Create a getter for name
    string getAnimalName() {
      return name;
    }

    // Create a getter for species
    string getAnimalSpecies() {
      return species;
    }

    int getNumOfAnimals() {
      return numOfAnimals;
    }


};

class Hyena:public Animal{
private:
    int weight;

    inline static int numOfHyenas = 0;


public:
  //  Hyena(int aWeight):Animal("aName",  "aSpecies") {
    Hyena(string aName, string aSpecies):Animal(aName,  aSpecies) {
        numOfHyenas++;
    }

    // getter for numOfHyenas
    int getNumOfHyenas() {
       return numOfHyenas;
    }

};

class Lion:public Animal{
private:
    int weight;

    inline static int numOfLions = 0;


public:
  //  Hyena(int aWeight):Animal("aName",  "aSpecies") {
    Lion(string aName, string aSpecies):Animal(aName,  aSpecies) {
        numOfLions++;
    }

    // getter for numOfHyenas
    int getNumOfLions() {
       return numOfLions;
    }

};

class Tiger:public Animal{
private:
    int weight;

    inline static int numOfTigers = 0;


public:
  //  Hyena(int aWeight):Animal("aName",  "aSpecies") {
    Tiger(string aName, string aSpecies):Animal(aName,  aSpecies) {
        numOfTigers++;
    }

    // getter for numOfHyenas
    int getNumOfTigers() {
       return numOfTigers;
    }

};

class Bear:public Animal{
private:
    int weight;

    inline static int numOfBears = 0;


public:
  //  Hyena(int aWeight):Animal("aName",  "aSpecies") {
    Bear(string aName, string aSpecies):Animal(aName,  aSpecies) {
        numOfBears++;
    }

    // getter for numOfHyenas
    int getNumOfBears() {
       return numOfBears;
    }

};



int main()
{
    cout << "Welcome to Animal Class practice" << endl;




    string filePath = "C:\\Users\\BE129\\cStuff\\arrivingAnimals.txt";
    ifstream inputFile(filePath);

    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open file " << filePath << std::endl;
        return 1;
    }

    // Create a vector to store Animal objects
    vector<Animal> animalList;

    string line;
    while (getline(inputFile, line)) {


            string name = line.substr(0, 15);
            string species = line.substr(16, 7);

            // Create an Animal object and add it to the list
            Animal animal(name, species);
            animalList.push_back(animal);

    }

    // Close the file
    inputFile.close();


    // Load animal names into the species' classes.
    string filePath02 = "C:\\Users\\BE129\\cStuff\\animalNames.txt";
    ifstream inputFile02(filePath02);
    string names;

    if (!inputFile02.is_open()) {
        std::cerr << "Error: Unable to open file " << filePath02 << std::endl;
        return 1;
    }



    string line02;
    int lineNum = 1;
    while (getline(inputFile02, line02)) {
        if (lineNum ==3 ){
            names = line02;
        }
        lineNum++;
    }

    // Close the file
    inputFile02.close();

    // Output the string of names
    cout << "\n\n the line of names is: " << names << "\n\n";

    // split the string into a vector
    // Create a vector to store Animal objects
    vector<string> animalNameList;

    // this is what my names look like:
    // Shenzi, Banzai, Ed, Zig, Bud, Lou, Kamari, Wema, Nne, Madoa, Prince Nevarah


    int posStart = 0;
    int posEnd = 0;
    int posComma = 0;

    posComma = names.find(",");

    cout << "\n posComma is " << posComma << "\n\n";

    // get the first name
    string firstName = names.substr(posStart, posComma);
    cout << "\n firstName is " << firstName << "\n\n";







    // Print the list of animals
    for (Animal someAnimal : animalList) {
        cout << "\n\n Name: " << someAnimal.getAnimalName() << "\n\n";
        cout << "\n\n Species: " << someAnimal.getAnimalSpecies() << "\n\n";
    }

 //   cout << "Total number of animals: " << someAnimal. << endl;






    // Create an Animal object.
    Animal myAnimal = Animal("Scar","lion");

    Animal myAnimal02 = Animal("Zig","hyena");

    Animal myAnimal03 = Animal("Ed","hyena");

    Hyena myHyena = Hyena("Kamari", "hyena");

    Hyena myHyena02 = Hyena("Madoa", "hyena");

    Lion myFirstLion = Lion("Mufasa", "lion");
    Lion mySecondLion = Lion("Simba", "lion");

    Tiger myTiger01 = Tiger("Tony", "tiger");
    Tiger myTiger02 = Tiger("Amber", "tiger");

    // Create three bears.
    Bear myBear01 = Bear("Yogi", "bear");
    Bear myBear02 = Bear("Smokey", "bear");
    Bear myBear03 = Bear("Paddington", "bear");


    cout << "The Hyena's name is: " << myHyena.getAnimalName();

    cout << "\n Number of Animals: " << myAnimal03.getNumOfAnimals() << "\n\n";

    cout << "\n Number of Hyenas: " << myHyena.getNumOfHyenas()  << "\n\n";

    cout << "\n Number of Lions: " << myFirstLion.getNumOfLions()  << "\n\n";

    cout << "\n Number of Tigers: " << myTiger01.getNumOfTigers()  << "\n\n";

    cout << "\n Number of Bears: " << myBear01.getNumOfBears()  << "\n\n";



    // Output the object's name.
    cout << "\n The animal's name is: " << myAnimal.getAnimalName() << "\n";

    cout << "The number of animals is: " << myAnimal.getNumOfAnimals() ;


    return 0;
}



