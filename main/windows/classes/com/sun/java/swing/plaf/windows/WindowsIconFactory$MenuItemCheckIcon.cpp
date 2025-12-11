#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$MenuItemCheckIcon.h>

#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsIconFactory$MenuItemCheckIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsIconFactory$MenuItemCheckIcon::*)()>(&WindowsIconFactory$MenuItemCheckIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsIconFactory$MenuItemCheckIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$MenuItemCheckIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "MenuItemCheckIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsIconFactory$MenuItemCheckIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory$MenuItemCheckIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_WindowsIconFactory$MenuItemCheckIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsIconFactory$MenuItemCheckIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory"
};

$Object* allocate$WindowsIconFactory$MenuItemCheckIcon($Class* clazz) {
	return $of($alloc(WindowsIconFactory$MenuItemCheckIcon));
}

int32_t WindowsIconFactory$MenuItemCheckIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsIconFactory$MenuItemCheckIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsIconFactory$MenuItemCheckIcon::clone() {
	 return this->$Icon::clone();
}

$String* WindowsIconFactory$MenuItemCheckIcon::toString() {
	 return this->$Icon::toString();
}

void WindowsIconFactory$MenuItemCheckIcon::finalize() {
	this->$Icon::finalize();
}

void WindowsIconFactory$MenuItemCheckIcon::init$() {
}

void WindowsIconFactory$MenuItemCheckIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t WindowsIconFactory$MenuItemCheckIcon::getIconWidth() {
	return 9;
}

int32_t WindowsIconFactory$MenuItemCheckIcon::getIconHeight() {
	return 9;
}

WindowsIconFactory$MenuItemCheckIcon::WindowsIconFactory$MenuItemCheckIcon() {
}

$Class* WindowsIconFactory$MenuItemCheckIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsIconFactory$MenuItemCheckIcon, name, initialize, &_WindowsIconFactory$MenuItemCheckIcon_ClassInfo_, allocate$WindowsIconFactory$MenuItemCheckIcon);
	return class$;
}

$Class* WindowsIconFactory$MenuItemCheckIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com