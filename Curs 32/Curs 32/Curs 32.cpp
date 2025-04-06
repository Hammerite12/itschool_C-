#include <iostream>
#include <memory>

/*
class Test {
private:
    int data;
public:
    Test() : data{ 0 } { std::cout << "Test constructor (" << data << ")" << std::endl; }
    Test(int data) : data{data} { std::cout << "Test constructor (" << data << ")" << std::endl; }
    int get_data()const { return data; }
    ~Test() { std::cout << "Test constructor (" << data << ")" << std::endl; }
};

int main() {
    
    //Test* t1 = new Test{ 1000 };
    //delete t1;

    std::unique_ptr<Test> t1{ new Test {100} };
    std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);

    std::unique_ptr<Test> t3;
    t3 = std::move(t1);
    if (!t1) {
        std::cout << "t1 is nullptr" << std::endl;
    }

    std::shared_ptr<int>p1{ new int{1000} };
    std::cout << "use cout" << p1.use_count() << std::endl;

    std::shared_ptr<int>p2{ p1 };       //shared ownership
    std::cout << "use cout" << p1.use_count() << std::endl;

    p1.reset();

    std::cout << "use cout" << p1.use_count() << std::endl;
    std::cout << "use cout" << p2.use_count() << std::endl;

    return 0;
}
*/
//=========================================================================================
/*
class MyClass {
public:
    MyClass() { std::cout << "MyClass constructor" << std::endl; }
    ~MyClass() { std::cout << "MyClass destructor" << std::endl; }

    void say_hello() { std::cout << "Hello from MyClass" << std::endl; }
};

int main() {

    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();        //cream un shared pointer pentru clasa MyClass

    std::shared_ptr<MyClass> ptr2 = ptr1;       //cream un alt share pointer, care pointeaza catre acelasi obiect

    ptr1->say_hello();
    ptr2->say_hello();

    //cand ambii pointeri ptr1 si ptr2 nu o sa mai fie folositi, obiectul o sa fie distrus

    return 0;
}
*/
//=========================================================================================

class MyClass {
public:
    MyClass() { std::cout << "MyClass constructor" << std::endl; }
    ~MyClass() { std::cout << "MyClass destructor" << std::endl; }

    void say_hello() { std::cout << "Hello from MyClass" << std::endl; }
};

int main() {

    std::shared_ptr<MyClass> sharedPTR = std::make_shared<MyClass>();
    std::weak_ptr<MyClass> weakPTR = sharedPTR;     //weak_ptr nu incrementeaza referinta count

    std::cout << "sharedPTR use count: " << sharedPTR.use_count() << "\n";      //ar trebui sa printeze 1

    //
    std::shared_ptr<MyClass> lockedPTR = weakPTR.lock();        //lock creaza un shared_ptr daca obiectul inca exista

    if (lockedPTR) {
        lockedPTR->say_hello();
        std::cout << "lockedPTR use_count: " << lockedPTR.use_count() << "\n";
    }
    else {
        std::cout << "obiectul nu mai este valabil" << std::endl;
    }

    sharedPTR.reset();      //reset the shared_ptr, care sterge obiectul

    lockedPTR = weakPTR.lock();     //incerce sa facem lock din nou dar obiectul ar trebui sa fie sters
    if (lockedPTR) {
        std::cout << "lockedPTR este valid\n";
    }
    else {
        std::cout << "obiectul a fost sters" << std::endl;
    }

    return 0;
}

//=========================================================================================
/*
class MyClass {
public:
    MyClass() { std::cout << "MyClass constructor" << std::endl; }
    ~MyClass() { std::cout << "MyClass destructor" << std::endl; }

    void say_hello() { std::cout << "Hello from MyClass" << std::endl; }
};

int main() {

    std::shared_ptr<MyClass> sharedPTR = std::make_shared<MyClass>();
    std::weak_ptr<MyClass> weakptr = sharedPTR;

    std::cout << "MyClass destructor" << weakptr.expired() << std::endl;

    sharedPTR.reset();

    std::cout << "a expirat weak pointer?" << weakptr.expired() << std::endl;

    return 0;
}
*/