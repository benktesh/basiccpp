#ifndef STACK_HPP_INCLUDED
#define STACK_HPP_INCLUDED
#endif

#include <ostream>
#include "Array.hpp"


class StackOverflowException {};

template <typename T>
class Stack {

private:
	Array<T> m_array;
	int m_top;

public:
	explicit Stack(int maxStackSize) 
		: m_array{ maxStackSize }
		, m_top{ -1 } {}
	
	void Push(const T& element) {

		if (Size() >= MaxSize()) {
			throw StackOverflowException{};
		}
		m_top++;
		m_array[m_top] = element;
	}

	int Pop() {
		T topElement = m_array[m_top];
		m_top--;
		return topElement;
	}

	const T& Top() const {
		return m_array[m_top];
	}

	int Size() const {
		return(m_top + 1);
	}

	bool IsEmpty() const {
		return Size() == 0; 
	}

	int MaxSize() const {
		return m_array.Size();  
	}


	friend std::ostream& operator<<(std::ostream& os, const Stack<T>& stack) {
		if (stack.IsEmpty()) {
			os << " [*** Empty Stack ***]\n\n";
			return os;
		}
		os << "  [Stack]\n";
		for (int i = stack.m_top; i >= 0; i--) {
			os << "    " << stack.m_array[i] << "\n";
		}
		os << "\n";
	}
	
};


