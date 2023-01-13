
#include "Std_Types.h"
#include "DIO_Types.h"
#include "IntCtrl.h"
#include "Port.h"
#include "DIO.h"

int main(void){

// IntCrtl_Init();
uint8 x = 0;
uint8 y = 0;
Dio_ChannelType pin = Pin5;
Dio_PortType Port = PORT_F;
Port_Init();

Dio_WriteChannel(pin,Port,Dio_HIGH);
x =  Dio_ReadChannel(pin,Port);
Dio_WritePort(Port, 0xEF);
y = Dio_ReadPort(Port);
Dio_FlipChannel(pin,Port);
x =  Dio_ReadChannel(pin,Port);

while (1){}

}