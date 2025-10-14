#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$MenuItemArrowIcon.h>

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
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $WindowsIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsIconFactory$MenuItemArrowIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsIconFactory$MenuItemArrowIcon::*)()>(&WindowsIconFactory$MenuItemArrowIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsIconFactory$MenuItemArrowIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$MenuItemArrowIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "MenuItemArrowIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsIconFactory$MenuItemArrowIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory$MenuItemArrowIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_WindowsIconFactory$MenuItemArrowIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsIconFactory$MenuItemArrowIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory"
};

$Object* allocate$WindowsIconFactory$MenuItemArrowIcon($Class* clazz) {
	return $of($alloc(WindowsIconFactory$MenuItemArrowIcon));
}

int32_t WindowsIconFactory$MenuItemArrowIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsIconFactory$MenuItemArrowIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsIconFactory$MenuItemArrowIcon::clone() {
	 return this->$Icon::clone();
}

$String* WindowsIconFactory$MenuItemArrowIcon::toString() {
	 return this->$Icon::toString();
}

void WindowsIconFactory$MenuItemArrowIcon::finalize() {
	this->$Icon::finalize();
}

void WindowsIconFactory$MenuItemArrowIcon::init$() {
}

void WindowsIconFactory$MenuItemArrowIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t WindowsIconFactory$MenuItemArrowIcon::getIconWidth() {
	return 4;
}

int32_t WindowsIconFactory$MenuItemArrowIcon::getIconHeight() {
	return 8;
}

WindowsIconFactory$MenuItemArrowIcon::WindowsIconFactory$MenuItemArrowIcon() {
}

$Class* WindowsIconFactory$MenuItemArrowIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsIconFactory$MenuItemArrowIcon, name, initialize, &_WindowsIconFactory$MenuItemArrowIcon_ClassInfo_, allocate$WindowsIconFactory$MenuItemArrowIcon);
	return class$;
}

$Class* WindowsIconFactory$MenuItemArrowIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com