#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$RadioButtonMenuItemIcon.h>

#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _WindowsIconFactory$RadioButtonMenuItemIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsIconFactory$RadioButtonMenuItemIcon::*)()>(&WindowsIconFactory$RadioButtonMenuItemIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsIconFactory$RadioButtonMenuItemIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$RadioButtonMenuItemIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "RadioButtonMenuItemIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsIconFactory$RadioButtonMenuItemIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory$RadioButtonMenuItemIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_WindowsIconFactory$RadioButtonMenuItemIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsIconFactory$RadioButtonMenuItemIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory"
};

$Object* allocate$WindowsIconFactory$RadioButtonMenuItemIcon($Class* clazz) {
	return $of($alloc(WindowsIconFactory$RadioButtonMenuItemIcon));
}

int32_t WindowsIconFactory$RadioButtonMenuItemIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsIconFactory$RadioButtonMenuItemIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsIconFactory$RadioButtonMenuItemIcon::clone() {
	 return this->$Icon::clone();
}

$String* WindowsIconFactory$RadioButtonMenuItemIcon::toString() {
	 return this->$Icon::toString();
}

void WindowsIconFactory$RadioButtonMenuItemIcon::finalize() {
	this->$Icon::finalize();
}

void WindowsIconFactory$RadioButtonMenuItemIcon::init$() {
}

void WindowsIconFactory$RadioButtonMenuItemIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	if (b->isSelected() == true) {
		int32_t var$0 = x + 3;
		int32_t var$1 = y + 3;
		int32_t var$2 = getIconWidth() - 6;
		$nc(g)->fillRoundRect(var$0, var$1, var$2, getIconHeight() - 6, 4, 4);
	}
}

int32_t WindowsIconFactory$RadioButtonMenuItemIcon::getIconWidth() {
	return 12;
}

int32_t WindowsIconFactory$RadioButtonMenuItemIcon::getIconHeight() {
	return 12;
}

WindowsIconFactory$RadioButtonMenuItemIcon::WindowsIconFactory$RadioButtonMenuItemIcon() {
}

$Class* WindowsIconFactory$RadioButtonMenuItemIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsIconFactory$RadioButtonMenuItemIcon, name, initialize, &_WindowsIconFactory$RadioButtonMenuItemIcon_ClassInfo_, allocate$WindowsIconFactory$RadioButtonMenuItemIcon);
	return class$;
}

$Class* WindowsIconFactory$RadioButtonMenuItemIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com