#ifndef _javax_sound_midi_ShortMessage_h_
#define _javax_sound_midi_ShortMessage_h_
//$ class javax.sound.midi.ShortMessage
//$ extends javax.sound.midi.MidiMessage

#include <java/lang/Array.h>
#include <javax/sound/midi/MidiMessage.h>

#pragma push_macro("ACTIVE_SENSING")
#undef ACTIVE_SENSING
#pragma push_macro("CHANNEL_PRESSURE")
#undef CHANNEL_PRESSURE
#pragma push_macro("CONTINUE")
#undef CONTINUE
#pragma push_macro("CONTROL_CHANGE")
#undef CONTROL_CHANGE
#pragma push_macro("END_OF_EXCLUSIVE")
#undef END_OF_EXCLUSIVE
#pragma push_macro("MIDI_TIME_CODE")
#undef MIDI_TIME_CODE
#pragma push_macro("NOTE_OFF")
#undef NOTE_OFF
#pragma push_macro("NOTE_ON")
#undef NOTE_ON
#pragma push_macro("PITCH_BEND")
#undef PITCH_BEND
#pragma push_macro("POLY_PRESSURE")
#undef POLY_PRESSURE
#pragma push_macro("PROGRAM_CHANGE")
#undef PROGRAM_CHANGE
#pragma push_macro("SONG_POSITION_POINTER")
#undef SONG_POSITION_POINTER
#pragma push_macro("SONG_SELECT")
#undef SONG_SELECT
#pragma push_macro("START")
#undef START
#pragma push_macro("STOP")
#undef STOP
#pragma push_macro("SYSTEM_RESET")
#undef SYSTEM_RESET
#pragma push_macro("TIMING_CLOCK")
#undef TIMING_CLOCK
#pragma push_macro("TUNE_REQUEST")
#undef TUNE_REQUEST

namespace javax {
	namespace sound {
		namespace midi {

class $export ShortMessage : public ::javax::sound::midi::MidiMessage {
	$class(ShortMessage, $NO_CLASS_INIT, ::javax::sound::midi::MidiMessage)
public:
	ShortMessage();
	void init$();
	void init$(int32_t status);
	void init$(int32_t status, int32_t data1, int32_t data2);
	void init$(int32_t command, int32_t channel, int32_t data1, int32_t data2);
	void init$($bytes* data);
	virtual $Object* clone() override;
	virtual int32_t getChannel();
	virtual int32_t getCommand();
	virtual int32_t getData1();
	virtual int32_t getData2();
	int32_t getDataLength(int32_t status);
	using ::javax::sound::midi::MidiMessage::setMessage;
	virtual void setMessage(int32_t status);
	virtual void setMessage(int32_t status, int32_t data1, int32_t data2);
	virtual void setMessage(int32_t command, int32_t channel, int32_t data1, int32_t data2);
	static const int32_t MIDI_TIME_CODE = 241;
	static const int32_t SONG_POSITION_POINTER = 242;
	static const int32_t SONG_SELECT = 243;
	static const int32_t TUNE_REQUEST = 246;
	static const int32_t END_OF_EXCLUSIVE = 247;
	static const int32_t TIMING_CLOCK = 248;
	static const int32_t START = 250;
	static const int32_t CONTINUE = 251;
	static const int32_t STOP = 252;
	static const int32_t ACTIVE_SENSING = 254;
	static const int32_t SYSTEM_RESET = 255;
	static const int32_t NOTE_OFF = 128;
	static const int32_t NOTE_ON = 144;
	static const int32_t POLY_PRESSURE = 160;
	static const int32_t CONTROL_CHANGE = 176;
	static const int32_t PROGRAM_CHANGE = 192;
	static const int32_t CHANNEL_PRESSURE = 208;
	static const int32_t PITCH_BEND = 224;
};

		} // midi
	} // sound
} // javax

#pragma pop_macro("ACTIVE_SENSING")
#pragma pop_macro("CHANNEL_PRESSURE")
#pragma pop_macro("CONTINUE")
#pragma pop_macro("CONTROL_CHANGE")
#pragma pop_macro("END_OF_EXCLUSIVE")
#pragma pop_macro("MIDI_TIME_CODE")
#pragma pop_macro("NOTE_OFF")
#pragma pop_macro("NOTE_ON")
#pragma pop_macro("PITCH_BEND")
#pragma pop_macro("POLY_PRESSURE")
#pragma pop_macro("PROGRAM_CHANGE")
#pragma pop_macro("SONG_POSITION_POINTER")
#pragma pop_macro("SONG_SELECT")
#pragma pop_macro("START")
#pragma pop_macro("STOP")
#pragma pop_macro("SYSTEM_RESET")
#pragma pop_macro("TIMING_CLOCK")
#pragma pop_macro("TUNE_REQUEST")

#endif // _javax_sound_midi_ShortMessage_h_