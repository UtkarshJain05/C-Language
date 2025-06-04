
/**DIFFERENT TYPES OF DATATYPES ACCORDING TO THEIR SIZES.**/



/* Some General Knowledge :

--> 1 byte = 8 bits.
--> Formula For Finding Storage Limit of any Datatype = (2^n),
     where n = the Number of Bits Occupies by that Datatype.
*/



// # Integer is Known which is used to store Integers Values.
// --> Integer has a size of 4 bytes {32 bits}. So (2^32) --> Storage Limit.
// --> Integer Has A limit of Storing Numbers from (-(2^31) to (2^31)-1).


// # Float is also Known which is used to store Real Number Values.


// # Char is also Known which is used to store Character / Symbolic Values.
// --> Char has a size of 1 byte {8 bits}. So 2^8 = '256'--> Storage Limit.


// # Short is a type of integer Datatype with less Storage.
// --> Short has a size of 2 bytes {16 bits}. So 2^16 = '65536' --> Storage Limit.
// --> Short Has A limit of Storing Numbers from (-32768 to 32767) or (-(2^15) to (2^15)-1).

    #include<stdio.h>
    int main(){
        short x = 32770;
        printf("%d",x);
    return 0;
    } 
/* Here -327866 Will be the answer because 32768 is out of storage range so again 
   the range output will be repeated from -32768. */


// # Long is a type of integer Datatype with more Storage than Short.


// # long long is a type of integer Datatype with more Storage Than Long.
// --> long long has a size of 8 bytes {64 bits}. So (2^64) --> Storage Limit.
// --> long long Has A limit of Storing Numbers from (-(2^63) to (2^63)-1). {Very Big Storage.}