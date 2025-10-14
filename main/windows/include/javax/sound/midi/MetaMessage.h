#ifndef _javax_sound_midi_MetaMessage_h_
#define _javax_sound_midi_MetaMessage_h_
//$ class javax.sound.midi.MetaMessage
//$ extends javax.sound.midi.MidiMessage

#include <java/lang/Array.h>
#include <javax/sound/midi/MidiMessage.h>

#pragma push_macro("META")
#undef META

namespace javax {
	namespace sound {
		namespace midi {

class $import MetaMessage : public ::javax::sound::midi::MidiMessage {
	$class(MetaMessage, $NO_CLASS_INIT, ::javax::sound::midi::MidiMessage)
public:
	MetaMessage();
	void init$();
	void init$(int32_t type, $bytes* data, int32_t length);
	void init$($bytes* data);
	virtual $Object* clone() override;
	virtual $bytes* getData();
	virtual int32_t getType();
	int32_t getVarIntLength(int64_t value);
	using ::javax::sound::midi::MidiMessage::setMessage;
	virtual void setMessage(int32_t type, $bytes* data, int32_t length);
	void writeVarInt($bytes* data, int32_t off, int64_t value);
	static const int32_t META = 255;
	int32_t dataLength = 0;
	static const int64_t mask = 127;
};

		} // midi
	} // sound
} // javax

#pragma pop_macro("META")

#endif // _javax_sound_midi_MetaMessage_h_