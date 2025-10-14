#ifndef _com_sun_media_sound_JDK13Services_h_
#define _com_sun_media_sound_JDK13Services_h_
//$ class com.sun.media.sound.JDK13Services
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class JDK13Services : public ::java::lang::Object {
	$class(JDK13Services, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JDK13Services();
	void init$();
	static $String* getDefaultInstanceName($Class* typeClass);
	static $String* getDefaultProvider($Class* typeClass);
	static $String* getDefaultProviderClassName($Class* typeClass);
	static ::java::util::Properties* getProperties();
	static ::java::util::List* getProviders($Class* serviceClass);
	static $String* lambda$getDefaultProvider$0($String* name);
	static ::java::util::Properties* properties;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_JDK13Services_h_