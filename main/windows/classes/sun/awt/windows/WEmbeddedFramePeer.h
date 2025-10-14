#ifndef _sun_awt_windows_WEmbeddedFramePeer_h_
#define _sun_awt_windows_WEmbeddedFramePeer_h_
//$ class sun.awt.windows.WEmbeddedFramePeer
//$ extends sun.awt.windows.WFramePeer

#include <sun/awt/windows/WFramePeer.h>

namespace java {
	namespace awt {
		class Dialog;
		class Graphics;
		class GraphicsConfiguration;
		class MenuBar;
		class Rectangle;
	}
}
namespace sun {
	namespace awt {
		class EmbeddedFrame;
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
	namespace awt {
		namespace windows {

class WEmbeddedFramePeer : public ::sun::awt::windows::WFramePeer {
	$class(WEmbeddedFramePeer, $NO_CLASS_INIT, ::sun::awt::windows::WFramePeer)
public:
	WEmbeddedFramePeer();
	void init$(::sun::awt::EmbeddedFrame* target);
	virtual void create(::sun::awt::windows::WComponentPeer* parent) override;
	virtual void emulateActivation(bool activate) override;
	virtual ::java::awt::Rectangle* getBoundsPrivate() override;
	virtual int32_t getExtendedState() override;
	virtual int32_t getState() override;
	virtual bool isAccelCapable() override;
	virtual void modalDisable(::java::awt::Dialog* blocker, int64_t blockerHWnd) override;
	virtual void modalEnable(::java::awt::Dialog* blocker) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setExtendedState(int32_t state) override;
	virtual void setMenuBar(::java::awt::MenuBar* mb) override;
	virtual void setState(int32_t state) override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void updateMinimumSize() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WEmbeddedFramePeer_h_