#include <iostream>

namespace DuckTyping {
    using std::cout;
    using std::endl;

    struct Duck {
        void Quack() {
            cout << "Quack" << endl;
        }

        void Feathers() {
            cout << "The duck has white and gray feathers." << endl;

        }
    };

    struct Person {
        void Quack() {
            cout << "The person imitates a duck." << endl;
        }

        void Feathers() {
            cout << "The person takes a feather from the ground" << endl;
        }
    };

    class Program {
        template <class T> void InTheForest(T& duck) {
        duck.Quack();
        duck.Feathers();
    }

    public:
        void Game() {
            Duck donald;
            Person john;
            InTheForest(donald);
            InTheForest(john);
        }
    };
}

int main() {
    DuckTyping::Program program;
    program.Game();
    return 0;
}
