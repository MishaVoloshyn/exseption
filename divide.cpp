#include "divide.h"
Divide::Divide(const char* mes) : Exception(mes) 
{

}
const char* Divide::GetMessage() const
{ 
	return m_message; 
}
