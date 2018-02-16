#ifndef ISERIAL_HPP
#define ISERIAL_HPP

namespace Driver
{

class ISerial
{
public:
	virtual void Init(int baudRate) = 0;
	virtual int Write(const char* str) = 0;
	virtual int Put(char c) = 0;
};

}; // namespace Driver

#endif /* ISERIAL_HPP */
