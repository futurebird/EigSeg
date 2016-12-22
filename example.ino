//This is the array that maps charecters to segment configuraions. 

const uint8_t characterArray[] PROGMEM = {
// ABCDEFGH  Segments      8-segment map:
  011000011, // 0   "0"       A BBBBB H
  010000000, // 1   "1"       A C   D H
  001011010, // 2   "2"       A C   D H
  011101010, // 3   "3"       A  C D  H
  000110101, // 4   "4"       A  E F  H
  001011010, // 5   "5"       A E   F H
  011101110, // 6   "6"       A E   F H
  001011000, // 7   "7"       A GGGGG H
  001111110, // 8   "8"
  001100101, // 9   "9"
  011111101, // 10  "A"
  010001110, // 11  "b"
  011000010, // 12  "C"
  000001111, // 13  "d" }

// setup
void setup() {
  
 //set all of the pins to output. 


//set pins 1-7 to output
for(int a=0;a<7;) pinMode(a++,OUTPUT);

 byte segmentA, segmentB, segmentC, segmentD, segmentE, segmentF, segmentG, segmentH;

// set the pins according to the segment diagram:
 //     A BBBBB H
 //     A C   D H
 //     A C   D H
 //     A  C D  H
 //     A  E F  H
 //     A E   F H
 //     A E   F H
 //     A GGGGG H

byte SegmentPins[8];

 

  SegmentPins[5] = segmentA;
  SegmentPins[1] = segmentB;
  SegmentPins[7] = segmentC;
  SegmentPins[4] = segmentD;
  SegmentPins[6] = segmentE;
  SegmentPins[2] = segmentF;
  SegmentPins[0] = segmentG;
  SegmentPins[3] = segmentH;

characterToDisplay = 4;

			const uint8_t chr = pgm_read_byte(&characterArray[characterToDisplay]);
			if (chr & (1<<6)) digitalWrite(segmentA, HIGH);
			if (chr & (1<<5)) digitalWrite(segmentB, HIGH);
			if (chr & (1<<4)) digitalWrite(segmentC, HIGH);
			if (chr & (1<<3)) digitalWrite(segmentD, HIGH);
			if (chr & (1<<2)) digitalWrite(segmentE, HIGH);
			if (chr & (1<<1)) digitalWrite(segmentF, HIGH);
			if (chr & (1<<0)) digitalWrite(segmentG, HIGH);



}

// loop
void loop() {





                      // wait for a second
}
