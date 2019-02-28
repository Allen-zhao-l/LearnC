#include <iostream>
#include "src/recursion.cpp"
#include <vector>
#include <memory>
int main()
{
    Node<int> *node=new Node<int>;
    Node<int> *first=node;
    for (int x=0;x<10;++x)
    {   
        node->data=x*x;
        node->next=new Node<int>;
        node=node->next;
    }
    positive(first);
    delfirst(first,16);
    positive(first);

    return 0;
}

