#include <iostream>
#include <string>
#include <vector>

class Animal {
protected:
    std::string name;
    std::string diet;
    std::string sleepingPattern;
    std::string accommodations;

public:
    Animal(const std::string& name, const std::string& diet, const std::string& sleepingPattern, const std::string& accommodations)
        : name(name), diet(diet), sleepingPattern(sleepingPattern), accommodations(accommodations) {}

    virtual void display() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Diet: " << diet << std::endl;
        std::cout << "Sleeping Pattern: " << sleepingPattern << std::endl;
        std::cout << "Accommodations: " << accommodations << std::endl;
    }

    std::string getName() const {
        return name;
    }
};

class Panda : public Animal {
public:
    Panda() : Animal("Panda", "Bamboo", "Nocturnal", "Enclosed habitat") {}
};

class Koala : public Animal {
public:
    Koala() : Animal("Koala", "Eucalyptus leaves", "Nocturnal", "Tree enclosure") {}
};

class Gorilla : public Animal {
public:
    Gorilla() : Animal("Gorilla", "Fruits, leaves, insects", "Diurnal", "Large enclosure") {}
};

class Lion : public Animal {
public:
    Lion() : Animal("Lion", "Meat", "Diurnal", "Savanna habitat") {}
};

class ZooManager {
private:
    std::string name;

public:
    ZooManager(const std::string& name) : name(name) {}

    void writeSchedule(const std::vector<Animal*>& animals) {
        std::cout << "Feeding, display, and enclosure cleaning schedule written by Zoo Manager: " << name << std::endl;
        for (const auto& animal : animals) {
            std::cout << "Schedule for " << animal->getName() << ":" << std::endl;
            // Add logic for writing schedule for each animal
        }
    }
};

int main() {
    Panda panda;
    Koala koala;
    Gorilla gorilla;
    Lion lion;

    ZooManager manager("John Doe");

    std::vector<Animal*> animals = {&panda, &koala, &gorilla, &lion};

    manager.writeSchedule(animals);

    return 0;
}
