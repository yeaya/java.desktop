#ifndef _java_awt_Component_h_
#define _java_awt_Component_h_
//$ class java.awt.Component
//$ extends java.awt.image.ImageObserver
//$ implements java.awt.MenuContainer,java.io.Serializable

#include <java/awt/MenuContainer.h>
#include <java/awt/image/ImageObserver.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("BOTTOM_ALIGNMENT")
#undef BOTTOM_ALIGNMENT
#pragma push_macro("CENTER_ALIGNMENT")
#undef CENTER_ALIGNMENT
#pragma push_macro("FOCUS_TRAVERSABLE_DEFAULT")
#undef FOCUS_TRAVERSABLE_DEFAULT
#pragma push_macro("FOCUS_TRAVERSABLE_SET")
#undef FOCUS_TRAVERSABLE_SET
#pragma push_macro("FOCUS_TRAVERSABLE_UNKNOWN")
#undef FOCUS_TRAVERSABLE_UNKNOWN
#pragma push_macro("LEFT_ALIGNMENT")
#undef LEFT_ALIGNMENT
#pragma push_macro("LOCK")
#undef LOCK
#pragma push_macro("RIGHT_ALIGNMENT")
#undef RIGHT_ALIGNMENT
#pragma push_macro("TOP_ALIGNMENT")
#undef TOP_ALIGNMENT

namespace java {
	namespace awt {
		class AWTEvent;
		class BufferCapabilities;
		class Color;
		class Component$BaselineResizeBehavior;
		class ComponentOrientation;
		class Container;
		class Cursor;
		class Dimension;
		class Event;
		class Font;
		class FontMetrics;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
		class ImageCapabilities;
		class Insets;
		class MenuComponent;
		class Point;
		class PointerInfo;
		class PopupMenu;
		class Rectangle;
		class Shape;
		class Toolkit;
		class Window;
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
			class ComponentEvent;
			class ComponentListener;
			class FocusEvent;
			class FocusEvent$Cause;
			class FocusListener;
			class HierarchyBoundsListener;
			class HierarchyEvent;
			class HierarchyListener;
			class InputMethodEvent;
			class InputMethodListener;
			class KeyEvent;
			class KeyListener;
			class MouseEvent;
			class MouseListener;
			class MouseMotionListener;
			class MouseWheelEvent;
			class MouseWheelListener;
		}
	}
}
namespace java {
	namespace awt {
		namespace im {
			class InputContext;
			class InputMethodRequests;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferStrategy;
			class ColorModel;
			class ImageProducer;
			class VolatileImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ComponentPeer;
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
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class PrintStream;
		class PrintWriter;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class EventListener;
		class Locale;
		class Map;
		class Set;
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
		class AccessibleStateSet;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
		class ComponentFactory;
		class EventQueueItem;
		class RequestFocusController;
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

class $import Component : public ::java::awt::image::ImageObserver, public ::java::awt::MenuContainer, public ::java::io::Serializable {
	$class(Component, 0, ::java::awt::image::ImageObserver, ::java::awt::MenuContainer, ::java::io::Serializable)
public:
	Component();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool action(::java::awt::Event* evt, Object$* what);
	virtual void add(::java::awt::PopupMenu* popup);
	virtual void addComponentListener(::java::awt::event::ComponentListener* l);
	virtual void addFocusListener(::java::awt::event::FocusListener* l);
	virtual void addHierarchyBoundsListener(::java::awt::event::HierarchyBoundsListener* l);
	virtual void addHierarchyListener(::java::awt::event::HierarchyListener* l);
	virtual void addInputMethodListener(::java::awt::event::InputMethodListener* l);
	virtual void addKeyListener(::java::awt::event::KeyListener* l);
	virtual void addMouseListener(::java::awt::event::MouseListener* l);
	virtual void addMouseMotionListener(::java::awt::event::MouseMotionListener* l);
	virtual void addMouseWheelListener(::java::awt::event::MouseWheelListener* l);
	virtual void addNotify();
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void addPropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	virtual void adjustListeningChildrenOnParent(int64_t mask, int32_t num);
	virtual void applyComponentOrientation(::java::awt::ComponentOrientation* orientation);
	virtual void applyCompoundShape(::sun::java2d::pipe::Region* shape);
	virtual void applyCurrentShape();
	void applyCurrentShapeBelowMe();
	bool areBoundsValid();
	virtual bool areFocusTraversalKeysSet(int32_t id);
	virtual bool areInputMethodsEnabled();
	virtual void autoProcessMouseWheel(::java::awt::event::MouseWheelEvent* e);
	virtual ::java::awt::Rectangle* bounds();
	::sun::java2d::pipe::Region* calculateCurrentShape();
	bool canBeFocusOwner();
	bool canBeFocusOwnerRecursively();
	bool checkCoalescing();
	virtual void checkGD($String* stringID);
	virtual int32_t checkImage(::java::awt::Image* image, ::java::awt::image::ImageObserver* observer);
	virtual int32_t checkImage(::java::awt::Image* image, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer);
	void checkTreeLock();
	virtual void clearCurrentFocusCycleRootOnHide();
	virtual void clearMostRecentFocusOwnerOnHide();
	virtual ::java::awt::AWTEvent* coalesceEvents(::java::awt::AWTEvent* existingEvent, ::java::awt::AWTEvent* newEvent);
	virtual $String* constructComponentName();
	virtual bool contains(int32_t x, int32_t y);
	virtual bool contains(::java::awt::Point* p);
	virtual bool containsFocus();
	virtual int32_t countHierarchyMembers();
	virtual void createBufferStrategy(int32_t numBuffers);
	virtual void createBufferStrategy(int32_t numBuffers, ::java::awt::BufferCapabilities* caps);
	virtual int32_t createHierarchyEvents(int32_t id, ::java::awt::Component* changed, ::java::awt::Container* changedParent, int64_t changeFlags, bool enabledOnToolkit);
	virtual ::java::awt::Image* createImage(::java::awt::image::ImageProducer* producer);
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height);
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height);
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height, ::java::awt::ImageCapabilities* caps);
	virtual void deliverEvent(::java::awt::Event* e);
	virtual void disable();
	void disableEvents(int64_t eventsToDisable);
	void dispatchEvent(::java::awt::AWTEvent* e);
	virtual void dispatchEventImpl(::java::awt::AWTEvent* e);
	virtual bool dispatchMouseWheelToAncestor(::java::awt::event::MouseWheelEvent* e);
	virtual void doLayout();
	void doSwingSerialization();
	virtual void enable();
	virtual void enable(bool b);
	void enableEvents(int64_t eventsToEnable);
	virtual void enableInputMethods(bool enable);
	virtual bool eventEnabled(::java::awt::AWTEvent* e);
	virtual bool eventTypeEnabled(int32_t type);
	virtual ::java::awt::Component* findUnderMouseInWindow(::java::awt::PointerInfo* pi);
	virtual void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue);
	virtual void firePropertyChange($String* propertyName, bool oldValue, bool newValue);
	virtual void firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue);
	virtual void firePropertyChange($String* propertyName, int8_t oldValue, int8_t newValue);
	virtual void firePropertyChange($String* propertyName, char16_t oldValue, char16_t newValue);
	virtual void firePropertyChange($String* propertyName, int16_t oldValue, int16_t newValue);
	virtual void firePropertyChange($String* propertyName, int64_t oldValue, int64_t newValue);
	virtual void firePropertyChange($String* propertyName, float oldValue, float newValue);
	virtual void firePropertyChange($String* propertyName, double oldValue, double newValue);
	::java::security::AccessControlContext* getAccessControlContext();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext();
	virtual int32_t getAccessibleIndexInParent();
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet();
	virtual float getAlignmentX();
	virtual float getAlignmentY();
	::sun::java2d::pipe::Region* getAppliedShape();
	virtual ::java::awt::Image* getBackBuffer();
	virtual ::java::awt::Color* getBackground();
	virtual int32_t getBaseline(int32_t width, int32_t height);
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior();
	virtual ::java::awt::Rectangle* getBounds();
	virtual ::java::awt::Rectangle* getBounds(::java::awt::Rectangle* rv);
	virtual int32_t getBoundsOp();
	virtual ::java::awt::image::BufferStrategy* getBufferStrategy();
	virtual ::java::awt::image::ColorModel* getColorModel();
	virtual ::java::awt::Component* getComponentAt(int32_t x, int32_t y);
	virtual ::java::awt::Component* getComponentAt(::java::awt::Point* p);
	::sun::awt::ComponentFactory* getComponentFactory();
	virtual $Array<::java::awt::event::ComponentListener>* getComponentListeners();
	virtual ::java::awt::ComponentOrientation* getComponentOrientation();
	virtual ::java::awt::Container* getContainer();
	virtual ::java::awt::Window* getContainingWindow();
	virtual ::java::awt::Cursor* getCursor();
	::java::awt::Cursor* getCursor_NoClientCode();
	virtual ::java::awt::dnd::DropTarget* getDropTarget();
	virtual ::java::awt::Container* getFocusCycleRootAncestor();
	virtual $Array<::java::awt::event::FocusListener>* getFocusListeners();
	virtual ::java::util::Set* getFocusTraversalKeys(int32_t id);
	virtual bool getFocusTraversalKeysEnabled();
	::java::util::Set* getFocusTraversalKeys_NoIDCheck(int32_t id);
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font);
	::java::awt::Font* getFont_NoClientCode();
	virtual ::java::awt::Color* getForeground();
	virtual ::java::awt::Graphics* getGraphics();
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration();
	::java::awt::GraphicsConfiguration* getGraphicsConfiguration_NoClientCode();
	::java::awt::Graphics* getGraphics_NoClientCode();
	::java::awt::peer::ComponentPeer* getHWPeerAboveMe();
	virtual int32_t getHeight();
	virtual $Array<::java::awt::event::HierarchyBoundsListener>* getHierarchyBoundsListeners();
	virtual $Array<::java::awt::event::HierarchyListener>* getHierarchyListeners();
	virtual bool getIgnoreRepaint();
	virtual ::java::awt::im::InputContext* getInputContext();
	virtual $Array<::java::awt::event::InputMethodListener>* getInputMethodListeners();
	virtual ::java::awt::im::InputMethodRequests* getInputMethodRequests();
	::java::awt::Insets* getInsets_NoClientCode();
	virtual $Array<::java::awt::event::KeyListener>* getKeyListeners();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual ::java::util::Locale* getLocale();
	virtual ::java::awt::Point* getLocation();
	virtual ::java::awt::Point* getLocation(::java::awt::Point* rv);
	virtual ::java::awt::Point* getLocationOnScreen();
	::java::awt::Point* getLocationOnScreen_NoTreeLock();
	virtual ::java::awt::Point* getLocationOnWindow();
	virtual ::java::awt::Dimension* getMaximumSize();
	virtual ::java::awt::Dimension* getMinimumSize();
	virtual $Array<::java::awt::event::MouseListener>* getMouseListeners();
	virtual $Array<::java::awt::event::MouseMotionListener>* getMouseMotionListeners();
	virtual ::java::awt::Point* getMousePosition();
	virtual $Array<::java::awt::event::MouseWheelListener>* getMouseWheelListeners();
	virtual $String* getName();
	::java::awt::Container* getNativeContainer();
	::java::awt::Component* getNextFocusCandidate();
	::sun::java2d::pipe::Region* getNormalShape();
	virtual $Object* getObjectLock();
	virtual ::sun::java2d::pipe::Region* getOpaqueShape();
	virtual ::java::awt::Container* getParent();
	::java::awt::Container* getParent_NoClientCode();
	virtual ::java::awt::Dimension* getPreferredSize();
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners();
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners($String* propertyName);
	::java::awt::Rectangle* getRecursivelyVisibleBounds();
	int32_t getSiblingIndexAbove();
	int32_t getSiblingIndexBelow();
	virtual ::java::awt::Dimension* getSize();
	virtual ::java::awt::Dimension* getSize(::java::awt::Dimension* rv);
	virtual ::java::awt::Toolkit* getToolkit();
	::java::awt::Toolkit* getToolkitImpl();
	virtual ::java::awt::Container* getTraversalRoot();
	$Object* getTreeLock();
	virtual int32_t getWidth();
	virtual int32_t getX();
	virtual int32_t getY();
	virtual bool gotFocus(::java::awt::Event* evt, Object$* what);
	virtual bool handleEvent(::java::awt::Event* evt);
	virtual bool hasFocus();
	virtual void hide();
	virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) override;
	static void initIDs();
	virtual void initializeFocusTraversalKeys();
	virtual bool inside(int32_t x, int32_t y);
	virtual void invalidate();
	void invalidateIfValid();
	virtual void invalidateParent();
	virtual bool isAutoFocusTransferOnDisposal();
	virtual bool isBackgroundSet();
	static bool isCoalesceEventsOverriden($Class* clazz);
	bool isCoalescingEnabled();
	virtual bool isCursorSet();
	virtual bool isDisplayable();
	virtual bool isDoubleBuffered();
	virtual bool isEnabled();
	bool isEnabledImpl();
	virtual bool isFocusCycleRoot(::java::awt::Container* container);
	virtual bool isFocusOwner();
	virtual bool isFocusTraversable();
	bool isFocusTraversableOverridden();
	virtual bool isFocusable();
	virtual bool isFontSet();
	virtual bool isForegroundSet();
	static bool isInstanceOf(Object$* obj, $String* className);
	virtual bool isLightweight();
	virtual bool isMaximumSizeSet();
	virtual bool isMinimumSizeSet();
	bool isMixingNeeded();
	bool isNonOpaqueForMixing();
	virtual bool isOpaque();
	virtual bool isPreferredSizeSet();
	virtual bool isRecursivelyVisible();
	bool isRequestFocusAccepted(bool temporary, bool focusedWindowChangeAllowed, ::java::awt::event::FocusEvent$Cause* cause);
	virtual bool isSameOrAncestorOf(::java::awt::Component* comp, bool allowChildren);
	virtual bool isShowing();
	virtual bool isValid();
	virtual bool isVisible();
	bool isVisible_NoClientCode();
	virtual bool keyDown(::java::awt::Event* evt, int32_t key);
	virtual bool keyUp(::java::awt::Event* evt, int32_t key);
	virtual void layout();
	virtual void lightweightPaint(::java::awt::Graphics* g);
	virtual void lightweightPrint(::java::awt::Graphics* g);
	virtual void list();
	virtual void list(::java::io::PrintStream* out);
	virtual void list(::java::io::PrintStream* out, int32_t indent);
	virtual void list(::java::io::PrintWriter* out);
	virtual void list(::java::io::PrintWriter* out, int32_t indent);
	virtual ::java::awt::Component* locate(int32_t x, int32_t y);
	virtual ::java::awt::Point* location();
	::java::awt::Point* location_NoClientCode();
	virtual bool lostFocus(::java::awt::Event* evt, Object$* what);
	virtual ::java::awt::Dimension* minimumSize();
	virtual void mixOnHiding(bool isLightweight);
	virtual void mixOnReshaping();
	virtual void mixOnShowing();
	virtual void mixOnValidating();
	virtual void mixOnZOrderChanging(int32_t oldZorder, int32_t newZorder);
	virtual bool mouseDown(::java::awt::Event* evt, int32_t x, int32_t y);
	virtual bool mouseDrag(::java::awt::Event* evt, int32_t x, int32_t y);
	virtual bool mouseEnter(::java::awt::Event* evt, int32_t x, int32_t y);
	virtual bool mouseExit(::java::awt::Event* evt, int32_t x, int32_t y);
	virtual bool mouseMove(::java::awt::Event* evt, int32_t x, int32_t y);
	virtual bool mouseUp(::java::awt::Event* evt, int32_t x, int32_t y);
	virtual void move(int32_t x, int32_t y);
	virtual void nextFocus();
	void notifyNewBounds(bool resized, bool moved);
	virtual int32_t numListening(int64_t mask);
	virtual void paint(::java::awt::Graphics* g);
	virtual void paintAll(::java::awt::Graphics* g);
	virtual void paintHeavyweightComponents(::java::awt::Graphics* g);
	virtual $String* paramString();
	virtual ::java::awt::Point* pointRelativeToComponent(::java::awt::Point* absolute);
	virtual bool postEvent(::java::awt::Event* e) override;
	virtual bool postsOldMouseEvents();
	virtual ::java::awt::Dimension* preferredSize();
	virtual bool prepareImage(::java::awt::Image* image, ::java::awt::image::ImageObserver* observer);
	virtual bool prepareImage(::java::awt::Image* image, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer);
	virtual void print(::java::awt::Graphics* g);
	virtual void printAll(::java::awt::Graphics* g);
	virtual void printHeavyweightComponents(::java::awt::Graphics* g);
	virtual void processComponentEvent(::java::awt::event::ComponentEvent* e);
	virtual void processEvent(::java::awt::AWTEvent* e);
	virtual void processFocusEvent(::java::awt::event::FocusEvent* e);
	virtual void processHierarchyBoundsEvent(::java::awt::event::HierarchyEvent* e);
	virtual void processHierarchyEvent(::java::awt::event::HierarchyEvent* e);
	virtual void processInputMethodEvent(::java::awt::event::InputMethodEvent* e);
	virtual void processKeyEvent(::java::awt::event::KeyEvent* e);
	virtual void processMouseEvent(::java::awt::event::MouseEvent* e);
	virtual void processMouseMotionEvent(::java::awt::event::MouseEvent* e);
	virtual void processMouseWheelEvent(::java::awt::event::MouseWheelEvent* e);
	void readObject(::java::io::ObjectInputStream* s);
	void relocateComponent();
	virtual void remove(::java::awt::MenuComponent* popup) override;
	virtual void removeComponentListener(::java::awt::event::ComponentListener* l);
	virtual void removeFocusListener(::java::awt::event::FocusListener* l);
	virtual void removeHierarchyBoundsListener(::java::awt::event::HierarchyBoundsListener* l);
	virtual void removeHierarchyListener(::java::awt::event::HierarchyListener* l);
	virtual void removeInputMethodListener(::java::awt::event::InputMethodListener* l);
	virtual void removeKeyListener(::java::awt::event::KeyListener* l);
	virtual void removeMouseListener(::java::awt::event::MouseListener* l);
	virtual void removeMouseMotionListener(::java::awt::event::MouseMotionListener* l);
	virtual void removeMouseWheelListener(::java::awt::event::MouseWheelListener* l);
	virtual void removeNotify();
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void removePropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	virtual void repaint();
	virtual void repaint(int64_t tm);
	virtual void repaint(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height);
	void repaintParentIfNeeded(int32_t oldX, int32_t oldY, int32_t oldWidth, int32_t oldHeight);
	virtual void requestFocus();
	virtual void requestFocus(::java::awt::event::FocusEvent$Cause* cause);
	virtual bool requestFocus(bool temporary);
	virtual bool requestFocus(bool temporary, ::java::awt::event::FocusEvent$Cause* cause);
	bool requestFocusHelper(bool temporary, bool focusedWindowChangeAllowed);
	bool requestFocusHelper(bool temporary, bool focusedWindowChangeAllowed, ::java::awt::event::FocusEvent$Cause* cause);
	virtual bool requestFocusInWindow();
	virtual bool requestFocusInWindow(::java::awt::event::FocusEvent$Cause* cause);
	virtual bool requestFocusInWindow(bool temporary);
	virtual bool requestFocusInWindow(bool temporary, ::java::awt::event::FocusEvent$Cause* cause);
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height);
	void reshapeNativePeer(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op);
	virtual void resize(int32_t width, int32_t height);
	virtual void resize(::java::awt::Dimension* d);
	virtual void revalidate();
	void revalidateSynchronously();
	virtual void setAutoFocusTransferOnDisposal(bool value);
	virtual void setBackground(::java::awt::Color* c);
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void setBounds(::java::awt::Rectangle* r);
	virtual void setBoundsOp(int32_t op);
	virtual void setComponentOrientation(::java::awt::ComponentOrientation* o);
	virtual void setCursor(::java::awt::Cursor* cursor);
	virtual void setDropTarget(::java::awt::dnd::DropTarget* dt);
	virtual void setEnabled(bool b);
	virtual void setFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes);
	virtual void setFocusTraversalKeysEnabled(bool focusTraversalKeysEnabled);
	void setFocusTraversalKeys_NoIDCheck(int32_t id, ::java::util::Set* keystrokes);
	virtual void setFocusable(bool focusable);
	virtual void setFont(::java::awt::Font* f);
	virtual void setForeground(::java::awt::Color* c);
	virtual void setGraphicsConfiguration(::java::awt::GraphicsConfiguration* gc);
	virtual void setIgnoreRepaint(bool ignoreRepaint);
	virtual void setLocale(::java::util::Locale* l);
	virtual void setLocation(int32_t x, int32_t y);
	virtual void setLocation(::java::awt::Point* p);
	virtual void setMaximumSize(::java::awt::Dimension* maximumSize);
	virtual void setMinimumSize(::java::awt::Dimension* minimumSize);
	virtual void setMixingCutoutShape(::java::awt::Shape* shape);
	virtual void setName($String* name);
	virtual void setPreferredSize(::java::awt::Dimension* preferredSize);
	static void setRequestFocusController(::sun::awt::RequestFocusController* requestController);
	virtual void setSize(int32_t width, int32_t height);
	virtual void setSize(::java::awt::Dimension* d);
	virtual void setVisible(bool b);
	virtual void show();
	virtual void show(bool b);
	virtual ::java::awt::Dimension* size();
	void subtractAndApplyShape(::sun::java2d::pipe::Region* s);
	void subtractAndApplyShapeBelowMe();
	virtual $String* toString() override;
	virtual void transferFocus();
	virtual bool transferFocus(bool clearOnFailure);
	virtual void transferFocusBackward();
	virtual bool transferFocusBackward(bool clearOnFailure);
	virtual void transferFocusUpCycle();
	virtual void update(::java::awt::Graphics* g);
	virtual bool updateChildGraphicsData(::java::awt::GraphicsConfiguration* gc);
	void updateCursorImmediately();
	bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc);
	bool updateSelfGraphicsData(::java::awt::GraphicsConfiguration* gc);
	virtual void updateZOrder();
	virtual void validate();
	void writeObject(::java::io::ObjectOutputStream* s);
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::util::logging::PlatformLogger* eventLog;
	static ::sun::util::logging::PlatformLogger* focusLog;
	static ::sun::util::logging::PlatformLogger* mixingLog;
	$volatile(::java::awt::peer::ComponentPeer*) peer = nullptr;
	::java::awt::Container* parent = nullptr;
	::sun::awt::AppContext* appContext = nullptr;
	int32_t x = 0;
	int32_t y = 0;
	int32_t width = 0;
	int32_t height = 0;
	::java::awt::Color* foreground = nullptr;
	::java::awt::Color* background = nullptr;
	$volatile(::java::awt::Font*) font = nullptr;
	::java::awt::Font* peerFont = nullptr;
	::java::awt::Cursor* cursor = nullptr;
	::java::util::Locale* locale = nullptr;
	$volatile(::java::awt::GraphicsConfiguration*) graphicsConfig = nullptr;
	::java::awt::image::BufferStrategy* bufferStrategy = nullptr;
	bool ignoreRepaint = false;
	bool visible = false;
	bool enabled = false;
	$volatile(bool) valid = false;
	::java::awt::dnd::DropTarget* dropTarget = nullptr;
	::java::util::Vector* popups = nullptr;
	$String* name = nullptr;
	bool nameExplicitlySet = false;
	bool focusable = false;
	static const int32_t FOCUS_TRAVERSABLE_UNKNOWN = 0;
	static const int32_t FOCUS_TRAVERSABLE_DEFAULT = 1;
	static const int32_t FOCUS_TRAVERSABLE_SET = 2;
	int32_t isFocusTraversableOverridden$ = 0;
	$Array<::java::util::Set>* focusTraversalKeys = nullptr;
	static $StringArray* focusTraversalKeyPropertyNames;
	bool focusTraversalKeysEnabled = false;
	static $Object* LOCK;
	$volatile(::java::security::AccessControlContext*) acc = nullptr;
	::java::awt::Dimension* minSize = nullptr;
	bool minSizeSet = false;
	::java::awt::Dimension* prefSize = nullptr;
	bool prefSizeSet = false;
	::java::awt::Dimension* maxSize = nullptr;
	bool maxSizeSet = false;
	::java::awt::ComponentOrientation* componentOrientation = nullptr;
	bool newEventsOnly = false;
	::java::awt::event::ComponentListener* componentListener = nullptr;
	::java::awt::event::FocusListener* focusListener = nullptr;
	::java::awt::event::HierarchyListener* hierarchyListener = nullptr;
	::java::awt::event::HierarchyBoundsListener* hierarchyBoundsListener = nullptr;
	::java::awt::event::KeyListener* keyListener = nullptr;
	::java::awt::event::MouseListener* mouseListener = nullptr;
	::java::awt::event::MouseMotionListener* mouseMotionListener = nullptr;
	::java::awt::event::MouseWheelListener* mouseWheelListener = nullptr;
	::java::awt::event::InputMethodListener* inputMethodListener = nullptr;
	static $String* actionListenerK;
	static $String* adjustmentListenerK;
	static $String* componentListenerK;
	static $String* containerListenerK;
	static $String* focusListenerK;
	static $String* itemListenerK;
	static $String* keyListenerK;
	static $String* mouseListenerK;
	static $String* mouseMotionListenerK;
	static $String* mouseWheelListenerK;
	static $String* textListenerK;
	static $String* ownedWindowK;
	static $String* windowListenerK;
	static $String* inputMethodListenerK;
	static $String* hierarchyListenerK;
	static $String* hierarchyBoundsListenerK;
	static $String* windowStateListenerK;
	static $String* windowFocusListenerK;
	int64_t eventMask = 0;
	static bool isInc;
	static int32_t incRate;
	static float TOP_ALIGNMENT;
	static float CENTER_ALIGNMENT;
	static float BOTTOM_ALIGNMENT;
	static float LEFT_ALIGNMENT;
	static float RIGHT_ALIGNMENT;
	static const int64_t serialVersionUID = (int64_t)0x95EAA659D73CA49A;
	::java::beans::PropertyChangeSupport* changeSupport = nullptr;
	$Object* objectLock = nullptr;
	bool isPacked = false;
	int32_t boundsOp = 0;
	::sun::java2d::pipe::Region* compoundShape = nullptr;
	::sun::java2d::pipe::Region* mixingCutoutRegion = nullptr;
	bool isAddNotifyComplete = false;
	bool backgroundEraseDisabled = false;
	$Array<::sun::awt::EventQueueItem>* eventCache = nullptr;
	bool coalescingEnabled = false;
	static ::java::util::Map* coalesceMap;
	static $ClassArray* coalesceEventsParams;
	static ::sun::awt::RequestFocusController* requestFocusController;
	bool autoFocusTransferOnDisposal = false;
	int32_t componentSerializedDataVersion = 0;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

	} // awt
} // java

#pragma pop_macro("BOTTOM_ALIGNMENT")
#pragma pop_macro("CENTER_ALIGNMENT")
#pragma pop_macro("FOCUS_TRAVERSABLE_DEFAULT")
#pragma pop_macro("FOCUS_TRAVERSABLE_SET")
#pragma pop_macro("FOCUS_TRAVERSABLE_UNKNOWN")
#pragma pop_macro("LEFT_ALIGNMENT")
#pragma pop_macro("LOCK")
#pragma pop_macro("RIGHT_ALIGNMENT")
#pragma pop_macro("TOP_ALIGNMENT")

#endif // _java_awt_Component_h_