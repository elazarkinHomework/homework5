// elazarkin
#include <iostream>
#include <algorithm>

namespace itertools {

template <typename T>
class range
{
private:
	T m_from;
	T m_to;
public:

	range(T from, T to)
	{
		m_from = from;
		m_to = to;
	}

	virtual ~range() {}

	class iterator: public std::iterator
	<
			std::input_iterator_tag, // iterator_category
			T,                      // value_type
			T,                      // difference_type
			const T*,               // pointer
			T                       // reference
	>
	{
	protected:

	public:

		explicit iterator(T _val = 0) : m_from(_val) {}

		iterator& operator++()
		{
			m_val = m_to >= m_from ? m_val + 1 : m_val - 1;
			return *this;
		}

		iterator operator++(int)
		{
			iterator retval = *this;
			++(*this);
			return retval;
		}

		bool operator==(iterator other) const
		{
			return m_val == other.m_val;
		}

		bool operator!=(iterator other) const
				{
			return !(*this == other);
		}

		reference operator*() const
		{
			return m_val;
		}
	};

	iterator begin() {return iterator(FROM);}

	T end(){return iterator(TO);}

};

}  // namespace itertools
