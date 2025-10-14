#ifndef _com_sun_media_sound_RealTimeSequencer$DataPump_h_
#define _com_sun_media_sound_RealTimeSequencer$DataPump_h_
//$ class com.sun.media.sound.RealTimeSequencer$DataPump
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class RealTimeSequencer;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiEvent;
			class Sequence;
			class Track;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RealTimeSequencer$DataPump : public ::java::lang::Object {
	$class(RealTimeSequencer$DataPump, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RealTimeSequencer$DataPump();
	void init$(::com::sun::media::sound::RealTimeSequencer* this$0);
	void ReindexTrack(int32_t trackNum, int64_t tick);
	void applyDisabledTracks($booleans* oldDisabled, $booleans* newDisabled);
	virtual void chaseEvents(int64_t startTick, int64_t endTick);
	void chaseTrackEvents(int32_t trackNum, int64_t startTick, int64_t endTick, bool doReindex, $Array<int8_t, 2>* tempArray);
	virtual void clearNoteOnCache();
	bool dispatchMessage(int32_t trackNum, ::javax::sound::midi::MidiEvent* event);
	int64_t getCurrentTimeMillis();
	virtual float getTempoFactor();
	virtual float getTempoMPQ();
	virtual int64_t getTickPos();
	virtual bool hasCachedTempo();
	virtual void init();
	$booleans* makeDisabledArray();
	int64_t millis2tick(int64_t millis);
	virtual void muteSoloChanged();
	virtual void notesOff(bool doControllers);
	virtual bool pump();
	virtual void resetLoopCount();
	void sendNoteOffIfOn(::javax::sound::midi::Track* track, int64_t endTick);
	virtual void setSequence(::javax::sound::midi::Sequence* seq);
	virtual void setTempoFactor(float factor);
	virtual void setTempoMPQ(float tempoMPQ);
	virtual void setTickPos(int64_t tickPos);
	int64_t tick2millis(int64_t tick);
	::com::sun::media::sound::RealTimeSequencer* this$0 = nullptr;
	float currTempo = 0.0;
	float tempoFactor = 0.0;
	float inverseTempoFactor = 0.0;
	int64_t ignoreTempoEventAt = 0;
	int32_t resolution = 0;
	float divisionType = 0.0;
	int64_t checkPointMillis = 0;
	int64_t checkPointTick = 0;
	$ints* noteOnCache = nullptr;
	$Array<::javax::sound::midi::Track>* tracks = nullptr;
	$booleans* trackDisabled = nullptr;
	$ints* trackReadPos = nullptr;
	int64_t lastTick = 0;
	bool needReindex = false;
	int32_t currLoopCounter = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RealTimeSequencer$DataPump_h_