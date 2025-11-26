#ifndef _javax_sound_midi_MidiDevice$Info_h_
#define _javax_sound_midi_MidiDevice$Info_h_
//$ class javax.sound.midi.MidiDevice$Info
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sound {
		namespace midi {

class $export MidiDevice$Info : public ::java::lang::Object {
	$class(MidiDevice$Info, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MidiDevice$Info();
	void init$($String* name, $String* vendor, $String* description, $String* version);
	virtual bool equals(Object$* obj) override;
	$String* getDescription();
	$String* getName();
	$String* getVendor();
	$String* getVersion();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* vendor = nullptr;
	$String* description = nullptr;
	$String* version = nullptr;
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_MidiDevice$Info_h_