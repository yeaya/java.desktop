#ifndef _javax_sound_midi_Sequence_h_
#define _javax_sound_midi_Sequence_h_
//$ class javax.sound.midi.Sequence
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PPQ")
#undef PPQ
#pragma push_macro("SMPTE_24")
#undef SMPTE_24
#pragma push_macro("SMPTE_25")
#undef SMPTE_25
#pragma push_macro("SMPTE_30")
#undef SMPTE_30
#pragma push_macro("SMPTE_30DROP")
#undef SMPTE_30DROP

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Patch;
			class Track;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $import Sequence : public ::java::lang::Object {
	$class(Sequence, 0, ::java::lang::Object)
public:
	Sequence();
	void init$(float divisionType, int32_t resolution);
	void init$(float divisionType, int32_t resolution, int32_t numTracks);
	virtual ::javax::sound::midi::Track* createTrack();
	virtual bool deleteTrack(::javax::sound::midi::Track* track);
	virtual float getDivisionType();
	virtual int64_t getMicrosecondLength();
	virtual $Array<::javax::sound::midi::Patch>* getPatchList();
	virtual int32_t getResolution();
	virtual int64_t getTickLength();
	virtual $Array<::javax::sound::midi::Track>* getTracks();
	static float PPQ;
	static float SMPTE_24;
	static float SMPTE_25;
	static float SMPTE_30DROP;
	static float SMPTE_30;
	float divisionType = 0.0;
	int32_t resolution = 0;
	::java::util::Vector* tracks = nullptr;
};

		} // midi
	} // sound
} // javax

#pragma pop_macro("PPQ")
#pragma pop_macro("SMPTE_24")
#pragma pop_macro("SMPTE_25")
#pragma pop_macro("SMPTE_30")
#pragma pop_macro("SMPTE_30DROP")

#endif // _javax_sound_midi_Sequence_h_