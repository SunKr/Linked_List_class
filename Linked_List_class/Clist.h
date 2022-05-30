#pragma once


//�Ϲ������� ����� ���� ������ ����ü ��� / �����͸� ���������
template <typename T>
struct tListNode
{
	T data;
	tListNode<T>* pNext;
	tListNode<T>* pPrev;

	tListNode()//�⺻������
		: data(),
		pNext(nullptr),
		pPrev(nullptr)
	{

	}
};

template <typename T>
class CList
{
private:
	tListNode<T>* m_pHead; //���� ���
	tListNode<T>* m_pTail
	int				m_iCount;

public:
	void push_back(const T&  _data); //type T�� ���������̱� ������ ���� ����� ���̱� ���ؼ� ���۷����� �޾� ������ ������ �������� �ʴ� ������ �޾ƿͼ� ������ ���� 
	void push_front(const T& _data);

public:
	CList();
	~CList();
};

template<typename T>
void CList<T>::push_back(const T& _data)
{

}

template<typename T>
void CList<T>::push_front(const T& _data)
{
	tListNode<T>* pNewNode = new tListNode<T>*;

	//ó�� �Էµ� �����Ͷ��
	if (m_pHead == nullptr)
	{

	}
}

template<typename T>
CList<T>::CList()
	: m_pHead(nullptr),
	m_pTail(nullptr),
	m_iCount(0)
{

}

template<typename T>
CList<T>::~CList()
{

}
