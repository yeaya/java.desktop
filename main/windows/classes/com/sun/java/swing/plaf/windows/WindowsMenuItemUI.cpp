#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI$2.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/AssertionError.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <sun/swing/MenuItemCheckIconFactory.h>
#include <sun/swing/MenuItemLayoutHelper.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef DISABLED
#undef DISABLEDHOT
#undef HOT
#undef MP_POPUPITEM
#undef NORMAL

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsMenuItemUI$1 = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI$1;
using $WindowsMenuItemUI$2 = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI$2;
using $WindowsMenuItemUIAccessor = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $MenuItemCheckIconFactory = ::sun::swing::MenuItemCheckIconFactory;
using $MenuItemLayoutHelper = ::sun::swing::MenuItemLayoutHelper;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsMenuItemUI_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsMenuItemUI, $assertionsDisabled)},
	{"changeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(WindowsMenuItemUI, changeListener)},
	{"accessor", "Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor;", nullptr, $FINAL, $field(WindowsMenuItemUI, accessor)},
	{}
};

$MethodInfo _WindowsMenuItemUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsMenuItemUI::*)()>(&WindowsMenuItemUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(WindowsMenuItemUI*)>(&WindowsMenuItemUI::access$000))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsMenuItemUI::createUI))},
	{"getPart", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor;Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $STATIC, $method(static_cast<$TMSchema$Part*(*)($WindowsMenuItemUIAccessor*,$JMenuItem*)>(&WindowsMenuItemUI::getPart))},
	{"getState", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor;Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $STATIC, $method(static_cast<$TMSchema$State*(*)($WindowsMenuItemUIAccessor*,$JMenuItem*)>(&WindowsMenuItemUI::getState))},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"isVistaPainting", "(Lcom/sun/java/swing/plaf/windows/XPStyle;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($XPStyle*)>(&WindowsMenuItemUI::isVistaPainting))},
	{"isVistaPainting", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&WindowsMenuItemUI::isVistaPainting))},
	{"paintBackground", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Color;)V", nullptr, $PROTECTED},
	{"paintBackground", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor;Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Color;)V", nullptr, $STATIC, $method(static_cast<void(*)($WindowsMenuItemUIAccessor*,$Graphics*,$JMenuItem*,$Color*)>(&WindowsMenuItemUI::paintBackground))},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"paintText", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor;Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($WindowsMenuItemUIAccessor*,$Graphics*,$JMenuItem*,$Rectangle*,$String*)>(&WindowsMenuItemUI::paintText))},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"updateCheckIcon", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsMenuItemUI::*)()>(&WindowsMenuItemUI::updateCheckIcon))},
	{}
};

$InnerClassInfo _WindowsMenuItemUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsMenuItemUI$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsMenuItemUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUI",
	"javax.swing.plaf.basic.BasicMenuItemUI",
	nullptr,
	_WindowsMenuItemUI_FieldInfo_,
	_WindowsMenuItemUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsMenuItemUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUI$2,com.sun.java.swing.plaf.windows.WindowsMenuItemUI$1"
};

$Object* allocate$WindowsMenuItemUI($Class* clazz) {
	return $of($alloc(WindowsMenuItemUI));
}

bool WindowsMenuItemUI::$assertionsDisabled = false;

$JMenuItem* WindowsMenuItemUI::access$000(WindowsMenuItemUI* x0) {
	$init(WindowsMenuItemUI);
	return $nc(x0)->menuItem;
}

void WindowsMenuItemUI::init$() {
	$BasicMenuItemUI::init$();
	$set(this, accessor, $new($WindowsMenuItemUI$1, this));
}

$ComponentUI* WindowsMenuItemUI::createUI($JComponent* c) {
	$init(WindowsMenuItemUI);
	return $new(WindowsMenuItemUI);
}

void WindowsMenuItemUI::updateCheckIcon() {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, getPropertyPrefix());
	if (this->checkIcon == nullptr || $instanceOf($UIResource, this->checkIcon)) {
		$set(this, checkIcon, $UIManager::getIcon($$str({prefix, ".checkIcon"_s})));
		bool isColumnLayout = $MenuItemLayoutHelper::isColumnLayout($nc($($nc(this->menuItem)->getComponentOrientation()))->isLeftToRight(), this->menuItem);
		if (isColumnLayout) {
			$var($MenuItemCheckIconFactory, iconFactory, $cast($MenuItemCheckIconFactory, $UIManager::get($$str({prefix, ".checkIconFactory"_s}))));
			bool var$0 = iconFactory != nullptr && $MenuItemLayoutHelper::useCheckAndArrow(this->menuItem);
			if (var$0 && iconFactory->isCompatible(this->checkIcon, prefix)) {
				$set(this, checkIcon, iconFactory->getIcon(this->menuItem));
			}
		}
	}
}

void WindowsMenuItemUI::installListeners() {
	$BasicMenuItemUI::installListeners();
	$set(this, changeListener, $new($WindowsMenuItemUI$2, this));
	$nc(this->menuItem)->addPropertyChangeListener(this->changeListener);
}

void WindowsMenuItemUI::uninstallListeners() {
	$BasicMenuItemUI::uninstallListeners();
	if (this->changeListener != nullptr) {
		$nc(this->menuItem)->removePropertyChangeListener(this->changeListener);
	}
	$set(this, changeListener, nullptr);
}

void WindowsMenuItemUI::paintText($Graphics* g, $JMenuItem* menuItem, $Rectangle* textRect, $String* text) {
	$useLocalCurrentObjectStackCache();
	if (WindowsMenuItemUI::isVistaPainting()) {
		WindowsMenuItemUI::paintText(this->accessor, g, menuItem, textRect, text);
		return;
	}
	$var($ButtonModel, model, $nc(menuItem)->getModel());
	$var($Color, oldColor, $nc(g)->getColor());
	bool var$0 = $nc(model)->isEnabled();
	if (var$0) {
		bool var$1 = model->isArmed();
		var$0 = (var$1 || ($instanceOf($JMenu, menuItem) && model->isSelected()));
	}
	if (var$0) {
		g->setColor(this->selectionForeground);
	}
	$WindowsGraphicsUtils::paintText(g, menuItem, textRect, text, 0);
	g->setColor(oldColor);
}

void WindowsMenuItemUI::paintBackground($Graphics* g, $JMenuItem* menuItem, $Color* bgColor) {
	if (WindowsMenuItemUI::isVistaPainting()) {
		WindowsMenuItemUI::paintBackground(this->accessor, g, menuItem, bgColor);
		return;
	}
	$BasicMenuItemUI::paintBackground(g, menuItem, bgColor);
}

void WindowsMenuItemUI::paintBackground($WindowsMenuItemUIAccessor* menuItemUI, $Graphics* g, $JMenuItem* menuItem, $Color* bgColor) {
	$init(WindowsMenuItemUI);
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (!WindowsMenuItemUI::$assertionsDisabled && !isVistaPainting(xp)) {
		$throwNew($AssertionError);
	}
	if (isVistaPainting(xp)) {
		int32_t menuWidth = $nc(menuItem)->getWidth();
		int32_t menuHeight = menuItem->getHeight();
		if (menuItem->isOpaque()) {
			$var($Color, oldColor, $nc(g)->getColor());
			g->setColor($(menuItem->getBackground()));
			g->fillRect(0, 0, menuWidth, menuHeight);
			g->setColor(oldColor);
		}
		$TMSchema$Part* part = $nc(menuItemUI)->getPart(menuItem);
		$var($XPStyle$Skin, skin, $nc(xp)->getSkin(menuItem, part));
		$nc(skin)->paintSkin(g, 0, 0, menuWidth, menuHeight, $(menuItemUI->getState(menuItem)));
	}
}

void WindowsMenuItemUI::paintText($WindowsMenuItemUIAccessor* menuItemUI, $Graphics* g, $JMenuItem* menuItem, $Rectangle* textRect, $String* text) {
	$init(WindowsMenuItemUI);
	$useLocalCurrentObjectStackCache();
	if (!WindowsMenuItemUI::$assertionsDisabled && !isVistaPainting()) {
		$throwNew($AssertionError);
	}
	if (isVistaPainting()) {
		$TMSchema$State* state = $nc(menuItemUI)->getState(menuItem);
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(menuItem), g));
		int32_t mnemIndex = $nc(menuItem)->getDisplayedMnemonicIndex();
		if ($WindowsLookAndFeel::isMnemonicHidden() == true) {
			mnemIndex = -1;
		}
		$var($AbstractButton, var$0, static_cast<$AbstractButton*>(menuItem));
		$var($TMSchema$Part, var$1, menuItemUI->getPart(menuItem));
		$var($TMSchema$State, var$2, state);
		$var($Graphics, var$3, g);
		int32_t var$4 = $nc(textRect)->x;
		$WindowsGraphicsUtils::paintXPText(var$0, var$1, var$2, var$3, var$4, textRect->y + $nc(fm)->getAscent(), text, mnemIndex);
	}
}

$TMSchema$State* WindowsMenuItemUI::getState($WindowsMenuItemUIAccessor* menuItemUI, $JMenuItem* menuItem) {
	$init(WindowsMenuItemUI);
	$TMSchema$State* state = nullptr;
	$var($ButtonModel, model, $nc(menuItem)->getModel());
	if ($nc(model)->isArmed()) {
		$init($TMSchema$State);
		state = (model->isEnabled()) ? $TMSchema$State::HOT : $TMSchema$State::DISABLEDHOT;
	} else {
		$init($TMSchema$State);
		state = (model->isEnabled()) ? $TMSchema$State::NORMAL : $TMSchema$State::DISABLED;
	}
	return state;
}

$TMSchema$Part* WindowsMenuItemUI::getPart($WindowsMenuItemUIAccessor* menuItemUI, $JMenuItem* menuItem) {
	$init(WindowsMenuItemUI);
	$init($TMSchema$Part);
	return $TMSchema$Part::MP_POPUPITEM;
}

bool WindowsMenuItemUI::isVistaPainting($XPStyle* xp) {
	$init(WindowsMenuItemUI);
	$init($TMSchema$Part);
	return xp != nullptr && xp->isSkinDefined(nullptr, $TMSchema$Part::MP_POPUPITEM);
}

bool WindowsMenuItemUI::isVistaPainting() {
	$init(WindowsMenuItemUI);
	return isVistaPainting($($XPStyle::getXP()));
}

void clinit$WindowsMenuItemUI($Class* class$) {
	WindowsMenuItemUI::$assertionsDisabled = !WindowsMenuItemUI::class$->desiredAssertionStatus();
}

WindowsMenuItemUI::WindowsMenuItemUI() {
}

$Class* WindowsMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(WindowsMenuItemUI, name, initialize, &_WindowsMenuItemUI_ClassInfo_, clinit$WindowsMenuItemUI, allocate$WindowsMenuItemUI);
	return class$;
}

$Class* WindowsMenuItemUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com