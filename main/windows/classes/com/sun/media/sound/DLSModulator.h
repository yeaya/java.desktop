#ifndef _com_sun_media_sound_DLSModulator_h_
#define _com_sun_media_sound_DLSModulator_h_
//$ class com.sun.media.sound.DLSModulator
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CONN_DST_CENTER")
#undef CONN_DST_CENTER
#pragma push_macro("CONN_DST_CHORUS")
#undef CONN_DST_CHORUS
#pragma push_macro("CONN_DST_EG1_ATTACKTIME")
#undef CONN_DST_EG1_ATTACKTIME
#pragma push_macro("CONN_DST_EG1_DECAYTIME")
#undef CONN_DST_EG1_DECAYTIME
#pragma push_macro("CONN_DST_EG1_DELAYTIME")
#undef CONN_DST_EG1_DELAYTIME
#pragma push_macro("CONN_DST_EG1_HOLDTIME")
#undef CONN_DST_EG1_HOLDTIME
#pragma push_macro("CONN_DST_EG1_RELEASETIME")
#undef CONN_DST_EG1_RELEASETIME
#pragma push_macro("CONN_DST_EG1_SHUTDOWNTIME")
#undef CONN_DST_EG1_SHUTDOWNTIME
#pragma push_macro("CONN_DST_EG1_SUSTAINLEVEL")
#undef CONN_DST_EG1_SUSTAINLEVEL
#pragma push_macro("CONN_DST_EG2_ATTACKTIME")
#undef CONN_DST_EG2_ATTACKTIME
#pragma push_macro("CONN_DST_EG2_DECAYTIME")
#undef CONN_DST_EG2_DECAYTIME
#pragma push_macro("CONN_DST_EG2_DELAYTIME")
#undef CONN_DST_EG2_DELAYTIME
#pragma push_macro("CONN_DST_EG2_HOLDTIME")
#undef CONN_DST_EG2_HOLDTIME
#pragma push_macro("CONN_DST_EG2_RELEASETIME")
#undef CONN_DST_EG2_RELEASETIME
#pragma push_macro("CONN_DST_EG2_SUSTAINLEVEL")
#undef CONN_DST_EG2_SUSTAINLEVEL
#pragma push_macro("CONN_DST_FILTER_CUTOFF")
#undef CONN_DST_FILTER_CUTOFF
#pragma push_macro("CONN_DST_FILTER_Q")
#undef CONN_DST_FILTER_Q
#pragma push_macro("CONN_DST_GAIN")
#undef CONN_DST_GAIN
#pragma push_macro("CONN_DST_KEYNUMBER")
#undef CONN_DST_KEYNUMBER
#pragma push_macro("CONN_DST_LEFT")
#undef CONN_DST_LEFT
#pragma push_macro("CONN_DST_LEFTREAR")
#undef CONN_DST_LEFTREAR
#pragma push_macro("CONN_DST_LFE_CHANNEL")
#undef CONN_DST_LFE_CHANNEL
#pragma push_macro("CONN_DST_LFO_FREQUENCY")
#undef CONN_DST_LFO_FREQUENCY
#pragma push_macro("CONN_DST_LFO_STARTDELAY")
#undef CONN_DST_LFO_STARTDELAY
#pragma push_macro("CONN_DST_NONE")
#undef CONN_DST_NONE
#pragma push_macro("CONN_DST_PAN")
#undef CONN_DST_PAN
#pragma push_macro("CONN_DST_PITCH")
#undef CONN_DST_PITCH
#pragma push_macro("CONN_DST_REVERB")
#undef CONN_DST_REVERB
#pragma push_macro("CONN_DST_RIGHT")
#undef CONN_DST_RIGHT
#pragma push_macro("CONN_DST_RIGHTREAR")
#undef CONN_DST_RIGHTREAR
#pragma push_macro("CONN_DST_VIB_FREQUENCY")
#undef CONN_DST_VIB_FREQUENCY
#pragma push_macro("CONN_DST_VIB_STARTDELAY")
#undef CONN_DST_VIB_STARTDELAY
#pragma push_macro("CONN_SRC_CC1")
#undef CONN_SRC_CC1
#pragma push_macro("CONN_SRC_CC10")
#undef CONN_SRC_CC10
#pragma push_macro("CONN_SRC_CC11")
#undef CONN_SRC_CC11
#pragma push_macro("CONN_SRC_CC7")
#undef CONN_SRC_CC7
#pragma push_macro("CONN_SRC_CC91")
#undef CONN_SRC_CC91
#pragma push_macro("CONN_SRC_CC93")
#undef CONN_SRC_CC93
#pragma push_macro("CONN_SRC_CHANNELPRESSURE")
#undef CONN_SRC_CHANNELPRESSURE
#pragma push_macro("CONN_SRC_EG1")
#undef CONN_SRC_EG1
#pragma push_macro("CONN_SRC_EG2")
#undef CONN_SRC_EG2
#pragma push_macro("CONN_SRC_KEYNUMBER")
#undef CONN_SRC_KEYNUMBER
#pragma push_macro("CONN_SRC_KEYONVELOCITY")
#undef CONN_SRC_KEYONVELOCITY
#pragma push_macro("CONN_SRC_LFO")
#undef CONN_SRC_LFO
#pragma push_macro("CONN_SRC_MONOPRESSURE")
#undef CONN_SRC_MONOPRESSURE
#pragma push_macro("CONN_SRC_NONE")
#undef CONN_SRC_NONE
#pragma push_macro("CONN_SRC_PITCHWHEEL")
#undef CONN_SRC_PITCHWHEEL
#pragma push_macro("CONN_SRC_POLYPRESSURE")
#undef CONN_SRC_POLYPRESSURE
#pragma push_macro("CONN_SRC_RPN0")
#undef CONN_SRC_RPN0
#pragma push_macro("CONN_SRC_RPN1")
#undef CONN_SRC_RPN1
#pragma push_macro("CONN_SRC_RPN2")
#undef CONN_SRC_RPN2
#pragma push_macro("CONN_SRC_VIBRATO")
#undef CONN_SRC_VIBRATO
#pragma push_macro("CONN_TRN_CONCAVE")
#undef CONN_TRN_CONCAVE
#pragma push_macro("CONN_TRN_CONVEX")
#undef CONN_TRN_CONVEX
#pragma push_macro("CONN_TRN_NONE")
#undef CONN_TRN_NONE
#pragma push_macro("CONN_TRN_SWITCH")
#undef CONN_TRN_SWITCH
#pragma push_macro("DST_FORMAT_CB")
#undef DST_FORMAT_CB
#pragma push_macro("DST_FORMAT_CENT")
#undef DST_FORMAT_CENT
#pragma push_macro("DST_FORMAT_PERCENT")
#undef DST_FORMAT_PERCENT
#pragma push_macro("DST_FORMAT_TIMECENT")
#undef DST_FORMAT_TIMECENT

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DLSModulator : public ::java::lang::Object {
	$class(DLSModulator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DLSModulator();
	void init$();
	int32_t getControl();
	int32_t getDestination();
	static int32_t getDestinationFormat(int32_t destination);
	static $String* getDestinationName(int32_t destination);
	int32_t getScale();
	int32_t getSource();
	static $String* getSourceName(int32_t source);
	int32_t getTransform();
	int32_t getVersion();
	void setControl(int32_t control);
	void setDestination(int32_t destination);
	void setScale(int32_t scale);
	void setSource(int32_t source);
	void setTransform(int32_t transform);
	void setVersion(int32_t version);
	static const int32_t CONN_DST_NONE = 0;
	static const int32_t CONN_DST_GAIN = 1;
	static const int32_t CONN_DST_PITCH = 3;
	static const int32_t CONN_DST_PAN = 4;
	static const int32_t CONN_DST_LFO_FREQUENCY = 260;
	static const int32_t CONN_DST_LFO_STARTDELAY = 261;
	static const int32_t CONN_DST_EG1_ATTACKTIME = 518;
	static const int32_t CONN_DST_EG1_DECAYTIME = 519;
	static const int32_t CONN_DST_EG1_RELEASETIME = 521;
	static const int32_t CONN_DST_EG1_SUSTAINLEVEL = 522;
	static const int32_t CONN_DST_EG2_ATTACKTIME = 778;
	static const int32_t CONN_DST_EG2_DECAYTIME = 779;
	static const int32_t CONN_DST_EG2_RELEASETIME = 781;
	static const int32_t CONN_DST_EG2_SUSTAINLEVEL = 782;
	static const int32_t CONN_DST_KEYNUMBER = 5;
	static const int32_t CONN_DST_LEFT = 16;
	static const int32_t CONN_DST_RIGHT = 17;
	static const int32_t CONN_DST_CENTER = 18;
	static const int32_t CONN_DST_LEFTREAR = 19;
	static const int32_t CONN_DST_RIGHTREAR = 20;
	static const int32_t CONN_DST_LFE_CHANNEL = 21;
	static const int32_t CONN_DST_CHORUS = 128;
	static const int32_t CONN_DST_REVERB = 129;
	static const int32_t CONN_DST_VIB_FREQUENCY = 276;
	static const int32_t CONN_DST_VIB_STARTDELAY = 277;
	static const int32_t CONN_DST_EG1_DELAYTIME = 523;
	static const int32_t CONN_DST_EG1_HOLDTIME = 524;
	static const int32_t CONN_DST_EG1_SHUTDOWNTIME = 525;
	static const int32_t CONN_DST_EG2_DELAYTIME = 783;
	static const int32_t CONN_DST_EG2_HOLDTIME = 784;
	static const int32_t CONN_DST_FILTER_CUTOFF = 1280;
	static const int32_t CONN_DST_FILTER_Q = 1281;
	static const int32_t CONN_SRC_NONE = 0;
	static const int32_t CONN_SRC_LFO = 1;
	static const int32_t CONN_SRC_KEYONVELOCITY = 2;
	static const int32_t CONN_SRC_KEYNUMBER = 3;
	static const int32_t CONN_SRC_EG1 = 4;
	static const int32_t CONN_SRC_EG2 = 5;
	static const int32_t CONN_SRC_PITCHWHEEL = 6;
	static const int32_t CONN_SRC_CC1 = 129;
	static const int32_t CONN_SRC_CC7 = 135;
	static const int32_t CONN_SRC_CC10 = 138;
	static const int32_t CONN_SRC_CC11 = 139;
	static const int32_t CONN_SRC_RPN0 = 256;
	static const int32_t CONN_SRC_RPN1 = 257;
	static const int32_t CONN_SRC_RPN2 = 258;
	static const int32_t CONN_SRC_POLYPRESSURE = 7;
	static const int32_t CONN_SRC_CHANNELPRESSURE = 8;
	static const int32_t CONN_SRC_VIBRATO = 9;
	static const int32_t CONN_SRC_MONOPRESSURE = 10;
	static const int32_t CONN_SRC_CC91 = 219;
	static const int32_t CONN_SRC_CC93 = 221;
	static const int32_t CONN_TRN_NONE = 0;
	static const int32_t CONN_TRN_CONCAVE = 1;
	static const int32_t CONN_TRN_CONVEX = 2;
	static const int32_t CONN_TRN_SWITCH = 3;
	static const int32_t DST_FORMAT_CB = 1;
	static const int32_t DST_FORMAT_CENT = 1;
	static const int32_t DST_FORMAT_TIMECENT = 2;
	static const int32_t DST_FORMAT_PERCENT = 3;
	int32_t source = 0;
	int32_t control = 0;
	int32_t destination = 0;
	int32_t transform = 0;
	int32_t scale = 0;
	int32_t version = 0;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("CONN_DST_CENTER")
#pragma pop_macro("CONN_DST_CHORUS")
#pragma pop_macro("CONN_DST_EG1_ATTACKTIME")
#pragma pop_macro("CONN_DST_EG1_DECAYTIME")
#pragma pop_macro("CONN_DST_EG1_DELAYTIME")
#pragma pop_macro("CONN_DST_EG1_HOLDTIME")
#pragma pop_macro("CONN_DST_EG1_RELEASETIME")
#pragma pop_macro("CONN_DST_EG1_SHUTDOWNTIME")
#pragma pop_macro("CONN_DST_EG1_SUSTAINLEVEL")
#pragma pop_macro("CONN_DST_EG2_ATTACKTIME")
#pragma pop_macro("CONN_DST_EG2_DECAYTIME")
#pragma pop_macro("CONN_DST_EG2_DELAYTIME")
#pragma pop_macro("CONN_DST_EG2_HOLDTIME")
#pragma pop_macro("CONN_DST_EG2_RELEASETIME")
#pragma pop_macro("CONN_DST_EG2_SUSTAINLEVEL")
#pragma pop_macro("CONN_DST_FILTER_CUTOFF")
#pragma pop_macro("CONN_DST_FILTER_Q")
#pragma pop_macro("CONN_DST_GAIN")
#pragma pop_macro("CONN_DST_KEYNUMBER")
#pragma pop_macro("CONN_DST_LEFT")
#pragma pop_macro("CONN_DST_LEFTREAR")
#pragma pop_macro("CONN_DST_LFE_CHANNEL")
#pragma pop_macro("CONN_DST_LFO_FREQUENCY")
#pragma pop_macro("CONN_DST_LFO_STARTDELAY")
#pragma pop_macro("CONN_DST_NONE")
#pragma pop_macro("CONN_DST_PAN")
#pragma pop_macro("CONN_DST_PITCH")
#pragma pop_macro("CONN_DST_REVERB")
#pragma pop_macro("CONN_DST_RIGHT")
#pragma pop_macro("CONN_DST_RIGHTREAR")
#pragma pop_macro("CONN_DST_VIB_FREQUENCY")
#pragma pop_macro("CONN_DST_VIB_STARTDELAY")
#pragma pop_macro("CONN_SRC_CC1")
#pragma pop_macro("CONN_SRC_CC10")
#pragma pop_macro("CONN_SRC_CC11")
#pragma pop_macro("CONN_SRC_CC7")
#pragma pop_macro("CONN_SRC_CC91")
#pragma pop_macro("CONN_SRC_CC93")
#pragma pop_macro("CONN_SRC_CHANNELPRESSURE")
#pragma pop_macro("CONN_SRC_EG1")
#pragma pop_macro("CONN_SRC_EG2")
#pragma pop_macro("CONN_SRC_KEYNUMBER")
#pragma pop_macro("CONN_SRC_KEYONVELOCITY")
#pragma pop_macro("CONN_SRC_LFO")
#pragma pop_macro("CONN_SRC_MONOPRESSURE")
#pragma pop_macro("CONN_SRC_NONE")
#pragma pop_macro("CONN_SRC_PITCHWHEEL")
#pragma pop_macro("CONN_SRC_POLYPRESSURE")
#pragma pop_macro("CONN_SRC_RPN0")
#pragma pop_macro("CONN_SRC_RPN1")
#pragma pop_macro("CONN_SRC_RPN2")
#pragma pop_macro("CONN_SRC_VIBRATO")
#pragma pop_macro("CONN_TRN_CONCAVE")
#pragma pop_macro("CONN_TRN_CONVEX")
#pragma pop_macro("CONN_TRN_NONE")
#pragma pop_macro("CONN_TRN_SWITCH")
#pragma pop_macro("DST_FORMAT_CB")
#pragma pop_macro("DST_FORMAT_CENT")
#pragma pop_macro("DST_FORMAT_PERCENT")
#pragma pop_macro("DST_FORMAT_TIMECENT")

#endif // _com_sun_media_sound_DLSModulator_h_