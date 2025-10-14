#ifndef _java_applet_AudioClip_h_
#define _java_applet_AudioClip_h_
//$ interface java.applet.AudioClip
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace applet {

class $export AudioClip : public ::java::lang::Object {
	$interface(AudioClip, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void loop() {}
	virtual void play() {}
	virtual void stop() {}
};

	} // applet
} // java

#endif // _java_applet_AudioClip_h_