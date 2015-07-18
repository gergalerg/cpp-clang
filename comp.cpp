#include <iostream>

class Object
{
public:
    virtual ~Object() {}
    virtual void update() {}
    virtual void draw() {}
    virtual void collide(Object objects[]) {}
};

class Visible : public Object
{
public: 
    virtual void draw() override { }
}