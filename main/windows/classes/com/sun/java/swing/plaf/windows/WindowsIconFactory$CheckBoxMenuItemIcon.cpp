#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$CheckBoxMenuItemIcon.h>

#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $WindowsIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsIconFactory$CheckBoxMenuItemIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsIconFactory$CheckBoxMenuItemIcon::*)()>(&WindowsIconFactory$CheckBoxMenuItemIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsIconFactory$CheckBoxMenuItemIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$CheckBoxMenuItemIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "CheckBoxMenuItemIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsIconFactory$CheckBoxMenuItemIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory$CheckBoxMenuItemIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_WindowsIconFactory$CheckBoxMenuItemIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsIconFactory$CheckBoxMenuItemIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory"
};

$Object* allocate$WindowsIconFactory$CheckBoxMenuItemIcon($Class* clazz) {
	return $of($alloc(WindowsIconFactory$CheckBoxMenuItemIcon));
}

int32_t WindowsIconFactory$CheckBoxMenuItemIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsIconFactory$CheckBoxMenuItemIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsIconFactory$CheckBoxMenuItemIcon::clone() {
	 return this->$Icon::clone();
}

$String* WindowsIconFactory$CheckBoxMenuItemIcon::toString() {
	 return this->$Icon::toString();
}

void WindowsIconFactory$CheckBoxMenuItemIcon::finalize() {
	this->$Icon::finalize();
}

void WindowsIconFactory$CheckBoxMenuItemIcon::init$() {
}

void WindowsIconFactory$CheckBoxMenuItemIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	bool isSelected = $nc(model)->isSelected();
	if (isSelected) {
		y = y - getIconHeight() / 2;
		$nc(g)->drawLine(x + 9, y + 3, x + 9, y + 3);
		g->drawLine(x + 8, y + 4, x + 9, y + 4);
		g->drawLine(x + 7, y + 5, x + 9, y + 5);
		g->drawLine(x + 6, y + 6, x + 8, y + 6);
		g->drawLine(x + 3, y + 7, x + 7, y + 7);
		g->drawLine(x + 4, y + 8, x + 6, y + 8);
		g->drawLine(x + 5, y + 9, x + 5, y + 9);
		g->drawLine(x + 3, y + 5, x + 3, y + 5);
		g->drawLine(x + 3, y + 6, x + 4, y + 6);
	}
}

int32_t WindowsIconFactory$CheckBoxMenuItemIcon::getIconWidth() {
	return 9;
}

int32_t WindowsIconFactory$CheckBoxMenuItemIcon::getIconHeight() {
	return 9;
}

WindowsIconFactory$CheckBoxMenuItemIcon::WindowsIconFactory$CheckBoxMenuItemIcon() {
}

$Class* WindowsIconFactory$CheckBoxMenuItemIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsIconFactory$CheckBoxMenuItemIcon, name, initialize, &_WindowsIconFactory$CheckBoxMenuItemIcon_ClassInfo_, allocate$WindowsIconFactory$CheckBoxMenuItemIcon);
	return class$;
}

$Class* WindowsIconFactory$CheckBoxMenuItemIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com