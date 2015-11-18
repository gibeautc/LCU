#define F_CPU  8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

//SPI init will set up SPI 
void spi_init()
{
//Need to initilize spi as slave
}//end spi_init()

//Writes byte(s) to sram
//possible arguments address, number of bytes, data
void sram_write()
{

}//end sram_write()


//Read byte(s) from sram
//arguments address, number of bytes
void sram_read()
{

}//end sram_read()



int main()
{
spi_init();



while(1)
{ 
 } //end while 
} //end main
