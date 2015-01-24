
<template T>
class DoBlock<T>;

<template T>
class DoList{
public:
	int length;
	void push(DoBlock<T>* block);	
	DoBlock<T>* pop(DoBlock<T>* block);
	DoBlock<T>* popFirst();
	DoBlock<T> m_objFirstDoBlock;
	DoBlock<T> m_objLastDoBlock;

};

void DoList::push(DoBlock<T>* block){
	this->m_objFirstDoBlock->m_pNextBlock->m_pPreBlock = block;
	
	block->m_pPreBlock = &this->m_objFirstDoBlock;
	block->m_pNextBlock = this->m_objFirstDoBlock->m_pNextBlock

	this->m_objFirstDoBlock->m_pNextBlock = block;
}


<template T>
class DoBlock
{
public:
	DoBlock();
	~DoBlock();
	T value;
	DoBlock<T>* m_pNextBlock;
	DoBlock<T>* m_pPreBlock;

	void removeFromList();
	void pushToDoList(DoList<T>* pList);

};

<template T>
void DoBlock<T>::removeFromList(){
	this->m_pPreBlock->m_pNextBlock = this->m_pNextBlock;
	this->m_pNextBlock->m_pPreBlock = this->m_pPreBlock;
}

<template T>
void DoBlock<T>::pushToDoList((DoList<T>* pList){
	pList->push(this);
}


