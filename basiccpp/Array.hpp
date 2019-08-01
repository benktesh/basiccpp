#pragma once
#ifndef ARRAY_HPP_INCLUDED
#define ARRAY_HPP_INCLUDED
#endif

#include <cassert>
#include <ostream>
#include <utility>

template <typename T>
class Array {
private:
	T* m_ptr{ nullptr };
	int m_size{ 0 };
public:
	Array() = default;
	~Array(); 
	bool IsEmpty() const;
	//Constructor to create an array of defined size
	explicit Array(int size); 
	//copy constructor
	Array(const Array& source); 
	T& operator[](int index); 
	T operator[](int index) const; 
	void print() const;
	int Size() const;
	bool IsValidIndex(int index) const;
};
