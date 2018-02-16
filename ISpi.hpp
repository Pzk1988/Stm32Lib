#ifndef ISPI_HPP
#define ISPI_HPP

#include <stdint.h>

namespace Driver
{

class ISpi
{
public:
	virtual void Init() = 0;
	virtual uint8_t Write(uint8_t data) = 0;
};

}; // namespace Driver

#endif /* ISPI_HPP */
