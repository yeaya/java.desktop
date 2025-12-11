#ifndef _sun_lwawt_macosx_CWarningWindow$1$1_h_
#define _sun_lwawt_macosx_CWarningWindow$1$1_h_
//$ class sun.lwawt.macosx.CWarningWindow$1$1
//$ extends sun.java2d.opengl.CGLLayer

#include <sun/java2d/opengl/CGLLayer.h>

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

class CWarningWindow$1$1 : public ::sun::java2d::opengl::CGLLayer {
	$class(CWarningWindow$1$1, $NO_CLASS_INIT, ::sun::java2d::opengl::CGLLayer)
public:
	CWarningWindow$1$1();
	void init$(::sun::lwawt::macosx::CWarningWindow$1* this$1, ::sun::lwawt::LWWindowPeer* peer);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual bool isOpaque() override;
	::sun::lwawt::macosx::CWarningWindow$1* this$1 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CWarningWindow$1$1_h_