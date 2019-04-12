//
// Created by ruben on 4/12/19.
//

#include "TwoLinkedList.h"
#include <iostream>
using namespace UTEC;

int TwoLinkedList::size1(){
    int i=0;
    while(true)
    {
        if(head1==nullptr)break;
        else i++;
        head1=head1->next;
    }
    return i;
}



int TwoLinkedList::size2(){
    int i=0;
    while(true)
    {
        if(head2==nullptr)break;
        else i++;
        head2=head2->next;
    }
    return i;
}



int TwoLinkedList::size0()
{
    int i=0;
    while(true)
    {
        if(tail1==nullptr)break;
        else i++;
        tail1=tail1->next;
    }
    return i;
}



void TwoLinkedList::push_back1(int _value)
{
Node* temp = new Node(_value);
if (head1==nullptr){
    head1 = temp;
    tail1=temp;
}
else{
    tail1->next = temp;
    tail1 = temp;
}
}


void TwoLinkedList::push_back2(int _value)
{
  Node* temp = new Node(_value);
  if (head2==nullptr){
      head2 = temp;
      tail2 = temp;
  }
  else{
      tail2->next = temp;
      tail2 = temp;
}
}



string TwoLinkedList::merge(int _value)
{
  if (head1==nullptr)return "Operación fallida";
  else
  if(tail==nullptr)
  {
    tail=new Node(_value);
    tail1->next=tail;
    tail2->next=tail;
    return "Operación exitosa";
  }
  else return "Operación duplicada";
}



bool TwoLinkedList::is_merged()
{
    return tail!=nullptr;
}




string TwoLinkedList::getlist(int _value)
{
    if(_value==1)
    {
    int tamano1=size1();
    string lis1;
    for(int i=0;i<tamano1;i++)
    {
     lis1=lis1 + " " + to_string(head1->value);
     head1=head1->next;
    }
    return lis1;
    }
    if(_value==2)
    {
        int tamano2=size2();
        string lis2;
        for(int i=0;i<tamano2;i++)
        {
            lis2=lis2 + " " + to_string(head2->value);
            head2=head2->next;
        }
        return lis2;
    }
    if(_value==0)
    {
        if(tail==nullptr)
        {
            return "";
        }
        else
        {
            int tamano0=size0();
            string lis0;
            for(int i=0;i<tamano0;i++)
            {
                lis0=lis0 + " " + to_string(tail1->value);
                tail1=tail1->next;
            }
        return lis0;
        }
    }
}
