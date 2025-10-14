#ifndef _com_sun_media_sound_ModelOscillatorStream_h_
#define _com_sun_media_sound_ModelOscillatorStream_h_
//$ interface com.sun.media.sound.ModelOscillatorStream
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace sound {
		namespace midi {
			class MidiChannel;
			class VoiceStatus;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelOscillatorStream : public ::java::lang::Object {
	$interface(ModelOscillatorStream, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void close() {}
	virtual void noteOff(int32_t velocity) {}
	virtual void noteOn(::javax::sound::midi::MidiChannel* channel, ::javax::sound::midi::VoiceStatus* voice, int32_t noteNumber, int32_t velocity) {}
	virtual int32_t read($Array<float, 2>* buffer, int32_t offset, int32_t len) {return 0;}
	virtual void setPitch(float pitch) {}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelOscillatorStream_h_