#ifndef _sun_lwawt_macosx_CDropTarget_h_
#define _sun_lwawt_macosx_CDropTarget_h_
//$ class sun.lwawt.macosx.CDropTarget
//$ extends sun.lwawt.PlatformDropTarget

#include <sun/lwawt/PlatformDropTarget.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTarget;
		}
	}
}
namespace sun {
	namespace lwawt {
		class LWComponentPeer;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CDropTarget : public ::sun::lwawt::PlatformDropTarget {
	$class(CDropTarget, $NO_CLASS_INIT, ::sun::lwawt::PlatformDropTarget)
public:
	CDropTarget();
	void init$(::java::awt::dnd::DropTarget* dropTarget, ::java::awt::Component* component, ::sun::lwawt::LWComponentPeer* peer);
	int64_t createNativeDropTarget(::java::awt::dnd::DropTarget* dropTarget, ::java::awt::Component* component, int64_t nativePeer);
	virtual void dispose() override;
	void releaseNativeDropTarget(int64_t nativeDropTarget);
	int64_t fNativeDropTarget = 0;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CDropTarget_h_