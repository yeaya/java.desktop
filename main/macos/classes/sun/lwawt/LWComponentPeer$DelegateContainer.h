#ifndef _sun_lwawt_LWComponentPeer$DelegateContainer_h_
#define _sun_lwawt_LWComponentPeer$DelegateContainer_h_
//$ class sun.lwawt.LWComponentPeer$DelegateContainer
//$ extends java.awt.Container

#include <java/awt/Container.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace sun {
	namespace lwawt {
		class LWComponentPeer;
	}
}

namespace sun {
	namespace lwawt {

class LWComponentPeer$DelegateContainer : public ::java::awt::Container {
	$class(LWComponentPeer$DelegateContainer, $NO_CLASS_INIT, ::java::awt::Container)
public:
	LWComponentPeer$DelegateContainer();
	using ::java::awt::Container::add;
	using ::java::awt::Container::getMousePosition;
	using ::java::awt::Container::getLocation;
	void init$(::sun::lwawt::LWComponentPeer* this$0);
	virtual ::java::awt::Point* getLocation() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual int32_t getX() override;
	virtual int32_t getY() override;
	virtual bool isLightweight() override;
	using ::java::awt::Container::remove;
	using ::java::awt::Container::list;
	::sun::lwawt::LWComponentPeer* this$0 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWComponentPeer$DelegateContainer_h_