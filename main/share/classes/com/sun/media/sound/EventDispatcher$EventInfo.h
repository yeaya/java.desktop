#ifndef _com_sun_media_sound_EventDispatcher$EventInfo_h_
#define _com_sun_media_sound_EventDispatcher$EventInfo_h_
//$ class com.sun.media.sound.EventDispatcher$EventInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class EventDispatcher;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class EventDispatcher$EventInfo : public ::java::lang::Object {
	$class(EventDispatcher$EventInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EventDispatcher$EventInfo();
	void init$(::com::sun::media::sound::EventDispatcher* this$0, Object$* event, ::java::util::List* listeners);
	virtual $Object* getEvent();
	virtual $Object* getListener(int32_t index);
	virtual int32_t getListenerCount();
	::com::sun::media::sound::EventDispatcher* this$0 = nullptr;
	$Object* event = nullptr;
	$ObjectArray* listeners = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_EventDispatcher$EventInfo_h_