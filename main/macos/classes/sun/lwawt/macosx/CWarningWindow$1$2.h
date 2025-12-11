#ifndef _sun_lwawt_macosx_CWarningWindow$1$2_h_
#define _sun_lwawt_macosx_CWarningWindow$1$2_h_
//$ class sun.lwawt.macosx.CWarningWindow$1$2
//$ extends sun.java2d.metal.MTLLayer

#include <sun/java2d/metal/MTLLayer.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Rectangle;
	}
}
namespace sun {
	namespace lwawt {
		class LWWindowPeer;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CWarningWindow$1;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CWarningWindow$1$2 : public ::sun::java2d::metal::MTLLayer {
	$class(CWarningWindow$1$2, $NO_CLASS_INIT, ::sun::java2d::metal::MTLLayer)
public:
	CWarningWindow$1$2();
	void init$(::sun::lwawt::macosx::CWarningWindow$1* this$1, ::sun::lwawt::LWWindowPeer* peer);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual bool isOpaque() override;
	::sun::lwawt::macosx::CWarningWindow$1* this$1 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CWarningWindow$1$2_h_