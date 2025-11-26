#ifndef _javax_sound_midi_MidiFileFormat_h_
#define _javax_sound_midi_MidiFileFormat_h_
//$ class javax.sound.midi.MidiFileFormat
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("UNKNOWN_LENGTH")
#undef UNKNOWN_LENGTH

namespace java {
	namespace util {
		class HashMap;
		class Map;
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $import MidiFileFormat : public ::java::lang::Object {
	$class(MidiFileFormat, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MidiFileFormat();
	void init$(int32_t type, float divisionType, int32_t resolution, int32_t bytes, int64_t microseconds);
	void init$(int32_t type, float divisionType, int32_t resolution, int32_t bytes, int64_t microseconds, ::java::util::Map* properties);
	virtual int32_t getByteLength();
	virtual float getDivisionType();
	virtual int64_t getMicrosecondLength();
	virtual $Object* getProperty($String* key);
	virtual int32_t getResolution();
	virtual int32_t getType();
	virtual ::java::util::Map* properties();
	static const int32_t UNKNOWN_LENGTH = (-1);
	int32_t type = 0;
	float divisionType = 0.0;
	int32_t resolution = 0;
	int32_t byteLength = 0;
	int64_t microsecondLength = 0;
	::java::util::HashMap* properties$ = nullptr;
};

		} // midi
	} // sound
} // javax

#pragma pop_macro("UNKNOWN_LENGTH")

#endif // _javax_sound_midi_MidiFileFormat_h_