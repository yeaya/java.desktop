#ifndef _javax_sound_midi_Sequencer_h_
#define _javax_sound_midi_Sequencer_h_
//$ interface javax.sound.midi.Sequencer
//$ extends javax.sound.midi.MidiDevice

#include <java/lang/Array.h>
#include <javax/sound/midi/MidiDevice.h>

#pragma push_macro("LOOP_CONTINUOUSLY")
#undef LOOP_CONTINUOUSLY

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class ControllerEventListener;
			class MetaEventListener;
			class Sequence;
			class Sequencer$SyncMode;
			class Track;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $export Sequencer : public ::javax::sound::midi::MidiDevice {
	$interface(Sequencer, $NO_CLASS_INIT, ::javax::sound::midi::MidiDevice)
public:
	virtual $ints* addControllerEventListener(::javax::sound::midi::ControllerEventListener* listener, $ints* controllers) {return nullptr;}
	virtual bool addMetaEventListener(::javax::sound::midi::MetaEventListener* listener) {return false;}
	virtual int32_t getLoopCount() {return 0;}
	virtual int64_t getLoopEndPoint() {return 0;}
	virtual int64_t getLoopStartPoint() {return 0;}
	virtual ::javax::sound::midi::Sequencer$SyncMode* getMasterSyncMode() {return nullptr;}
	virtual $Array<::javax::sound::midi::Sequencer$SyncMode>* getMasterSyncModes() {return nullptr;}
	virtual int64_t getMicrosecondLength() {return 0;}
	virtual int64_t getMicrosecondPosition() override {return 0;}
	virtual ::javax::sound::midi::Sequence* getSequence() {return nullptr;}
	virtual ::javax::sound::midi::Sequencer$SyncMode* getSlaveSyncMode() {return nullptr;}
	virtual $Array<::javax::sound::midi::Sequencer$SyncMode>* getSlaveSyncModes() {return nullptr;}
	virtual float getTempoFactor() {return 0.0;}
	virtual float getTempoInBPM() {return 0.0;}
	virtual float getTempoInMPQ() {return 0.0;}
	virtual int64_t getTickLength() {return 0;}
	virtual int64_t getTickPosition() {return 0;}
	virtual bool getTrackMute(int32_t track) {return false;}
	virtual bool getTrackSolo(int32_t track) {return false;}
	virtual bool isRecording() {return false;}
	virtual bool isRunning() {return false;}
	virtual void recordDisable(::javax::sound::midi::Track* track) {}
	virtual void recordEnable(::javax::sound::midi::Track* track, int32_t channel) {}
	virtual $ints* removeControllerEventListener(::javax::sound::midi::ControllerEventListener* listener, $ints* controllers) {return nullptr;}
	virtual void removeMetaEventListener(::javax::sound::midi::MetaEventListener* listener) {}
	virtual void setLoopCount(int32_t count) {}
	virtual void setLoopEndPoint(int64_t tick) {}
	virtual void setLoopStartPoint(int64_t tick) {}
	virtual void setMasterSyncMode(::javax::sound::midi::Sequencer$SyncMode* sync) {}
	virtual void setMicrosecondPosition(int64_t microseconds) {}
	virtual void setSequence(::javax::sound::midi::Sequence* sequence) {}
	virtual void setSequence(::java::io::InputStream* stream) {}
	virtual void setSlaveSyncMode(::javax::sound::midi::Sequencer$SyncMode* sync) {}
	virtual void setTempoFactor(float factor) {}
	virtual void setTempoInBPM(float bpm) {}
	virtual void setTempoInMPQ(float mpq) {}
	virtual void setTickPosition(int64_t tick) {}
	virtual void setTrackMute(int32_t track, bool mute) {}
	virtual void setTrackSolo(int32_t track, bool solo) {}
	virtual void start() {}
	virtual void startRecording() {}
	virtual void stop() {}
	virtual void stopRecording() {}
	static const int32_t LOOP_CONTINUOUSLY = (-1);
};

		} // midi
	} // sound
} // javax

#pragma pop_macro("LOOP_CONTINUOUSLY")

#endif // _javax_sound_midi_Sequencer_h_