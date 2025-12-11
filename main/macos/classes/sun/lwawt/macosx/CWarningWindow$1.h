#ifndef _sun_lwawt_macosx_CWarningWindow$1_h_
#define _sun_lwawt_macosx_CWarningWindow$1_h_
//$ class sun.lwawt.macosx.CWarningWindow$1
//$ extends sun.lwawt.macosx.CPlatformView

#include <sun/lwawt/macosx/CPlatformView.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Rectangle;
	}
}
namespace sun {
	namespace java2d {
		namespace metal {
			class MTLLayer;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace opengl {
			class CGLLayer;
		}
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CWarningWindow;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CWarningWindow$1 : public ::sun::lwawt::macosx::CPlatformView {
	$class(CWarningWindow$1, $NO_CLASS_INIT, ::sun::lwawt::macosx::CPlatformView)
public:
	CWarningWindow$1();
	void init$(::sun::lwawt::macosx::CWarningWindow* this$0);
	virtual ::sun::java2d::opengl::CGLLayer* createCGLayer() override;
	virtual ::sun::java2d::metal::MTLLayer* createMTLLayer() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration();
	::sun::lwawt::macosx::CWarningWindow* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CWarningWindow$1_h_