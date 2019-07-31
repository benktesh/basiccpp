#pragma once
#ifndef ARRAY_HPP_INCLUDED
#define ARRAY_HPP_INCLUDED
#endif

#include "Array.hpp"
#include <iostream>

class IndexOutOfBoundsException {};
      

//Implementation
template <class T>
bool Array<T>::IsValidIndex(int index) const {
	return index >= 0 && index < m_size;

}

template <class T>
int Array<T>::Size() const {
	return m_size;
}

template <class T>
void Array<T>::print() const {
	std::cout << "[";
	for (int i = 0; i < m_size; i++) {
		std::cout << m_ptr[i];
	}
	std::cout << "]" << std::endl;
}


template <class T>
Array<T>::~Array() {
	delete[] m_ptr;
	m_ptr = nullptr;
	std::cout << "Deleted" << std::endl;
}


template <class T>
inline Array<T>::Array(int size) {
	assert(size >= 0);
	if (size != 0) {
		m_ptr = new T[size]{};
		m_size = size;
	}
}


//copy constructor
template <class T>
Array<T>::Array(const Array& source) {
	if (!source.IsEmpty()) {
		m_size = source.m_size;
		m_ptr = new T[m_size]{};

		for (int i = 0; i < m_size; i++) {
			m_ptr[i] = source.m_ptr[i];
		}
	}
}

template <class T>
T& Array<T>::operator[](int index) {
	if (IsValidIndex(index)) {
		return m_ptr[index];
	}
	throw IndexOutOfBoundsException{};
}

template <class T>
T Array<T>::operator[](int index) const {
	if (IsValidIndex(index)) {
		return m_ptr[index];
	}
	throw IndexOutOfBoundsException{};
}

template <class T>
bool Array<T>::IsEmpty() const {
	return (m_size == 0);
}

 