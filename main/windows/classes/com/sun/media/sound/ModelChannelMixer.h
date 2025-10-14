#ifndef _com_sun_media_sound_ModelChannelMixer_h_
#define _com_sun_media_sound_ModelChannelMixer_h_
//$ interface com.sun.media.sound.ModelChannelMixer
//$ extends javax.sound.midi.MidiChannel

#include <java/lang/Array.h>
#include <javax/sound/midi/MidiChannel.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelChannelMixer : public ::javax::sound::midi::MidiChannel {
	$interface(ModelChannelMixer, $NO_CLASS_INIT, ::javax::sound::midi::MidiChannel)
public:
	virtual bool process($Array<float, 2>* buffer, int32_t offset, int32_t len) {return false;}
	virtual void stop() {}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelChannelMixer_h_