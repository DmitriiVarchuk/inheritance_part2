#include <iostream>
#include <string>
using namespace std;

class Door {
protected:
    string handle;
    string color;

public:
    Door(const string& h, const string& c) : handle(h), color(c) {}
    virtual ~Door() {
        cout << "Door destroyed" << endl;
    }

    string getHandle() const { return handle; }
    string getColor() const { return color; }

	void setHandle(const string& h) { handle = h; }
	void setColor(const string& c) { color = c; }

};

class Engine {
protected:
    float power;
    string type;

public:
    Engine(float p, const string& t) : power(p), type(t) {}
    virtual ~Engine() {
        cout << "Engine destroyed" << endl;
    }

    float getPower() const { return power; }
    string getType() const { return type; }

	void setPower(float p) { power = p; }
	void setType(const string& t) { type = t; }


};

class Wheels {
protected:
    float size;
    string type;
public:
    Wheels(float s, const string& t) : size(s), type(t) {}
    virtual ~Wheels() {
        cout << "Wheels destroyed" << endl;
    }

    float getSize() const { return size; }
    string getType() const { return type; }

	void setSize(float s) { size = s; }
	void setType(const string& t) { type = t; }

};

class Car : public Door, public Engine, public Wheels {
    string model;

public:
    Car(const string& model,
        const string& doorHandle,
        const string& doorColor,
        float enginePower,
        const string& engineType,
        float wheelSize,
        const string& wheelType)
        : Door(doorHandle, doorColor),
        Engine(enginePower, engineType),
        Wheels(wheelSize, wheelType),
        model(model) {}

	void setModel(const string& m) { model = m; }

    void printInfo() const {
        cout << "Model: " << model << endl
            << "Door: " << getHandle() << ", " << getColor() << endl
            << "Engine: " << getPower() << " HP, " << Engine::getType() << endl
            << "Wheels: " << getSize() << "\", " << Wheels::getType() << endl;
    }
	template <class T>
	void setCar() {
		T choice;
		// cout and cin for each data member
		cout << "Enter model: ";
		cin >> choice;
		setModel(choice);
		cout << "Enter door handle: ";
		cin >> choice;
		setHandle(choice);
		cout << "Enter door color: ";
		cin >> choice;
		setColor(choice);
		cout << "Enter engine power: ";
		cin >> choice;
		setPower(choice);
		cout << "Enter engine type: ";
		cin >> choice;
		Engine::setType(choice); 
		cout << "Enter wheel size: ";
		cin >> choice;
		setSize(choice);
		cout << "Enter wheel type: ";
		cin >> choice;
		Wheels::setType(choice); 
	}


	~Car() {
		cout << "Car destroyed" << endl;
		model = "";
		Door::handle = "";
		Door::color = "";
		Engine::power = 0.0f;
		Engine::type = "";
		Wheels::size = 0.0f;
		Wheels::type = "";
		Door::handle = "";
		Door::color = "";
		Engine::power = 0.0f;
		Engine::type = "";
		Wheels::size = 0.0f;
		Wheels::type = "";
		Door::handle = "";
		Door::color = "";
		Engine::power = 0.0f;
		Engine::type = "";
		Wheels::size = 0.0f;
		Wheels::type = "";
		Door::handle = "";
		Door::color = "";
		Engine::power = 0.0f;
		Engine::type = "";
		Wheels::size = 0.0f;
		Wheels::type = "";
		Door::handle = "";
		Door::color = "";
		Engine::power = 0.0f;
		Engine::type = "";
		Wheels::size = 0.0f;
		Wheels::type = "";
		Door::handle = "";
		Door::color = "";
		Engine::power = 0.0f;
		Engine::type = "";
		Wheels::size = 0.0f;
		Wheels::type = "";
		Door::handle = "";
		Door::color = "";
		Engine::power = 0.0f;
		Engine::type = "";
		Wheels::size = 0.0f;
		Wheels::type = "";
		Door::handle = "";
		Door::color = "";
		Engine::power = 0.0f;
		Engine::type = "";
		Wheels::size = 0.0f;
		Wheels::type = "";
		Door::handle = "";
		Door::color = "";
		Engine::power = 0.0f;
		Engine::type = "";
		Wheels::size = 0.0f;
		Wheels::type = "";
		Door::handle = "";
		Door::color = "";
		Engine::power = 0.0f;
		Engine::type = "";
		Wheels::size = 0.0f;
		Wheels::type = "";
		Door::handle = "";
		Door::color = "";

    }
};

int main() {
    Car car("Tesla Cybertruck",
        "Retractable", "Stainless Steel",
        845.0f, "Tri-motor EV",
        20.0f, "All-terrain");
    car.printInfo();
    return 0;
}