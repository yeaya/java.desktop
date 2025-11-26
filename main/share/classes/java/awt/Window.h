#ifndef _java_awt_Window_h_
#define _java_awt_Window_h_
//$ class java.awt.Window
//$ extends java.awt.Container
//$ implements javax.accessibility.Accessible

#include <java/awt/Container.h>
#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>

#pragma push_macro("OPENED")
#undef OPENED

namespace java {
	namespace awt {
		class AWTEvent;
		class BufferCapabilities;
		class Color;
		class Component;
		class Cursor;
		class Dialog;
		class Dialog$ModalExclusionType;
		class Dimension;
		class Event;
		class FocusManager;
		class Frame;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
		class Point;
		class Rectangle;
		class Shape;
		class Toolkit;
		class Window$Type;
		class Window$WindowDisposerRecord;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
			class MouseWheelEvent;
			class WindowEvent;
			class WindowFocusListener;
			class WindowListener;
			class WindowStateListener;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			class InputContext;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferStrategy;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
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
		class EventListener;
		class List;
		class Locale;
		class ResourceBundle;
		class Set;
		class Vector;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}
namespace sun {
	namespace awt {
		namespace util {
			class IdentityArrayList;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
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

namespace java {
	namespace awt {

class $export Window : public ::java::awt::Container, public ::javax::accessibility::Accessible {
	$class(Window, 0, ::java::awt::Container, ::javax::accessibility::Accessible)
public:
	Window();
	using ::java::awt::Container::add;
	using ::java::awt::Container::getMousePosition;
	using ::java::awt::Container::list;
	using ::java::awt::Container::isFocusCycleRoot;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::GraphicsConfiguration* gc);
	void init$();
	void init$(::java::awt::Frame* owner);
	void init$(::java::awt::Window* owner);
	void init$(::java::awt::Window* owner, ::java::awt::GraphicsConfiguration* gc);
	virtual void addNotify() override;
	virtual void addOwnedWindow(::java::lang::ref::WeakReference* weakWindow);
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void addPropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener) override;
	void addToWindowList();
	virtual void addWindowFocusListener(::java::awt::event::WindowFocusListener* l);
	virtual void addWindowListener(::java::awt::event::WindowListener* l);
	virtual void addWindowStateListener(::java::awt::event::WindowStateListener* l);
	virtual void adjustDescendantsOnParent(int32_t num) override;
	virtual void adjustListeningChildrenOnParent(int64_t mask, int32_t num) override;
	virtual void applyCompoundShape(::sun::java2d::pipe::Region* shape) override;
	virtual void applyCurrentShape() override;
	virtual void applyResourceBundle(::java::util::ResourceBundle* rb);
	virtual void applyResourceBundle($String* rbName);
	::java::awt::geom::Point2D* calculateSecurityWarningPosition(double x, double y, double w, double h);
	virtual bool canContainFocusOwner(::java::awt::Component* focusOwnerCandidate) override;
	virtual void clearMostRecentFocusOwnerOnHide() override;
	void closeSplashScreen();
	virtual void connectOwnedWindow(::java::awt::Window* child);
	virtual $String* constructComponentName() override;
	virtual void createBufferStrategy(int32_t numBuffers) override;
	virtual void createBufferStrategy(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual void deliverMouseWheelToAncestor(::java::awt::event::MouseWheelEvent* e);
	void deserializeResources(::java::io::ObjectInputStream* s);
	virtual void dispatchEventImpl(::java::awt::AWTEvent* e) override;
	virtual bool dispatchMouseWheelToAncestor(::java::awt::event::MouseWheelEvent* e) override;
	virtual void dispose();
	virtual void disposeImpl();
	virtual void doDispose();
	virtual bool eventEnabled(::java::awt::AWTEvent* e) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	static ::sun::awt::util::IdentityArrayList* getAllUnblockedWindows();
	static ::sun::awt::util::IdentityArrayList* getAllWindows();
	virtual ::java::awt::Color* getBackground() override;
	virtual ::java::awt::image::BufferStrategy* getBufferStrategy() override;
	virtual ::java::awt::Container* getContainer() override;
	virtual ::java::awt::Window* getDocumentRoot();
	virtual ::java::awt::Container* getFocusCycleRootAncestor() override;
	virtual ::java::awt::Component* getFocusOwner();
	virtual ::java::util::Set* getFocusTraversalKeys(int32_t id) override;
	virtual bool getFocusableWindowState();
	virtual ::java::util::List* getIconImages();
	virtual ::java::awt::im::InputContext* getInputContext() override;
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType) override;
	virtual ::java::util::Locale* getLocale() override;
	virtual ::java::awt::Point* getLocationOnWindow() override;
	virtual ::java::awt::Dialog* getModalBlocker();
	virtual ::java::awt::Dialog$ModalExclusionType* getModalExclusionType();
	virtual ::java::awt::Component* getMostRecentFocusOwner();
	virtual float getOpacity();
	virtual $Array<::java::awt::Window>* getOwnedWindows();
	$Array<::java::awt::Window>* getOwnedWindows_NoClientCode();
	virtual ::java::awt::Window* getOwner();
	::java::awt::Window* getOwner_NoClientCode();
	static $Array<::java::awt::Window>* getOwnerlessWindows();
	virtual ::java::awt::Shape* getShape();
	virtual ::java::awt::Component* getTemporaryLostComponent();
	virtual ::java::awt::Toolkit* getToolkit() override;
	virtual ::java::awt::Window$Type* getType();
	$String* getWarningString();
	virtual $Array<::java::awt::event::WindowFocusListener>* getWindowFocusListeners();
	virtual $Array<::java::awt::event::WindowListener>* getWindowListeners();
	virtual $Array<::java::awt::event::WindowStateListener>* getWindowStateListeners();
	static $Array<::java::awt::Window>* getWindows(::sun::awt::AppContext* appContext);
	static $Array<::java::awt::Window>* getWindows();
	virtual void hide() override;
	void init(::java::awt::GraphicsConfiguration* gc);
	void initDeserializedWindow();
	::java::awt::GraphicsConfiguration* initGC(::java::awt::GraphicsConfiguration* gc);
	static void initIDs();
	virtual bool isActive();
	bool isAlwaysOnTop();
	virtual bool isAlwaysOnTopSupported();
	virtual bool isAutoRequestFocus();
	virtual bool isDisposing();
	virtual bool isFocusCycleRoot() override;
	bool isFocusableWindow();
	virtual bool isFocused();
	virtual bool isLocationByPlatform();
	virtual bool isModalBlocked();
	virtual bool isModalExcluded(::java::awt::Dialog$ModalExclusionType* exclusionType);
	virtual bool isOpaque() override;
	virtual bool isRecursivelyVisible() override;
	virtual bool isShowing() override;
	virtual bool isValidateRoot() override;
	static double limit(double value, double min, double max);
	virtual void mixOnReshaping() override;
	void ownedInit(::java::awt::Window* owner);
	virtual void pack();
	virtual void paint(::java::awt::Graphics* g) override;
	virtual bool postEvent(::java::awt::Event* e) override;
	virtual void postProcessKeyEvent(::java::awt::event::KeyEvent* e) override;
	virtual void postWindowEvent(int32_t id);
	virtual void preProcessKeyEvent(::java::awt::event::KeyEvent* e) override;
	virtual void processEvent(::java::awt::AWTEvent* e) override;
	virtual void processWindowEvent(::java::awt::event::WindowEvent* e);
	virtual void processWindowFocusEvent(::java::awt::event::WindowEvent* e);
	virtual void processWindowStateEvent(::java::awt::event::WindowEvent* e);
	void readObject(::java::io::ObjectInputStream* s);
	using ::java::awt::Container::remove;
	static void removeFromWindowList(::sun::awt::AppContext* context, ::java::lang::ref::WeakReference* weakThis);
	void removeFromWindowList();
	virtual void removeNotify() override;
	virtual void removeOwnedWindow(::java::lang::ref::WeakReference* weakWindow);
	virtual void removeWindowFocusListener(::java::awt::event::WindowFocusListener* l);
	virtual void removeWindowListener(::java::awt::event::WindowListener* l);
	virtual void removeWindowStateListener(::java::awt::event::WindowStateListener* l);
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height) override;
	void setAlwaysOnTop(bool alwaysOnTop);
	virtual void setAutoRequestFocus(bool autoRequestFocus);
	virtual void setBackground(::java::awt::Color* bgColor) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setBounds(::java::awt::Rectangle* r) override;
	virtual void setClientSize(int32_t w, int32_t h);
	virtual void setCursor(::java::awt::Cursor* cursor) override;
	virtual void setFocusCycleRoot(bool focusCycleRoot) override;
	virtual void setFocusableWindowState(bool focusableWindowState);
	virtual void setGraphicsConfiguration(::java::awt::GraphicsConfiguration* gc) override;
	virtual void setIconImage(::java::awt::Image* image);
	virtual void setIconImages(::java::util::List* icons);
	static void setLayersOpaque(::java::awt::Component* component, bool isOpaque);
	virtual void setLocation(int32_t x, int32_t y) override;
	virtual void setLocation(::java::awt::Point* p) override;
	virtual void setLocationByPlatform(bool locationByPlatform);
	virtual void setLocationRelativeTo(::java::awt::Component* c);
	virtual void setMinimumSize(::java::awt::Dimension* minimumSize) override;
	virtual void setModalBlocked(::java::awt::Dialog* blocker, bool blocked, bool peerCall);
	virtual void setModalExclusionType(::java::awt::Dialog$ModalExclusionType* exclusionType);
	virtual void setOpacity(float opacity);
	void setOwnedWindowsAlwaysOnTop(bool alwaysOnTop);
	virtual void setShape(::java::awt::Shape* shape);
	virtual void setSize(::java::awt::Dimension* d) override;
	virtual void setSize(int32_t width, int32_t height) override;
	virtual ::java::awt::Component* setTemporaryLostComponent(::java::awt::Component* component);
	virtual void setType(::java::awt::Window$Type* type);
	virtual void setVisible(bool b) override;
	void setWarningString();
	using ::java::awt::Container::show;
	virtual void show() override;
	virtual void toBack();
	void toBack_NoClientCode();
	virtual void toFront();
	void toFront_NoClientCode();
	virtual $String* toString() override;
	static void updateChildFocusableWindowState(::java::awt::Window* w);
	virtual void updateChildrenBlocking();
	void updateWindow();
	virtual void updateZOrder() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	$String* warningString = nullptr;
	::java::util::List* icons = nullptr;
	::java::awt::Component* temporaryLostComponent = nullptr;
	static bool systemSyncLWRequests;
	bool syncLWRequests = false;
	bool beforeFirstShow = false;
	bool disposing = false;
	::java::awt::Window$WindowDisposerRecord* disposerRecord = nullptr;
	static const int32_t OPENED = 1;
	int32_t state = 0;
	bool alwaysOnTop = false;
	static ::sun::awt::util::IdentityArrayList* allWindows;
	::java::util::Vector* ownedWindowList = nullptr;
	::java::lang::ref::WeakReference* weakThis = nullptr;
	bool showWithParent = false;
	::java::awt::Dialog* modalBlocker = nullptr;
	::java::awt::Dialog$ModalExclusionType* modalExclusionType = nullptr;
	::java::awt::event::WindowListener* windowListener = nullptr;
	::java::awt::event::WindowStateListener* windowStateListener = nullptr;
	::java::awt::event::WindowFocusListener* windowFocusListener = nullptr;
	::java::awt::im::InputContext* inputContext = nullptr;
	$Object* inputContextLock = nullptr;
	::java::awt::FocusManager* focusMgr = nullptr;
	bool focusableWindowState = false;
	$volatile(bool) autoRequestFocus = false;
	bool isInShow = false;
	$volatile(float) opacity = 0.0;
	::java::awt::Shape* shape = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0x3E6B84DD1D08FA6E;
	static ::sun::util::logging::PlatformLogger* log;
	static bool locationByPlatformProp;
	bool isTrayIconWindow = false;
	$volatile(int32_t) securityWarningWidth = 0;
	$volatile(int32_t) securityWarningHeight = 0;
	$Object* anchor = nullptr;
	static ::java::util::concurrent::atomic::AtomicBoolean* beforeFirstWindowShown;
	::java::awt::Window$Type* type = nullptr;
	int32_t windowSerializedDataVersion = 0;
	$volatile(bool) locationByPlatform = false;
};

	} // awt
} // java

#pragma pop_macro("OPENED")

#endif // _java_awt_Window_h_