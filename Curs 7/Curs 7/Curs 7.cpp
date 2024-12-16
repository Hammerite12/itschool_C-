#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    int* int_ptr{nullptr};
    double* double_ptr{ nullptr };
    char* char_ptr{ nullptr };
    string* string_ptr{ nullptr };

    cout << "|sizeof int_ptr:           |" << sizeof int_ptr << endl;
    cout << "|sizeof double_ptr:           |" << sizeof double_ptr << endl;
    cout << "|sizeof char_ptr:           |" << sizeof char_ptr << endl;
    cout << "|sizeof string_ptr:           |" << sizeof string_ptr << endl;

    //=======================================================================

    int* int_ptr{};
    double number{ 100.7 };
    int num{10};

    //int_ptr = &num; OK
    //int_ptr = &number; COMPILER ERROR

    int_ptr = nullptr;

    cout << "------------------------" << endl;
    cout << "|valoarea lui num este:|" << num << endl;
    cout << "|sizeof num:           |" << sizeof num << endl;
    cout << "|adresa lui num este:  |s 0x" << &num << endl;
    cout << "------------------------" << endl;

    //===============================================

    double h_temp{ 100.5 };
    double l_temp{ 30.2 };

    double* temp_ptr;

    temp_ptr = &h_temp;

    temp_ptr = &l_temp;

    temp_ptr = nullptr;

    //=============================================
    
    int score{ 10 };
    //double dscore{ 100.1 };

    int* score_ptr{ nullptr }; //declarare pointer

    score_ptr = &score; //atribuire

    cout << "valoarea: " << score << endl;
    cout << "valoarea lui score_ptr: " << *score_ptr << endl;
    cout << "addresa of score: " << &score << endl;

    *score_ptr = 200;

    cout << "valoarea: " << score << endl;
    cout << "valoarea lui score_ptr: " << *score_ptr << endl;
    cout << "addresa of score: " << &score << endl;

    //score_ptr = &score; COMPILER ERROR

    //==============================================

    double h{ 10.2 };
    double l{ 2.2 };

    double* t_ptr{ &h };
    cout << *t_ptr << endl; //10.2

    t_ptr = &l;

    cout << *t_ptr << endl; //2.2

    //================================================
    
    string nume{ "Dorel" };
    string* string_ptr{ &nume };
    
    cout << *string_ptr << endl;

    nume = "Alex";

    cout << *string_ptr << endl;
    */
    //================================================
    //Exercitiul 1:
    /*
    int a{ 10 };
    int* a_ptr{ &a };

    cout << "valoarea: " << a << endl;
    cout << "valoarea lui score_ptr: " << *a_ptr << endl;
    cout << "addresa of score: " << &a << endl;
    
    //=================================================
    //Exercitiul 2:

    int a{ 20 };
    int* a_ptr{ &a };
    int b{ 30 };
    int* b_ptr{ &b };

    a_ptr = &b;
    b_ptr = &a;

    cout << *a_ptr << endl;
    cout << *b_ptr << endl;
    
    //================================================

    int score[]{ 100, 95, 85 };

    cout << score << endl;
    cout << *score << endl;

    int* score_ptr{ score };

    cout << score_ptr << endl;
    cout << *score_ptr << endl;

    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    cout << score_ptr << endl;          //adresa
    cout << (score_ptr + 1) << endl;
    cout << (score_ptr + 2) << endl;

    cout << *score_ptr << endl;         //valoarea
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;
    
    //============================================

    int score[]{ 100, 95, 87, 68, -1 };
    int* score_ptr{ score };

    while (*score_ptr != -1) {
        cout << *score_ptr << endl;
        score_ptr++;
    }
    
    //============================================

    int score[]{ 100, 95, 87, 68, 50 };
    int* score_ptr{ score };
    int s = 0, i = 0;
    int* s_ptr{ &s };

    do {
        cout << *score_ptr << endl;
        *s_ptr += *score_ptr;
        score_ptr++;
        i++;
    } while (i < 5);

    cout << *s_ptr << endl;
    */
    //============================================
    
    int a{ 20 };
    int* const a_ptr{ &a };
    const int* a_ptr{ &a };
    const int* const a_ptr{ &a };

    cout << a << endl;
    cout << *a_ptr << endl;

    a = 30;

    cout << a << endl;
    cout << *a_ptr << endl;

    return 0;
}