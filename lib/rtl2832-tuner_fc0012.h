#ifndef __TUNER_FC0012_H
#define __TUNER_FC0012_H

class baz_rtl_source_c;

#define FC0012_OK	0
#define FC0012_ERROR	1

#define FC0012_BANDWIDTH_6MHZ	6
#define FC0012_BANDWIDTH_7MHZ	7
#define FC0012_BANDWIDTH_8MHZ	8

#define FC0012_LNA_GAIN_LOW	0x00
#define FC0012_LNA_GAIN_MID	0x08
#define FC0012_LNA_GAIN_HI	0x17
#define FC0012_LNA_GAIN_MAX	0x10

#define FC0012_LNAGAIN	FC0012_LNA_GAIN_HI

#define FC0012_I2C_ADDR		0xc6
#define CRYSTAL_FREQ		28800000

int FC0012_Open(baz_rtl_source_c* pTuner);
int FC0012_Read(baz_rtl_source_c* pTuner, uint8_t RegAddr, uint8_t *pByte);
int FC0012_Write(baz_rtl_source_c* pTuner, uint8_t RegAddr, uint8_t Byte);
void FC0012_Dump_Registers(baz_rtl_source_c* pTuner);
int FC0012_SetFrequency(baz_rtl_source_c* pTuner, unsigned long Frequency, unsigned short Bandwidth);
int FC0012_GetRegMaskBits(baz_rtl_source_c *pTuner, uint8_t regAddr,
	uint8_t msb, uint8_t lsb, uint8_t *pReadingValue);
int FC0012_SetRegMaskBits(baz_rtl_source_c *pTuner, uint8_t regAddr,
	uint8_t msb, uint8_t lsb, const uint8_t value);

#endif
