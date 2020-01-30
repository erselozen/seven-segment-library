#ifndef SevenSegment_h
#define SevenSegment_h

#include "Arduino.h"


class Seven_Segment { 
public:
	Seven_Segment();
	~Seven_Segment();


    void Seven_Segment_ileri();
	void Seven_Segment_geri();
	void Seven_Segment_flipflop(int sure);
	void Seven_Segment_sondur();
	
};

#endif
