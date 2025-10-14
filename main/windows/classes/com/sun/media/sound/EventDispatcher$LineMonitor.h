#ifndef _com_sun_media_sound_EventDispatcher$LineMonitor_h_
#define _com_sun_media_sound_EventDispatcher$LineMonitor_h_
//$ interface com.sun.media.sound.EventDispatcher$LineMonitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class EventDispatcher$LineMonitor : public ::java::lang::Object {
	$interface(EventDispatcher$LineMonitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void checkLine() {}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_EventDispatcher$LineMonitor_h_