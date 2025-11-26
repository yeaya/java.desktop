#ifndef _sun_awt_X11_XToolkit_h_
#define _sun_awt_X11_XToolkit_h_
//$ class sun.awt.X11.XToolkit
//$ extends sun.awt.UNIXToolkit
//$ implements java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>
#include <sun/awt/UNIXToolkit.h>

#pragma push_macro("AWT_MULTICLICK_DEFAULT_TIME")
#undef AWT_MULTICLICK_DEFAULT_TIME
#pragma push_macro("IS_KANA_KEYBOARD")
#undef IS_KANA_KEYBOARD
#pragma push_macro("IS_NONKANA_KEYBOARD")
#undef IS_NONKANA_KEYBOARD
#pragma push_macro("IS_NONSUN_KEYBOARD")
#undef IS_NONSUN_KEYBOARD
#pragma push_macro("IS_SUN_KEYBOARD")
#undef IS_SUN_KEYBOARD
#pragma push_macro("PRIMARY_LOOP")
#undef PRIMARY_LOOP
#pragma push_macro("SECONDARY_LOOP")
#undef SECONDARY_LOOP
#pragma push_macro("XORG_KP_BEHAVIOR")
#undef XORG_KP_BEHAVIOR
#pragma push_macro("XSUN_KP_BEHAVIOR")
#undef XSUN_KP_BEHAVIOR
#pragma push_macro("_XA_JAVA_TIME_PROPERTY_ATOM")
#undef _XA_JAVA_TIME_PROPERTY_ATOM

namespace java {
	namespace awt {
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
		class EventQueue;
		class FileDialog;
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
		class Rectangle;
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
		namespace event {
			class MouseEvent;
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
		class PropertyChangeEvent;
		class PropertyChangeListener;
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class Long;
		class Thread;
		class Throwable;
		class Void;
	}
}
namespace java {
	namespace util {
		class Collection;
		class HashMap;
		class Map;
		class Properties;
		class SortedMap;
		class TreeMap;
	}
}
namespace javax {
	namespace swing {
		class UIDefaults;
	}
}
namespace sun {
	namespace awt {
		class DisplayChangedListener;
		class LightweightFrame;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
			class XBaseWindow;
			class XClipboard;
			class XEmbedChildProxy;
			class XEmbedChildProxyPeer;
			class XEmbeddedFrame;
			class XEmbeddedFramePeer;
			class XEvent;
			class XEventDispatcher;
			class XMouseInfoPeer;
			class XToolkit$XEventListener;
		}
	}
}
namespace sun {
	namespace awt {
		class X11GraphicsDevice;
		class X11GraphicsEnvironment;
		class XSettings;
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
	namespace font {
		class FontConfigManager;
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
		namespace X11 {

class XToolkit : public ::sun::awt::UNIXToolkit, public ::java::lang::Runnable {
	$class(XToolkit, 0, ::sun::awt::UNIXToolkit, ::java::lang::Runnable)
public:
	XToolkit();
	using ::sun::awt::UNIXToolkit::createImage;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static void XSync();
	static void addEventDispatcher(int64_t window, ::sun::awt::X11::XEventDispatcher* dispatcher);
	virtual void addPropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl) override;
	static void addToWinMap(int64_t window, ::sun::awt::X11::XBaseWindow* xwin);
	void addXEventListener(::sun::awt::X11::XToolkit$XEventListener* listener);
	virtual bool areExtraMouseButtonsEnabled() override;
	static void awtFUnlock();
	static void awt_output_flush();
	static void awt_toolkit_init();
	virtual void beep() override;
	static void callTimeoutTasks();
	static bool canUseXKBCalls();
	virtual ::java::awt::peer::ButtonPeer* createButton(::java::awt::Button* target) override;
	virtual ::java::awt::peer::CanvasPeer* createCanvas(::java::awt::Canvas* target) override;
	virtual ::java::awt::peer::CheckboxPeer* createCheckbox(::java::awt::Checkbox* target) override;
	virtual ::java::awt::peer::CheckboxMenuItemPeer* createCheckboxMenuItem(::java::awt::CheckboxMenuItem* target) override;
	virtual ::java::awt::peer::ChoicePeer* createChoice(::java::awt::Choice* target) override;
	virtual ::java::awt::Cursor* createCustomCursor(::java::awt::Image* cursor, ::java::awt::Point* hotSpot, $String* name) override;
	virtual ::java::awt::peer::DesktopPeer* createDesktopPeer(::java::awt::Desktop* target) override;
	virtual ::java::awt::peer::DialogPeer* createDialog(::java::awt::Dialog* target) override;
	virtual ::java::awt::dnd::DragGestureRecognizer* createDragGestureRecognizer($Class* recognizerClass, ::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t srcActions, ::java::awt::dnd::DragGestureListener* dgl) override;
	virtual ::java::awt::dnd::peer::DragSourceContextPeer* createDragSourceContextPeer(::java::awt::dnd::DragGestureEvent* dge) override;
	::sun::awt::X11::XEmbedChildProxyPeer* createEmbedProxy(::sun::awt::X11::XEmbedChildProxy* target);
	::sun::awt::X11::XEmbeddedFramePeer* createEmbeddedFrame(::sun::awt::X11::XEmbeddedFrame* target);
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
	virtual ::java::awt::peer::WindowPeer* createWindow(::java::awt::Window* target) override;
	void dispatchEvent(::sun::awt::X11::XEvent* ev);
	static void dumpPeers();
	virtual bool enableInputMethodsForTextComponent() override;
	void freeXKB();
	static $String* getAWTAppClassName();
	static int32_t getBackingStoreType();
	virtual ::java::awt::Dimension* getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight) override;
	static $String* getCorrectXIDString($String* val);
	static int64_t getCurrentServerTime();
	virtual ::sun::awt::datatransfer::DataTransferer* getDataTransferer() override;
	static int64_t getDefaultRootWindow();
	static int64_t getDefaultXColormap();
	static int64_t getDisplay();
	static $String* getEnv($String* key);
	static int64_t getEventNumber();
	static ::java::awt::EventQueue* getEventQueue(Object$* target);
	virtual ::java::awt::peer::FontPeer* getFontPeer($String* name, int32_t style) override;
	virtual ::java::awt::im::spi::InputMethodDescriptor* getInputMethodAdapterDescriptor() override;
	virtual ::java::awt::peer::KeyboardFocusManagerPeer* getKeyboardFocusManagerPeer() override;
	bool getLastCursorPos(::java::awt::Point* p);
	virtual bool getLockingKeyState(int32_t key) override;
	static int32_t getMaxWindowHeightInPixels();
	static int32_t getMaxWindowWidthInPixels();
	virtual int32_t getMaximumCursorColors() override;
	static bool getModifierState(int32_t jkc);
	virtual ::java::awt::peer::MouseInfoPeer* getMouseInfoPeer() override;
	static int32_t getMultiClickTime();
	int64_t getNextTaskTime();
	virtual int32_t getNumberOfButtons() override;
	static int32_t getNumberOfButtonsForMask();
	int32_t getNumberOfButtonsImpl();
	virtual ::java::awt::PrintJob* getPrintJob(::java::awt::Frame* frame, $String* doctitle, ::java::util::Properties* props) override;
	virtual ::java::awt::PrintJob* getPrintJob(::java::awt::Frame* frame, $String* doctitle, ::java::awt::JobAttributes* jobAttributes, ::java::awt::PageAttributes* pageAttributes) override;
	virtual ::java::awt::Insets* getScreenInsets(::java::awt::GraphicsConfiguration* gc) override;
	virtual int32_t getScreenResolution() override;
	static bool getSunAwtDisableGrab();
	static bool getSunAwtDisableGtkFileDialogs();
	virtual ::java::awt::datatransfer::Clipboard* getSystemClipboard() override;
	virtual ::java::awt::datatransfer::Clipboard* getSystemSelection() override;
	static int64_t getTrayIconDisplayTimeout();
	static ::javax::swing::UIDefaults* getUIDefaults();
	static ::java::awt::Rectangle* getWorkArea(int64_t root, int32_t scale);
	static int32_t getXKBBaseEventCode();
	static int32_t getXKBEffectiveGroup();
	static int64_t getXKBKbdDesc();
	virtual void grab(::java::awt::Window* w) override;
	void init();
	static void initIDs();
	static void initScreenSize();
	static void initSecurityWarning();
	static void initUIDefaults();
	bool initXSettingsIfNeeded($String* propName);
	virtual void initializeDesktopProperties() override;
	static void initializeMultiClickTime();
	virtual bool isAlwaysOnTopSupported() override;
	virtual bool isDesktopSupported() override;
	virtual bool isDynamicLayoutActive() override;
	virtual bool isDynamicLayoutSet() override;
	bool isDynamicLayoutSupported();
	virtual bool isFrameStateSupported(int32_t state) override;
	static bool isKanaKeyboard();
	static bool isLeftMouseButton(::java::awt::event::MouseEvent* me);
	virtual bool isModalExclusionTypeSupported(::java::awt::Dialog$ModalExclusionType* exclusionType) override;
	virtual bool isModalityTypeSupported(::java::awt::Dialog$ModalityType* modalityType) override;
	static bool isRightMouseButton(::java::awt::event::MouseEvent* me);
	static bool isSecurityWarningEnabled();
	static bool isSunKeyboard();
	virtual bool isTaskbarSupported() override;
	static bool isToolkitThread();
	virtual bool isTranslucencyCapable(::java::awt::GraphicsConfiguration* gc) override;
	virtual bool isTraySupported() override;
	virtual bool isWindowOpacitySupported() override;
	virtual bool isWindowShapingSupported() override;
	virtual bool isWindowTranslucencySupported() override;
	static bool isXKBenabled();
	static bool isXsunKPBehavior();
	static int32_t keysymToPrimaryKeycode(int64_t sym);
	static void lambda$dumpPeers$4(::java::lang::Long* k, ::sun::awt::X11::XBaseWindow* v);
	static void lambda$dumpPeers$5(Object$* k, Object$* v);
	static void lambda$dumpPeers$6(::java::lang::Long* k, ::java::util::Collection* v);
	static ::java::lang::Void* lambda$init$0();
	void lambda$init$1();
	::java::lang::Void* lambda$init$2();
	static void lambda$initializeDesktopProperties$7(::java::beans::PropertyChangeEvent* evt);
	$Thread* lambda$new$3();
	virtual $Object* lazilyLoadDesktopProperty($String* name) override;
	virtual void loadSystemColors($ints* systemColors) override;
	void loadXSettings();
	virtual ::java::util::Map* mapInputMethodHighlight(::java::awt::im::InputMethodHighlight* highlight) override;
	void nativeLoadSystemColors($ints* systemColors);
	virtual bool needsXEmbedImpl() override;
	void notifyListeners(::sun::awt::X11::XEvent* xev);
	void parseXSettings(int32_t screen_XXX_ignored, ::java::util::Map* updatedSettings);
	static void processException($Throwable* thr);
	void processGlobalMotionEvent(::sun::awt::X11::XEvent* e, ::sun::awt::X11::XBaseWindow* win);
	void processXkbChanges(::sun::awt::X11::XEvent* ev);
	static void remove(::java::lang::Runnable* task);
	static void removeEventDispatcher(int64_t window, ::sun::awt::X11::XEventDispatcher* dispatcher);
	static void removeFromWinMap(int64_t window, ::sun::awt::X11::XBaseWindow* xwin);
	static void removeSourceEvents(::java::awt::EventQueue* queue, Object$* source, bool removeAllEvents);
	static void resetKeyboardSniffer();
	virtual void run() override;
	void run(bool loop);
	static void schedule(::java::lang::Runnable* task, int64_t interval);
	static void setBackingStoreType();
	virtual void setDynamicLayout(bool b) override;
	static void setupModifierMap();
	virtual bool syncNativeQueue(int64_t timeout) override;
	static void targetDisposedPeer(Object$* target, Object$* peer);
	static $Object* targetToPeer(Object$* target);
	virtual $String* toString() override;
	static bool tryXKB();
	virtual void ungrab(::java::awt::Window* w) override;
	virtual bool useBufferPerWindow() override;
	static void waitForEvents(int64_t nextTaskTime);
	static void wakeup_poll();
	static ::sun::awt::X11::XBaseWindow* windowToXWindow(int64_t window);
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* eventLog;
	static ::sun::util::logging::PlatformLogger* timeoutTaskLog;
	static ::sun::util::logging::PlatformLogger* keyEventLog;
	static ::sun::util::logging::PlatformLogger* backingStoreLog;
	static const int32_t AWT_MULTICLICK_DEFAULT_TIME = 500;
	static const bool PRIMARY_LOOP = false;
	static const bool SECONDARY_LOOP = true;
	static $String* awtAppClassName;
	::sun::awt::X11::XClipboard* clipboard = nullptr;
	::sun::awt::X11::XClipboard* selection = nullptr;
	static bool dynamicLayoutSetting;
	static bool areExtraMouseButtonsEnabled$;
	bool loadedXSettings = false;
	::sun::awt::XSettings* xs = nullptr;
	::sun::font::FontConfigManager* fcManager = nullptr;
	static int32_t arrowCursor;
	static ::java::util::TreeMap* winMap;
	static ::java::util::HashMap* specialPeerMap;
	static ::java::util::HashMap* winToDispatcher;
	static ::javax::swing::UIDefaults* uidefaults;
	static ::sun::awt::X11GraphicsEnvironment* localEnv;
	static ::sun::awt::X11GraphicsDevice* device;
	static int64_t display;
	static int32_t awt_multiclick_time;
	static bool securityWarningEnabled;
	static $volatile(int32_t) maxWindowWidthInPixels;
	static $volatile(int32_t) maxWindowHeightInPixels;
	static ::sun::awt::X11::XMouseInfoPeer* xPeer;
	static $Thread* toolkitThread;
	::java::awt::Point* lastCursorPos = nullptr;
	::java::util::Collection* listeners = nullptr;
	static ::sun::awt::DisplayChangedListener* displayChangedHandler;
	static ::java::lang::Boolean* sunAwtDisableGtkFileDialogs;
	static bool initialized;
	static bool timeStampUpdated;
	static int64_t timeStamp;
	static ::sun::awt::X11::XEventDispatcher* timeFetcher;
	static ::sun::awt::X11::XAtom* _XA_JAVA_TIME_PROPERTY_ATOM;
	static $String* prefix;
	static $String* postfix;
	static $String* dndPrefix;
	static int32_t altMask;
	static int32_t metaMask;
	static int32_t numLockMask;
	static int32_t modeSwitchMask;
	static int32_t modLockIsShiftLock;
	static ::java::util::SortedMap* timeoutTasks;
	static int32_t backingStoreType;
	static const int32_t XSUN_KP_BEHAVIOR = 1;
	static const int32_t XORG_KP_BEHAVIOR = 2;
	static const int32_t IS_SUN_KEYBOARD = 1;
	static const int32_t IS_NONSUN_KEYBOARD = 2;
	static const int32_t IS_KANA_KEYBOARD = 1;
	static const int32_t IS_NONKANA_KEYBOARD = 2;
	static int32_t awt_IsXsunKPBehavior;
	static bool awt_UseXKB;
	static bool awt_UseXKB_Calls;
	static int32_t awt_XKBBaseEventCode;
	static int32_t awt_XKBEffectiveGroup;
	static int64_t awt_XKBDescPtr;
	static int32_t sunOrNotKeyboard;
	static int32_t kanaOrNotKeyboard;
	static int64_t eventNumber;
	static ::sun::awt::X11::XEventDispatcher* oops_waiter;
	static bool oops_updated;
	static int32_t oops_position;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("AWT_MULTICLICK_DEFAULT_TIME")
#pragma pop_macro("IS_KANA_KEYBOARD")
#pragma pop_macro("IS_NONKANA_KEYBOARD")
#pragma pop_macro("IS_NONSUN_KEYBOARD")
#pragma pop_macro("IS_SUN_KEYBOARD")
#pragma pop_macro("PRIMARY_LOOP")
#pragma pop_macro("SECONDARY_LOOP")
#pragma pop_macro("XORG_KP_BEHAVIOR")
#pragma pop_macro("XSUN_KP_BEHAVIOR")
#pragma pop_macro("_XA_JAVA_TIME_PROPERTY_ATOM")

#endif // _sun_awt_X11_XToolkit_h_