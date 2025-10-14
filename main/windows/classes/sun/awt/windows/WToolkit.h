#ifndef _sun_awt_windows_WToolkit_h_
#define _sun_awt_windows_WToolkit_h_
//$ class sun.awt.windows.WToolkit
//$ extends sun.awt.SunToolkit
//$ implements java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>
#include <sun/awt/SunToolkit.h>

#pragma push_macro("NULL_COMPONENT_WR")
#undef NULL_COMPONENT_WR
#pragma push_macro("XPSTYLE_THEME_ACTIVE")
#undef XPSTYLE_THEME_ACTIVE

namespace java {
	namespace awt {
		class AWTEvent;
		class Button;
		class Canvas;
		class Checkbox;
		class CheckboxMenuItem;
		class Choice;
		class Component;
		class Cursor;
		class Desktop;
		class Dialog;
		class Dialog$ModalExclusionType;
		class Dialog$ModalityType;
		class Dimension;
		class FileDialog;
		class Font;
		class FontMetrics;
		class Frame;
		class GraphicsConfiguration;
		class GraphicsDevice;
		class Image;
		class Insets;
		class JobAttributes;
		class Label;
		class List;
		class Menu;
		class MenuBar;
		class MenuItem;
		class PageAttributes;
		class Panel;
		class Point;
		class PopupMenu;
		class PrintJob;
		class RenderingHints;
		class ScrollPane;
		class Scrollbar;
		class SystemTray;
		class Taskbar;
		class TextArea;
		class TextField;
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
		namespace image {
			class ColorModel;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ButtonPeer;
			class CanvasPeer;
			class CheckboxMenuItemPeer;
			class CheckboxPeer;
			class ChoicePeer;
			class DesktopPeer;
			class DialogPeer;
			class FileDialogPeer;
			class FontPeer;
			class FramePeer;
			class KeyboardFocusManagerPeer;
			class LabelPeer;
			class ListPeer;
			class MenuBarPeer;
			class MenuItemPeer;
			class MenuPeer;
			class MouseInfoPeer;
			class PanelPeer;
			class PopupMenuPeer;
			class RobotPeer;
			class ScrollPanePeer;
			class ScrollbarPeer;
			class SystemTrayPeer;
			class TaskbarPeer;
			class TextAreaPeer;
			class TextFieldPeer;
			class TrayIconPeer;
			class WindowPeer;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace lang {
		class Thread;
		class ThreadGroup;
		class Void;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Locale;
		class Map;
		class Properties;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
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
		namespace datatransfer {
			class DataTransferer;
		}
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WClipboard;
			class WDesktopProperties;
			class WEmbeddedFrame;
			class WEmbeddedFramePeer;
			class WMouseInfoPeer;
			class WPageDialog;
			class WPageDialogPeer;
			class WPrintDialog;
			class WPrintDialogPeer;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WToolkit : public ::sun::awt::SunToolkit, public ::java::lang::Runnable {
	$class(WToolkit, 0, ::sun::awt::SunToolkit, ::java::lang::Runnable)
public:
	WToolkit();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::awt::SunToolkit::disableBackgroundErase;
	using ::sun::awt::SunToolkit::createImage;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addPropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl) override;
	virtual bool areExtraMouseButtonsEnabled() override;
	virtual void beep() override;
	virtual ::java::awt::peer::ButtonPeer* createButton(::java::awt::Button* target) override;
	virtual ::java::awt::peer::CanvasPeer* createCanvas(::java::awt::Canvas* target) override;
	virtual ::java::awt::peer::CheckboxPeer* createCheckbox(::java::awt::Checkbox* target) override;
	virtual ::java::awt::peer::CheckboxMenuItemPeer* createCheckboxMenuItem(::java::awt::CheckboxMenuItem* target) override;
	virtual ::java::awt::peer::ChoicePeer* createChoice(::java::awt::Choice* target) override;
	virtual ::java::awt::Cursor* createCustomCursor(::java::awt::Image* cursor, ::java::awt::Point* hotSpot, $String* name) override;
	virtual ::java::awt::peer::DesktopPeer* createDesktopPeer(::java::awt::Desktop* target) override;
	virtual ::java::awt::peer::DialogPeer* createDialog(::java::awt::Dialog* target) override;
	virtual ::java::awt::dnd::DragGestureRecognizer* createDragGestureRecognizer($Class* abstractRecognizerClass, ::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t srcActions, ::java::awt::dnd::DragGestureListener* dgl) override;
	virtual ::java::awt::dnd::peer::DragSourceContextPeer* createDragSourceContextPeer(::java::awt::dnd::DragGestureEvent* dge) override;
	::sun::awt::windows::WEmbeddedFramePeer* createEmbeddedFrame(::sun::awt::windows::WEmbeddedFrame* target);
	virtual ::java::awt::peer::FileDialogPeer* createFileDialog(::java::awt::FileDialog* target) override;
	virtual ::java::awt::peer::FramePeer* createFrame(::java::awt::Frame* target) override;
	virtual ::java::awt::peer::LabelPeer* createLabel(::java::awt::Label* target) override;
	virtual ::java::awt::peer::FramePeer* createLightweightFrame(::sun::awt::LightweightFrame* target) override;
	virtual ::java::awt::peer::ListPeer* createList(::java::awt::List* target) override;
	virtual ::java::awt::peer::MenuPeer* createMenu(::java::awt::Menu* target) override;
	virtual ::java::awt::peer::MenuBarPeer* createMenuBar(::java::awt::MenuBar* target) override;
	virtual ::java::awt::peer::MenuItemPeer* createMenuItem(::java::awt::MenuItem* target) override;
	virtual ::java::awt::peer::PanelPeer* createPanel(::java::awt::Panel* target) override;
	virtual ::java::awt::peer::PopupMenuPeer* createPopupMenu(::java::awt::PopupMenu* target) override;
	virtual ::java::awt::peer::RobotPeer* createRobot(::java::awt::GraphicsDevice* screen) override;
	virtual ::java::awt::peer::ScrollPanePeer* createScrollPane(::java::awt::ScrollPane* target) override;
	virtual ::java::awt::peer::ScrollbarPeer* createScrollbar(::java::awt::Scrollbar* target) override;
	virtual ::java::awt::peer::SystemTrayPeer* createSystemTray(::java::awt::SystemTray* target) override;
	virtual ::java::awt::peer::TaskbarPeer* createTaskbarPeer(::java::awt::Taskbar* target) override;
	virtual ::java::awt::peer::TextAreaPeer* createTextArea(::java::awt::TextArea* target) override;
	virtual ::java::awt::peer::TextFieldPeer* createTextField(::java::awt::TextField* target) override;
	virtual ::java::awt::peer::TrayIconPeer* createTrayIcon(::java::awt::TrayIcon* target) override;
	::sun::awt::windows::WPageDialogPeer* createWPageDialog(::sun::awt::windows::WPageDialog* target);
	::sun::awt::windows::WPrintDialogPeer* createWPrintDialog(::sun::awt::windows::WPrintDialog* target);
	virtual ::java::awt::peer::WindowPeer* createWindow(::java::awt::Window* target) override;
	virtual void disableBackgroundErase(::java::awt::Canvas* canvas) override;
	static void displayChanged();
	static bool embeddedDispose();
	void embeddedEventLoopIdleProcessing();
	static bool embeddedInit();
	virtual bool enableInputMethodsForTextComponent() override;
	void eventLoop();
	virtual ::java::awt::Dimension* getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight) override;
	virtual ::sun::awt::datatransfer::DataTransferer* getDataTransferer() override;
	virtual ::java::util::Locale* getDefaultKeyboardLocale() override;
	virtual ::java::awt::RenderingHints* getDesktopAAHints() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::peer::FontPeer* getFontPeer($String* name, int32_t style) override;
	virtual ::java::awt::im::spi::InputMethodDescriptor* getInputMethodAdapterDescriptor() override;
	virtual ::java::awt::peer::KeyboardFocusManagerPeer* getKeyboardFocusManagerPeer() override;
	virtual bool getLockingKeyState(int32_t key) override;
	bool getLockingKeyStateNative(int32_t key);
	virtual int32_t getMaximumCursorColors() override;
	virtual ::java::awt::peer::MouseInfoPeer* getMouseInfoPeer() override;
	virtual int32_t getNumberOfButtons() override;
	int32_t getNumberOfButtonsImpl();
	virtual ::java::awt::PrintJob* getPrintJob(::java::awt::Frame* frame, $String* doctitle, ::java::util::Properties* props) override;
	virtual ::java::awt::PrintJob* getPrintJob(::java::awt::Frame* frame, $String* doctitle, ::java::awt::JobAttributes* jobAttributes, ::java::awt::PageAttributes* pageAttributes) override;
	virtual ::java::awt::Insets* getScreenInsets(::java::awt::GraphicsConfiguration* gc) override;
	::java::awt::Insets* getScreenInsets(int32_t screen);
	virtual int32_t getScreenResolution() override;
	virtual ::java::awt::datatransfer::Clipboard* getSystemClipboard() override;
	::java::util::Map* getWProps();
	static ::sun::awt::windows::WToolkit* getWToolkit();
	static $String* getWindowsVersion();
	virtual void grab(::java::awt::Window* w) override;
	void hideTouchKeyboard();
	bool init();
	static void initIDs();
	virtual void initializeDesktopProperties() override;
	bool isComponentValidForTouchKeyboard(::java::awt::Component* comp);
	virtual bool isDesktopSupported() override;
	virtual bool isDynamicLayoutActive() override;
	virtual bool isDynamicLayoutSet() override;
	bool isDynamicLayoutSupported();
	bool isDynamicLayoutSupportedNative();
	virtual bool isFrameStateSupported(int32_t state) override;
	virtual bool isModalExclusionTypeSupported(::java::awt::Dialog$ModalExclusionType* exclusionType) override;
	virtual bool isModalityTypeSupported(::java::awt::Dialog$ModalityType* modalityType) override;
	virtual bool isTaskbarSupported() override;
	virtual bool isTranslucencyCapable(::java::awt::GraphicsConfiguration* gc) override;
	virtual bool isTraySupported() override;
	virtual bool isWindowOpacitySupported() override;
	virtual bool isWindowShapingSupported() override;
	virtual bool isWindowTranslucencySupported() override;
	static void lambda$displayChanged$4();
	static $Thread* lambda$displayChanged$5(::java::lang::Runnable* r);
	::java::lang::Void* lambda$new$0(::java::lang::ThreadGroup* rootTG);
	static ::java::lang::Void* lambda$new$1();
	::java::lang::Void* lambda$registerShutdownHook$2();
	static ::java::lang::Void* lambda$run$3();
	void lambda$windowsSettingChange$6(::java::util::Map* props);
	void lazilyInitWProps();
	virtual $Object* lazilyLoadDesktopProperty($String* name) override;
	static void loadLibraries();
	virtual void loadSystemColors($ints* systemColors) override;
	static ::java::awt::image::ColorModel* makeColorModel();
	virtual ::java::util::Map* mapInputMethodHighlight(::java::awt::im::InputMethodHighlight* highlight) override;
	void nativeSync();
	virtual bool needUpdateWindow() override;
	static void paletteChanged();
	static void postDispose();
	static void quitSecondaryEventLoop();
	void registerShutdownHook();
	virtual void run() override;
	virtual void setDynamicLayout(bool b) override;
	void setDynamicLayoutNative(bool b);
	static void setExtraMouseButtonsEnabledNative(bool enable);
	virtual void setLockingKeyState(int32_t key, bool on) override;
	void setLockingKeyStateNative(int32_t key, bool on);
	virtual void showOrHideTouchKeyboard(::java::awt::Component* comp, ::java::awt::AWTEvent* e) override;
	void showTouchKeyboard(bool causedByTouchEvent);
	void shutdown();
	static void startSecondaryEventLoop();
	static bool startToolkitThread(::java::lang::Runnable* thread, ::java::lang::ThreadGroup* rootThreadGroup);
	virtual void sync() override;
	virtual bool syncNativeQueue(int64_t timeout) override;
	static void targetDisposedPeer(Object$* target, Object$* peer);
	static $Object* targetToPeer(Object$* target);
	virtual $String* toString() override;
	virtual void ungrab(::java::awt::Window* w) override;
	void updateProperties(::java::util::Map* props);
	void updateXPStyleEnabled(Object$* dskProp);
	virtual bool useBufferPerWindow() override;
	void windowsSettingChange();
	static ::sun::util::logging::PlatformLogger* log;
	static $String* XPSTYLE_THEME_ACTIVE;
	::sun::awt::windows::WClipboard* clipboard = nullptr;
	::java::util::Hashtable* cacheFontPeer = nullptr;
	::sun::awt::windows::WDesktopProperties* wprops = nullptr;
	bool dynamicLayoutSetting = false;
	static bool areExtraMouseButtonsEnabled$;
	static bool loaded;
	$Object* anchor = nullptr;
	bool inited = false;
	static ::sun::awt::windows::WMouseInfoPeer* wPeer;
	static ::java::awt::image::ColorModel* screenmodel;
	static ::java::util::concurrent::ExecutorService* displayChangeExecutor;
	static $String* prefix;
	static $String* postfix;
	static $String* awtPrefix;
	static $String* dndPrefix;
	static ::java::lang::ref::WeakReference* NULL_COMPONENT_WR;
	$volatile(::java::lang::ref::WeakReference*) compOnTouchDownEvent = nullptr;
	$volatile(::java::lang::ref::WeakReference*) compOnMousePressedEvent = nullptr;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("NULL_COMPONENT_WR")
#pragma pop_macro("XPSTYLE_THEME_ACTIVE")

#endif // _sun_awt_windows_WToolkit_h_