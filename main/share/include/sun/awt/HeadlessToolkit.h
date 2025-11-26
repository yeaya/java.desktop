#ifndef _sun_awt_HeadlessToolkit_h_
#define _sun_awt_HeadlessToolkit_h_
//$ class sun.awt.HeadlessToolkit
//$ extends java.awt.Toolkit
//$ implements sun.awt.ComponentFactory,sun.awt.KeyboardFocusManagerPeerProvider

#include <java/awt/Toolkit.h>
#include <java/lang/Array.h>
#include <sun/awt/ComponentFactory.h>
#include <sun/awt/KeyboardFocusManagerPeerProvider.h>

namespace java {
	namespace awt {
		class Component;
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
		class SystemTray;
		class TrayIcon;
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
	namespace awt {
		namespace peer {
			class FontPeer;
			class KeyboardFocusManagerPeer;
			class SystemTrayPeer;
			class TrayIconPeer;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
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
	}
}
namespace sun {
	namespace awt {
		class GlobalCursorManager;
	}
}

namespace sun {
	namespace awt {

class $import HeadlessToolkit : public ::java::awt::Toolkit, public ::sun::awt::ComponentFactory, public ::sun::awt::KeyboardFocusManagerPeerProvider {
	$class(HeadlessToolkit, 0, ::java::awt::Toolkit, ::sun::awt::ComponentFactory, ::sun::awt::KeyboardFocusManagerPeerProvider)
public:
	HeadlessToolkit();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Toolkit* tk);
	virtual void addAWTEventListener(::java::awt::event::AWTEventListener* listener, int64_t eventMask) override;
	virtual void addPropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl) override;
	virtual bool areExtraMouseButtonsEnabled() override;
	virtual void beep() override;
	virtual int32_t checkImage(::java::awt::Image* img, int32_t w, int32_t h, ::java::awt::image::ImageObserver* o) override;
	virtual ::java::awt::Cursor* createCustomCursor(::java::awt::Image* cursor, ::java::awt::Point* hotSpot, $String* name) override;
	virtual ::java::awt::dnd::DragGestureRecognizer* createDragGestureRecognizer($Class* abstractRecognizerClass, ::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t srcActions, ::java::awt::dnd::DragGestureListener* dgl) override;
	virtual ::java::awt::Image* createImage($String* filename) override;
	virtual ::java::awt::Image* createImage(::java::net::URL* url) override;
	virtual ::java::awt::Image* createImage($bytes* data, int32_t offset, int32_t length) override;
	virtual ::java::awt::Image* createImage(::java::awt::image::ImageProducer* producer) override;
	virtual ::java::awt::Image* createImage($bytes* imagedata) override;
	::java::awt::peer::SystemTrayPeer* createSystemTray(::java::awt::SystemTray* target);
	::java::awt::peer::TrayIconPeer* createTrayIcon(::java::awt::TrayIcon* target);
	virtual $Array<::java::awt::event::AWTEventListener>* getAWTEventListeners() override;
	virtual $Array<::java::awt::event::AWTEventListener>* getAWTEventListeners(int64_t eventMask) override;
	virtual ::java::awt::Dimension* getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight) override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual $StringArray* getFontList() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::peer::FontPeer* getFontPeer($String* name, int32_t style) override;
	::sun::awt::GlobalCursorManager* getGlobalCursorManager();
	virtual ::java::awt::Image* getImage($String* filename) override;
	virtual ::java::awt::Image* getImage(::java::net::URL* url) override;
	virtual ::java::awt::peer::KeyboardFocusManagerPeer* getKeyboardFocusManagerPeer() override;
	virtual bool getLockingKeyState(int32_t keyCode) override;
	virtual int32_t getMaximumCursorColors() override;
	virtual int32_t getMenuShortcutKeyMask() override;
	virtual int32_t getMenuShortcutKeyMaskEx() override;
	virtual ::java::awt::PrintJob* getPrintJob(::java::awt::Frame* frame, $String* jobtitle, ::java::awt::JobAttributes* jobAttributes, ::java::awt::PageAttributes* pageAttributes) override;
	virtual ::java::awt::PrintJob* getPrintJob(::java::awt::Frame* frame, $String* doctitle, ::java::util::Properties* props) override;
	virtual ::java::awt::Insets* getScreenInsets(::java::awt::GraphicsConfiguration* gc) override;
	virtual int32_t getScreenResolution() override;
	virtual ::java::awt::Dimension* getScreenSize() override;
	virtual ::java::awt::datatransfer::Clipboard* getSystemClipboard() override;
	virtual ::java::awt::EventQueue* getSystemEventQueueImpl() override;
	::java::awt::Toolkit* getUnderlyingToolkit();
	virtual bool isAlwaysOnTopSupported() override;
	bool isDesktopSupported();
	virtual bool isDynamicLayoutActive() override;
	virtual bool isDynamicLayoutSet() override;
	virtual bool isModalExclusionTypeSupported(::java::awt::Dialog$ModalExclusionType* exclusionType) override;
	virtual bool isModalityTypeSupported(::java::awt::Dialog$ModalityType* modalityType) override;
	bool isTraySupported();
	virtual void loadSystemColors($ints* systemColors) override;
	virtual ::java::util::Map* mapInputMethodHighlight(::java::awt::im::InputMethodHighlight* highlight) override;
	virtual bool prepareImage(::java::awt::Image* img, int32_t w, int32_t h, ::java::awt::image::ImageObserver* o) override;
	virtual void removeAWTEventListener(::java::awt::event::AWTEventListener* listener) override;
	virtual void removePropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl) override;
	virtual void setDynamicLayout(bool dynamic) override;
	virtual void setLockingKeyState(int32_t keyCode, bool on) override;
	virtual void sync() override;
	virtual $String* toString() override;
	static ::java::awt::peer::KeyboardFocusManagerPeer* kfmPeer;
	::java::awt::Toolkit* tk = nullptr;
	::sun::awt::ComponentFactory* componentFactory = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_HeadlessToolkit_h_