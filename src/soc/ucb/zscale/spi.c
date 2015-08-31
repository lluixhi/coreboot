#include <spi_flash.h>
#include <spi-generic.h>

#include <soc/addressmap.h>

#define SPI_SRR    0x40 + C_BASEADDR
#define SPI_SPICR  0x60 + C_BASEADDR
#define SPI_SPISR  0x64 + C_BASEADDR
#define SPI_SPIDTR 0x68 + C_BASEADDR
#define SPI_SPIDRR 0x6C + C_BASEADDR
#define SPI_SPISSR 0x70 + C_BASEADDR
#define SPI_TFIFOO 0x74 + C_BASEADDR
#define SPI_RFIFOO 0x78 + C_BASEADDR
#define SPI_DGIER  0x1C + C_BASEADDR
#define SPI_IPISR  0x20 + C_BASEADDR
#define SPI_IPIER  0x28 + C_BASEADDR

void spi_init(void)
{
        // Probably don't need this.
}

struct spi_slave *spi_setup_slave(unsigned int bus, unsigned int cs)
{

}

int spi_claim_bus(struct spi_slave *slave)
{

}

void spi_release_bus(struct spi_slave *slave)
{

}

int  spi_xfer(struct spi_slave *slave, const void *dout, unsigned int bytesout,
		void *din, unsigned int bytesin)
{

}

unsigned int spi_crop_chunk(unsigned int cmd_len, unsigned int buf_len)
{

}
