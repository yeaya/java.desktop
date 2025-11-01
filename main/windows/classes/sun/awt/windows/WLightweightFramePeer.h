#ifndef _sun_awt_windows_WLightweightFramePeer_h_
#define _sun_awt_windows_WLightweightFramePeer_h_
//$ class sun.awt.windows.WLightweightFramePeer
//$ extends sun.awt.windows.WFramePeer
//$ implements sun.awt.OverrideNativeWindowHandle

#include <sun/awt/OverrideNativeWindowHandle.h>
#include <sun/awt/windows/WFramePeer.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Graphics;
		class GraphicsConfiguration;
		class MenuBar;
		class Rectangle;
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
	namespace awt {
		class LightweightFrame;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WLightweightFramePeer : public ::sun::awt::windows::WFramePeer, public ::sun::awt::OverrideNativeWindowHandle {
	$class(WLightweightFramePeer, $NO_CLASS_INIT, ::sun::awt::windows::WFramePeer, ::sun::awt::OverrideNativeWindowHandle)
public:
	WLightweightFramePeer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::LightweightFrame* target);
	virtual void addDropTarget(::java::awt::dnd::DropTarget* dt) override;
	virtual void emulateActivation(bool activate) override;
	virtual ::java::awt::Rectangle* getBoundsPrivate() override;
	virtual int32_t getExtendedState() override;
	virtual ::java::awt::Graphics* getGraphics() override;
	::sun::awt::LightweightFrame* getLwTarget();
	virtual int32_t getState() override;
	virtual void grab() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual void hide() override;
	virtual bool isLightweightFramePeer() override;
	void overrideNativeHandle(int64_t hwnd);
	virtual void overrideWindowHandle(int64_t handle) override;
	virtual void removeDropTarget(::java::awt::dnd::DropTarget* dt) override;
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setExtendedState(int32_t state) override;
	virtual void setMenuBar(::java::awt::MenuBar* mb) override;
	virtual void setState(int32_t state) override;
	virtual void show() override;
	virtual $String* toString() override;
	virtual void ungrab() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WLightweightFramePeer_h_