#include <iostream>
#include <vector>

using namespace std;

struct node {
    int value;
    vector<node *> neighbours;
};

node* checkNode(int &value, node *currNode) {
    if (currNode->value == value) {
        return currNode;
    }

    if (currNode->neighbours.empty()) {
        return nullptr;
    }

    for (int i = 0; i < currNode->neighbours.size(); i++) {
        checkNode(value, currNode->neighbours[i]);
    }

    return nullptr;
}

node* createGraph(vector<int> &v) {
    // first router
    node *root;
    root->value = 1;
    node *currNode = root;

    for (int i = 2; i < v.size() + 1; i++) {
        node *newNode;
        newNode->value = i;

        currNode = checkNode(v[i], currNode);
        if (currNode != nullptr) {
        currNode->neighbours.push_back(newNode);
        }
    }

    return root;
}

int main() {
    // n = number of routers
    int n;
    cin >> n;
    // index of the connection of the routers
    vector<int> connections(n, -1);
    for (int i = 0; i < n - 1; i++) {
        cin >> connections[i];
    }

    node* g = createGraph(connections);

    return 0;
}