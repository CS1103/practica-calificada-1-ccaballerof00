//
// Created by ruben on 4/12/19.
//

#ifndef PC1_TWOLINKEDLIST_H
#define PC1_TWOLINKEDLIST_H
#include <iostream>
namespace UTEC {
    using namespace std;

    struct Node {
        int value;
        Node *next;
        explicit Node(int value) : value{value}, next{nullptr} {}
    };

    class TwoLinkedList {
        Node *head1;
        Node *head2;
        Node *tail1;
        Node *tail2;
        Node *tail;
    public:
        TwoLinkedList() : head1{nullptr}, head2{nullptr}, tail1{nullptr}, tail2{nullptr}, tail{nullptr} {}
        void push_back1(int _value);
        void push_back2(int _value);
        string merge(int _value);
        bool is_merged();
        string getlist(int _value);
        int size1();
        int size2();
        int size0();
    };
}

#endif //PC1_TWOLINKEDLIST_H


//UNA LISTA
