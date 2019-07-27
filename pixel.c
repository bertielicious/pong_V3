#include "config.h"
#include "lcdWrite.h"
#include "set_address.h"
#include "render.h"
#include <stdio.h>
struct pageData pixel(uchar x, uchar y)
{
    //uchar page; // 0 to 5
    //uchar data = 0x00;
    struct pageData ret;
    
    switch (y) // 0 to 83                   
    {
        
        case 0:
            ret.page = 0;    
            ret.data = 0x01;
          
           // set_address(x, page);               //[row][col]
           // gameplay_area[page][x] = gameplay_area[page][x]|0x01;
           // lcdWrite(0x01|gameplay_area[page][x], HIGH);       // illuminate the pixel at coordinates x, y
            break;             
        /*case 1:
            page = 0;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x02;
            lcdWrite(0x02|gameplay_area[page][x], HIGH);       // illuminate the pixel at coordinates x, y
            break;
        case 2:
            page = 0;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x04;
            lcdWrite(0x04|gameplay_area[page][x], HIGH);       // illuminate the pixel at coordinates x, y
            break;
          
        case 3:
            page = 0;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x08;
            lcdWrite(0x08|gameplay_area[page][x], HIGH);       // illuminate the pixel at coordinates x, y
            break;
        case 4:
            page = 0;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x10;
            lcdWrite(0x10|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y                  
            break;
        case 5:
            page = 0;
            set_address(x, page);
             gameplay_area[page][x] = gameplay_area[page][x]|0x20;
            lcdWrite(0x20|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y            
            break;
        case 6:
            page = 0;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x40;
            lcdWrite(0x40|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y           
            break;
        case 7:
            page = 0;
            set_address(x, page);     
            gameplay_area[page][x] = gameplay_area[page][x]|0x80;
            lcdWrite(0x80|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 8:
            page = 1;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x01;
            lcdWrite(0x01|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y           
            break;
        case 9:
            page = 1;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x02;
            lcdWrite(0x02|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y 
            break;
        case 10:
            page = 1;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x04;
            lcdWrite(0x04|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 11:
            page = 1;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x08;
            lcdWrite(0x08|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y 
            break;
        case 12:
            page = 1;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x10;
            lcdWrite(0x10|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 13:
            page = 1;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x20;
            lcdWrite(0x20|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 14:
            page = 1;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x40;
            lcdWrite(0x40|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 15:
            page = 1;
            set_address(x, page);    
            gameplay_area[page][x] = gameplay_area[page][x]|0x80;
            lcdWrite(0x80|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 16:
            page = 2;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x01;
            lcdWrite(0x01|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 17:
            page = 2;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x02;
            lcdWrite(0x02|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;  
        case 18:
            page = 2;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x04;
            lcdWrite(0x04|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 19:
            page = 2;
            set_address(x, page);  
            gameplay_area[page][x] = gameplay_area[page][x]|0x08;
            lcdWrite(0x08|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 20:
            page = 2;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x10;
            lcdWrite(0x10|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 21:
            page = 2;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x20;
            lcdWrite(0x20|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 22:
            page = 2;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x40;
            lcdWrite(0x40|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 23:
            page = 2;
            set_address(x, page);    
            gameplay_area[page][x] = gameplay_area[page][x]|0x80;
            lcdWrite(0x80|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y   
            break;
        case 24:
            page = 3;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x01;
            lcdWrite(0x01|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 25:
            page = 3;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x02;
            lcdWrite(0x02|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 26:
            page = 3;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x04;
            lcdWrite(0x04|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 27:
            page = 3;
            set_address(x, page);    
            gameplay_area[page][x] = gameplay_area[page][x]|0x08;
            lcdWrite(0x08|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y  
            break;
        case 28:
            page = 3;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x10;
            lcdWrite(0x10|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 29:
            page = 3;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x20;
            lcdWrite(0x20|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 30:
            page = 3;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x40;
            lcdWrite(0x40|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 31:
            page = 3;
            set_address(x, page);    
            gameplay_area[page][x] = gameplay_area[page][x]|0x80;
            lcdWrite(0x80|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y     
            break;
        case 32:
            page = 4;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x01;
            lcdWrite(0x01|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 33:
            page = 4;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x02;
            lcdWrite(0x02|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 34:
            page = 4;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x04;
            lcdWrite(0x04|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 35:
            page = 4;
            set_address(x, page);     
            gameplay_area[page][x] = gameplay_area[page][x]|0x08;
            lcdWrite(0x08|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 36:
            page = 4;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x10;
            lcdWrite(0x10|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 37:
            page = 4;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x20;
            lcdWrite(0x20|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 38:
            page = 4;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x40;
            lcdWrite(0x40|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 39:
            page = 4;
            set_address(x, page);     
            gameplay_area[page][x] = gameplay_area[page][x]|0x80;
            lcdWrite(0x80|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y    
            break;
        case 40:
            page = 5;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x01;
            lcdWrite(0x01|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case  41:
            page = 5;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x02;
            lcdWrite(0x02|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 42:
            page = 5;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x04;
            lcdWrite(0x04|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 43:
            page = 5;
            set_address(x, page);  
            gameplay_area[page][x] = gameplay_area[page][x]|0x08;
            lcdWrite(0x08|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y  
            break;
        case 44:
            page = 5;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x10;
            lcdWrite(0x10|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 45:
            page = 5;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x20;
            lcdWrite(0x20|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 46:
            page = 5;
            set_address(x, page);
            gameplay_area[page][x] = gameplay_area[page][x]|0x40;
            lcdWrite(0x40|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y
            break;
        case 47:
            page = 5;
            set_address(x, page);     
            gameplay_area[page][x] = gameplay_area[page][x]|0x80;
            lcdWrite(0x80|gameplay_area[page][x], HIGH);   // illuminate the pixel at coordinates x, y     
            break;*/
    }
    return ret;
    
}
