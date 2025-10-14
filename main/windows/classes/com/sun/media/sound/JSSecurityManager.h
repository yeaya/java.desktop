#ifndef _com_sun_media_sound_JSSecurityManager_h_
#define _com_sun_media_sound_JSSecurityManager_h_
//$ class com.sun.media.sound.JSSecurityManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
		class Void;
	}
}
namespace java {
	namespace util {
		class List;
		class Properties;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class JSSecurityManager : public ::java::lang::Object {
	$class(JSSecurityManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JSSecurityManager();
	void init$();
	static void checkRecordPermission();
	static $Thread* createThread(::java::lang::Runnable* runnable, $String* threadName, bool isDaemon, int32_t priority, bool doStart);
	static ::java::util::List* getProviders($Class* providerClass);
	static $String* lambda$loadProperties$0();
	static ::java::lang::Void* lambda$loadProperties$1(::java::util::Properties* properties);
	static void loadProperties(::java::util::Properties* properties);
	static bool loadPropertiesImpl(::java::util::Properties* properties, $String* first, $StringArray* more);
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_JSSecurityManager_h_