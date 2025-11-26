#ifndef _javax_swing_plaf_basic_BasicToolBarUI_h_
#define _javax_swing_plaf_basic_BasicToolBarUI_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI
//$ extends javax.swing.plaf.ToolBarUI
//$ implements javax.swing.SwingConstants

#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ToolBarUI.h>

#pragma push_macro("FOCUSED_COMP_INDEX")
#undef FOCUSED_COMP_INDEX
#pragma push_macro("IS_ROLLOVER")
#undef IS_ROLLOVER

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Container;
		class Graphics;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ContainerListener;
			class FocusListener;
			class WindowListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class InputMap;
		class JComponent;
		class JFrame;
		class JToolBar;
		class KeyStroke;
		class RootPaneContainer;
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
			class MouseInputListener;
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
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicToolBarUI$DragWindow;
				class BasicToolBarUI$Handler;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicToolBarUI : public ::javax::swing::plaf::ToolBarUI, public ::javax::swing::SwingConstants {
	$class(BasicToolBarUI, 0, ::javax::swing::plaf::ToolBarUI, ::javax::swing::SwingConstants)
public:
	BasicToolBarUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	$String* calculateConstraint();
	virtual bool canDock(::java::awt::Component* c, ::java::awt::Point* p);
	virtual ::javax::swing::event::MouseInputListener* createDockingListener();
	virtual ::javax::swing::plaf::basic::BasicToolBarUI$DragWindow* createDragWindow(::javax::swing::JToolBar* toolbar);
	virtual ::javax::swing::JFrame* createFloatingFrame(::javax::swing::JToolBar* toolbar);
	virtual ::javax::swing::RootPaneContainer* createFloatingWindow(::javax::swing::JToolBar* toolbar);
	virtual ::java::awt::event::WindowListener* createFrameListener();
	virtual ::javax::swing::border::Border* createNonRolloverBorder();
	::javax::swing::border::Border* createNonRolloverToggleBorder();
	virtual ::java::beans::PropertyChangeListener* createPropertyListener();
	virtual ::javax::swing::border::Border* createRolloverBorder();
	virtual ::java::awt::event::ContainerListener* createToolBarContListener();
	virtual ::java::awt::event::FocusListener* createToolBarFocusListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void dragTo(::java::awt::Point* position, ::java::awt::Point* origin);
	virtual void floatAt(::java::awt::Point* position, ::java::awt::Point* origin);
	virtual ::java::awt::Color* getDockingColor();
	$String* getDockingConstraint(::java::awt::Component* c, ::java::awt::Point* p);
	virtual ::java::awt::Color* getFloatingColor();
	::javax::swing::plaf::basic::BasicToolBarUI$Handler* getHandler();
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	virtual ::javax::swing::border::Border* getNonRolloverBorder(::javax::swing::AbstractButton* b);
	virtual ::javax::swing::border::Border* getRolloverBorder(::javax::swing::AbstractButton* b);
	virtual void installComponents();
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installNonRolloverBorders(::javax::swing::JComponent* c);
	virtual void installNormalBorders(::javax::swing::JComponent* c);
	virtual void installRolloverBorders(::javax::swing::JComponent* c);
	virtual void installUI(::javax::swing::JComponent* c) override;
	bool isBlocked(::java::awt::Component* comp, Object$* constraint);
	virtual bool isFloating();
	virtual bool isRolloverBorders();
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	int32_t mapConstraintToOrientation($String* constraint);
	virtual void navigateFocusedComp(int32_t direction);
	virtual void paintDragWindow(::java::awt::Graphics* g);
	virtual void setBorderToNonRollover(::java::awt::Component* c);
	virtual void setBorderToNormal(::java::awt::Component* c);
	virtual void setBorderToRollover(::java::awt::Component* c);
	virtual void setDockingColor(::java::awt::Color* c);
	virtual void setFloating(bool b, ::java::awt::Point* p);
	virtual void setFloatingColor(::java::awt::Color* c);
	virtual void setFloatingLocation(int32_t x, int32_t y);
	virtual void setOrientation(int32_t orientation);
	virtual void setRolloverBorders(bool rollover);
	virtual $String* toString() override;
	virtual void uninstallComponents();
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	::javax::swing::JToolBar* toolBar = nullptr;
	bool floating = false;
	int32_t floatingX = 0;
	int32_t floatingY = 0;
	::javax::swing::JFrame* floatingFrame = nullptr;
	::javax::swing::RootPaneContainer* floatingToolBar = nullptr;
	::javax::swing::plaf::basic::BasicToolBarUI$DragWindow* dragWindow = nullptr;
	::java::awt::Container* dockingSource = nullptr;
	int32_t dockingSensitivity = 0;
	int32_t focusedCompIndex = 0;
	::java::awt::Color* dockingColor = nullptr;
	::java::awt::Color* floatingColor = nullptr;
	::java::awt::Color* dockingBorderColor = nullptr;
	::java::awt::Color* floatingBorderColor = nullptr;
	::javax::swing::event::MouseInputListener* dockingListener = nullptr;
	::java::beans::PropertyChangeListener* propertyListener = nullptr;
	::java::awt::event::ContainerListener* toolBarContListener = nullptr;
	::java::awt::event::FocusListener* toolBarFocusListener = nullptr;
	::javax::swing::plaf::basic::BasicToolBarUI$Handler* handler = nullptr;
	$String* constraintBeforeFloating = nullptr;
	static $String* IS_ROLLOVER;
	static ::javax::swing::border::Border* rolloverBorder;
	static ::javax::swing::border::Border* nonRolloverBorder;
	static ::javax::swing::border::Border* nonRolloverToggleBorder;
	bool rolloverBorders = false;
	::java::util::HashMap* borderTable = nullptr;
	::java::util::Hashtable* rolloverTable = nullptr;
	::javax::swing::KeyStroke* upKey = nullptr;
	::javax::swing::KeyStroke* downKey = nullptr;
	::javax::swing::KeyStroke* leftKey = nullptr;
	::javax::swing::KeyStroke* rightKey = nullptr;
	static $String* FOCUSED_COMP_INDEX;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("FOCUSED_COMP_INDEX")
#pragma pop_macro("IS_ROLLOVER")

#endif // _javax_swing_plaf_basic_BasicToolBarUI_h_