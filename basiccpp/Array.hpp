#pragma once
#ifndef ARRAY_HPP_INCLUDED
#define ARRAY_HPP_INCLUDED
#endif

#include <cassert>
#include <ostream>
#include <utility>

class IndexOutOfBoundsException {};

template <typename T>
class Array {
private:
	T* m_ptr{ nullptr };
	int m_size{ 0 };

	bool IsValidIndex(int index) const {
		return index >= 0 && index < m_size;

	}

public:
	Array() = default;

	//Constructor to create an array of defined size
	explicit Array(int size) {
		assert(size >= 0);
		if (size != 0) {
			m_ptr = new T[size]{};
			m_size = size;
		}
	}

	//copy constructor
	Array(const Array& source) {
		if (!source.IsEmpty()) {
			m_size = source.m_size;
			m_ptr = new T[m_size]{};
		}
	}

};