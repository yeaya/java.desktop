#ifndef _com_sun_media_sound_MidiUtils$TempoCache_h_
#define _com_sun_media_sound_MidiUtils$TempoCache_h_
//$ class com.sun.media.sound.MidiUtils$TempoCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace sound {
		namespace midi {
			class Sequence;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class MidiUtils$TempoCache : public ::java::lang::Object {
	$class(MidiUtils$TempoCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MidiUtils$TempoCache();
	void init$();
	void init$(::javax::sound::midi::Sequence* seq);
	int32_t getCurrTempoMPQ();
	float getTempoMPQAt(int64_t tick);
	float getTempoMPQAt(int64_t tick, float startTempoMPQ);
	void refresh(::javax::sound::midi::Sequence* seq);
	$longs* ticks = nullptr;
	$ints* tempos = nullptr;
	int32_t snapshotIndex = 0;
	int32_t snapshotMicro = 0;
	int32_t currTempo = 0;
	bool firstTempoIsFake = false;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_MidiUtils$TempoCache_h_