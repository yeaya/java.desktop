#include <com/sun/java/swing/plaf/windows/WindowsMenuUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuUI$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuUI$WindowsMouseInputHandler.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuUI$MouseInputHandler.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $WindowsMenuItemUIAccessor = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor;
using $WindowsMenuUI$1 = ::com::sun::java::swing::plaf::windows::WindowsMenuUI$1;
using $WindowsMenuUI$WindowsMouseInputHandler = ::com::sun::java::swing::plaf::windows::WindowsMenuUI$WindowsMouseInputHandler;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuElement = ::javax::swing::MenuElement;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;
using $BasicMenuUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicMenuUI$MouseInputHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsMenuUI_FieldInfo_[] = {
	{"menuBarHeight", "Ljava/lang/Integer;", nullptr, $PROTECTED, $field(WindowsMenuUI, menuBarHeight)},
	{"hotTrackingOn", "Z", nullptr, $PROTECTED, $field(WindowsMenuUI, hotTrackingOn)},
	{"accessor", "Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor;", nullptr, $FINAL, $field(WindowsMenuUI, accessor)},
	{}
};

$MethodInfo _WindowsMenuUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsMenuUI::*)()>(&WindowsMenuUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(WindowsMenuUI*)>(&WindowsMenuUI::access$000))},
	{"access$100", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(WindowsMenuUI*)>(&WindowsMenuUI::access$100))},
	{"access$200", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(WindowsMenuUI*)>(&WindowsMenuUI::access$200))},
	{"createMouseInputListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsMenuUI::createUI))},
	{"getPreferredMenuItemSize", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;Ljavax/swing/Icon;I)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paintBackground", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Color;)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _WindowsMenuUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsMenuUI$WindowsMouseInputHandler", "com.sun.java.swing.plaf.windows.WindowsMenuUI", "WindowsMouseInputHandler", $PROTECTED},
	{"com.sun.java.swing.plaf.windows.WindowsMenuUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsMenuUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsMenuUI",
	"javax.swing.plaf.basic.BasicMenuUI",
	nullptr,
	_WindowsMenuUI_FieldInfo_,
	_WindowsMenuUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsMenuUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsMenuUI$WindowsMouseInputHandler,com.sun.java.swing.plaf.windows.WindowsMenuUI$1"
};

$Object* allocate$WindowsMenuUI($Class* clazz) {
	return $of($alloc(WindowsMenuUI));
}

$JMenuItem* WindowsMenuUI::access$200(WindowsMenuUI* x0) {
	$init(WindowsMenuUI);
	return $nc(x0)->menuItem;
}

$JMenuItem* WindowsMenuUI::access$100(WindowsMenuUI* x0) {
	$init(WindowsMenuUI);
	return $nc(x0)->menuItem;
}

$JMenuItem* WindowsMenuUI::access$000(WindowsMenuUI* x0) {
	$init(WindowsMenuUI);
	return $nc(x0)->menuItem;
}

void WindowsMenuUI::init$() {
	$BasicMenuUI::init$();
	$set(this, accessor, $new($WindowsMenuUI$1, this));
}

$ComponentUI* WindowsMenuUI::createUI($JComponent* x) {
	$init(WindowsMenuUI);
	return $new(WindowsMenuUI);
}

void WindowsMenuUI::installDefaults() {
	$BasicMenuUI::installDefaults();
	if (!$WindowsLookAndFeel::isClassicWindows()) {
		$nc(this->menuItem)->setRolloverEnabled(true);
	}
	$set(this, menuBarHeight, $Integer::valueOf($UIManager::getInt("MenuBar.height"_s)));
	$var($Object, obj, $UIManager::get("MenuBar.rolloverEnabled"_s));
	this->hotTrackingOn = ($instanceOf($Boolean, obj)) ? $nc(($cast($Boolean, obj)))->booleanValue() : true;
}

void WindowsMenuUI::paintBackground($Graphics* g, $JMenuItem* menuItem, $Color* bgColor) {
	$useLocalCurrentObjectStackCache();
	if ($WindowsMenuItemUI::isVistaPainting()) {
		$WindowsMenuItemUI::paintBackground(this->accessor, g, menuItem, bgColor);
		return;
	}
	$var($JMenu, menu, $cast($JMenu, menuItem));
	$var($ButtonModel, model, $nc(menu)->getModel());
	bool var$1 = $WindowsLookAndFeel::isClassicWindows();
	bool var$0 = var$1 || !menu->isTopLevelMenu();
	if (!var$0) {
		bool var$2 = $XPStyle::getXP() != nullptr;
		if (var$2) {
			bool var$3 = $nc(model)->isArmed();
			var$2 = (var$3 || $nc(model)->isSelected());
		}
		var$0 = (var$2);
	}
	if (var$0) {
		$BasicMenuUI::paintBackground(g, menu, bgColor);
		return;
	}
	$var($Color, oldColor, $nc(g)->getColor());
	int32_t menuWidth = menu->getWidth();
	int32_t menuHeight = menu->getHeight();
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, highlight, $nc(table)->getColor("controlLtHighlight"_s));
	$var($Color, shadow, table->getColor("controlShadow"_s));
	g->setColor($(menu->getBackground()));
	g->fillRect(0, 0, menuWidth, menuHeight);
	if (menu->isOpaque()) {
		bool var$4 = $nc(model)->isArmed();
		if (var$4 || $nc(model)->isSelected()) {
			g->setColor(shadow);
			g->drawLine(0, 0, menuWidth - 1, 0);
			g->drawLine(0, 0, 0, menuHeight - 2);
			g->setColor(highlight);
			g->drawLine(menuWidth - 1, 0, menuWidth - 1, menuHeight - 2);
			g->drawLine(0, menuHeight - 2, menuWidth - 1, menuHeight - 2);
		} else {
			bool var$6 = model->isRollover();
			if (var$6 && model->isEnabled()) {
				bool otherMenuSelected = false;
				$var($MenuElementArray, menus, $nc(($cast($JMenuBar, $(menu->getParent()))))->getSubElements());
				for (int32_t i = 0; i < $nc(menus)->length; ++i) {
					if ($nc(($cast($JMenuItem, menus->get(i))))->isSelected()) {
						otherMenuSelected = true;
						break;
					}
				}
				if (!otherMenuSelected) {
					if ($XPStyle::getXP() != nullptr) {
						g->setColor(this->selectionBackground);
						g->fillRect(0, 0, menuWidth, menuHeight);
					} else {
						g->setColor(highlight);
						g->drawLine(0, 0, menuWidth - 1, 0);
						g->drawLine(0, 0, 0, menuHeight - 2);
						g->setColor(shadow);
						g->drawLine(menuWidth - 1, 0, menuWidth - 1, menuHeight - 2);
						g->drawLine(0, menuHeight - 2, menuWidth - 1, menuHeight - 2);
					}
				}
			}
		}
	}
	g->setColor(oldColor);
}

void WindowsMenuUI::paintText($Graphics* g, $JMenuItem* menuItem, $Rectangle* textRect, $String* text) {
	$useLocalCurrentObjectStackCache();
	if ($WindowsMenuItemUI::isVistaPainting()) {
		$WindowsMenuItemUI::paintText(this->accessor, g, menuItem, textRect, text);
		return;
	}
	$var($JMenu, menu, $cast($JMenu, menuItem));
	$var($ButtonModel, model, $nc(menuItem)->getModel());
	$var($Color, oldColor, $nc(g)->getColor());
	bool paintRollover = $nc(model)->isRollover();
	if (paintRollover && $nc(menu)->isTopLevelMenu()) {
		$var($MenuElementArray, menus, $nc(($cast($JMenuBar, $(menu->getParent()))))->getSubElements());
		for (int32_t i = 0; i < $nc(menus)->length; ++i) {
			if ($nc(($cast($JMenuItem, menus->get(i))))->isSelected()) {
				paintRollover = false;
				break;
			}
		}
	}
	bool var$1 = model->isSelected();
	if (var$1) {
		bool var$2 = $WindowsLookAndFeel::isClassicWindows();
		var$1 = (var$2 || !$nc(menu)->isTopLevelMenu());
	}
	bool var$0 = (var$1);
	if (!var$0) {
		bool var$3 = $XPStyle::getXP() != nullptr;
		if (var$3) {
			bool var$4 = paintRollover || model->isArmed();
			var$3 = (var$4 || model->isSelected());
		}
		var$0 = (var$3);
	}
	if (var$0) {
		g->setColor(this->selectionForeground);
	}
	$WindowsGraphicsUtils::paintText(g, menuItem, textRect, text, 0);
	g->setColor(oldColor);
}

$MouseInputListener* WindowsMenuUI::createMouseInputListener($JComponent* c) {
	return $new($WindowsMenuUI$WindowsMouseInputHandler, this);
}

$Dimension* WindowsMenuUI::getPreferredMenuItemSize($JComponent* c, $Icon* checkIcon, $Icon* arrowIcon, int32_t defaultTextIconGap) {
	$var($Dimension, d, $BasicMenuUI::getPreferredMenuItemSize(c, checkIcon, arrowIcon, defaultTextIconGap));
	bool var$0 = $instanceOf($JMenu, c) && $nc(($cast($JMenu, c)))->isTopLevelMenu() && this->menuBarHeight != nullptr;
	if (var$0 && $nc(d)->height < $nc(this->menuBarHeight)->intValue()) {
		d->height = $nc(this->menuBarHeight)->intValue();
	}
	return d;
}

WindowsMenuUI::WindowsMenuUI() {
}

$Class* WindowsMenuUI::load$($String* name, bool initialize) {
	$loadClass(WindowsMenuUI, name, initialize, &_WindowsMenuUI_ClassInfo_, allocate$WindowsMenuUI);
	return class$;
}

$Class* WindowsMenuUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com