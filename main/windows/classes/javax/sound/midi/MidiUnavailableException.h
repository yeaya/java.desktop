#ifndef _javax_sound_midi_MidiUnavailableException_h_
#define _javax_sound_midi_MidiUnavailableException_h_
//$ class javax.sound.midi.MidiUnavailableException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace sound {
		namespace midi {

class $export MidiUnavailableException : public ::java::lang::Exception {
	$class(MidiUnavailableException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	MidiUnavailableException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x54918F867F0D11C3;
	MidiUnavailableException(const MidiUnavailableException& e);
	MidiUnavailableException wrapper$();
	virtual void throwWrapper$() override;
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_MidiUnavailableException_h_