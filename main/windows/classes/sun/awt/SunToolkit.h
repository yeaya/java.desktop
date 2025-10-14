#ifndef _sun_awt_SunToolkit_h_
#define _sun_awt_SunToolkit_h_
//$ class sun.awt.SunToolkit
//$ extends java.awt.Toolkit
//$ implements sun.awt.ComponentFactory,sun.awt.InputMethodSupport,sun.awt.KeyboardFocusManagerPeerProvider

#include <java/awt/Toolkit.h>
#include <java/lang/Array.h>
#include <sun/awt/ComponentFactory.h>
#include <sun/awt/InputMethodSupport.h>
#include <sun/awt/KeyboardFocusManagerPeerProvider.h>

#pragma push_macro("AWT_LOCK")
#undef AWT_LOCK
#pragma push_macro("AWT_LOCK_COND")
#undef AWT_LOCK_COND
#pragma push_macro("DEACTIVATION_TIMES_MAP_KEY")
#undef DEACTIVATION_TIMES_MAP_KEY
#pragma push_macro("DEFAULT_MODAL_EXCLUSION_TYPE")
#undef DEFAULT_MODAL_EXCLUSION_TYPE
#pragma push_macro("DEFAULT_WAIT_TIME")
#undef DEFAULT_WAIT_TIME
#pragma push_macro("DESKTOPFONTHINTS")
#undef DESKTOPFONTHINTS
#pragma push_macro("GRAB_EVENT_MASK")
#undef GRAB_EVENT_MASK
#pragma push_macro("MAX_BUTTONS_SUPPORTED")
#undef MAX_BUTTONS_SUPPORTED
#pragma push_macro("MAX_ITERS")
#undef MAX_ITERS
#pragma push_macro("MINIMAL_DELAY")
#undef MINIMAL_DELAY
#pragma push_macro("MIN_ITERS")
#undef MIN_ITERS
#pragma push_macro("POST_EVENT_QUEUE_KEY")
#undef POST_EVENT_QUEUE_KEY

namespace java {
	namespace awt {
		class AWTEvent;
		class Canvas;
		class Component;
		class Container;
		class Dialog;
		class Dialog$ModalExclusionType;
		class Dialog$ModalityType;
		class Dimension;
		class EventQueue;
		class Font;
		class FontMetrics;
		class GraphicsConfiguration;
		class Image;
		class RenderingHints;
		class SystemTray;
		class TrayIcon;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ColorModel;
			class DataBufferInt;
			class ImageObserver;
			class ImageProducer;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class FramePeer;
			class SystemTrayPeer;
			class TrayIconPeer;
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class Runnable;
		class ThreadGroup;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class List;
		class Locale;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Condition;
				class ReentrantLock;
			}
		}
	}
}
namespace sun {
	namespace awt {
		class AppContext;
		class LightweightFrame;
		class ModalityListener;
		class PeerEvent;
		class SoftCache;
		class SunToolkit$ModalityListenerList;
	}
}
namespace sun {
	namespace awt {
		namespace im {
			class InputContext;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class ToolkitImage;
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

class $export SunToolkit : public ::java::awt::Toolkit, public ::sun::awt::ComponentFactory, public ::sun::awt::InputMethodSupport, public ::sun::awt::KeyboardFocusManagerPeerProvider {
	$class(SunToolkit, 0, ::java::awt::Toolkit, ::sun::awt::ComponentFactory, ::sun::awt::InputMethodSupport, ::sun::awt::KeyboardFocusManagerPeerProvider)
public:
	SunToolkit();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Toolkit::createImage;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::awt::peer::KeyboardFocusManagerPeer* getKeyboardFocusManagerPeer() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$();
	virtual void addModalityListener(::sun::awt::ModalityListener* listener);
	static void awtLock();
	static void awtLockNotify();
	static void awtLockNotifyAll();
	static void awtLockWait();
	static void awtLockWait(int64_t timeout);
	static bool awtTryLock();
	static void awtUnlock();
	virtual bool canPopupOverlapTaskBar();
	static void checkAndSetPolicy(::java::awt::Container* cont);
	virtual int32_t checkImage(::java::awt::Image* img, int32_t w, int32_t h, ::java::awt::image::ImageObserver* o) override;
	static void checkPermissions($String* filename);
	static void checkPermissions(::java::net::URL* url);
	int32_t checkResolutionVariant(::java::awt::Image* img, int32_t w, int32_t h, ::java::awt::image::ImageObserver* o);
	static void closeSplashScreen();
	static void consumeNextKeyTyped(::java::awt::event::KeyEvent* keyEvent);
	virtual ::java::awt::Image* createImage($String* filename) override;
	virtual ::java::awt::Image* createImage(::java::net::URL* url) override;
	virtual ::java::awt::Image* createImage($bytes* data, int32_t offset, int32_t length) override;
	virtual ::java::awt::Image* createImage(::java::awt::image::ImageProducer* producer) override;
	static ::java::awt::Image* createImageWithResolutionVariant(::java::awt::Image* image, ::java::awt::Image* resolutionVariant);
	virtual ::java::awt::Window* createInputMethodWindow($String* title, ::sun::awt::im::InputContext* context) override;
	virtual ::java::awt::peer::FramePeer* createLightweightFrame(::sun::awt::LightweightFrame* target) {return nullptr;}
	static ::sun::awt::AppContext* createNewAppContext();
	static ::sun::awt::AppContext* createNewAppContext(::java::lang::ThreadGroup* threadGroup);
	virtual ::java::awt::peer::SystemTrayPeer* createSystemTray(::java::awt::SystemTray* target) {return nullptr;}
	virtual ::java::awt::peer::TrayIconPeer* createTrayIcon(::java::awt::TrayIcon* target) {return nullptr;}
	virtual void disableBackgroundErase(::java::awt::Canvas* canvas);
	virtual void disableBackgroundErase(::java::awt::Component* component);
	void disableBackgroundEraseImpl(::java::awt::Component* component);
	static void dumpPeers(::sun::util::logging::PlatformLogger* aLog);
	virtual bool enableInputMethodsForTextComponent() override;
	static void executeOnEDTAndWait(Object$* target, ::java::lang::Runnable* runnable);
	static void executeOnEventHandlerThread(Object$* target, ::java::lang::Runnable* runnable);
	static void executeOnEventHandlerThread(Object$* target, ::java::lang::Runnable* runnable, int64_t when);
	static void executeOnEventHandlerThread(::sun::awt::PeerEvent* peerEvent);
	void fireDesktopFontPropertyChanges();
	static void flushPendingEvents();
	static void flushPendingEvents(::sun::awt::AppContext* appContext);
	static ::sun::awt::AppContext* getAppContext(Object$* target);
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	static ::java::awt::Window* getContainingWindow(::java::awt::Component* comp);
	virtual ::java::util::Locale* getDefaultKeyboardLocale() override;
	virtual $String* getDesktop();
	virtual ::java::awt::RenderingHints* getDesktopAAHints();
	static ::java::awt::RenderingHints* getDesktopAAHintsByName($String* hintname);
	static ::java::awt::RenderingHints* getDesktopFontHints();
	virtual int32_t getFocusAcceleratorKeyMask();
	virtual $StringArray* getFontList() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	static ::java::awt::Component* getHeavyweightComponent(::java::awt::Component* c);
	virtual ::java::awt::Image* getImage($String* filename) override;
	virtual ::java::awt::Image* getImage(::java::net::URL* url) override;
	static ::java::awt::Image* getImageFromHash(::java::awt::Toolkit* tk, ::java::net::URL* url);
	static ::java::awt::Image* getImageFromHash(::java::awt::Toolkit* tk, $String* filename);
	virtual ::java::awt::Image* getImageWithResolutionVariant($String* fileName, $String* resolutionVariantName);
	virtual ::java::awt::Image* getImageWithResolutionVariant(::java::net::URL* url, ::java::net::URL* resolutionVariantURL);
	static ::sun::awt::LightweightFrame* getLightweightFrame(::java::awt::Component* c);
	static ::java::awt::Container* getNativeContainer(::java::awt::Component* c);
	virtual int32_t getNumberOfButtons();
	static int32_t getRVSize(int32_t size);
	static ::sun::awt::image::ToolkitImage* getResolutionVariant(::java::awt::Image* image);
	static ::java::awt::image::DataBufferInt* getScaledIconData(::java::util::List* imageList, int32_t width, int32_t height);
	static ::java::awt::image::BufferedImage* getScaledIconImage(::java::util::List* imageList, int32_t width, int32_t height);
	virtual ::java::awt::Dimension* getScreenSize() override;
	static ::java::util::Locale* getStartupLocale();
	static bool getSunAwtDisableMixing();
	static bool getSunAwtErasebackgroundonresize();
	static bool getSunAwtNoerasebackground();
	virtual ::java::awt::EventQueue* getSystemEventQueueImpl() override;
	static ::java::awt::EventQueue* getSystemEventQueueImplPP();
	static ::java::awt::EventQueue* getSystemEventQueueImplPP(::sun::awt::AppContext* appContext);
	virtual int64_t getWindowDeactivationTime(::java::awt::Window* w);
	virtual void grab(::java::awt::Window* w) {}
	static bool imageCached($String* fileName);
	static bool imageCached(::java::net::URL* url);
	static bool imageExists($String* filename);
	static bool imageExists(::java::net::URL* url);
	static void initEQ(::sun::awt::AppContext* appContext);
	static void initStatic();
	static void insertTargetMapping(Object$* target, ::sun::awt::AppContext* appContext);
	static void invokeLaterOnAppContext(::sun::awt::AppContext* appContext, ::java::lang::Runnable* dispatcher);
	static bool isAWTLockHeldByCurrentThread();
	static bool isContainingTopLevelOpaque(::java::awt::Component* c);
	static bool isContainingTopLevelTranslucent(::java::awt::Component* c);
	virtual bool isDesktopSupported() {return false;}
	static bool isDispatchThreadForAppContext(Object$* target);
	bool isEQEmpty();
	static bool isInstanceOf(Object$* obj, $String* type);
	static bool isInstanceOf($Class* cls, $String* type);
	static bool isLightweightOrUnknown(::java::awt::Component* comp);
	static bool isModalExcluded(::java::awt::Window* window);
	static bool isModalExcludedSupported();
	virtual bool isModalExcludedSupportedImpl();
	virtual bool isModalExclusionTypeSupported(::java::awt::Dialog$ModalExclusionType* exclusionType) override;
	virtual bool isModalityTypeSupported(::java::awt::Dialog$ModalityType* modalityType) override;
	virtual bool isNativeGTKAvailable();
	virtual bool isPrintableCharacterModifiersMask(int32_t mods);
	virtual bool isSwingBackbufferTranslucencySupported();
	static bool isSystemGenerated(::java::awt::AWTEvent* e);
	virtual bool isTaskbarSupported() {return false;}
	static bool isTouchKeyboardAutoShowEnabled();
	virtual bool isTranslucencyCapable(::java::awt::GraphicsConfiguration* gc);
	virtual bool isTraySupported() {return false;}
	virtual bool isWindowOpacitySupported();
	virtual bool isWindowShapingSupported();
	virtual bool isWindowTranslucencySupported();
	bool isXEmbedServerRequested();
	static void lambda$realSync$0();
	virtual bool needUpdateWindow();
	static bool needsXEmbed();
	virtual bool needsXEmbedImpl();
	void notifyModalityChange(int32_t id, ::java::awt::Dialog* source);
	virtual void notifyModalityPopped(::java::awt::Dialog* dialog);
	virtual void notifyModalityPushed(::java::awt::Dialog* dialog);
	static void postEvent(::sun::awt::AppContext* appContext, ::java::awt::AWTEvent* event);
	static void postPriorityEvent(::java::awt::AWTEvent* e);
	virtual bool prepareImage(::java::awt::Image* img, int32_t w, int32_t h, ::java::awt::image::ImageObserver* o) override;
	bool prepareResolutionVariant(::java::awt::Image* img, int32_t w, int32_t h, ::java::awt::image::ImageObserver* o);
	virtual void realSync();
	virtual void realSync(int64_t timeout);
	virtual void removeModalityListener(::sun::awt::ModalityListener* listener);
	static void setAAFontSettingsCondition(bool extraCondition);
	static bool setAppContext(Object$* target, ::sun::awt::AppContext* context);
	static void setLWRequestStatus(::java::awt::Window* changed, bool status);
	static void setModalExcluded(::java::awt::Window* window);
	static void setSystemGenerated(::java::awt::AWTEvent* e);
	virtual void setWindowDeactivationTime(::java::awt::Window* w, int64_t time);
	virtual void showOrHideTouchKeyboard(::java::awt::Component* comp, ::java::awt::AWTEvent* e);
	virtual bool syncNativeQueue(int64_t timeout) {return false;}
	static void targetCreatedPeer(Object$* target, Object$* peer);
	static void targetDisposedPeer(Object$* target, Object$* peer);
	static ::sun::awt::AppContext* targetToAppContext(Object$* target);
	static $Object* targetToPeer(Object$* target);
	virtual int64_t timeout(int64_t end);
	virtual $String* toString() override;
	virtual void ungrab(::java::awt::Window* w) {}
	virtual void updateScreenMenuBarUI();
	virtual bool useBufferPerWindow();
	static bool useSystemAAFontSettings();
	bool waitForIdle(int64_t end);
	static void wakeupEventQueue(::java::awt::EventQueue* q, bool isShutdown);
	static const int32_t GRAB_EVENT_MASK = 0x80000000;
	static $String* POST_EVENT_QUEUE_KEY;
	static int32_t numberOfButtons;
	static const int32_t MAX_BUTTONS_SUPPORTED = 20;
	static ::java::util::concurrent::locks::ReentrantLock* AWT_LOCK;
	static ::java::util::concurrent::locks::Condition* AWT_LOCK_COND;
	static ::java::util::Map* appContextMap;
	static ::sun::awt::SoftCache* fileImgCache;
	static ::sun::awt::SoftCache* urlImgCache;
	static ::java::util::Locale* startupLocale;
	static ::java::awt::Dialog$ModalExclusionType* DEFAULT_MODAL_EXCLUSION_TYPE;
	::sun::awt::SunToolkit$ModalityListenerList* modalityListeners = nullptr;
	static const int32_t DEFAULT_WAIT_TIME = 10000;
	static const int32_t MAX_ITERS = 100;
	static const int32_t MIN_ITERS = 1;
	static const int32_t MINIMAL_DELAY = 5;
	$Object* waitLock = nullptr;
	static bool touchKeyboardAutoShowIsEnabled;
	static bool checkedSystemAAFontSettings;
	static bool useSystemAAFontSettings$;
	static bool lastExtraCondition;
	static ::java::awt::RenderingHints* desktopFontHints;
	static $String* DESKTOPFONTHINTS;
	static ::java::lang::Boolean* sunAwtDisableMixing;
	static $Object* DEACTIVATION_TIMES_MAP_KEY;
};

	} // awt
} // sun

#pragma pop_macro("AWT_LOCK")
#pragma pop_macro("AWT_LOCK_COND")
#pragma pop_macro("DEACTIVATION_TIMES_MAP_KEY")
#pragma pop_macro("DEFAULT_MODAL_EXCLUSION_TYPE")
#pragma pop_macro("DEFAULT_WAIT_TIME")
#pragma pop_macro("DESKTOPFONTHINTS")
#pragma pop_macro("GRAB_EVENT_MASK")
#pragma pop_macro("MAX_BUTTONS_SUPPORTED")
#pragma pop_macro("MAX_ITERS")
#pragma pop_macro("MINIMAL_DELAY")
#pragma pop_macro("MIN_ITERS")
#pragma pop_macro("POST_EVENT_QUEUE_KEY")

#endif // _sun_awt_SunToolkit_h_