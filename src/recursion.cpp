#include<iostream>
#ifndef RECUSION_CPP
#define RECUSION_CPP

template <typename _T>
double avg_recu(_T &&array,int size,int n)
{
    if (n==0)
        return array[n]/size;
    else
        return (array[n])/size +avg_recu(array,size,n-1);
}
template<class _T>
struct Node{
    _T data;
    Node<_T> *next=nullptr;

    friend std::ostream & operator <<(std::ostream & os,const Node<_T> & node)
    {
        os<<node.data;
        return os;
    }
};
template<class _T>
int count_num(Node<_T> *list)
{
    if (list->next!=nullptr)
        return 1+count_num(list->next);
    else
        return 1;
}
template<class _T>
void positive(Node<_T> *list)
{
    if (list->next!=nullptr)
    {
        std::cout<<list->data<<std::endl;
        positive(list->next);
    };
}
template<class _T>
void native(Node<_T> *list)
{
    if (list->next!=nullptr)
    {
        native(list->next);
        std::cout<<list->data<<std::endl;
    }
}
template<class _T>
void delfirst(Node<_T> *list,_T data)
{
    if (list!=nullptr and list->data==data)
        list=list->next;
    if (list->next)
        return delfirst(list->next,data);
}
template<class _T>
void delall(Node<_T> *list,_T data)
{

}
#endif
