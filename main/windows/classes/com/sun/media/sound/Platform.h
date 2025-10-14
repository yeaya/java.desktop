#ifndef _com_sun_media_sound_Platform_h_
#define _com_sun_media_sound_Platform_h_
//$ class com.sun.media.sound.Platform
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class Platform : public ::java::lang::Object {
	$class(Platform, 0, ::java::lang::Object)
public:
	Platform();
	void init$();
	static void initialize();
	static bool isBigEndian();
	static bool isDirectAudioEnabled();
	static bool isMidiIOEnabled();
	static bool isPortsEnabled();
	static ::java::lang::Void* lambda$loadLibraries$0();
	static void loadLibraries();
	static bool nIsBigEndian();
	static $String* libName;
	static bool isNativeLibLoaded;
	static bool bigEndian;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_Platform_h_