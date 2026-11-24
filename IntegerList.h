#ifndef INTEGERLIST_H
#define INTEGERLIST_H

class IntegerList {
public:
    void add(int value);
    int getSize() const;
    void display() const;
    void clear();
    void removeLast();
    int find(int value) const;
};

#endif
