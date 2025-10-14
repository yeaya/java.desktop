#ifndef _javax_sound_midi_MidiChannel_h_
#define _javax_sound_midi_MidiChannel_h_
//$ interface javax.sound.midi.MidiChannel
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sound {
		namespace midi {

class $import MidiChannel : public ::java::lang::Object {
	$interface(MidiChannel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void allNotesOff() {}
	virtual void allSoundOff() {}
	virtual void controlChange(int32_t controller, int32_t value) {}
	virtual int32_t getChannelPressure() {return 0;}
	virtual int32_t getController(int32_t controller) {return 0;}
	virtual bool getMono() {return false;}
	virtual bool getMute() {return false;}
	virtual bool getOmni() {return false;}
	virtual int32_t getPitchBend() {return 0;}
	virtual int32_t getPolyPressure(int32_t noteNumber) {return 0;}
	virtual int32_t getProgram() {return 0;}
	virtual bool getSolo() {return false;}
	virtual bool localControl(bool on) {return false;}
	virtual void noteOff(int32_t noteNumber, int32_t velocity) {}
	virtual void noteOff(int32_t noteNumber) {}
	virtual void noteOn(int32_t noteNumber, int32_t velocity) {}
	virtual void programChange(int32_t program) {}
	virtual void programChange(int32_t bank, int32_t program) {}
	virtual void resetAllControllers() {}
	virtual void setChannelPressure(int32_t pressure) {}
	virtual void setMono(bool on) {}
	virtual void setMute(bool mute) {}
	virtual void setOmni(bool on) {}
	virtual void setPitchBend(int32_t bend) {}
	virtual void setPolyPressure(int32_t noteNumber, int32_t pressure) {}
	virtual void setSolo(bool soloState) {}
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_MidiChannel_h_