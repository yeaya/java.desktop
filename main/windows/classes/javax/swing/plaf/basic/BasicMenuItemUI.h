#ifndef _javax_swing_plaf_basic_BasicMenuItemUI_h_
#define _javax_swing_plaf_basic_BasicMenuItemUI_h_
//$ class javax.swing.plaf.basic.BasicMenuItemUI
//$ extends javax.swing.plaf.MenuItemUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/MenuItemUI.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("TRACE")
#undef TRACE
#pragma push_macro("VERBOSE")
#undef VERBOSE

namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Font;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class InputMap;
		class JComponent;
		class JMenuItem;
		class MenuElement;
		class MenuSelectionManager;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class MenuDragMouseListener;
			class MenuKeyListener;
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
				class BasicMenuItemUI$Handler;
				class LazyActionMap;
			}
		}
	}
}
namespace sun {
	namespace swing {
		class MenuItemLayoutHelper;
		class MenuItemLayoutHelper$LayoutResult;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicMenuItemUI : public ::javax::swing::plaf::MenuItemUI {
	$class(BasicMenuItemUI, $NO_CLASS_INIT, ::javax::swing::plaf::MenuItemUI)
public:
	BasicMenuItemUI();
	void init$();
	void applyInsets(::java::awt::Rectangle* rect, ::java::awt::Insets* insets);
	virtual ::javax::swing::InputMap* createInputMap(int32_t condition);
	virtual ::javax::swing::event::MenuDragMouseListener* createMenuDragMouseListener(::javax::swing::JComponent* c);
	virtual ::javax::swing::event::MenuKeyListener* createMenuKeyListener(::javax::swing::JComponent* c);
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener(::javax::swing::JComponent* c);
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener(::javax::swing::JComponent* c);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void doClick(::javax::swing::MenuSelectionManager* msm);
	virtual bool doNotCloseOnMouseClick();
	virtual ::javax::swing::plaf::basic::BasicMenuItemUI$Handler* getHandler();
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual $Array<::javax::swing::MenuElement>* getPath();
	virtual ::java::awt::Dimension* getPreferredMenuItemSize(::javax::swing::JComponent* c, ::javax::swing::Icon* checkIcon, ::javax::swing::Icon* arrowIcon, int32_t defaultTextIconGap);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual $String* getPropertyPrefix();
	virtual void installComponents(::javax::swing::JMenuItem* menuItem);
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installLazyActionMap();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	bool isInternalFrameSystemMenu();
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void paintAccText(::java::awt::Graphics* g, ::sun::swing::MenuItemLayoutHelper* lh, ::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	void paintArrowIcon(::java::awt::Graphics* g, ::sun::swing::MenuItemLayoutHelper* lh, ::sun::swing::MenuItemLayoutHelper$LayoutResult* lr, ::java::awt::Color* foreground);
	virtual void paintBackground(::java::awt::Graphics* g, ::javax::swing::JMenuItem* menuItem, ::java::awt::Color* bgColor);
	void paintCheckIcon(::java::awt::Graphics* g, ::sun::swing::MenuItemLayoutHelper* lh, ::sun::swing::MenuItemLayoutHelper$LayoutResult* lr, ::java::awt::Color* holdc, ::java::awt::Color* foreground);
	void paintIcon(::java::awt::Graphics* g, ::sun::swing::MenuItemLayoutHelper* lh, ::sun::swing::MenuItemLayoutHelper$LayoutResult* lr, ::java::awt::Color* holdc);
	virtual void paintMenuItem(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::javax::swing::Icon* checkIcon, ::javax::swing::Icon* arrowIcon, ::java::awt::Color* background, ::java::awt::Color* foreground, int32_t defaultTextIconGap);
	void paintText(::java::awt::Graphics* g, ::sun::swing::MenuItemLayoutHelper* lh, ::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::JMenuItem* menuItem, ::java::awt::Rectangle* textRect, $String* text);
	virtual void printMenuElementArray($Array<::javax::swing::MenuElement>* path, bool dumpStack);
	virtual void uninstallComponents(::javax::swing::JMenuItem* menuItem);
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void updateAcceleratorBinding();
	::javax::swing::JMenuItem* menuItem = nullptr;
	::java::awt::Color* selectionBackground = nullptr;
	::java::awt::Color* selectionForeground = nullptr;
	::java::awt::Color* disabledForeground = nullptr;
	::java::awt::Color* acceleratorForeground = nullptr;
	::java::awt::Color* acceleratorSelectionForeground = nullptr;
	$String* acceleratorDelimiter = nullptr;
	int32_t defaultTextIconGap = 0;
	::java::awt::Font* acceleratorFont = nullptr;
	::javax::swing::event::MouseInputListener* mouseInputListener = nullptr;
	::javax::swing::event::MenuDragMouseListener* menuDragMouseListener = nullptr;
	::javax::swing::event::MenuKeyListener* menuKeyListener = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::javax::swing::plaf::basic::BasicMenuItemUI$Handler* handler = nullptr;
	::javax::swing::Icon* arrowIcon = nullptr;
	::javax::swing::Icon* checkIcon = nullptr;
	bool oldBorderPainted = false;
	static const bool TRACE = false;
	static const bool VERBOSE = false;
	static const bool DEBUG = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("DEBUG")
#pragma pop_macro("TRACE")
#pragma pop_macro("VERBOSE")

#endif // _javax_swing_plaf_basic_BasicMenuItemUI_h_