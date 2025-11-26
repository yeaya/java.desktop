#ifndef _com_sun_media_sound_SF2Modulator_h_
#define _com_sun_media_sound_SF2Modulator_h_
//$ class com.sun.media.sound.SF2Modulator
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SOURCE_CHANNEL_PRESSURE")
#undef SOURCE_CHANNEL_PRESSURE
#pragma push_macro("SOURCE_DIRECTION_MAX_MIN")
#undef SOURCE_DIRECTION_MAX_MIN
#pragma push_macro("SOURCE_DIRECTION_MIN_MAX")
#undef SOURCE_DIRECTION_MIN_MAX
#pragma push_macro("SOURCE_MIDI_CONTROL")
#undef SOURCE_MIDI_CONTROL
#pragma push_macro("SOURCE_NONE")
#undef SOURCE_NONE
#pragma push_macro("SOURCE_NOTE_ON_KEYNUMBER")
#undef SOURCE_NOTE_ON_KEYNUMBER
#pragma push_macro("SOURCE_NOTE_ON_VELOCITY")
#undef SOURCE_NOTE_ON_VELOCITY
#pragma push_macro("SOURCE_PITCH_SENSITIVITY")
#undef SOURCE_PITCH_SENSITIVITY
#pragma push_macro("SOURCE_PITCH_WHEEL")
#undef SOURCE_PITCH_WHEEL
#pragma push_macro("SOURCE_POLARITY_BIPOLAR")
#undef SOURCE_POLARITY_BIPOLAR
#pragma push_macro("SOURCE_POLARITY_UNIPOLAR")
#undef SOURCE_POLARITY_UNIPOLAR
#pragma push_macro("SOURCE_POLY_PRESSURE")
#undef SOURCE_POLY_PRESSURE
#pragma push_macro("SOURCE_TYPE_CONCAVE")
#undef SOURCE_TYPE_CONCAVE
#pragma push_macro("SOURCE_TYPE_CONVEX")
#undef SOURCE_TYPE_CONVEX
#pragma push_macro("SOURCE_TYPE_LINEAR")
#undef SOURCE_TYPE_LINEAR
#pragma push_macro("SOURCE_TYPE_SWITCH")
#undef SOURCE_TYPE_SWITCH
#pragma push_macro("TRANSFORM_ABSOLUTE")
#undef TRANSFORM_ABSOLUTE
#pragma push_macro("TRANSFORM_LINEAR")
#undef TRANSFORM_LINEAR

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SF2Modulator : public ::java::lang::Object {
	$class(SF2Modulator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SF2Modulator();
	void init$();
	int16_t getAmount();
	int32_t getAmountSourceOperator();
	int32_t getDestinationOperator();
	int32_t getSourceOperator();
	int32_t getTransportOperator();
	void setAmount(int16_t amount);
	void setAmountSourceOperator(int32_t amountSourceOperator);
	void setDestinationOperator(int32_t destinationOperator);
	void setSourceOperator(int32_t sourceOperator);
	void setTransportOperator(int32_t transportOperator);
	static const int32_t SOURCE_NONE = 0;
	static const int32_t SOURCE_NOTE_ON_VELOCITY = 2;
	static const int32_t SOURCE_NOTE_ON_KEYNUMBER = 3;
	static const int32_t SOURCE_POLY_PRESSURE = 10;
	static const int32_t SOURCE_CHANNEL_PRESSURE = 13;
	static const int32_t SOURCE_PITCH_WHEEL = 14;
	static const int32_t SOURCE_PITCH_SENSITIVITY = 16;
	static const int32_t SOURCE_MIDI_CONTROL = 128; // 128 * 1
	static const int32_t SOURCE_DIRECTION_MIN_MAX = 0; // 256 * 0
	static const int32_t SOURCE_DIRECTION_MAX_MIN = 256; // 256 * 1
	static const int32_t SOURCE_POLARITY_UNIPOLAR = 0; // 512 * 0
	static const int32_t SOURCE_POLARITY_BIPOLAR = 512; // 512 * 1
	static const int32_t SOURCE_TYPE_LINEAR = 0; // 1024 * 0
	static const int32_t SOURCE_TYPE_CONCAVE = 1024; // 1024 * 1
	static const int32_t SOURCE_TYPE_CONVEX = 2048; // 1024 * 2
	static const int32_t SOURCE_TYPE_SWITCH = 3072; // 1024 * 3
	static const int32_t TRANSFORM_LINEAR = 0;
	static const int32_t TRANSFORM_ABSOLUTE = 2;
	int32_t sourceOperator = 0;
	int32_t destinationOperator = 0;
	int16_t amount = 0;
	int32_t amountSourceOperator = 0;
	int32_t transportOperator = 0;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("SOURCE_CHANNEL_PRESSURE")
#pragma pop_macro("SOURCE_DIRECTION_MAX_MIN")
#pragma pop_macro("SOURCE_DIRECTION_MIN_MAX")
#pragma pop_macro("SOURCE_MIDI_CONTROL")
#pragma pop_macro("SOURCE_NONE")
#pragma pop_macro("SOURCE_NOTE_ON_KEYNUMBER")
#pragma pop_macro("SOURCE_NOTE_ON_VELOCITY")
#pragma pop_macro("SOURCE_PITCH_SENSITIVITY")
#pragma pop_macro("SOURCE_PITCH_WHEEL")
#pragma pop_macro("SOURCE_POLARITY_BIPOLAR")
#pragma pop_macro("SOURCE_POLARITY_UNIPOLAR")
#pragma pop_macro("SOURCE_POLY_PRESSURE")
#pragma pop_macro("SOURCE_TYPE_CONCAVE")
#pragma pop_macro("SOURCE_TYPE_CONVEX")
#pragma pop_macro("SOURCE_TYPE_LINEAR")
#pragma pop_macro("SOURCE_TYPE_SWITCH")
#pragma pop_macro("TRANSFORM_ABSOLUTE")
#pragma pop_macro("TRANSFORM_LINEAR")

#endif // _com_sun_media_sound_SF2Modulator_h_