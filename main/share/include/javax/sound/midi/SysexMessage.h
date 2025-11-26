#ifndef _javax_sound_midi_SysexMessage_h_
#define _javax_sound_midi_SysexMessage_h_
//$ class javax.sound.midi.SysexMessage
//$ extends javax.sound.midi.MidiMessage

#include <java/lang/Array.h>
#include <javax/sound/midi/MidiMessage.h>

#pragma push_macro("SPECIAL_SYSTEM_EXCLUSIVE")
#undef SPECIAL_SYSTEM_EXCLUSIVE
#pragma push_macro("SYSTEM_EXCLUSIVE")
#undef SYSTEM_EXCLUSIVE

namespace javax {
	namespace sound {
		namespace midi {

class $import SysexMessage : public ::javax::sound::midi::MidiMessage {
	$class(SysexMessage, $NO_CLASS_INIT, ::javax::sound::midi::MidiMessage)
public:
	SysexMessage();
	void init$();
	void init$($bytes* data, int32_t length);
	void init$(int32_t status, $bytes* data, int32_t length);
	void init$($bytes* data);
	virtual $Object* clone() override;
	virtual $bytes* getData();
	virtual void setMessage($bytes* data, int32_t length) override;
	virtual void setMessage(int32_t status, $bytes* data, int32_t length);
	static const int32_t SYSTEM_EXCLUSIVE = 240;
	static const int32_t SPECIAL_SYSTEM_EXCLUSIVE = 247;
};

		} // midi
	} // sound
} // javax

#pragma pop_macro("SPECIAL_SYSTEM_EXCLUSIVE")
#pragma pop_macro("SYSTEM_EXCLUSIVE")

#endif // _javax_sound_midi_SysexMessage_h_