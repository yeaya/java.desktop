#ifndef _sun_lwawt_macosx_CPlatformLWView_h_
#define _sun_lwawt_macosx_CPlatformLWView_h_
//$ class sun.lwawt.macosx.CPlatformLWView
//$ extends sun.lwawt.macosx.CPlatformView

#include <sun/lwawt/macosx/CPlatformView.h>

namespace sun {
	namespace java2d {
		class SurfaceData;
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
			class CPlatformResponder;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformLWView : public ::sun::lwawt::macosx::CPlatformView {
	$class(CPlatformLWView, $NO_CLASS_INIT, ::sun::lwawt::macosx::CPlatformView)
public:
	CPlatformLWView();
	void init$();
	virtual void dispose() override;
	virtual int64_t getAWTView() override;
	virtual ::sun::java2d::SurfaceData* getSurfaceData() override;
	virtual int64_t getWindowLayerPtr() override;
	virtual void initialize(::sun::lwawt::LWWindowPeer* peer, ::sun::lwawt::macosx::CPlatformResponder* responder) override;
	virtual ::sun::java2d::SurfaceData* replaceSurfaceData() override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height) override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformLWView_h_