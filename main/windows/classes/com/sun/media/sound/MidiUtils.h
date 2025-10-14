#ifndef _com_sun_media_sound_MidiUtils_h_
#define _com_sun_media_sound_MidiUtils_h_
//$ class com.sun.media.sound.MidiUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_TEMPO_MPQ")
#undef DEFAULT_TEMPO_MPQ
#pragma push_macro("META_END_OF_TRACK_TYPE")
#undef META_END_OF_TRACK_TYPE
#pragma push_macro("META_TEMPO_TYPE")
#undef META_TEMPO_TYPE

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class MidiUtils$TempoCache;
			}
		}
	}
}
namespace java {
	namespace lang {
		class RuntimeException;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiDevice$Info;
			class MidiMessage;
			class Sequence;
			class Track;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class MidiUtils : public ::java::lang::Object {
	$class(MidiUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MidiUtils();
	void init$();
	static void checkSysexStatus($bytes* data, int32_t length);
	static void checkSysexStatus(int32_t status);
	static double convertTempo(double tempo);
	static int32_t getTempoMPQ(::javax::sound::midi::MidiMessage* midiMsg);
	static bool isMetaEndOfTrack(::javax::sound::midi::MidiMessage* midiMsg);
	static bool isMetaTempo(::javax::sound::midi::MidiMessage* midiMsg);
	static int64_t microsec2ticks(int64_t us, double tempoMPQ, int32_t resolution);
	static int64_t microsecond2tick(::javax::sound::midi::Sequence* seq, int64_t micros, ::com::sun::media::sound::MidiUtils$TempoCache* cache);
	static int32_t tick2index(::javax::sound::midi::Track* track, int64_t tick);
	static int64_t tick2microsecond(::javax::sound::midi::Sequence* seq, int64_t tick, ::com::sun::media::sound::MidiUtils$TempoCache* cache);
	static int64_t ticks2microsec(int64_t tick, double tempoMPQ, int32_t resolution);
	static ::java::lang::RuntimeException* unsupportedDevice(::javax::sound::midi::MidiDevice$Info* info);
	static const int32_t DEFAULT_TEMPO_MPQ = 0x0007A120;
	static const int32_t META_END_OF_TRACK_TYPE = 47;
	static const int32_t META_TEMPO_TYPE = 81;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("DEFAULT_TEMPO_MPQ")
#pragma pop_macro("META_END_OF_TRACK_TYPE")
#pragma pop_macro("META_TEMPO_TYPE")

#endif // _com_sun_media_sound_MidiUtils_h_