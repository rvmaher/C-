#include <iostream>

struct student
{
    std::string name;
    bool isStudent;
    int GPA;
};

int main()
{
    student st;
    st.name = "ram";
    st.GPA = 3.2;
    st.isStudent = true;

    std::cout << st.GPA << "\n";
    std::cout << st.isStudent << "\n";
    std::cout << st.name << "\n";
    return 0;
}