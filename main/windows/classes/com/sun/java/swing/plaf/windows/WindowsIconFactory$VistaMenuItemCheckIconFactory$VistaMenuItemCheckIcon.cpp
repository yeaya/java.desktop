#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsCheckBoxMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsRadioButtonMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef BITMAP
#undef BULLETDISABLED
#undef BULLETNORMAL
#undef CHECKMARKDISABLED
#undef CHECKMARKNORMAL
#undef DISABLED
#undef DISABLEDHOT
#undef DISABLEDPUSHED
#undef MP_POPUPCHECK
#undef MP_POPUPCHECKBACKGROUND
#undef NORMAL
#undef PUSHED

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsCheckBoxMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsCheckBoxMenuItemUI;
using $WindowsIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory;
using $WindowsIconFactory$VistaMenuItemCheckIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$VistaMenuItemCheckIconFactory;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $WindowsMenuItemUIAccessor = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor;
using $WindowsMenuUI = ::com::sun::java::swing::plaf::windows::WindowsMenuUI;
using $WindowsRadioButtonMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsRadioButtonMenuItemUI;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon, $assertionsDisabled)},
	{"menuItem", "Ljavax/swing/JMenuItem;", nullptr, $PRIVATE | $FINAL, $field(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon, menuItem)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljavax/swing/JMenuItem;>;", $PRIVATE | $FINAL, $field(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon, type)},
	{}
};

$MethodInfo _WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JMenuItem;)V", nullptr, 0, $method(static_cast<void(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::*)($JMenuItem*)>(&WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::*)($String*)>(&WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::init$))},
	{"getAccessor", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$WindowsMenuItemUIAccessor*(*)($JMenuItem*)>(&WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::getAccessor))},
	{"getIcon", "()Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(static_cast<$Icon*(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::*)()>(&WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::getIcon))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"getLaFIcon", "()Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(static_cast<$Icon*(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::*)()>(&WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::getLaFIcon))},
	{"isEnabled", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$State;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Component*,$TMSchema$State*)>(&WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::isEnabled))},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"typeToString", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<+Ljavax/swing/JMenuItem;>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Class*)>(&WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::typeToString))},
	{}
};

$InnerClassInfo _WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "VistaMenuItemCheckIconFactory", $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory", "VistaMenuItemCheckIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	_WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon_FieldInfo_,
	_WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory"
};

$Object* allocate$WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon($Class* clazz) {
	return $of($alloc(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon));
}

int32_t WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::clone() {
	 return this->$Icon::clone();
}

$String* WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::toString() {
	 return this->$Icon::toString();
}

void WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::finalize() {
	this->$Icon::finalize();
}

bool WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::$assertionsDisabled = false;

void WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::init$($JMenuItem* menuItem) {
	$set(this, type, $WindowsIconFactory$VistaMenuItemCheckIconFactory::getType(static_cast<$Component*>(menuItem)));
	$set(this, menuItem, menuItem);
}

void WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::init$($String* type) {
	$set(this, type, $WindowsIconFactory$VistaMenuItemCheckIconFactory::getType(type));
	$set(this, menuItem, nullptr);
}

int32_t WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::getIconHeight() {
	$var($Icon, lafIcon, getLaFIcon());
	if (lafIcon != nullptr) {
		return lafIcon->getIconHeight();
	}
	$var($Icon, icon, getIcon());
	int32_t height = 0;
	if (icon != nullptr) {
		height = icon->getIconHeight();
	} else {
		$var($XPStyle, xp, $XPStyle::getXP());
		if (xp != nullptr) {
			$init($TMSchema$Part);
			$var($XPStyle$Skin, skin, xp->getSkin(nullptr, $TMSchema$Part::MP_POPUPCHECK));
			height = $nc(skin)->getHeight();
		} else {
			height = 16;
		}
	}
	height += 2 * 3;
	return height;
}

int32_t WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::getIconWidth() {
	$var($Icon, lafIcon, getLaFIcon());
	if (lafIcon != nullptr) {
		return lafIcon->getIconWidth();
	}
	$var($Icon, icon, getIcon());
	int32_t width = 0;
	if (icon != nullptr) {
		width = icon->getIconWidth() + 2 * 3;
	} else {
		width = $WindowsIconFactory$VistaMenuItemCheckIconFactory::getIconWidth();
	}
	return width;
}

void WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($Icon, lafIcon, getLaFIcon());
	if (lafIcon != nullptr) {
		lafIcon->paintIcon(c, g, x, y);
		return;
	}
	if (!WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::$assertionsDisabled && !(this->menuItem == nullptr || $equals(c, this->menuItem))) {
		$throwNew($AssertionError);
	}
	$var($Icon, icon, getIcon());
	$load($JCheckBoxMenuItem);
	$load($JRadioButtonMenuItem);
	if (this->type == $JCheckBoxMenuItem::class$ || this->type == $JRadioButtonMenuItem::class$) {
		$var($AbstractButton, b, $cast($AbstractButton, c));
		if ($nc(b)->isSelected()) {
			$init($TMSchema$Part);
			$TMSchema$Part* backgroundPart = $TMSchema$Part::MP_POPUPCHECKBACKGROUND;
			$TMSchema$Part* part = $TMSchema$Part::MP_POPUPCHECK;
			$TMSchema$State* backgroundState = nullptr;
			$TMSchema$State* state = nullptr;
			if (isEnabled(c, nullptr)) {
				$init($TMSchema$State);
				backgroundState = (icon != nullptr) ? $TMSchema$State::BITMAP : $TMSchema$State::NORMAL;
				state = (this->type == $JRadioButtonMenuItem::class$) ? $TMSchema$State::BULLETNORMAL : $TMSchema$State::CHECKMARKNORMAL;
			} else {
				$init($TMSchema$State);
				backgroundState = $TMSchema$State::DISABLEDPUSHED;
				state = (this->type == $JRadioButtonMenuItem::class$) ? $TMSchema$State::BULLETDISABLED : $TMSchema$State::CHECKMARKDISABLED;
			}
			$var($XPStyle, xp, $XPStyle::getXP());
			if (xp != nullptr) {
				$var($XPStyle$Skin, skin, nullptr);
				$assign(skin, xp->getSkin(c, backgroundPart));
				$var($Graphics, var$0, g);
				int32_t var$1 = x;
				int32_t var$2 = y;
				int32_t var$3 = getIconWidth();
				$nc(skin)->paintSkin(var$0, var$1, var$2, var$3, getIconHeight(), backgroundState);
				if (icon == nullptr) {
					$assign(skin, xp->getSkin(c, part));
					$nc(skin)->paintSkin(g, x + 3, y + 3, state);
				}
			}
		}
	}
	if (icon != nullptr) {
		icon->paintIcon(c, g, x + 3, y + 3);
	}
}

$WindowsMenuItemUIAccessor* WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::getAccessor($JMenuItem* menuItem) {
	$init(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon);
	$var($WindowsMenuItemUIAccessor, rv, nullptr);
	$var($ButtonUI, uiObject, (menuItem != nullptr) ? $cast($ButtonUI, $nc(menuItem)->getUI()) : ($ButtonUI*)nullptr);
	if ($instanceOf($WindowsMenuItemUI, uiObject)) {
		$assign(rv, $nc(($cast($WindowsMenuItemUI, uiObject)))->accessor);
	} else if ($instanceOf($WindowsMenuUI, uiObject)) {
		$assign(rv, $nc(($cast($WindowsMenuUI, uiObject)))->accessor);
	} else if ($instanceOf($WindowsCheckBoxMenuItemUI, uiObject)) {
		$assign(rv, $nc(($cast($WindowsCheckBoxMenuItemUI, uiObject)))->accessor);
	} else if ($instanceOf($WindowsRadioButtonMenuItemUI, uiObject)) {
		$assign(rv, $nc(($cast($WindowsRadioButtonMenuItemUI, uiObject)))->accessor);
	}
	return rv;
}

bool WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::isEnabled($Component* c, $TMSchema$State* state$renamed) {
	$init(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon);
	$var($TMSchema$State, state, state$renamed);
	if (state == nullptr && $instanceOf($JMenuItem, c)) {
		$var($WindowsMenuItemUIAccessor, accessor, getAccessor($cast($JMenuItem, c)));
		if (accessor != nullptr) {
			state = accessor->getState($cast($JMenuItem, c));
		}
	}
	if (state == nullptr) {
		if (c != nullptr) {
			return c->isEnabled();
		} else {
			return true;
		}
	} else {
		$init($TMSchema$State);
		return (state != $TMSchema$State::DISABLED) && (state != $TMSchema$State::DISABLEDHOT) && (state != $TMSchema$State::DISABLEDPUSHED);
	}
}

$Icon* WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::getIcon() {
	$var($Icon, rv, nullptr);
	if (this->menuItem == nullptr) {
		return rv;
	}
	$var($WindowsMenuItemUIAccessor, accessor, getAccessor(this->menuItem));
	$TMSchema$State* state = (accessor != nullptr) ? $nc(accessor)->getState(this->menuItem) : ($TMSchema$State*)nullptr;
	if (isEnabled(this->menuItem, nullptr)) {
		$init($TMSchema$State);
		if (state == $TMSchema$State::PUSHED) {
			$assign(rv, $nc(this->menuItem)->getPressedIcon());
		} else {
			$assign(rv, $nc(this->menuItem)->getIcon());
		}
	} else {
		$assign(rv, $nc(this->menuItem)->getDisabledIcon());
	}
	return rv;
}

$Icon* WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::getLaFIcon() {
	$var($Icon, rv, $cast($Icon, $nc($($UIManager::getDefaults()))->get($(typeToString(this->type)))));
	if ($instanceOf(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon, rv) && $nc(($cast(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon, rv)))->type == this->type) {
		$assign(rv, nullptr);
	}
	return rv;
}

$String* WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::typeToString($Class* type) {
	$init(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon);
	$load($JMenuItem);
	$load($JMenu);
	$load($JCheckBoxMenuItem);
	$load($JRadioButtonMenuItem);
	if (!WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::$assertionsDisabled && !(type == $JMenuItem::class$ || type == $JMenu::class$ || type == $JCheckBoxMenuItem::class$ || type == $JRadioButtonMenuItem::class$)) {
		$throwNew($AssertionError);
	}
	$var($StringBuilder, sb, $new($StringBuilder, $($nc(type)->getName())));
	sb->delete$(0, sb->lastIndexOf("J"_s) + 1);
	sb->append(".checkIcon"_s);
	return sb->toString();
}

void clinit$WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon($Class* class$) {
	$load($WindowsIconFactory);
	WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::$assertionsDisabled = !$WindowsIconFactory::class$->desiredAssertionStatus();
}

WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon() {
}

$Class* WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon, name, initialize, &_WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon_ClassInfo_, clinit$WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon, allocate$WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon);
	return class$;
}

$Class* WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com