#ifndef _sun_lwawt_macosx_CPrinterDialogPeer_h_
#define _sun_lwawt_macosx_CPrinterDialogPeer_h_
//$ class sun.lwawt.macosx.CPrinterDialogPeer
//$ extends sun.lwawt.LWWindowPeer

#include <sun/lwawt/LWWindowPeer.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dialog;
		class Event;
		class Font;
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
		class PlatformComponent;
		class PlatformWindow;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CPrinterDialog;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPrinterDialogPeer : public ::sun::lwawt::LWWindowPeer {
	$class(CPrinterDialogPeer, 0, ::sun::lwawt::LWWindowPeer)
public:
	CPrinterDialogPeer();
	using ::sun::lwawt::LWWindowPeer::getOnscreenGraphics;
	using ::sun::lwawt::LWWindowPeer::handleEvent;
	void init$(::sun::lwawt::macosx::CPrinterDialog* target, ::sun::lwawt::PlatformComponent* platformComponent, ::sun::lwawt::PlatformWindow* platformWindow);
	virtual void addDropTarget(::java::awt::dnd::DropTarget* dt) override;
	virtual void disposeImpl() override;
	virtual bool handleEvent(::java::awt::Event* e);
	virtual void invalidate(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual bool isRestackSupported();
	void lambda$setVisible$0();
	virtual void removeDropTarget(::java::awt::dnd::DropTarget* dt) override;
	using ::sun::lwawt::LWWindowPeer::repaintPeer;
	using ::sun::lwawt::LWWindowPeer::requestFocus;
	virtual bool requestFocus(bool temporary, bool focusedWindowChangeAllowed);
	virtual void setBackground(::java::awt::Color* c) override;
	using ::sun::lwawt::LWWindowPeer::setBounds;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void setEnabled(bool enable) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setModalBlocked(::java::awt::Dialog* blocker, bool blocked) override;
	virtual void setResizable(bool resizable) override;
	virtual void setVisible(bool visible) override;
	virtual void start();
	virtual void toBack() override;
	virtual void toFront() override;
	virtual void updateAlwaysOnTopState() override;
	virtual void updateFocusableWindowState() override;
	virtual void updateMinimumSize() override;
	::java::awt::Component* fTarget = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterDialogPeer_h_