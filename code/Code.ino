// Sample code for stepper acceleration
# define Pulse_N 8 // pin for the pulse signal
# define Dir_N 9 // pin for the direction signal
# define En_N 10 // pin for the enable signal
void setup ()
{
pinMode ( Pulse_N , OUTPUT ) ; // set the pin at output mode
pinMode ( Dir_N , OUTPUT ) ; // set the pin at output mode
pinMode ( En_N , OUTPUT ) ;
digitalWrite ( En_N , HIGH ) ;
}

void loop ()
{
digitalWrite ( Dir_N , HIGH ) ; // Enables the motor to move in a particular direction
for(int i =0; i <100; i ++)
{
digitalWrite ( Pulse_N , HIGH ) ;
delay (1) ;
digitalWrite ( Pulse_N , LOW ) ;
delay (1) ;
}
delay (10) ;

digitalWrite ( Dir_N , LOW ) ; // Enables the motor to move in a particular direction
for(int i =0; i <100; i ++)
{
digitalWrite ( Pulse_N , HIGH ) ;
delay (1) ;
digitalWrite ( Pulse_N , LOW ) ;
delay (1) ;
}
delay (10) ;
}