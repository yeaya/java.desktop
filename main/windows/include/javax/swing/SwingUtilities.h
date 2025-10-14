#ifndef _javax_swing_SwingUtilities_h_
#define _javax_swing_SwingUtilities_h_
//$ class javax.swing.SwingUtilities
//$ extends javax.swing.SwingConstants

#include <java/lang/Array.h>
#include <javax/swing/SwingConstants.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class FontMetrics;
		class Frame;
		class Graphics;
		class Image;
		class Point;
		class Rectangle;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
			class MouseEvent;
			class WindowListener;
		}
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class ActionMap;
		class CellRendererPane;
		class Icon;
		class InputMap;
		class JComponent;
		class JRootPane;
		class JViewport;
		class KeyStroke;
		class TransferHandler;
	}
}

namespace javax {
	namespace swing {

class $import SwingUtilities : public ::javax::swing::SwingConstants {
	$class(SwingUtilities, 0, ::javax::swing::SwingConstants)
public:
	SwingUtilities();
	void init$();
	static $Object* appContextGet(Object$* key);
	static void appContextPut(Object$* key, Object$* value);
	static void appContextRemove(Object$* key);
	static ::java::awt::Rectangle* calculateInnerArea(::javax::swing::JComponent* c, ::java::awt::Rectangle* r);
	static bool checkMouseButton(::java::awt::event::MouseEvent* anEvent, int32_t mouseButton, int32_t mouseButtonDownMask);
	static $Array<::java::awt::Rectangle>* computeDifference(::java::awt::Rectangle* rectA, ::java::awt::Rectangle* rectB);
	static ::java::awt::Rectangle* computeIntersection(int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Rectangle* dest);
	static int32_t computeStringWidth(::java::awt::FontMetrics* fm, $String* str);
	static ::java::awt::Rectangle* computeUnion(int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Rectangle* dest);
	static ::java::awt::event::MouseEvent* convertMouseEvent(::java::awt::Component* source, ::java::awt::event::MouseEvent* sourceEvent, ::java::awt::Component* destination);
	static ::java::awt::Point* convertPoint(::java::awt::Component* source, ::java::awt::Point* aPoint, ::java::awt::Component* destination);
	static ::java::awt::Point* convertPoint(::java::awt::Component* source, int32_t x, int32_t y, ::java::awt::Component* destination);
	static void convertPointFromScreen(::java::awt::Point* p, ::java::awt::Component* c);
	static void convertPointToScreen(::java::awt::Point* p, ::java::awt::Component* c);
	static ::java::awt::Rectangle* convertRectangle(::java::awt::Component* source, ::java::awt::Rectangle* aRectangle, ::java::awt::Component* destination);
	static ::java::awt::Point* convertScreenLocationToParent(::java::awt::Container* parent, int32_t x, int32_t y);
	static bool doesIconReferenceImage(::javax::swing::Icon* icon, ::java::awt::Image* image);
	static int32_t findDisplayedMnemonicIndex($String* text, int32_t mnemonic);
	static ::java::awt::Component* findFocusOwner(::java::awt::Component* c);
	static ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Component* c, ::java::awt::Point* p);
	static ::javax::accessibility::Accessible* getAccessibleChild(::java::awt::Component* c, int32_t i);
	static int32_t getAccessibleChildrenCount(::java::awt::Component* c);
	static int32_t getAccessibleIndexInParent(::java::awt::Component* c);
	static ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet(::java::awt::Component* c);
	static ::java::awt::Container* getAncestorNamed($String* name, ::java::awt::Component* comp);
	static ::java::awt::Container* getAncestorOfClass($Class* c, ::java::awt::Component* comp);
	static ::javax::swing::CellRendererPane* getCellRendererPane(::java::awt::Component* c, ::java::awt::Container* p);
	static ::java::awt::Component* getDeepestComponentAt(::java::awt::Component* parent, int32_t x, int32_t y);
	static ::java::awt::Rectangle* getLocalBounds(::java::awt::Component* aComponent);
	static ::javax::swing::JComponent* getPaintingOrigin(::javax::swing::JComponent* c);
	static ::java::awt::Component* getRoot(::java::awt::Component* c);
	static ::javax::swing::JRootPane* getRootPane(::java::awt::Component* c);
	static ::java::awt::Frame* getSharedOwnerFrame();
	static ::java::awt::event::WindowListener* getSharedOwnerFrameShutdownListener();
	static bool getSuppressDropTarget();
	static ::javax::swing::ActionMap* getUIActionMap(::javax::swing::JComponent* component);
	static ::javax::swing::InputMap* getUIInputMap(::javax::swing::JComponent* component, int32_t condition);
	static ::java::awt::Container* getUnwrappedParent(::java::awt::Component* component);
	static ::java::awt::Component* getUnwrappedView(::javax::swing::JViewport* viewport);
	static ::java::awt::Container* getValidateRoot(::java::awt::Container* c, bool visibleOnly);
	static ::java::awt::Window* getWindowAncestor(::java::awt::Component* c);
	static void installSwingDropTargetAsNecessary(::java::awt::Component* c, ::javax::swing::TransferHandler* t);
	static void invokeAndWait(::java::lang::Runnable* doRun);
	static void invokeLater(::java::lang::Runnable* doRun);
	static bool isDescendingFrom(::java::awt::Component* a, ::java::awt::Component* b);
	static bool isEventDispatchThread();
	static bool isLeftMouseButton(::java::awt::event::MouseEvent* anEvent);
	static bool isLeftToRight(::java::awt::Component* c);
	static bool isMiddleMouseButton(::java::awt::event::MouseEvent* anEvent);
	static bool isRectangleContainingRectangle(::java::awt::Rectangle* a, ::java::awt::Rectangle* b);
	static bool isRightMouseButton(::java::awt::event::MouseEvent* anEvent);
	static bool isValidKeyEventForKeyBindings(::java::awt::event::KeyEvent* e);
	static $String* layoutCompoundLabel(::javax::swing::JComponent* c, ::java::awt::FontMetrics* fm, $String* text, ::javax::swing::Icon* icon, int32_t verticalAlignment, int32_t horizontalAlignment, int32_t verticalTextPosition, int32_t horizontalTextPosition, ::java::awt::Rectangle* viewR, ::java::awt::Rectangle* iconR, ::java::awt::Rectangle* textR, int32_t textIconGap);
	static $String* layoutCompoundLabel(::java::awt::FontMetrics* fm, $String* text, ::javax::swing::Icon* icon, int32_t verticalAlignment, int32_t horizontalAlignment, int32_t verticalTextPosition, int32_t horizontalTextPosition, ::java::awt::Rectangle* viewR, ::java::awt::Rectangle* iconR, ::java::awt::Rectangle* textR, int32_t textIconGap);
	static $String* layoutCompoundLabelImpl(::javax::swing::JComponent* c, ::java::awt::FontMetrics* fm, $String* text, ::javax::swing::Icon* icon, int32_t verticalAlignment, int32_t horizontalAlignment, int32_t verticalTextPosition, int32_t horizontalTextPosition, ::java::awt::Rectangle* viewR, ::java::awt::Rectangle* iconR, ::java::awt::Rectangle* textR, int32_t textIconGap);
	static $Class* loadSystemClass($String* className);
	static bool notifyAction(::javax::swing::Action* action, ::javax::swing::KeyStroke* ks, ::java::awt::event::KeyEvent* event, Object$* sender, int32_t modifiers);
	static void paintComponent(::java::awt::Graphics* g, ::java::awt::Component* c, ::java::awt::Container* p, int32_t x, int32_t y, int32_t w, int32_t h);
	static void paintComponent(::java::awt::Graphics* g, ::java::awt::Component* c, ::java::awt::Container* p, ::java::awt::Rectangle* r);
	static bool processKeyBindings(::java::awt::event::KeyEvent* event);
	static void replaceUIActionMap(::javax::swing::JComponent* component, ::javax::swing::ActionMap* uiActionMap);
	static void replaceUIInputMap(::javax::swing::JComponent* component, int32_t type, ::javax::swing::InputMap* uiInputMap);
	static void updateComponentTreeUI(::java::awt::Component* c);
	static void updateComponentTreeUI0(::java::awt::Component* c);
	static void updateRendererOrEditorUI(Object$* rendererOrEditor);
	static ::java::awt::Window* windowForComponent(::java::awt::Component* c);
	static bool canAccessEventQueue;
	static bool eventQueueTested;
	static bool suppressDropSupport;
	static bool checkedSuppressDropSupport;
	static $Object* sharedOwnerFrameKey;
};

	} // swing
} // javax

#endif // _javax_swing_SwingUtilities_h_