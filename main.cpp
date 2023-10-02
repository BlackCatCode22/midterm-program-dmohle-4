#include <iostream>

using namespace std;

class Animal {



private:
    string name;
    string species;

     int numOfAnimals = 0;

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

    int getNumOfAnimals() {
      return numOfAnimals;
    }


};

class Hyena:public Animal{
private:
    int weight;


public:
    Hyena(int theWeight):Animal("aStr01", "aStr02") {
       weight = theWeight;
    }

};






int main()
{
    cout << "Welcome to Animal Class practice" << endl;

    // Create an Animal object.
    Animal myAnimal = Animal("Scar","lion");

    Animal myAnimal02 = Animal("Zig","hyena");

    Animal myAnimal03 = Animal("Ed","hyena");

    Hyena myHyena = Hyena(70);

    cout << "The Hyena's name is: " << myHyena.getAnimalName();








    // Output the object's name.
    cout << "\n The animal's name is: " << myAnimal.getAnimalName() << "\n";

    cout << "The number of animals is: " << myAnimal.getNumOfAnimals() ;


    return 0;
}
