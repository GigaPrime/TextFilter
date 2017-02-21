#ifndef __VECTOR_H__
#define __Vector_H__

template <class Vector>

class MyVector
{
private:
	int size;
	T* data;
public:
	MyVector(int);
	MyVector(MyVector&);
	~MyVector();

	Vector operator=(const Vector&);
	int vectorSize() const;
	T& operator[](int);
};

#endif // !__VECTOR_H__

