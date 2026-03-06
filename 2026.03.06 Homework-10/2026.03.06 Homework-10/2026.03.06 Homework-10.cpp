#include<iostream>

class ArrayList
{
	int size;
	int capacity;
	double* data;

	ArrayList()
	{
		size = 0;
		capacity = 4;
		data = new double [capacity] {0};

	}
	~ArrayList()
	{
		delete[]data;
	}
	int getsize()
	{
		return size;
	}
	void resize(int newCapacity)
	{
		double* newData = new double[newCapacity] {0};

		for (int i = 0; i < size; ++i)
		{
			newData[i] = data[i];
		}
		delete[] data;
		data = newData;
		capacity = newCapacity;
	}
	void add(double value)
	{
		if (size == capacity)
		{
			resize(capacity * 2);
		}
		data[size] = value;
		++size;
	}
	double get(int index)
	{
		if (0 <= index && index < size)
		{
			return data[index];
		}
		return -1.0;
	}
	void set(int index, double value)
	{
		if (0 <= index && index < size)
		{
			data[index] = value;
		}
		if (index == size)
		{
			add(value);
		}
	}
	void print()
	{
		std::cout << "[" << size << "/" << capacity << "]{";
		for (int i = 0; i < size; ++i)
		{
			std::cout << data[i] << " ";
		}
		std::cout << "}" << std::endl;
	}
	void remove(int index)
	{
		if (index < 0 || index >= size)
		{
			return;
		}
		for (int i = index; i < size - 1; ++i)
		{
			data[i] = data[i + 1];
		}
		--size;
	}
	void insert(int index, double value)
	{
		if (index < 0 || index > size)
		{
			std::cerr << std::endl;
			return;
		}
		if (size == capacity)
			resize(capacity * 2);
		for (int i = size; i > index; --i)
			data[i] = data[i - 1];
		data[index] = value;
		++size;
	}
	void clear()
	{
		size = 0;
	}

	bool contains(double value)
	{
		for (int i = 0; i < size; ++i)
			if (data[i] == value)
				return true;
		return false;
	}
	void saveToFile(const char* filename)
	{
		std::ofstream file(filename, std::ios::binary);
		if (!file)
		{
			std::cerr << std::endl;
			return;
		}
		file.write(reinterpret_cast<const char*>(&size), sizeof(size));
		file.write(reinterpret_cast<const char*>(&capacity), sizeof(capacity));
		file.write(reinterpret_cast<const char*>(data), size * sizeof(double));
		file.close();
	}
	void loadFromFile(const char* filename)
	{
		std::ifstream file(filename, std::ios::binary);
		if (!file)
		{
			std::cerr << std::endl;
			return;
		}
		int fileSize, fileCapacity;
		file.read(reinterpret_cast<char*>(&fileSize), sizeof(fileSize));
		file.read(reinterpret_cast<char*>(&fileCapacity), sizeof(fileCapacity));

		if (fileSize < 0 || fileSize > 1000000)
		{
			std::cerr << std::endl;
			return;
		}

		delete[] data;
		capacity = fileCapacity;
		data = new double[capacity]();
		size = fileSize;
		file.read(reinterpret_cast<char*>(data), size * sizeof(double));
		file.close();
	}
};
int main()
{
	ArrayList list;
	list.add(0.5);
	list.add(1.5);
	list.add(2.5);
	std::cout << list.get(2) << std::endl;
	list.set(1, 3.5);
	list.remove(0);
	std::cout << list.getsize() << std::endl;
	return 0;
}