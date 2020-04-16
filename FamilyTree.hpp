#include<iostream>
#include<string>
//#include"node.hpp"

//using namespace std;
/*struct node{
    std::string name;
    node* mom;
    node* dad;
};
*/
namespace family{

class Tree{
private:
    std::string name;
    Tree *mom;
    Tree *dad;

public:
    //Tree();
    Tree(std::string name);
    ~Tree(){};
    Tree& addFather(std::string child, std::string father){return *this;}
    Tree& addMother(std::string child , std::string mother ){return *this;}
    std::string relation(std::string name );
    std::string find(std::string name);
    void remove(std::string name);
    void display();

};
/*class Tree{
    private: 
    node *root;

    public:
        Tree();
        Tree(std::string );
       // ~Tree(){if(root) delete root;}
        Tree addFather(std::string , std::string );
        Tree addMother(std::string , std::string );
        std::string relation(std::string );
        std::string find(std::string );
        void remove(std::string );
        void display();
};*/
}