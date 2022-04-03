#include <iostream>

struct Node
{
    int data;
    Node *link;
};

void addNodeBefore(Node *node, int data) {
    //Create a new node
    Node *new_node = new Node();
    //Assign data to the new node
    new_node->data = data;
    //Assign the link of the new node to the link of the node in front
    new_node->link = node->link;
    //Assign the link of the previous node to the link of the new node
    node->link = new_node;
}

int main()
{
    // Creating Nodes
    Node *head_ptr = new Node();
    Node *two = new Node();
    Node *three = new Node();
    Node *four = new Node();
    Node *five = new Node();
    Node *six = new Node();
    Node *seven = new Node();
    Node *tail_ptr = new Node();

    // Assigning value to data in each Node
    head_ptr->data = 11;
    two->data = 3;
    three->data = 10;
    four->data = 50;
    five->data = 23;
    six->data = 5;
    seven->data = 60;
    tail_ptr->data = 0;

    // Assigning the links to each node
    head_ptr->link = two;
    two->link = three;
    three->link = four;
    four->link = five;
    five->link = six;
    six->link = seven;
    seven->link = tail_ptr;
    tail_ptr->link = NULL;

    std::cout << "Before adding new node\n";
    for (Node *ptr = head_ptr; ptr->link != NULL; ptr = ptr->link) {
        std::cout << ptr->data << " ";
    }

    addNodeBefore(three, 15);

    std::cout << "\nAfter adding new node\n";
    for (Node *ptr = head_ptr; ptr->link != NULL; ptr = ptr->link) {
        std::cout << ptr->data << " ";
    }
}