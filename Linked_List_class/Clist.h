#pragma once


//일반적으로 기능이 많지 않을때 구조체 사용 / 데이터만 묶어놓을때
template <typename T>
struct tListNode
{
	T data;
	tListNode<T>* pNext;
	tListNode<T>* pPrev;

	tListNode()//기본생성자
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
	tListNode<T>* m_pHead; //시작 노드
	tListNode<T>* m_pTail
	int				m_iCount;

public:
	void push_back(const T&  _data); //type T가 미정상태이기 때문에 복사 비용을 줄이기 위해서 레퍼런스로 받아 오더라도 원본은 수정하지 않는 것으로 받아와서 데이터 관리 
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

	//처음 입력된 데이터라면
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
