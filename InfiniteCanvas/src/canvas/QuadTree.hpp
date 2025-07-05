#pragma once
#include <vector>
#include <memory>
#include <array>
class Note;

class QuadTree {
public:
    QuadTree(double x = -1e6, double y = -1e6, double w = 2e6, double h = 2e6, int depth = 0);
    ~QuadTree();
    void insert(std::shared_ptr<Note> note);
    void remove(std::shared_ptr<Note> note);
    void move(std::shared_ptr<Note> note, double x, double y);
    std::vector<std::shared_ptr<Note>> query(const std::array<double, 4>& bounds) const;
private:
    struct Node;
    std::unique_ptr<Node> root;
};
