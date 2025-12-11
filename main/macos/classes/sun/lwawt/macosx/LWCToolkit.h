#ifndef _sun_lwawt_macosx_LWCToolkit_h_
#define _sun_lwawt_macosx_LWCToolkit_h_
//$ class sun.lwawt.macosx.LWCToolkit
//$ extends sun.lwawt.LWToolkit

#include <java/lang/Array.h>
#include <sun/lwawt/LWToolkit.h>

#pragma push_macro("APPKIT_THREAD_NAME")
#undef APPKIT_THREAD_NAME
#pragma push_macro("BUTTONS")
#undef BUTTONS
#pragma push_macro("INACTIVE_SELECTION_BACKGROUND_COLOR")
#undef INACTIVE_SELECTION_BACKGROUND_COLOR
#pragma push_macro("INACTIVE_SELECTION_FOREGROUND_COLOR")
#undef INACTIVE_SELECTION_FOREGROUND_COLOR
#pragma push_macro("KEYBOARD_FOCUS_COLOR")
#undef KEYBOARD_FOCUS_COLOR
#pragma push_macro("NUM_APPLE_COLORS")
#undef NUM_APPLE_COLORS
#pragma push_macro("SELECTED_CONTROL_TEXT_COLOR")
#undef SELECTED_CONTROL_TEXT_COLOR

namespace java {
	namespace awt {
		class CheckboxMenuItem;
		class Color;
		class Component;
		class Cursor;
		class Desktop;
		class Dialog;
		class Dialog$ModalExclusionType;
		class Dialog$ModalityType;
		class Dimension;
		class FileDialog;
		class GraphicsConfiguration;
		class GraphicsDevice;
		class Image;
		class Insets;
		class Menu;
		class MenuBar;
		class MenuItem;
		class Point;
		class PopupMenu;
		class SystemTray;
		class Taskbar;
		class TrayIcon;
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
			class DragGestureEvent;
			class DragGestureListener;
			class DragGestureRecognizer;
			class DragSource;
			class DropTarget;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {
				class DragSourceContextPeer;
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class InvocationEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			class InputMethodHighlight;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			namespace spi {
				class InputMethodDescriptor;
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class CheckboxMenuItemPeer;
			class DesktopPeer;
			class DialogPeer;
			class FileDialogPeer;
			class FontPeer;
			class MenuBarPeer;
			class MenuItemPeer;
			class MenuPeer;
			class PopupMenuPeer;
			class RobotPeer;
			class SystemTrayPeer;
			class TaskbarPeer;
			class TrayIconPeer;
		}
	}
}
namespace java {
	namespace lang {
		class Runnable;
		class ThreadGroup;
		class Void;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}
namespace sun {
	namespace awt {
		namespace datatransfer {
			class DataTransferer;
		}
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
		namespace macosx {
			class CEmbeddedFrame;
			class CInputMethodDescriptor;
			class CPrinterDialog;
			class CPrinterDialogPeer;
			class CViewEmbeddedFrame;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class LWCToolkit : public ::sun::lwawt::LWToolkit {
	$class(LWCToolkit, 0, ::sun::lwawt::LWToolkit)
public:
	LWCToolkit();
	using ::sun::lwawt::LWToolkit::createImage;
	void init$();
	void activateApplicationIgnoringOtherApps();
	virtual bool areExtraMouseButtonsEnabled() override;
	virtual void beep() override;
	virtual bool canPopupOverlapTaskBar() override;
	static void checkException(::java::awt::event::InvocationEvent* event);
	::java::awt::Image* checkForNSImage($String* imageName);
	static int64_t createAWTRunLoopMediator();
	::sun::lwawt::macosx::CPrinterDialogPeer* createCPrinterDialog(::sun::lwawt::macosx::CPrinterDialog* target);
	virtual ::java::awt::peer::CheckboxMenuItemPeer* createCheckboxMenuItem(::java::awt::CheckboxMenuItem* target) override;
	virtual ::java::awt::Cursor* createCustomCursor(::java::awt::Image* cursor, ::java::awt::Point* hotSpot, $String* name) override;
	virtual ::java::awt::peer::DesktopPeer* createDesktopPeer(::java::awt::Desktop* target) override;
	virtual ::java::awt::peer::DialogPeer* createDialog(::java::awt::Dialog* target) override;
	virtual ::java::awt::dnd::DragGestureRecognizer* createDragGestureRecognizer($Class* abstractRecognizerClass, ::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t srcActions, ::java::awt::dnd::DragGestureListener* dgl) override;
	virtual ::java::awt::dnd::peer::DragSourceContextPeer* createDragSourceContextPeer(::java::awt::dnd::DragGestureEvent* dge) override;
	virtual ::sun::lwawt::PlatformDropTarget* createDropTarget(::java::awt::dnd::DropTarget* dropTarget, ::java::awt::Component* component, ::sun::lwawt::LWComponentPeer* peer) override;
	::sun::lwawt::LWWindowPeer* createEmbeddedFrame(::sun::lwawt::macosx::CEmbeddedFrame* target);
	::sun::lwawt::LWWindowPeer* createEmbeddedFrame(::sun::lwawt::macosx::CViewEmbeddedFrame* target);
	virtual ::java::awt::peer::FileDialogPeer* createFileDialogPeer(::java::awt::FileDialog* target) override;
	virtual ::sun::lwawt::PlatformComponent* createLwPlatformComponent() override;
	virtual ::java::awt::peer::MenuPeer* createMenu(::java::awt::Menu* target) override;
	virtual ::java::awt::peer::MenuBarPeer* createMenuBar(::java::awt::MenuBar* target) override;
	virtual ::java::awt::peer::MenuItemPeer* createMenuItem(::java::awt::MenuItem* target) override;
	virtual ::java::awt::datatransfer::Clipboard* createPlatformClipboard() override;
	virtual ::sun::lwawt::PlatformComponent* createPlatformComponent() override;
	virtual ::sun::lwawt::PlatformWindow* createPlatformWindow(::sun::lwawt::LWWindowPeer$PeerType* peerType) override;
	virtual ::java::awt::peer::PopupMenuPeer* createPopupMenu(::java::awt::PopupMenu* target) override;
	virtual ::java::awt::peer::RobotPeer* createRobot(::java::awt::GraphicsDevice* screen) override;
	virtual ::sun::lwawt::SecurityWarningWindow* createSecurityWarning(::java::awt::Window* ownerWindow, ::sun::lwawt::LWWindowPeer* ownerPeer) override;
	virtual ::java::awt::peer::SystemTrayPeer* createSystemTray(::java::awt::SystemTray* target) override;
	virtual ::java::awt::peer::TaskbarPeer* createTaskbarPeer(::java::awt::Taskbar* target) override;
	virtual ::java::awt::peer::TrayIconPeer* createTrayIcon(::java::awt::TrayIcon* target) override;
	static void doAWTRunLoop(int64_t mediator, bool processEvents);
	static void doAWTRunLoopImpl(int64_t mediator, bool processEvents, bool inAWT);
	static bool doEquals(Object$* a, Object$* b, ::java::awt::Component* c);
	virtual bool enableInputMethodsForTextComponent() override;
	static void flushNativeSelectors();
	static ::java::awt::Color* getAppleColor(int32_t color);
	virtual ::java::awt::Dimension* getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight) override;
	virtual ::sun::lwawt::LWCursorManager* getCursorManager() override;
	virtual ::sun::awt::datatransfer::DataTransferer* getDataTransferer() override;
	virtual ::java::util::Locale* getDefaultKeyboardLocale() override;
	virtual int32_t getFocusAcceleratorKeyMask() override;
	virtual ::java::awt::peer::FontPeer* getFontPeer($String* name, int32_t style) override;
	virtual ::java::awt::Image* getImage($String* filename) override;
	virtual ::java::awt::Image* getImage(::java::net::URL* url) override;
	virtual ::java::awt::im::spi::InputMethodDescriptor* getInputMethodAdapterDescriptor() override;
	static ::sun::lwawt::macosx::LWCToolkit* getLWCToolkit();
	virtual bool getLockingKeyState(int32_t keyCode) override;
	virtual int32_t getMenuShortcutKeyMask() override;
	virtual int32_t getMenuShortcutKeyMaskEx() override;
	static int32_t getMultiClickTime();
	virtual int32_t getNumberOfButtons() override;
	virtual ::sun::lwawt::PlatformWindow* getPlatformWindowUnderMouse() override;
	static $String* getScaledImageName($String* path);
	static ::java::net::URL* getScaledImageURL(::java::net::URL* url);
	virtual ::java::awt::Insets* getScreenInsets(::java::awt::GraphicsConfiguration* gc) override;
	virtual int32_t getScreenResolution() override;
	static void initAppkit(::java::lang::ThreadGroup* appKitThreadGroup, bool headless);
	static void initIDs();
	virtual void initializeDesktopProperties() override;
	static void installToolkitThreadInJava();
	static $Object* invokeAndWait(::java::util::concurrent::Callable* callable, ::java::awt::Component* component);
	static void invokeAndWait(::java::lang::Runnable* runnable, ::java::awt::Component* component);
	static void invokeLater(::java::lang::Runnable* event, ::java::awt::Component* component);
	virtual bool isAlwaysOnTopSupported() override;
	bool isApplicationActive();
	bool isCapsLockOn();
	static bool isCharModifierKeyInUSInternationalPC(char16_t ch);
	static bool isEmbedded();
	virtual bool isFrameStateSupported(int32_t state) override;
	static bool isLocaleUSInternationalPC(::java::util::Locale* locale);
	virtual bool isModalExclusionTypeSupported(::java::awt::Dialog$ModalExclusionType* exclusionType) override;
	virtual bool isModalityTypeSupported(::java::awt::Dialog$ModalityType* modalityType) override;
	virtual bool isPrintableCharacterModifiersMask(int32_t mods) override;
	virtual bool isSwingBackbufferTranslucencySupported() override;
	virtual bool isTranslucencyCapable(::java::awt::GraphicsConfiguration* gc) override;
	virtual bool isTraySupported() override;
	static bool isValidPath($String* path);
	virtual bool isWindowOpacitySupported() override;
	virtual bool isWindowShapingSupported() override;
	virtual bool isWindowTranslucencySupported() override;
	static ::java::lang::Void* lambda$installToolkitThreadInJava$3();
	static void lambda$invokeAndWait$4(int64_t mediator);
	static ::java::lang::Void* lambda$new$0();
	static $Object* lambda$systemColorsChanged$1();
	static void lambda$systemColorsChanged$2();
	void loadNativeColors($ints* systemColors, $ints* appleColors);
	virtual void loadSystemColors($ints* systemColors) override;
	virtual ::java::util::Map* mapInputMethodHighlight(::java::awt::im::InputMethodHighlight* highlight) override;
	bool nativeSyncQueue(int64_t timeout);
	static void performOnMainThreadAfterDelay(::java::lang::Runnable* r, int64_t delay);
	virtual void platformCleanup() override;
	virtual void platformInit() override;
	virtual void platformRunMessage() override;
	virtual void platformShutdown() override;
	static void stopAWTRunLoop(int64_t mediator);
	virtual void sync() override;
	virtual bool syncNativeQueue(int64_t timeout) override;
	static void systemColorsChanged();
	virtual void updateScreenMenuBarUI() override;
	static bool $assertionsDisabled;
	static const int32_t BUTTONS = 5;
	static ::sun::lwawt::macosx::CInputMethodDescriptor* sInputMethodDescriptor;
	static bool inAWT;
	static const int32_t NUM_APPLE_COLORS = 4;
	static const int32_t KEYBOARD_FOCUS_COLOR = 0;
	static const int32_t INACTIVE_SELECTION_BACKGROUND_COLOR = 1;
	static const int32_t INACTIVE_SELECTION_FOREGROUND_COLOR = 2;
	static const int32_t SELECTED_CONTROL_TEXT_COLOR = 3;
	static $ints* appleColors;
	static bool areExtraMouseButtonsEnabled$;
	static $String* APPKIT_THREAD_NAME;
	static $String* nsImagePrefix;
};

		} // macosx
	} // lwawt
} // sun

#pragma pop_macro("APPKIT_THREAD_NAME")
#pragma pop_macro("BUTTONS")
#pragma pop_macro("INACTIVE_SELECTION_BACKGROUND_COLOR")
#pragma pop_macro("INACTIVE_SELECTION_FOREGROUND_COLOR")
#pragma pop_macro("KEYBOARD_FOCUS_COLOR")
#pragma pop_macro("NUM_APPLE_COLORS")
#pragma pop_macro("SELECTED_CONTROL_TEXT_COLOR")

#endif // _sun_lwawt_macosx_LWCToolkit_h_