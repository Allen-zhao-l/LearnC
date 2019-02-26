//
// Created by tony on 19-2-26.
//

#include <iostream>
#include "Noreplay.h"
#include <stack>
#include <cassert>

const int Height = 10;
const int Wight = 10;

class MapPath {
    struct Node {
        int x;
        int y;

        bool operator==(const Node &rhs) const {
            return x == rhs.x &&
                   y == rhs.y;
        }

        bool operator!=(const Node &rhs) const {
            return !(rhs == *this);
        }
    };

private:

    int (*_map)[Wight];
    Node start{1, 1}, end{8, 8};
    std::stack<Node> _paths;
public:
public:
    MapPath() {
        this->_map = new int[Wight][Height]
                {
                        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                        {1, 0, 1, 1, 1, 1, 1, 1, 1, 1},
                        {1, 0, 0, 0, 1, 1, 0, 0, 0, 1},
                        {1, 1, 1, 0, 1, 1, 0, 1, 0, 1},
                        {1, 1, 0, 0, 0, 1, 0, 1, 0, 1},
                        {1, 0, 0, 1, 0, 1, 0, 1, 0, 1},
                        {1, 0, 1, 1, 1, 1, 0, 1, 0, 1},
                        {1, 0, 1, 0, 0, 0, 0, 1, 0, 1},
                        {1, 0, 0, 0, 1, 1, 1, 1, 0, 1},
                        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                };
        _paths.push(start);
        this->set_invalid(start);
    }

    void set_invalid(const Node &node, int i = -1) {
        this->_map[node.x][node.y] = i;
    }

    void set_valid(const Node &node) {
        return set_invalid(node, 0);
    }

    bool findpath() {
//        assert(_paths.top() != start);
        int figer = 4;
        while (not this->_paths.empty()) {
            Node cur = this->_paths.top();
            if (this->_paths.top() == this->end) {
                std::cout << "Success." << std::endl;
                return 1;
            }
            while (figer >= 0) {
                figer -= 1;
                switch (figer) {

                }
            }
        }
    }

    int getPoint(int x, int y) {
        return this->_map[x][y];
    }

    virtual ~MapPath() {
        delete[] this->_map;
    }
};

int main() {
    MapPath mapPath;
    mapPath.findpath();
//    Noreplay noreplay("1223345");
//    std::cout << noreplay << std::endl;
//    std::cout << noreplay.norep().get();
    return 0;
}