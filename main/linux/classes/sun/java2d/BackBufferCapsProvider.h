#ifndef _sun_java2d_BackBufferCapsProvider_h_
#define _sun_java2d_BackBufferCapsProvider_h_
//$ interface sun.java2d.BackBufferCapsProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
	}
}

namespace sun {
	namespace java2d {

class BackBufferCapsProvider : public ::java::lang::Object {
	$interface(BackBufferCapsProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::BufferCapabilities* getBackBufferCaps() {return nullptr;}
};

	} // java2d
} // sun

#endif // _sun_java2d_BackBufferCapsProvider_h_