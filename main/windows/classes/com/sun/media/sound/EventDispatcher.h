#ifndef _com_sun_media_sound_EventDispatcher_h_
#define _com_sun_media_sound_EventDispatcher_h_
//$ class com.sun.media.sound.EventDispatcher
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

#pragma push_macro("AUTO_CLOSE_TIME")
#undef AUTO_CLOSE_TIME
#pragma push_macro("LINE_MONITOR_TIME")
#undef LINE_MONITOR_TIME

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AutoClosingClip;
				class EventDispatcher$EventInfo;
				class EventDispatcher$LineMonitor;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class List;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class EventDispatcher : public ::java::lang::Runnable {
	$class(EventDispatcher, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	EventDispatcher();
	void init$();
	void addLineMonitor(::com::sun::media::sound::EventDispatcher$LineMonitor* lm);
	void autoClosingClipClosed(::com::sun::media::sound::AutoClosingClip* clip);
	void autoClosingClipOpened(::com::sun::media::sound::AutoClosingClip* clip);
	void closeAutoClosingClips();
	void dispatchEvents();
	int32_t getAutoClosingClipIndex(::com::sun::media::sound::AutoClosingClip* clip);
	void monitorLines();
	void postEvent(::com::sun::media::sound::EventDispatcher$EventInfo* eventInfo);
	void processEvent(::com::sun::media::sound::EventDispatcher$EventInfo* eventInfo);
	void removeLineMonitor(::com::sun::media::sound::EventDispatcher$LineMonitor* lm);
	virtual void run() override;
	void sendAudioEvents(Object$* event, ::java::util::List* listeners);
	void start();
	static const int32_t AUTO_CLOSE_TIME = 5000;
	::java::util::ArrayList* eventQueue = nullptr;
	$Thread* thread = nullptr;
	::java::util::ArrayList* autoClosingClips = nullptr;
	::java::util::ArrayList* lineMonitors = nullptr;
	static const int32_t LINE_MONITOR_TIME = 400;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("AUTO_CLOSE_TIME")
#pragma pop_macro("LINE_MONITOR_TIME")

#endif // _com_sun_media_sound_EventDispatcher_h_