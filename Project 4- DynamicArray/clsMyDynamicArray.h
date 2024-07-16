#pragma once

#include <iostream>
using namespace std;

template <class T > class clsMyDynamicArray
{
protected:
	int _Size = 0;
	T* _TempArray;
	
public:
	T* OriginalArray;

	clsMyDynamicArray(int Size = 0)
	{
		if (Size < 0)
			Size = 0;
		_Size = Size;

		OriginalArray = new T[_Size];
	}
	~clsMyDynamicArray()
	{
		delete[] OriginalArray;
	}

	bool SetItem(int Index, T value)
	{
		if (Index >= _Size || _Size < 0)
		{
			return false;
		}
		OriginalArray[Index] = value;
		return true;

	}
	int Size()
	{
		return _Size;
	}
	void Print()
	{
		cout << "\n";
		for (int i = 0; i <= _Size-1; i++)
		{
			cout << OriginalArray[i] << " ";
		}
	}

	bool IsEmpty()
	{
		return (_Size == 0 ? true : false);
	}

	void Resize(int NewSize)
	{
		if (NewSize < 0)
		{
			NewSize = 0;
		}


		_TempArray = new T[NewSize];
		if (NewSize < _Size)
		{
			_Size = NewSize;
		}

		for (int i = 0; i < NewSize; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}
		_Size = NewSize;
		delete[] OriginalArray;
		OriginalArray = _TempArray;

	}

	T GetItem(int Index)
	{
		return OriginalArray[Index];
	}

	void Reverse()
	{
		_TempArray = new T[_Size];

		int Counter = 0;
		for (int i = _Size - 1; i >= 0; i--)
		{

			_TempArray[Counter] = OriginalArray[i];
			Counter++;
		}
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}

	void Clear()
	{
		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}


	bool DeleteItemAt(int index)
	{
		if (index>= _Size || index < 0)
			return false;
		_Size--;
		_TempArray = new T[_Size];
		
		for (int i = 0; i <index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}
		for (int i = index+1; i < _Size+1; i++)
		{
			_TempArray[i-1] = OriginalArray[i];
		}
		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
	}

	void DeleteFirstItem()
	{
		DeleteItemAt(0);
	}

	void DeleteLastItem()
	{
		DeleteItemAt(_Size-1);
	}

	int Find(T Value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == Value)
				return i;
		}
		return -1;
	}
	bool DeleteItem(T Value)
	{
		int Index = Find(Value);
		if (Index==-1)
		{
			return false;
		}
		DeleteItemAt(Index);
		return true;
		
			

	}

	bool InsertAt(T index, T Value)
	{
		if (index >= _Size || index < 0)
			return false;
		_Size++;

		_TempArray = new T[_Size];

		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_TempArray[index] = Value;
		
		for (int i = index; i <_Size-1; i++)
		{
			_TempArray[i+1] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
		
	}

	void InsertAtbeginning(T value)
	{
		InsertAt(0, value);
	}

	

	bool InsertBefore(T index, T value)
	{
		if (index < 1)
			return	InsertAt(0, value);
		else
			return	InsertAt(index - 1, value);
	}

	bool InsertAfter(T index, T value)
	{
		if (index >= _Size)
			return InsertAt(index - 1, value);
		else
			return InsertAt(index + 1, value);
	}

	bool InsertAtEnd(T value)
	{

		_Size++;
		return InsertAt(_Size-1, value);
	}
};

