#pragma once
#include <vector>

template <typename T>
class VectorList {
private:
    std::vector<T> internalVec;

public:
    // Constructor
    VectorList() = default;

    // Add an element
    void add(const T& o) noexcept {
        this->internalVec.push_back(o);
    }

    // Clear all elements
    void clear() {
        internalVec.clear();
    }

    // Check if an element exists
    bool contains(const T& t) const {
        for (const auto& item : internalVec) {
            if (item == t) {
                return true;
            }
        }
        return false;
    }

    // Remove an element (first match)
    void remove(const T& t) {
        for (auto it = internalVec.begin(); it != internalVec.end(); ++it) {
            if (*it == t) {
                internalVec.erase(it);
                return;
            }
        }
    }

    // Get size of vector
    int size() const {
        return static_cast<int>(internalVec.size());
    }

    // Get an element by index
    T& get(int index) {
        return internalVec[index];
    }

    const T& get(int index) const {
        return internalVec[index];
    }

    // Return internal vector by reference
    std::vector<T>& getVector() {
        return internalVec;
    }

    const std::vector<T>& getVector() const {
        return internalVec;
    }

    // Set an element at index
    void set(int index, const T& t) {
        internalVec[index] = t;
    }

    // Operator[] support
    T& operator[](int index) {
        return internalVec[index];
    }

    const T& operator[](int index) const {
        return internalVec[index];
    }

    // Support for range-based for loops
    auto begin() { return internalVec.begin(); }
    auto end() { return internalVec.end(); }
    auto begin() const { return internalVec.begin(); }
    auto end() const { return internalVec.end(); }
};
