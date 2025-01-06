#include <iostream>

class A{
    public:
        int pubA = 10;
    private:
        int privA = 20;  
    protected:
        int protA = 30; 
};

class B {
    public:
        int pubB = 40;
    private: 
        int privB = 50;    
    protected:
        int protB = 60;
};

class C : public A, public B{
    public:
        int pubC = 40;
    private: 
        int privC = 50;    
    protected:
        int protC = 60;
};


int main() {


    return 0;
}

