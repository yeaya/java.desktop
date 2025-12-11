#ifndef _sun_lwawt_PlatformComponent_h_
#define _sun_lwawt_PlatformComponent_h_
//$ interface sun.lwawt.PlatformComponent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace lwawt {
		class PlatformWindow;
	}
}

namespace sun {
	namespace lwawt {

class PlatformComponent : public ::java::lang::Object {
	$interface(PlatformComponent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dispose() {}
	virtual void initialize(::sun::lwawt::PlatformWindow* platformWindow) {}
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h) {}
};

	} // lwawt
} // sun

#endif // _sun_lwawt_PlatformComponent_h_