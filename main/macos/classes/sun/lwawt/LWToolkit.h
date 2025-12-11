#ifndef _sun_lwawt_LWToolkit_h_
#define _sun_lwawt_LWToolkit_h_
//$ class sun.lwawt.LWToolkit
//$ extends sun.awt.SunToolkit
//$ implements java.lang.Runnable

#include <java/lang/Runnable.h>
#include <sun/awt/SunToolkit.h>

#pragma push_macro("STATE_CLEANUP")
#undef STATE_CLEANUP
#pragma push_macro("STATE_DONE")
#undef STATE_DONE
#pragma push_macro("STATE_INIT")
#undef STATE_INIT
#pragma push_macro("STATE_MESSAGELOOP")
#undef STATE_MESSAGELOOP
#pragma push_macro("STATE_NONE")
#undef STATE_NONE
#pragma push_macro("STATE_SHUTDOWN")
#undef STATE_SHUTDOWN

namespace java {
	namespace awt {
		class AWTEvent;
		class Button;
		class Canvas;
		class Checkbox;
		class Choice;
		class Component;
		class Dialog;
		class FileDialog;
		class Frame;
		class JobAttributes;
		class Label;
		class List;
		class PageAttributes;
		class Panel;
		class PrintJob;
		class ScrollPane;
		class Scrollbar;
		class TextArea;
		class TextField;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace datatransfer {
			class Clipboard;
		}
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
		namespace peer {
			class ButtonPeer;
			class CanvasPeer;
			class CheckboxPeer;
			class ChoicePeer;
			class DialogPeer;
			class FileDialogPeer;
			class FramePeer;
			class KeyboardFocusManagerPeer;
			class LabelPeer;
			class ListPeer;
			class MouseInfoPeer;
			class PanelPeer;
			class ScrollPanePeer;
			class ScrollbarPeer;
			class TextAreaPeer;
			class TextFieldPeer;
			class WindowPeer;
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class Properties;
	}
}
namespace sun {
	namespace awt {
		class LightweightFrame;
	}
}
namespace sun {
	namespace lwawt {
		class LWComponentPeer;
		class LWCursorManager;
		class LWWindowPeer;
		class LWWindowPeer$PeerType;
		class PlatformComponent;
		class PlatformDropTarget;
		class PlatformWindow;
		class SecurityWarningWindow;
	}
}

namespace sun {
	namespace lwawt {

class LWToolkit : public ::sun::awt::SunToolkit, public ::java::lang::Runnable {
	$class(LWToolkit, $NO_CLASS_INIT, ::sun::awt::SunToolkit, ::java::lang::Runnable)
public:
	LWToolkit();
	using ::sun::awt::SunToolkit::createImage;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::peer::ButtonPeer* createButton(::java::awt::Button* target) override;
	virtual ::java::awt::peer::CanvasPeer* createCanvas(::java::awt::Canvas* target) override;
	virtual ::java::awt::peer::CheckboxPeer* createCheckbox(::java::awt::Checkbox* target) override;
	virtual ::java::awt::peer::ChoicePeer* createChoice(::java::awt::Choice* target) override;
	virtual ::sun::lwawt::LWWindowPeer* createDelegatedPeer(::java::awt::Window* target, ::sun::lwawt::PlatformComponent* platformComponent, ::sun::lwawt::PlatformWindow* platformWindow, ::sun::lwawt::LWWindowPeer$PeerType* peerType);
	virtual ::java::awt::peer::DialogPeer* createDialog(::java::awt::Dialog* target) override;
	virtual ::sun::lwawt::PlatformDropTarget* createDropTarget(::java::awt::dnd::DropTarget* dropTarget, ::java::awt::Component* component, ::sun::lwawt::LWComponentPeer* peer) {return nullptr;}
	virtual ::java::awt::peer::FileDialogPeer* createFileDialog(::java::awt::FileDialog* target) override;
	virtual ::java::awt::peer::FileDialogPeer* createFileDialogPeer(::java::awt::FileDialog* target) {return nullptr;}
	virtual ::java::awt::peer::FramePeer* createFrame(::java::awt::Frame* target) override;
	virtual ::java::awt::peer::LabelPeer* createLabel(::java::awt::Label* target) override;
	virtual ::java::awt::peer::FramePeer* createLightweightFrame(::sun::awt::LightweightFrame* target) override;
	virtual ::java::awt::peer::ListPeer* createList(::java::awt::List* target) override;
	virtual ::sun::lwawt::PlatformComponent* createLwPlatformComponent() {return nullptr;}
	::java::awt::peer::MouseInfoPeer* createMouseInfoPeerImpl();
	virtual ::java::awt::peer::PanelPeer* createPanel(::java::awt::Panel* target) override;
	virtual ::java::awt::datatransfer::Clipboard* createPlatformClipboard() {return nullptr;}
	virtual ::sun::lwawt::PlatformComponent* createPlatformComponent() {return nullptr;}
	virtual ::sun::lwawt::PlatformWindow* createPlatformWindow(::sun::lwawt::LWWindowPeer$PeerType* peerType) {return nullptr;}
	virtual ::java::awt::peer::ScrollPanePeer* createScrollPane(::java::awt::ScrollPane* target) override;
	virtual ::java::awt::peer::ScrollbarPeer* createScrollbar(::java::awt::Scrollbar* target) override;
	virtual ::sun::lwawt::SecurityWarningWindow* createSecurityWarning(::java::awt::Window* ownerWindow, ::sun::lwawt::LWWindowPeer* ownerPeer) {return nullptr;}
	virtual ::java::awt::peer::TextAreaPeer* createTextArea(::java::awt::TextArea* target) override;
	virtual ::java::awt::peer::TextFieldPeer* createTextField(::java::awt::TextField* target) override;
	virtual ::java::awt::peer::WindowPeer* createWindow(::java::awt::Window* target) override;
	virtual ::sun::lwawt::LWCursorManager* getCursorManager() {return nullptr;}
	virtual ::java::awt::peer::KeyboardFocusManagerPeer* getKeyboardFocusManagerPeer() override;
	static ::sun::lwawt::LWToolkit* getLWToolkit();
	virtual ::java::awt::peer::MouseInfoPeer* getMouseInfoPeer() override;
	virtual ::sun::lwawt::PlatformWindow* getPlatformWindowUnderMouse() {return nullptr;}
	virtual ::java::awt::PrintJob* getPrintJob(::java::awt::Frame* frame, $String* doctitle, ::java::util::Properties* props) override;
	virtual ::java::awt::PrintJob* getPrintJob(::java::awt::Frame* frame, $String* doctitle, ::java::awt::JobAttributes* jobAttributes, ::java::awt::PageAttributes* pageAttributes) override;
	int32_t getRunState();
	virtual ::java::awt::datatransfer::Clipboard* getSystemClipboard() override;
	virtual void grab(::java::awt::Window* w) override;
	void init();
	virtual bool isDesktopSupported() override;
	virtual bool isDynamicLayoutActive() override;
	virtual bool isDynamicLayoutSet() override;
	bool isDynamicLayoutSupported();
	virtual bool isTaskbarSupported() override;
	bool isTerminating();
	void lambda$init$0();
	::java::lang::Void* lambda$init$1();
	virtual $Object* lazilyLoadDesktopProperty($String* name) override;
	virtual void platformCleanup() {}
	virtual void platformInit() {}
	virtual void platformRunMessage() {}
	virtual void platformShutdown() {}
	static void postEvent(::java::awt::AWTEvent* event);
	virtual void run() override;
	virtual void setDynamicLayout(bool dynamic) override;
	void setRunState(int32_t state);
	void shutdown();
	static void targetDisposedPeer(Object$* target, Object$* peer);
	static $Object* targetToPeer(Object$* target);
	virtual $String* toString() override;
	virtual void ungrab(::java::awt::Window* w) override;
	void waitForRunState(int32_t state);
	static const int32_t STATE_NONE = 0;
	static const int32_t STATE_INIT = 1;
	static const int32_t STATE_MESSAGELOOP = 2;
	static const int32_t STATE_SHUTDOWN = 3;
	static const int32_t STATE_CLEANUP = 4;
	static const int32_t STATE_DONE = 5;
	int32_t runState = 0;
	::java::awt::datatransfer::Clipboard* clipboard = nullptr;
	::java::awt::peer::MouseInfoPeer* mouseInfoPeer = nullptr;
	$volatile(bool) dynamicLayoutSetting = false;
};

	} // lwawt
} // sun

#pragma pop_macro("STATE_CLEANUP")
#pragma pop_macro("STATE_DONE")
#pragma pop_macro("STATE_INIT")
#pragma pop_macro("STATE_MESSAGELOOP")
#pragma pop_macro("STATE_NONE")
#pragma pop_macro("STATE_SHUTDOWN")

#endif // _sun_lwawt_LWToolkit_h_