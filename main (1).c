void setupUART(); 
unsigned char UART_read(); 
void UART_write(unsigned char a); 

int main() 
{  
    setupUART(); // enable UART 
    unsigned char output; 

    while(1) 
    { 

    output = UART_read(); // get UART input 
    UART_write(output); // output the received input through UART 

    } 

    return 0; 
} 