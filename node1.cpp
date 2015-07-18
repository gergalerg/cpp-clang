#include <iostream>

struct Node
{
    double item;
    Node * p_next;
};

void ShowNode(Node & n) { std::cout << "Item = " <<   n.item << "\n";}
void ShowNode(Node * pn) { std::cout << "Item = " << pn->item << "\n";}

int main() {
    Node first;
    Node second;
    first.item = 1;
    first.p_next = &second;
    second.item = 2;
    ShowNode(first);
    ShowNode(first.p_next);


    return 0;
}