#ifndef _sun_java2d_d3d_D3DScreenUpdateManager_h_
#define _sun_java2d_d3d_D3DScreenUpdateManager_h_
//$ class sun.java2d.d3d.D3DScreenUpdateManager
//$ extends sun.java2d.ScreenUpdateManager
//$ implements java.lang.Runnable

#include <java/lang/Runnable.h>
#include <sun/java2d/ScreenUpdateManager.h>

#pragma push_macro("MIN_WIN_SIZE")
#undef MIN_WIN_SIZE

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Font;
		class Graphics2D;
	}
}
namespace java {
	namespace lang {
		class Thread;
		class Void;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class HashMap;
	}
}
namespace sun {
	namespace awt {
		class Win32GraphicsConfig;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
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
		namespace d3d {
			class D3DSurfaceData$D3DWindowSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DScreenUpdateManager : public ::sun::java2d::ScreenUpdateManager, public ::java::lang::Runnable {
	$class(D3DScreenUpdateManager, $NO_CLASS_INIT, ::sun::java2d::ScreenUpdateManager, ::java::lang::Runnable)
public:
	D3DScreenUpdateManager();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static bool canUseD3DOnScreen(::sun::awt::windows::WComponentPeer* peer, ::sun::awt::Win32GraphicsConfig* gc, int32_t bbNum);
	virtual ::java::awt::Graphics2D* createGraphics(::sun::java2d::SurfaceData* sd, ::sun::awt::windows::WComponentPeer* peer, ::java::awt::Color* fgColor, ::java::awt::Color* bgColor, ::java::awt::Font* font) override;
	virtual ::sun::java2d::SurfaceData* createScreenSurface(::sun::awt::Win32GraphicsConfig* gc, ::sun::awt::windows::WComponentPeer* peer, int32_t bbNum, bool isResize) override;
	virtual void dropScreenSurface(::sun::java2d::SurfaceData* sd) override;
	::sun::java2d::SurfaceData* getGdiSurface(::sun::java2d::d3d::D3DSurfaceData$D3DWindowSurfaceData* d3dw);
	virtual ::sun::java2d::SurfaceData* getReplacementScreenSurface(::sun::awt::windows::WComponentPeer* peer, ::sun::java2d::SurfaceData* sd) override;
	static bool hasHWChildren(::java::awt::Component* comp);
	void lambda$new$0();
	::java::lang::Void* lambda$new$1();
	$Thread* lambda$startUpdateThread$2();
	void removeGdiSurface(::sun::java2d::d3d::D3DSurfaceData$D3DWindowSurfaceData* d3dw);
	void repaintPeerTarget(::sun::awt::windows::WComponentPeer* peer);
	virtual void run() override;
	virtual void runUpdateNow();
	void startUpdateThread();
	virtual $String* toString() override;
	void trackScreenSurface(::sun::java2d::SurfaceData* sd);
	bool validate(::sun::java2d::d3d::D3DSurfaceData$D3DWindowSurfaceData* sd);
	virtual void wakeUpUpdateThread();
	static const int32_t MIN_WIN_SIZE = 150;
	$volatile(bool) done = false;
	$volatile($Thread*) screenUpdater = nullptr;
	bool needsUpdateNow = false;
	$Object* runLock = nullptr;
	::java::util::ArrayList* d3dwSurfaces = nullptr;
	::java::util::HashMap* gdiSurfaces = nullptr;
};

		} // d3d
	} // java2d
} // sun

#pragma pop_macro("MIN_WIN_SIZE")

#endif // _sun_java2d_d3d_D3DScreenUpdateManager_h_