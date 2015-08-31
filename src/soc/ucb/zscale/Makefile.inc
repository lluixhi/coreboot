ifeq ($(CONFIG_SOC_UCB_ZSCALE),y)

bootblock-$(CONFIG_SPI_FLASH) += spi.c

romstage-y += cbmem.c
romstage-$(CONFIG_SPI_FLASH) += spi.c

ramstage-y += cbmem.c
ramstage-$(CONFIG_SPI_FLASH) += spi.c

endif
