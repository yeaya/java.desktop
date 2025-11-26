#ifndef _com_sun_media_sound_RealTimeSequencer$RecordingTrack_h_
#define _com_sun_media_sound_RealTimeSequencer$RecordingTrack_h_
//$ class com.sun.media.sound.RealTimeSequencer$RecordingTrack
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Track;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RealTimeSequencer$RecordingTrack : public ::java::lang::Object {
	$class(RealTimeSequencer$RecordingTrack, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RealTimeSequencer$RecordingTrack();
	void init$(::javax::sound::midi::Track* track, int32_t channel);
	static ::com::sun::media::sound::RealTimeSequencer$RecordingTrack* get(::java::util::List* recordingTracks, ::javax::sound::midi::Track* track);
	static ::javax::sound::midi::Track* get(::java::util::List* recordingTracks, int32_t channel);
	::javax::sound::midi::Track* track = nullptr;
	int32_t channel = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RealTimeSequencer$RecordingTrack_h_