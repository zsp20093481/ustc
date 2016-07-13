struct Stash
{
	int size;
	int quantity;
	int next;
	unsigned char* storage;
	void inflate(int increase);
public:
	Stash(int size);
	~Stash();
	int add(const void* element);
	void* fetch(int index);
	int count();	
};
