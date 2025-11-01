#ifndef _com_sun_media_sound_RealTimeSequencer_h_
#define _com_sun_media_sound_RealTimeSequencer_h_
//$ class com.sun.media.sound.RealTimeSequencer
//$ extends com.sun.media.sound.AbstractMidiDevice
//$ implements javax.sound.midi.Sequencer,com.sun.media.sound.AutoConnectSequencer

#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/AutoConnectSequencer.h>
#include <java/lang/Array.h>
#include <javax/sound/midi/Sequencer.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class EventDispatcher;
				class MidiUtils$TempoCache;
				class RealTimeSequencer$DataPump;
				class RealTimeSequencer$PlayThread;
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class List;
		class Map;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class ControllerEventListener;
			class MetaEventListener;
			class MidiDevice$Info;
			class MidiMessage;
			class Receiver;
			class Sequence;
			class Sequencer$SyncMode;
			class Track;
			class Transmitter;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RealTimeSequencer : public ::com::sun::media::sound::AbstractMidiDevice, public ::javax::sound::midi::Sequencer, public ::com::sun::media::sound::AutoConnectSequencer {
	$class(RealTimeSequencer, 0, ::com::sun::media::sound::AbstractMidiDevice, ::javax::sound::midi::Sequencer, ::com::sun::media::sound::AutoConnectSequencer)
public:
	RealTimeSequencer();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::javax::sound::midi::MidiDevice$Info* getDeviceInfo() override;
	virtual int32_t getMaxReceivers() override;
	virtual int32_t getMaxTransmitters() override;
	virtual ::javax::sound::midi::Receiver* getReceiver() override;
	virtual ::java::util::List* getReceivers() override;
	virtual ::javax::sound::midi::Transmitter* getTransmitter() override;
	virtual ::java::util::List* getTransmitters() override;
	virtual int32_t hashCode() override;
	virtual bool isOpen() override;
	void init$();
	virtual $ints* addControllerEventListener(::javax::sound::midi::ControllerEventListener* listener, $ints* controllers) override;
	virtual bool addMetaEventListener(::javax::sound::midi::MetaEventListener* listener) override;
	virtual ::javax::sound::midi::Receiver* createReceiver() override;
	virtual ::javax::sound::midi::Transmitter* createTransmitter() override;
	void doAutoConnect();
	static $booleans* ensureBoolArraySize($booleans* array, int32_t desiredSize);
	bool findTrack(::javax::sound::midi::Track* track);
	::com::sun::media::sound::RealTimeSequencer$DataPump* getDataPump();
	static ::com::sun::media::sound::EventDispatcher* getEventDispatcher();
	virtual int32_t getLoopCount() override;
	virtual int64_t getLoopEndPoint() override;
	virtual int64_t getLoopStartPoint() override;
	virtual ::javax::sound::midi::Sequencer$SyncMode* getMasterSyncMode() override;
	virtual $Array<::javax::sound::midi::Sequencer$SyncMode>* getMasterSyncModes() override;
	virtual int64_t getMicrosecondLength() override;
	virtual int64_t getMicrosecondPosition() override;
	virtual ::javax::sound::midi::Sequence* getSequence() override;
	virtual ::javax::sound::midi::Sequencer$SyncMode* getSlaveSyncMode() override;
	virtual $Array<::javax::sound::midi::Sequencer$SyncMode>* getSlaveSyncModes() override;
	::com::sun::media::sound::MidiUtils$TempoCache* getTempoCache();
	virtual float getTempoFactor() override;
	virtual float getTempoInBPM() override;
	virtual float getTempoInMPQ() override;
	virtual int64_t getTickLength() override;
	virtual int64_t getTickPosition() override;
	int32_t getTrackCount();
	virtual bool getTrackMute(int32_t track) override;
	virtual bool getTrackSolo(int32_t track) override;
	virtual bool hasReceivers() override;
	virtual bool hasTransmitters() override;
	virtual void implClose() override;
	virtual void implOpen() override;
	void implStart();
	void implStop();
	virtual bool isRecording() override;
	virtual bool isRunning() override;
	bool needCaching();
	virtual void open() override;
	void propagateCaches();
	virtual void recordDisable(::javax::sound::midi::Track* track) override;
	virtual void recordEnable(::javax::sound::midi::Track* track, int32_t channel) override;
	virtual $ints* removeControllerEventListener(::javax::sound::midi::ControllerEventListener* listener, $ints* controllers) override;
	virtual void removeMetaEventListener(::javax::sound::midi::MetaEventListener* listener) override;
	void sendControllerEvents(::javax::sound::midi::MidiMessage* message);
	void sendMetaEvents(::javax::sound::midi::MidiMessage* message);
	virtual void setAutoConnect(::javax::sound::midi::Receiver* autoConnectedReceiver) override;
	void setCaches();
	virtual void setLoopCount(int32_t count) override;
	virtual void setLoopEndPoint(int64_t tick) override;
	virtual void setLoopStartPoint(int64_t tick) override;
	virtual void setMasterSyncMode(::javax::sound::midi::Sequencer$SyncMode* sync) override;
	virtual void setMicrosecondPosition(int64_t microseconds) override;
	virtual void setSequence(::javax::sound::midi::Sequence* sequence) override;
	virtual void setSequence(::java::io::InputStream* stream) override;
	virtual void setSlaveSyncMode(::javax::sound::midi::Sequencer$SyncMode* sync) override;
	virtual void setTempoFactor(float factor) override;
	virtual void setTempoInBPM(float bpm) override;
	virtual void setTempoInMPQ(float mpq) override;
	virtual void setTickPosition(int64_t tick) override;
	virtual void setTrackMute(int32_t track, bool mute) override;
	virtual void setTrackSolo(int32_t track, bool solo) override;
	virtual void start() override;
	virtual void startRecording() override;
	virtual void stop() override;
	virtual void stopRecording() override;
	virtual $String* toString() override;
	static ::java::util::Map* dispatchers;
	static ::javax::sound::midi::MidiDevice$Info* info;
	static $Array<::javax::sound::midi::Sequencer$SyncMode>* masterSyncModes;
	static $Array<::javax::sound::midi::Sequencer$SyncMode>* slaveSyncModes;
	static ::javax::sound::midi::Sequencer$SyncMode* masterSyncMode;
	static ::javax::sound::midi::Sequencer$SyncMode* slaveSyncMode;
	::javax::sound::midi::Sequence* sequence = nullptr;
	double cacheTempoMPQ = 0.0;
	float cacheTempoFactor = 0.0;
	$booleans* trackMuted = nullptr;
	$booleans* trackSolo = nullptr;
	::com::sun::media::sound::MidiUtils$TempoCache* tempoCache = nullptr;
	$volatile(bool) running = false;
	::com::sun::media::sound::RealTimeSequencer$PlayThread* playThread = nullptr;
	$volatile(bool) recording = false;
	::java::util::List* recordingTracks = nullptr;
	int64_t loopStart = 0;
	int64_t loopEnd = 0;
	int32_t loopCount = 0;
	::java::util::ArrayList* metaEventListeners = nullptr;
	::java::util::ArrayList* controllerEventListeners = nullptr;
	bool autoConnect = false;
	bool doAutoConnectAtNextOpen = false;
	::javax::sound::midi::Receiver* autoConnectedReceiver = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RealTimeSequencer_h_