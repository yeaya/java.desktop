#ifndef _javax_sound_midi_Track$ImmutableEndOfTrack_h_
#define _javax_sound_midi_Track$ImmutableEndOfTrack_h_
//$ class javax.sound.midi.Track$ImmutableEndOfTrack
//$ extends javax.sound.midi.MetaMessage

#include <java/lang/Array.h>
#include <javax/sound/midi/MetaMessage.h>

namespace javax {
	namespace sound {
		namespace midi {

class Track$ImmutableEndOfTrack : public ::javax::sound::midi::MetaMessage {
	$class(Track$ImmutableEndOfTrack, $NO_CLASS_INIT, ::javax::sound::midi::MetaMessage)
public:
	Track$ImmutableEndOfTrack();
	void init$();
	using ::javax::sound::midi::MetaMessage::setMessage;
	virtual void setMessage(int32_t type, $bytes* data, int32_t length) override;
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_Track$ImmutableEndOfTrack_h_