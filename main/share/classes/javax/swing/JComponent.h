#ifndef _javax_swing_JComponent_h_
#define _javax_swing_JComponent_h_
//$ class javax.swing.JComponent
//$ extends java.awt.Container
//$ implements javax.swing.TransferHandler$HasGetTransferHandler

#include <java/awt/Container.h>
#include <java/lang/Array.h>
#include <javax/swing/TransferHandler$HasGetTransferHandler.h>

#pragma push_macro("ACTIONMAP_CREATED")
#undef ACTIONMAP_CREATED
#pragma push_macro("ANCESTOR_INPUTMAP_CREATED")
#undef ANCESTOR_INPUTMAP_CREATED
#pragma push_macro("ANCESTOR_USING_BUFFER")
#undef ANCESTOR_USING_BUFFER
#pragma push_macro("AUTOSCROLLS_SET")
#undef AUTOSCROLLS_SET
#pragma push_macro("COMPLETELY_OBSCURED")
#undef COMPLETELY_OBSCURED
#pragma push_macro("CREATED_DOUBLE_BUFFER")
#undef CREATED_DOUBLE_BUFFER
#pragma push_macro("DEBUG_GRAPHICS_LOADED")
#undef DEBUG_GRAPHICS_LOADED
#pragma push_macro("FOCUS_INPUTMAP_CREATED")
#undef FOCUS_INPUTMAP_CREATED
#pragma push_macro("FOCUS_TRAVERSAL_KEYS_BACKWARD_SET")
#undef FOCUS_TRAVERSAL_KEYS_BACKWARD_SET
#pragma push_macro("FOCUS_TRAVERSAL_KEYS_FORWARD_SET")
#undef FOCUS_TRAVERSAL_KEYS_FORWARD_SET
#pragma push_macro("INHERITS_POPUP_MENU")
#undef INHERITS_POPUP_MENU
#pragma push_macro("INPUT_VERIFIER_SOURCE_KEY")
#undef INPUT_VERIFIER_SOURCE_KEY
#pragma push_macro("IS_DOUBLE_BUFFERED")
#undef IS_DOUBLE_BUFFERED
#pragma push_macro("IS_OPAQUE")
#undef IS_OPAQUE
#pragma push_macro("IS_PAINTING_TILE")
#undef IS_PAINTING_TILE
#pragma push_macro("IS_PRINTING")
#undef IS_PRINTING
#pragma push_macro("IS_PRINTING_ALL")
#undef IS_PRINTING_ALL
#pragma push_macro("IS_REPAINTING")
#undef IS_REPAINTING
#pragma push_macro("KEYBOARD_BINDINGS_KEY")
#undef KEYBOARD_BINDINGS_KEY
#pragma push_macro("KEY_EVENTS_ENABLED")
#undef KEY_EVENTS_ENABLED
#pragma push_macro("NEXT_FOCUS")
#undef NEXT_FOCUS
#pragma push_macro("NOT_OBSCURED")
#undef NOT_OBSCURED
#pragma push_macro("OPAQUE_SET")
#undef OPAQUE_SET
#pragma push_macro("PARTIALLY_OBSCURED")
#undef PARTIALLY_OBSCURED
#pragma push_macro("REQUEST_FOCUS_DISABLED")
#undef REQUEST_FOCUS_DISABLED
#pragma push_macro("RESERVED_1")
#undef RESERVED_1
#pragma push_macro("RESERVED_2")
#undef RESERVED_2
#pragma push_macro("RESERVED_3")
#undef RESERVED_3
#pragma push_macro("RESERVED_4")
#undef RESERVED_4
#pragma push_macro("RESERVED_5")
#undef RESERVED_5
#pragma push_macro("RESERVED_6")
#undef RESERVED_6
#pragma push_macro("TOOL_TIP_TEXT_KEY")
#undef TOOL_TIP_TEXT_KEY
#pragma push_macro("UNDEFINED_CONDITION")
#undef UNDEFINED_CONDITION
#pragma push_macro("WHEN_ANCESTOR_OF_FOCUSED_COMPONENT")
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#pragma push_macro("WHEN_FOCUSED")
#undef WHEN_FOCUSED
#pragma push_macro("WHEN_IN_FOCUSED_WINDOW")
#undef WHEN_IN_FOCUSED_WINDOW
#pragma push_macro("WHEN_IN_FOCUSED_WINDOW_BINDINGS")
#undef WHEN_IN_FOCUSED_WINDOW_BINDINGS
#pragma push_macro("WIF_INPUTMAP_CREATED")
#undef WIF_INPUTMAP_CREATED
#pragma push_macro("WRITE_OBJ_COUNTER_FIRST")
#undef WRITE_OBJ_COUNTER_FIRST
#pragma push_macro("WRITE_OBJ_COUNTER_LAST")
#undef WRITE_OBJ_COUNTER_LAST

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Component$BaselineResizeBehavior;
		class Dimension;
		class Font;
		class FontMetrics;
		class Graphics;
		class Insets;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionListener;
			class KeyEvent;
			class MouseEvent;
		}
	}
}
namespace java {
	namespace beans {
		class VetoableChangeListener;
		class VetoableChangeSupport;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class EventListener;
		class Hashtable;
		class List;
		class Locale;
		class Set;
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
namespace javax {
	namespace swing {
		class ActionMap;
		class AncestorNotifier;
		class ArrayTable;
		class ComponentInputMap;
		class InputMap;
		class InputVerifier;
		class JPopupMenu;
		class JRootPane;
		class JToolTip;
		class KeyStroke;
		class TransferHandler;
		class TransferHandler$DropLocation;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class AncestorListener;
			class EventListenerList;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace sun {
	namespace awt {
		class RequestFocusController;
	}
}

namespace javax {
	namespace swing {

class $export JComponent : public ::java::awt::Container, public ::javax::swing::TransferHandler$HasGetTransferHandler {
	$class(JComponent, 0, ::java::awt::Container, ::javax::swing::TransferHandler$HasGetTransferHandler)
public:
	JComponent();
	using ::java::awt::Container::add;
	using ::java::awt::Container::getMousePosition;
	using ::java::awt::Container::list;
	using ::java::awt::Container::enable;
	using ::java::awt::Container::getLocation;
	using ::java::awt::Container::getSize;
	using ::java::awt::Container::getBounds;
	using ::java::awt::Container::contains;
	using ::java::awt::Container::firePropertyChange;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void _paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h);
	static ::javax::accessibility::AccessibleContext* access$000(::javax::swing::JComponent* x0);
	static ::javax::accessibility::AccessibleContext* access$100(::javax::swing::JComponent* x0);
	static ::javax::accessibility::AccessibleContext* access$200(::javax::swing::JComponent* x0);
	static ::javax::accessibility::AccessibleContext* access$300(::javax::swing::JComponent* x0);
	virtual void addAncestorListener(::javax::swing::event::AncestorListener* listener);
	virtual void addNotify() override;
	virtual void addVetoableChangeListener(::java::beans::VetoableChangeListener* listener);
	void adjustPaintFlags();
	virtual bool alwaysOnTop();
	virtual bool checkIfChildObscuredBySibling();
	virtual void clientPropertyChanged(Object$* key, Object$* oldValue, Object$* newValue);
	virtual void compWriteObjectNotify();
	virtual void componentInputMapChanged(::javax::swing::ComponentInputMap* inputMap);
	static void computeVisibleRect(::java::awt::Component* c, ::java::awt::Rectangle* visibleRect);
	virtual void computeVisibleRect(::java::awt::Rectangle* visibleRect);
	virtual bool contains(int32_t x, int32_t y) override;
	virtual ::javax::swing::JToolTip* createToolTip();
	void deregisterNextFocusableComponent();
	virtual void disable() override;
	virtual void dndDone();
	virtual ::javax::swing::TransferHandler$DropLocation* dropLocationForPoint(::java::awt::Point* p);
	virtual void enable() override;
	static ::java::awt::Rectangle* fetchRectangle();
	virtual void firePropertyChange($String* propertyName, bool oldValue, bool newValue) override;
	virtual void firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue) override;
	virtual void firePropertyChange($String* propertyName, char16_t oldValue, char16_t newValue) override;
	virtual void fireVetoableChange($String* propertyName, Object$* oldValue, Object$* newValue);
	virtual ::java::awt::event::ActionListener* getActionForKeyStroke(::javax::swing::KeyStroke* aKeyStroke);
	::javax::swing::ActionMap* getActionMap();
	::javax::swing::ActionMap* getActionMap(bool create);
	virtual float getAlignmentX() override;
	virtual float getAlignmentY() override;
	virtual $Array<::javax::swing::event::AncestorListener>* getAncestorListeners();
	::javax::swing::AncestorNotifier* getAncestorNotifier();
	virtual bool getAutoscrolls();
	virtual int32_t getBaseline(int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior() override;
	virtual ::javax::swing::border::Border* getBorder();
	virtual ::java::awt::Rectangle* getBounds(::java::awt::Rectangle* rv) override;
	::javax::swing::ArrayTable* getClientProperties();
	$Object* getClientProperty(Object$* key);
	virtual ::java::awt::Graphics* getComponentGraphics(::java::awt::Graphics* g);
	virtual ::javax::swing::JPopupMenu* getComponentPopupMenu();
	virtual int32_t getConditionForKeyStroke(::javax::swing::KeyStroke* aKeyStroke);
	virtual bool getCreatedDoubleBuffer();
	virtual int32_t getDebugGraphicsOptions();
	static ::java::util::Locale* getDefaultLocale();
	bool getFlag(int32_t aFlag);
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	static void getGraphicsInvoked(::java::awt::Component* root);
	virtual int32_t getHeight() override;
	virtual bool getInheritsPopupMenu();
	::javax::swing::InputMap* getInputMap(int32_t condition);
	::javax::swing::InputMap* getInputMap();
	::javax::swing::InputMap* getInputMap(int32_t condition, bool create);
	virtual ::javax::swing::InputVerifier* getInputVerifier();
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::java::awt::Insets* getInsets(::java::awt::Insets* insets);
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType) override;
	virtual ::java::awt::Point* getLocation(::java::awt::Point* rv) override;
	static ::java::util::Set* getManagingFocusBackwardTraversalKeys();
	static ::java::util::Set* getManagingFocusForwardTraversalKeys();
	virtual ::java::awt::Dimension* getMaximumSize() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Component* getNextFocusableComponent();
	int32_t getObscuredState(int32_t compIndex, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual ::java::awt::Point* getPopupLocation(::java::awt::event::MouseEvent* event);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual $Array<::javax::swing::KeyStroke>* getRegisteredKeyStrokes();
	virtual ::javax::swing::JRootPane* getRootPane();
	virtual ::java::awt::Dimension* getSize(::java::awt::Dimension* rv) override;
	virtual ::java::awt::Point* getToolTipLocation(::java::awt::event::MouseEvent* event);
	virtual $String* getToolTipText();
	virtual $String* getToolTipText(::java::awt::event::MouseEvent* event);
	virtual ::java::awt::Container* getTopLevelAncestor();
	virtual ::javax::swing::TransferHandler* getTransferHandler() override;
	virtual ::javax::swing::plaf::ComponentUI* getUI();
	virtual $String* getUIClassID();
	virtual bool getVerifyInputWhenFocusTarget();
	virtual $Array<::java::beans::VetoableChangeListener>* getVetoableChangeListeners();
	virtual ::java::awt::Rectangle* getVisibleRect();
	virtual int32_t getWidth() override;
	static int8_t getWriteObjCounter(::javax::swing::JComponent* comp);
	virtual int32_t getX() override;
	virtual int32_t getY() override;
	virtual void grabFocus();
	virtual void hide() override;
	static bool isComponentObtainingGraphicsFrom(::java::awt::Component* c);
	virtual bool isDoubleBuffered() override;
	static bool isLightweightComponent(::java::awt::Component* c);
	virtual bool isManagingFocus();
	virtual bool isOpaque() override;
	virtual bool isOptimizedDrawingEnabled();
	virtual bool isPainting();
	bool isPaintingForPrint();
	virtual bool isPaintingOrigin();
	virtual bool isPaintingTile();
	virtual bool isRequestFocusEnabled();
	virtual bool isValidateRoot() override;
	void lambda$revalidate$0();
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintBorder(::java::awt::Graphics* g);
	virtual void paintChildren(::java::awt::Graphics* g);
	virtual void paintComponent(::java::awt::Graphics* g);
	virtual void paintForceDoubleBuffered(::java::awt::Graphics* g);
	virtual void paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintImmediately(::java::awt::Rectangle* r);
	virtual void paintToOffscreen(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maxX, int32_t maxY);
	virtual $String* paramString() override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void printAll(::java::awt::Graphics* g) override;
	virtual void printBorder(::java::awt::Graphics* g);
	virtual void printChildren(::java::awt::Graphics* g);
	virtual void printComponent(::java::awt::Graphics* g);
	virtual void processComponentKeyEvent(::java::awt::event::KeyEvent* e);
	virtual bool processKeyBinding(::javax::swing::KeyStroke* ks, ::java::awt::event::KeyEvent* e, int32_t condition, bool pressed);
	virtual bool processKeyBindings(::java::awt::event::KeyEvent* e, bool pressed);
	static bool processKeyBindingsForAllComponents(::java::awt::event::KeyEvent* e, ::java::awt::Container* container, bool pressed);
	virtual void processKeyEvent(::java::awt::event::KeyEvent* e) override;
	virtual void processMouseEvent(::java::awt::event::MouseEvent* e) override;
	virtual void processMouseMotionEvent(::java::awt::event::MouseEvent* e) override;
	void putClientProperty(Object$* key, Object$* value);
	void readObject(::java::io::ObjectInputStream* s);
	virtual bool rectangleIsObscured(int32_t x, int32_t y, int32_t width, int32_t height);
	static void recycleRectangle(::java::awt::Rectangle* rect);
	virtual void registerKeyboardAction(::java::awt::event::ActionListener* anAction, $String* aCommand, ::javax::swing::KeyStroke* aKeyStroke, int32_t aCondition);
	virtual void registerKeyboardAction(::java::awt::event::ActionListener* anAction, ::javax::swing::KeyStroke* aKeyStroke, int32_t aCondition);
	void registerNextFocusableComponent();
	void registerNextFocusableComponent(::java::awt::Component* nextFocusableComponent);
	void registerWithKeyboardManager(bool onlyIfNew);
	void registerWithKeyboardManager(::javax::swing::KeyStroke* aKeyStroke);
	using ::java::awt::Container::remove;
	virtual void removeAncestorListener(::javax::swing::event::AncestorListener* listener);
	virtual void removeNotify() override;
	virtual void removeVetoableChangeListener(::java::beans::VetoableChangeListener* listener);
	using ::java::awt::Container::repaint;
	virtual void repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void repaint(::java::awt::Rectangle* r);
	virtual bool requestDefaultFocus();
	using ::java::awt::Container::requestFocus;
	virtual void requestFocus() override;
	virtual bool requestFocus(bool temporary) override;
	using ::java::awt::Container::requestFocusInWindow;
	virtual bool requestFocusInWindow() override;
	virtual bool requestFocusInWindow(bool temporary) override;
	virtual void resetKeyboardActions();
	virtual void reshape(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void revalidate() override;
	static ::java::awt::Graphics* safelyGetGraphics(::java::awt::Component* c);
	static ::java::awt::Graphics* safelyGetGraphics(::java::awt::Component* c, ::java::awt::Component* root);
	virtual void scrollRectToVisible(::java::awt::Rectangle* aRect);
	void setActionMap(::javax::swing::ActionMap* am);
	virtual void setAlignmentX(float alignmentX);
	virtual void setAlignmentY(float alignmentY);
	virtual void setAutoscrolls(bool autoscrolls);
	virtual void setBackground(::java::awt::Color* bg) override;
	virtual void setBorder(::javax::swing::border::Border* border);
	virtual void setComponentPopupMenu(::javax::swing::JPopupMenu* popup);
	virtual void setCreatedDoubleBuffer(bool newValue);
	virtual void setDebugGraphicsOptions(int32_t debugOptions);
	static void setDefaultLocale(::java::util::Locale* l);
	virtual void setDoubleBuffered(bool aFlag);
	virtual $Object* setDropLocation(::javax::swing::TransferHandler$DropLocation* location, Object$* state, bool forDrop);
	virtual void setEnabled(bool enabled) override;
	void setFlag(int32_t aFlag, bool aValue);
	virtual void setFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes) override;
	virtual void setFont(::java::awt::Font* font) override;
	virtual void setForeground(::java::awt::Color* fg) override;
	virtual void setInheritsPopupMenu(bool value);
	void setInputMap(int32_t condition, ::javax::swing::InputMap* map);
	virtual void setInputVerifier(::javax::swing::InputVerifier* inputVerifier);
	virtual void setMaximumSize(::java::awt::Dimension* maximumSize) override;
	virtual void setMinimumSize(::java::awt::Dimension* minimumSize) override;
	virtual void setNextFocusableComponent(::java::awt::Component* aComponent);
	virtual void setOpaque(bool isOpaque);
	virtual void setPaintingChild(::java::awt::Component* paintingChild);
	virtual void setPreferredSize(::java::awt::Dimension* preferredSize) override;
	virtual void setRequestFocusEnabled(bool requestFocusEnabled);
	virtual void setToolTipText($String* text);
	virtual void setTransferHandler(::javax::swing::TransferHandler* newHandler);
	virtual void setUI(::javax::swing::plaf::ComponentUI* newUI);
	virtual void setUIProperty($String* propertyName, Object$* value);
	virtual void setVerifyInputWhenFocusTarget(bool verifyInputWhenFocusTarget);
	virtual void setVisible(bool aFlag) override;
	static void setWriteObjCounter(::javax::swing::JComponent* comp, int8_t count);
	virtual int32_t shouldDebugGraphics();
	virtual void superProcessMouseMotionEvent(::java::awt::event::MouseEvent* e);
	virtual $String* toString() override;
	void uninstallUIAndProperties();
	virtual void unregisterKeyboardAction(::javax::swing::KeyStroke* aKeyStroke);
	void unregisterWithKeyboardManager();
	void unregisterWithKeyboardManager(::javax::swing::KeyStroke* aKeyStroke);
	virtual void update(::java::awt::Graphics* g) override;
	virtual void updateUI();
	float validateAlignment(float alignment);
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	static ::java::util::Hashtable* readObjectCallbacks;
	static ::java::util::Set* managingFocusForwardTraversalKeys;
	static ::java::util::Set* managingFocusBackwardTraversalKeys;
	static const int32_t NOT_OBSCURED = 0;
	static const int32_t PARTIALLY_OBSCURED = 1;
	static const int32_t COMPLETELY_OBSCURED = 2;
	static bool DEBUG_GRAPHICS_LOADED;
	static $Object* INPUT_VERIFIER_SOURCE_KEY;
	bool isAlignmentXSet = false;
	float alignmentX = 0.0;
	bool isAlignmentYSet = false;
	float alignmentY = 0.0;
	::javax::swing::plaf::ComponentUI* ui = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	::javax::swing::ArrayTable* clientProperties = nullptr;
	::java::beans::VetoableChangeSupport* vetoableChangeSupport = nullptr;
	bool autoscrolls = false;
	::javax::swing::border::Border* border = nullptr;
	int32_t flags = 0;
	::javax::swing::InputVerifier* inputVerifier = nullptr;
	bool verifyInputWhenFocusTarget = false;
	::java::awt::Component* paintingChild = nullptr;
	static const int32_t WHEN_FOCUSED = 0;
	static const int32_t WHEN_ANCESTOR_OF_FOCUSED_COMPONENT = 1;
	static const int32_t WHEN_IN_FOCUSED_WINDOW = 2;
	static const int32_t UNDEFINED_CONDITION = (-1);
	static $String* KEYBOARD_BINDINGS_KEY;
	static $String* WHEN_IN_FOCUSED_WINDOW_BINDINGS;
	static $String* TOOL_TIP_TEXT_KEY;
	static $String* NEXT_FOCUS;
	::javax::swing::JPopupMenu* popupMenu = nullptr;
	static const int32_t IS_DOUBLE_BUFFERED = 0;
	static const int32_t ANCESTOR_USING_BUFFER = 1;
	static const int32_t IS_PAINTING_TILE = 2;
	static const int32_t IS_OPAQUE = 3;
	static const int32_t KEY_EVENTS_ENABLED = 4;
	static const int32_t FOCUS_INPUTMAP_CREATED = 5;
	static const int32_t ANCESTOR_INPUTMAP_CREATED = 6;
	static const int32_t WIF_INPUTMAP_CREATED = 7;
	static const int32_t ACTIONMAP_CREATED = 8;
	static const int32_t CREATED_DOUBLE_BUFFER = 9;
	static const int32_t IS_PRINTING = 11;
	static const int32_t IS_PRINTING_ALL = 12;
	static const int32_t IS_REPAINTING = 13;
	static const int32_t WRITE_OBJ_COUNTER_FIRST = 14;
	static const int32_t RESERVED_1 = 15;
	static const int32_t RESERVED_2 = 16;
	static const int32_t RESERVED_3 = 17;
	static const int32_t RESERVED_4 = 18;
	static const int32_t RESERVED_5 = 19;
	static const int32_t RESERVED_6 = 20;
	static const int32_t WRITE_OBJ_COUNTER_LAST = 21;
	static const int32_t REQUEST_FOCUS_DISABLED = 22;
	static const int32_t INHERITS_POPUP_MENU = 23;
	static const int32_t OPAQUE_SET = 24;
	static const int32_t AUTOSCROLLS_SET = 25;
	static const int32_t FOCUS_TRAVERSAL_KEYS_FORWARD_SET = 26;
	static const int32_t FOCUS_TRAVERSAL_KEYS_BACKWARD_SET = 27;
	::java::util::concurrent::atomic::AtomicBoolean* revalidateRunnableScheduled = nullptr;
	static ::java::util::List* tempRectangles;
	::javax::swing::InputMap* focusInputMap = nullptr;
	::javax::swing::InputMap* ancestorInputMap = nullptr;
	::javax::swing::ComponentInputMap* windowInputMap = nullptr;
	::javax::swing::ActionMap* actionMap = nullptr;
	static $String* defaultLocale;
	static ::java::awt::Component* componentObtainingGraphicsFrom;
	static $Object* componentObtainingGraphicsFromLock;
	$Object* aaHint = nullptr;
	$Object* lcdRenderingHint = nullptr;
	static ::sun::awt::RequestFocusController* focusController;
};

	} // swing
} // javax

#pragma pop_macro("ACTIONMAP_CREATED")
#pragma pop_macro("ANCESTOR_INPUTMAP_CREATED")
#pragma pop_macro("ANCESTOR_USING_BUFFER")
#pragma pop_macro("AUTOSCROLLS_SET")
#pragma pop_macro("COMPLETELY_OBSCURED")
#pragma pop_macro("CREATED_DOUBLE_BUFFER")
#pragma pop_macro("DEBUG_GRAPHICS_LOADED")
#pragma pop_macro("FOCUS_INPUTMAP_CREATED")
#pragma pop_macro("FOCUS_TRAVERSAL_KEYS_BACKWARD_SET")
#pragma pop_macro("FOCUS_TRAVERSAL_KEYS_FORWARD_SET")
#pragma pop_macro("INHERITS_POPUP_MENU")
#pragma pop_macro("INPUT_VERIFIER_SOURCE_KEY")
#pragma pop_macro("IS_DOUBLE_BUFFERED")
#pragma pop_macro("IS_OPAQUE")
#pragma pop_macro("IS_PAINTING_TILE")
#pragma pop_macro("IS_PRINTING")
#pragma pop_macro("IS_PRINTING_ALL")
#pragma pop_macro("IS_REPAINTING")
#pragma pop_macro("KEYBOARD_BINDINGS_KEY")
#pragma pop_macro("KEY_EVENTS_ENABLED")
#pragma pop_macro("NEXT_FOCUS")
#pragma pop_macro("NOT_OBSCURED")
#pragma pop_macro("OPAQUE_SET")
#pragma pop_macro("PARTIALLY_OBSCURED")
#pragma pop_macro("REQUEST_FOCUS_DISABLED")
#pragma pop_macro("RESERVED_1")
#pragma pop_macro("RESERVED_2")
#pragma pop_macro("RESERVED_3")
#pragma pop_macro("RESERVED_4")
#pragma pop_macro("RESERVED_5")
#pragma pop_macro("RESERVED_6")
#pragma pop_macro("TOOL_TIP_TEXT_KEY")
#pragma pop_macro("UNDEFINED_CONDITION")
#pragma pop_macro("WHEN_ANCESTOR_OF_FOCUSED_COMPONENT")
#pragma pop_macro("WHEN_FOCUSED")
#pragma pop_macro("WHEN_IN_FOCUSED_WINDOW")
#pragma pop_macro("WHEN_IN_FOCUSED_WINDOW_BINDINGS")
#pragma pop_macro("WIF_INPUTMAP_CREATED")
#pragma pop_macro("WRITE_OBJ_COUNTER_FIRST")
#pragma pop_macro("WRITE_OBJ_COUNTER_LAST")

#endif // _javax_swing_JComponent_h_