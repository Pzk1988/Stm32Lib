#ifndef ICAN_HPP
#define ICAN_HPP

namespace Driver
{

class ICan
{
public:
	virtual uint8_t Init() = 0;
	virtual uint8_t Init(uint8_t filterId) = 0;
	virtual bool DataFrame(uint16_t id, uint8_t* pData, uint8_t len) = 0;
	virtual bool RemoteFrame(uint16_t id) = 0;
};

} // namespace Driver

#endif // ICAN_HPP
