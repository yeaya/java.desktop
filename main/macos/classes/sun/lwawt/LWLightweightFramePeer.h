#ifndef _sun_lwawt_LWLightweightFramePeer_h_
#define _sun_lwawt_LWLightweightFramePeer_h_
//$ class sun.lwawt.LWLightweightFramePeer
//$ extends sun.lwawt.LWWindowPeer
//$ implements sun.awt.OverrideNativeWindowHandle

#include <sun/awt/OverrideNativeWindowHandle.h>
#include <sun/lwawt/LWWindowPeer.h>

namespace java {
	namespace awt {
		class Graphics;
		class Insets;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTarget;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
		}
	}
}
namespace sun {
	namespace awt {
		class LightweightFrame;
	}
}
namespace sun {
	namespace lwawt {
		class PlatformComponent;
		class PlatformWindow;
	}
}

namespace sun {
	namespace lwawt {

class LWLightweightFramePeer : public ::sun::lwawt::LWWindowPeer, public ::sun::awt::OverrideNativeWindowHandle {
	$class(LWLightweightFramePeer, $NO_CLASS_INIT, ::sun::lwawt::LWWindowPeer, ::sun::awt::OverrideNativeWindowHandle)
public:
	LWLightweightFramePeer();
	using ::sun::lwawt::LWWindowPeer::getOnscreenGraphics;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::LightweightFrame* target, ::sun::lwawt::PlatformComponent* platformComponent, ::sun::lwawt::PlatformWindow* platformWindow);
	virtual void addDropTarget(::java::awt::dnd::DropTarget* dt) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	::sun::awt::LightweightFrame* getLwTarget();
	virtual int64_t getOverriddenWindowHandle();
	virtual void grab() override;
	virtual void overrideWindowHandle(int64_t handle) override;
	virtual void removeDropTarget(::java::awt::dnd::DropTarget* dt) override;
	using ::sun::lwawt::LWWindowPeer::repaintPeer;
	virtual bool requestWindowFocus(::java::awt::event::FocusEvent$Cause* cause) override;
	using ::sun::lwawt::LWWindowPeer::setBounds;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) override;
	virtual void setVisibleImpl(bool visible) override;
	using ::sun::lwawt::LWWindowPeer::ungrab;
	virtual $String* toString() override;
	virtual void ungrab() override;
	virtual void updateCursorImmediately() override;
	$volatile(int64_t) overriddenWindowHandle = 0;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWLightweightFramePeer_h_