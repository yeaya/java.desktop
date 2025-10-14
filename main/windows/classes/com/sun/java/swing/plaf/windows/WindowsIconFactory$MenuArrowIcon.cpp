#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$MenuArrowIcon.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

#undef DISABLED
#undef MP_POPUPSUBMENU
#undef NORMAL

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $WindowsIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JMenuItem = ::javax::swing::JMenuItem;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsIconFactory$MenuArrowIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsIconFactory$MenuArrowIcon::*)()>(&WindowsIconFactory$MenuArrowIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsIconFactory$MenuArrowIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$MenuArrowIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "MenuArrowIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsIconFactory$MenuArrowIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory$MenuArrowIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_WindowsIconFactory$MenuArrowIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsIconFactory$MenuArrowIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory"
};

$Object* allocate$WindowsIconFactory$MenuArrowIcon($Class* clazz) {
	return $of($alloc(WindowsIconFactory$MenuArrowIcon));
}

int32_t WindowsIconFactory$MenuArrowIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsIconFactory$MenuArrowIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsIconFactory$MenuArrowIcon::clone() {
	 return this->$Icon::clone();
}

$String* WindowsIconFactory$MenuArrowIcon::toString() {
	 return this->$Icon::toString();
}

void WindowsIconFactory$MenuArrowIcon::finalize() {
	this->$Icon::finalize();
}

void WindowsIconFactory$MenuArrowIcon::init$() {
}

void WindowsIconFactory$MenuArrowIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($XPStyle, xp, $XPStyle::getXP());
	if ($WindowsMenuItemUI::isVistaPainting(xp)) {
		$init($TMSchema$State);
		$TMSchema$State* state = $TMSchema$State::NORMAL;
		if ($instanceOf($JMenuItem, c)) {
			state = $nc($($nc(($cast($JMenuItem, c)))->getModel()))->isEnabled() ? $TMSchema$State::NORMAL : $TMSchema$State::DISABLED;
		}
		$init($TMSchema$Part);
		$var($XPStyle$Skin, skin, $nc(xp)->getSkin(c, $TMSchema$Part::MP_POPUPSUBMENU));
		if ($WindowsGraphicsUtils::isLeftToRight(c)) {
			$nc(skin)->paintSkin(g, x, y, state);
		} else {
			$var($Graphics2D, g2d, $cast($Graphics2D, $nc(g)->create()));
			$nc(g2d)->translate(x + $nc(skin)->getWidth(), y);
			g2d->scale((double)-1, (double)1);
			$nc(skin)->paintSkin(g2d, 0, 0, state);
			g2d->dispose();
		}
	} else {
		$nc(g)->translate(x, y);
		if ($WindowsGraphicsUtils::isLeftToRight(c)) {
			g->drawLine(0, 0, 0, 7);
			g->drawLine(1, 1, 1, 6);
			g->drawLine(2, 2, 2, 5);
			g->drawLine(3, 3, 3, 4);
		} else {
			g->drawLine(4, 0, 4, 7);
			g->drawLine(3, 1, 3, 6);
			g->drawLine(2, 2, 2, 5);
			g->drawLine(1, 3, 1, 4);
		}
		g->translate(-x, -y);
	}
}

int32_t WindowsIconFactory$MenuArrowIcon::getIconWidth() {
	$var($XPStyle, xp, $XPStyle::getXP());
	if ($WindowsMenuItemUI::isVistaPainting(xp)) {
		$init($TMSchema$Part);
		$var($XPStyle$Skin, skin, $nc(xp)->getSkin(nullptr, $TMSchema$Part::MP_POPUPSUBMENU));
		return $nc(skin)->getWidth();
	} else {
		return 4;
	}
}

int32_t WindowsIconFactory$MenuArrowIcon::getIconHeight() {
	$var($XPStyle, xp, $XPStyle::getXP());
	if ($WindowsMenuItemUI::isVistaPainting(xp)) {
		$init($TMSchema$Part);
		$var($XPStyle$Skin, skin, $nc(xp)->getSkin(nullptr, $TMSchema$Part::MP_POPUPSUBMENU));
		return $nc(skin)->getHeight();
	} else {
		return 8;
	}
}

WindowsIconFactory$MenuArrowIcon::WindowsIconFactory$MenuArrowIcon() {
}

$Class* WindowsIconFactory$MenuArrowIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsIconFactory$MenuArrowIcon, name, initialize, &_WindowsIconFactory$MenuArrowIcon_ClassInfo_, allocate$WindowsIconFactory$MenuArrowIcon);
	return class$;
}

$Class* WindowsIconFactory$MenuArrowIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com