#ifndef _com_sun_media_sound_RealTimeSequencer$RealTimeSequencerInfo_h_
#define _com_sun_media_sound_RealTimeSequencer$RealTimeSequencerInfo_h_
//$ class com.sun.media.sound.RealTimeSequencer$RealTimeSequencerInfo
//$ extends javax.sound.midi.MidiDevice$Info

#include <javax/sound/midi/MidiDevice$Info.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RealTimeSequencer$RealTimeSequencerInfo : public ::javax::sound::midi::MidiDevice$Info {
	$class(RealTimeSequencer$RealTimeSequencerInfo, 0, ::javax::sound::midi::MidiDevice$Info)
public:
	RealTimeSequencer$RealTimeSequencerInfo();
	void init$();
	static $String* name;
	static $String* vendor;
	static $String* description;
	static $String* version;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RealTimeSequencer$RealTimeSequencerInfo_h_