#pragma once

#include <deque>
#include <string>

template <class Type> class rotqueue:
	public std::deque<Type>
{
public:


	/// <summary>
	/// ���[�e�[�V����
	/// </summary>
	void rotate()
	{
		class Type top = this->begin();
		this->pop_front();
		this->push_back(top);
	}

	/// <summary>
	/// �t���[�e�[�V����
	/// </summary>
	void rev_rotate()
	{
		class Type bottom = this->back();
		this->pop_back();
		this->push_front(bottom);
	}

};

