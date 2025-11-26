#ifndef _javax_sound_midi_MidiMessage_h_
#define _javax_sound_midi_MidiMessage_h_
//$ class javax.sound.midi.MidiMessage
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace javax {
	namespace sound {
		namespace midi {

class $import MidiMessage : public ::java::lang::Cloneable {
	$class(MidiMessage, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	MidiMessage();
	virtual $Object* clone() override;
	void init$($bytes* data);
	virtual int32_t getLength();
	virtual $bytes* getMessage();
	virtual int32_t getStatus();
	virtual void setMessage($bytes* data, int32_t length);
	$bytes* data = nullptr;
	int32_t length = 0;
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_MidiMessage_h_