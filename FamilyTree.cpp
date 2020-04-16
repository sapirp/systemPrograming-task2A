//#include<iostream>
//#include<string>

#include"FamilyTree.hpp"

using namespace std;
using namespace family;

/*Tree::Tree(){
    name=nullptr;
    mom=nullptr;
    dad=nullptr;
    }*/
Tree::Tree (string name){
    this->name=name;
    mom=nullptr;
    dad=nullptr;
}

string Tree::relation(string name){return ("relation");}
string Tree::find(string name){return ("find");}
void Tree::remove(string name){cout<<"remove"<<endl;}
void Tree::display(){cout<<"display"<<endl;}


/*Tree(){}

Tree (string n){
    root=new node;
    root->name=n;
    root->mom=NULL;
    root->dad=NULL;
}

Tree* addFather(string child, string father){
    Tree T;
    return T; }
Tree* addMother(string child, string mother){
    Tree T;
    return T;
}
string relation(string name){return ("relation");}
string find(string name){return ("find");}
void remove(string name){cout<<"remove"<<endl;}
void display(){cout<<"display"<<endl;}

*/

/*~Tree(){
 //   deleteTree();
}*/

/*void deleteTree(node* n){
    if(n != NULL){
        deleteTree(n->dad);
        deleteTree(n->mom);
        delete(n);
    }
}*/
