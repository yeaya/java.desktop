#ifndef _java_awt_Toolkit_h_
#define _java_awt_Toolkit_h_
//$ class java.awt.Toolkit
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LONG_BITS")
#undef LONG_BITS

namespace java {
	namespace awt {
		class AWTEvent;
		class Component;
		class Container;
		class Cursor;
		class Dialog$ModalExclusionType;
		class Dialog$ModalityType;
		class Dimension;
		class EventQueue;
		class Font;
		class FontMetrics;
		class Frame;
		class GraphicsConfiguration;
		class Image;
		class Insets;
		class JobAttributes;
		class PageAttributes;
		class Point;
		class PrintJob;
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
			class DragGestureListener;
			class DragGestureRecognizer;
			class DragSource;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class AWTEventListener;
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
		namespace image {
			class ColorModel;
			class ImageObserver;
			class ImageProducer;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
		class PropertyChangeSupport;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Throwable;
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
		class Map;
		class Properties;
		class ResourceBundle;
		class Set;
		class WeakHashMap;
	}
}

namespace java {
	namespace awt {

class $export Toolkit : public ::java::lang::Object {
	$class(Toolkit, 0, ::java::lang::Object)
public:
	Toolkit();
	void init$();
	virtual void addAWTEventListener(::java::awt::event::AWTEventListener* listener, int64_t eventMask);
	virtual void addPropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl);
	virtual bool areExtraMouseButtonsEnabled();
	virtual void beep() {}
	virtual int32_t checkImage(::java::awt::Image* image, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) {return 0;}
	virtual int32_t countAWTEventListeners(int64_t eventMask);
	virtual ::java::awt::Cursor* createCustomCursor(::java::awt::Image* cursor, ::java::awt::Point* hotSpot, $String* name);
	virtual ::java::awt::dnd::DragGestureRecognizer* createDragGestureRecognizer($Class* abstractRecognizerClass, ::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t srcActions, ::java::awt::dnd::DragGestureListener* dgl);
	virtual ::java::awt::Image* createImage($String* filename) {return nullptr;}
	virtual ::java::awt::Image* createImage(::java::net::URL* url) {return nullptr;}
	virtual ::java::awt::Image* createImage(::java::awt::image::ImageProducer* producer) {return nullptr;}
	virtual ::java::awt::Image* createImage($bytes* imagedata);
	virtual ::java::awt::Image* createImage($bytes* imagedata, int32_t imageoffset, int32_t imagelength) {return nullptr;}
	static ::java::beans::PropertyChangeSupport* createPropertyChangeSupport(::java::awt::Toolkit* toolkit);
	static ::java::awt::event::AWTEventListener* deProxyAWTEventListener(::java::awt::event::AWTEventListener* l);
	static bool enabledOnToolkit(int64_t eventMask);
	static void fallbackToLoadClassForAT($String* atName);
	virtual $Array<::java::awt::event::AWTEventListener>* getAWTEventListeners();
	virtual $Array<::java::awt::event::AWTEventListener>* getAWTEventListeners(int64_t eventMask);
	virtual ::java::awt::Dimension* getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight);
	virtual ::java::awt::image::ColorModel* getColorModel() {return nullptr;}
	static ::java::awt::Toolkit* getDefaultToolkit();
	$Object* getDesktopProperty($String* propertyName);
	static ::java::awt::EventQueue* getEventQueue();
	virtual $StringArray* getFontList() {return nullptr;}
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) {return nullptr;}
	virtual ::java::awt::Image* getImage($String* filename) {return nullptr;}
	virtual ::java::awt::Image* getImage(::java::net::URL* url) {return nullptr;}
	virtual bool getLockingKeyState(int32_t keyCode);
	virtual int32_t getMaximumCursorColors();
	virtual int32_t getMenuShortcutKeyMask();
	virtual int32_t getMenuShortcutKeyMaskEx();
	static ::java::awt::Container* getNativeContainer(::java::awt::Component* c);
	virtual ::java::awt::PrintJob* getPrintJob(::java::awt::Frame* frame, $String* jobtitle, ::java::util::Properties* props) {return nullptr;}
	virtual ::java::awt::PrintJob* getPrintJob(::java::awt::Frame* frame, $String* jobtitle, ::java::awt::JobAttributes* jobAttributes, ::java::awt::PageAttributes* pageAttributes);
	static $String* getProperty($String* key, $String* defaultValue);
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners();
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners($String* propertyName);
	virtual ::java::awt::Insets* getScreenInsets(::java::awt::GraphicsConfiguration* gc);
	virtual int32_t getScreenResolution() {return 0;}
	virtual ::java::awt::Dimension* getScreenSize() {return nullptr;}
	virtual ::java::awt::datatransfer::Clipboard* getSystemClipboard() {return nullptr;}
	::java::awt::EventQueue* getSystemEventQueue();
	virtual ::java::awt::EventQueue* getSystemEventQueueImpl() {return nullptr;}
	virtual ::java::awt::datatransfer::Clipboard* getSystemSelection();
	static void initAssistiveTechnologies();
	static void initIDs();
	static void initStatic();
	virtual void initializeDesktopProperties();
	virtual bool isAlwaysOnTopSupported();
	virtual bool isDynamicLayoutActive();
	virtual bool isDynamicLayoutSet();
	virtual bool isFrameStateSupported(int32_t state);
	virtual bool isModalExclusionTypeSupported(::java::awt::Dialog$ModalExclusionType* modalExclusionType) {return false;}
	virtual bool isModalityTypeSupported(::java::awt::Dialog$ModalityType* modalityType) {return false;}
	static ::java::lang::Void* lambda$loadAssistiveTechnologies$0(::java::lang::ClassLoader* cl, ::java::util::Set* names, ::java::util::Map* providers);
	static bool lambda$loadAssistiveTechnologies$1(::java::util::Map* providers, $String* n);
	virtual $Object* lazilyLoadDesktopProperty($String* name);
	static void loadAssistiveTechnologies();
	static void loadLibraries();
	virtual void loadSystemColors($ints* systemColors);
	virtual ::java::util::Map* mapInputMethodHighlight(::java::awt::im::InputMethodHighlight* highlight) {return nullptr;}
	static void newAWTError($Throwable* e, $String* s);
	virtual void notifyAWTEventListeners(::java::awt::AWTEvent* theEvent);
	virtual bool prepareImage(::java::awt::Image* image, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) {return false;}
	virtual void removeAWTEventListener(::java::awt::event::AWTEventListener* listener);
	virtual void removePropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl);
	void setDesktopProperty($String* name, Object$* newValue);
	virtual void setDynamicLayout(bool dynamic);
	virtual void setLockingKeyState(int32_t keyCode, bool on);
	static void setPlatformResources(::java::util::ResourceBundle* bundle);
	virtual void sync() {}
	static bool $assertionsDisabled;
	static ::java::awt::Toolkit* toolkit;
	static $String* atNames;
	static ::java::util::ResourceBundle* resources;
	static ::java::util::ResourceBundle* platformResources;
	static bool loaded;
	::java::util::Map* desktopProperties = nullptr;
	::java::beans::PropertyChangeSupport* desktopPropsSupport = nullptr;
	static const int32_t LONG_BITS = 64;
	$ints* calls = nullptr;
	static $volatile(int64_t) enabledOnToolkitMask;
	::java::awt::event::AWTEventListener* eventListener = nullptr;
	::java::util::WeakHashMap* listener2SelectiveListener = nullptr;
};

	} // awt
} // java

#pragma pop_macro("LONG_BITS")

#endif // _java_awt_Toolkit_h_