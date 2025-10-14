#ifndef _javax_sound_midi_InvalidMidiDataException_h_
#define _javax_sound_midi_InvalidMidiDataException_h_
//$ class javax.sound.midi.InvalidMidiDataException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace sound {
		namespace midi {

class $import InvalidMidiDataException : public ::java::lang::Exception {
	$class(InvalidMidiDataException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	InvalidMidiDataException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x2697492DFCE72023;
	InvalidMidiDataException(const InvalidMidiDataException& e);
	InvalidMidiDataException wrapper$();
	virtual void throwWrapper$() override;
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_InvalidMidiDataException_h_