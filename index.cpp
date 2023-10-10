#include "index.h"

Index::Index(const char* mes) : Exception(mes) 
{ 

}
const char* Index::GetMessage() const 
{
	return m_message;
}