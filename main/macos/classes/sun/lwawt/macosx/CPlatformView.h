#ifndef _sun_lwawt_macosx_CPlatformView_h_
#define _sun_lwawt_macosx_CPlatformView_h_
//$ class sun.lwawt.macosx.CPlatformView
//$ extends sun.lwawt.macosx.CFRetainedResource

#include <sun/lwawt/macosx/CFRetainedResource.h>

namespace java {
	namespace awt {
		class GraphicsDevice;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
				class AtomicInteger;
				class AtomicReference;
			}
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
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
		class LWWindowPeer;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CFLayer;
			class CPlatformResponder;
			class NSEvent;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformView : public ::sun::lwawt::macosx::CFRetainedResource {
	$class(CPlatformView, $NO_CLASS_INIT, ::sun::lwawt::macosx::CFRetainedResource)
public:
	CPlatformView();
	void init$();
	virtual ::sun::java2d::opengl::CGLLayer* createCGLayer();
	virtual ::sun::java2d::metal::MTLLayer* createMTLLayer();
	void deliverKeyEvent(::sun::lwawt::macosx::NSEvent* event);
	void deliverMouseEvent(::sun::lwawt::macosx::NSEvent* event);
	void deliverResize(int32_t x, int32_t y, int32_t w, int32_t h);
	void deliverWindowDidExposeEvent();
	virtual void dispose() override;
	virtual int64_t getAWTView();
	virtual ::java::awt::Rectangle* getBounds();
	virtual ::java::awt::GraphicsDevice* getGraphicsDevice();
	virtual ::java::awt::Point* getLocationOnScreen();
	virtual ::sun::java2d::SurfaceData* getSurfaceData();
	virtual int64_t getWindowLayerPtr();
	virtual void initialize(::sun::lwawt::LWWindowPeer* peer, ::sun::lwawt::macosx::CPlatformResponder* responder);
	virtual void initializeBase(::sun::lwawt::LWWindowPeer* peer, ::sun::lwawt::macosx::CPlatformResponder* responder);
	virtual bool isUnderMouse();
	static void lambda$getGraphicsDevice$4(::java::util::concurrent::atomic::AtomicInteger* ref, int64_t ptr);
	static void lambda$getLocationOnScreen$5(::java::util::concurrent::atomic::AtomicReference* ref, int64_t ptr);
	static void lambda$isUnderMouse$3(::java::util::concurrent::atomic::AtomicBoolean* ref, int64_t ptr);
	static void lambda$setAutoResizable$2(bool toResize, int64_t ptr);
	static void lambda$setBounds$0(int32_t x, int32_t y, int32_t width, int32_t height, int64_t ptr);
	static void lambda$setToolTip$1($String* msg, int64_t ptr);
	int64_t nativeCreateView(int32_t x, int32_t y, int32_t width, int32_t height, int64_t windowLayerPtr);
	static ::java::awt::geom::Rectangle2D* nativeGetLocationOnScreen(int64_t awtView);
	static int32_t nativeGetNSViewDisplayID(int64_t awtView);
	static bool nativeIsViewUnderMouse(int64_t ptr);
	static void nativeSetAutoResizable(int64_t awtView, bool toResize);
	virtual ::sun::java2d::SurfaceData* replaceSurfaceData();
	virtual void setAutoResizable(bool toResize);
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void setToolTip($String* msg);
	::sun::lwawt::LWWindowPeer* peer = nullptr;
	::sun::java2d::SurfaceData* surfaceData = nullptr;
	::sun::lwawt::macosx::CFLayer* windowLayer = nullptr;
	::sun::lwawt::macosx::CPlatformResponder* responder = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformView_h_