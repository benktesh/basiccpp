#pragma once

#include <ostream>
class IndexOutOfBoundException {};

class IntArray {
private:
	int* m_ptr{ nullptr };
	int m_size{ 0 };
public:
	IntArray() = default;
	explicit IntArray(int size) {
		if (size != 0) {
			m_ptr = new int[size] {};
			m_size = size;
		}
	}
	
	IntArray(const IntArray& source) {
		if (!source.IsEmpty()) {
			m_size = source.m_size;
			m_ptr = new int[m_size] {};
			for (int i = 0; i < m_size; i++) {
				m_ptr[i] = source.m_ptr[i];
			}
		}

	}


	~IntArray() {
		delete[] m_ptr;
	}
	

	int Size() const {
		return m_size;
	}

	bool IsEmpty() const {
		return (m_size == 0);
	}

	int& operator[](int index) {
		if (IsValidIndex(index)) {
			return m_ptr[index];
		}
		throw IndexOutOfBoundException{};
	}

	int operator[](int index) const {
		if (IsValidIndex(index)) {
			return m_ptr[index];
		}
		throw IndexOutOfBoundException{};

	}

	bool IsValidIndex(int index) const {
		return (index >= 0 && index < m_size);
	}
};


