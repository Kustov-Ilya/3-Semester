#include <iostream>

template <typename T>
class TVector {
	size_t Size;
	size_t Count;
	T* Ptr;
public:
	TVector()
		:Size(0), Count(0), Ptr(nullptr){}


	TVector(T* ptr, size_t size, size_t cap) 
		:Size(size), Count(cap), Ptr(ptr){}


	TVector(const TVector & rhs) 
		:Size(rhs.Size), Count(rhs.Count){
		if (Ptr != nullptr) delete[] Ptr;
		Ptr = new T[Count];
		for (int i = 0; i < Size; i++) 
			Ptr[i] = rhs.Ptr[i];
	}


	TVector& operator=(const TVector & rhs){
		if (this == &rhs) return *this;
		Size = rhs.Size;
		Count = rhs.Count;
		if (Ptr != nullptr) delete[] Ptr;
		Ptr = new T[Count];
		for (int i = 0; i < Size; i++)
			Ptr[i] = rhs.Ptr[i];
		return *this;
	}


	TVector& operator=(TVector&& rhs){
		if (this == &rhs) return *this;
		Size = rhs.Size;
		Count = rhs.Count;
		rhs.Size = 0;
		rhs.Count = 0;
		if (Ptr != nullptr) delete[] Ptr;
		std::swap(Ptr, rhs.Ptr);
		return *this;
	}


	TVector(TVector&& rhs) 
		:Size(rhs.Size), Count(rhs.Count){
		rhs.Size = 0;
		rhs.Count = 0;
		std::swap(Ptr, rhs.Ptr);
	}


	~TVector(){
		if (Ptr != nullptr) delete[] Ptr;
	}
}; 
