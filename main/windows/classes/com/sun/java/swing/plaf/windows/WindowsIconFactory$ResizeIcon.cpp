#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$ResizeIcon.h>

#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>
#include <java/awt/Color.h>
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
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $WindowsIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsIconFactory$ResizeIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsIconFactory$ResizeIcon::*)()>(&WindowsIconFactory$ResizeIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsIconFactory$ResizeIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$ResizeIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "ResizeIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsIconFactory$ResizeIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory$ResizeIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	nullptr,
	_WindowsIconFactory$ResizeIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsIconFactory$ResizeIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory"
};

$Object* allocate$WindowsIconFactory$ResizeIcon($Class* clazz) {
	return $of($alloc(WindowsIconFactory$ResizeIcon));
}

int32_t WindowsIconFactory$ResizeIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsIconFactory$ResizeIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsIconFactory$ResizeIcon::clone() {
	 return this->$Icon::clone();
}

$String* WindowsIconFactory$ResizeIcon::toString() {
	 return this->$Icon::toString();
}

void WindowsIconFactory$ResizeIcon::finalize() {
	this->$Icon::finalize();
}

void WindowsIconFactory$ResizeIcon::init$() {
}

void WindowsIconFactory$ResizeIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($($UIManager::getColor("InternalFrame.resizeIconHighlight"_s)));
	g->drawLine(0, 11, 11, 0);
	g->drawLine(4, 11, 11, 4);
	g->drawLine(8, 11, 11, 8);
	g->setColor($($UIManager::getColor("InternalFrame.resizeIconShadow"_s)));
	g->drawLine(1, 11, 11, 1);
	g->drawLine(2, 11, 11, 2);
	g->drawLine(5, 11, 11, 5);
	g->drawLine(6, 11, 11, 6);
	g->drawLine(9, 11, 11, 9);
	g->drawLine(10, 11, 11, 10);
}

int32_t WindowsIconFactory$ResizeIcon::getIconWidth() {
	return 13;
}

int32_t WindowsIconFactory$ResizeIcon::getIconHeight() {
	return 13;
}

WindowsIconFactory$ResizeIcon::WindowsIconFactory$ResizeIcon() {
}

$Class* WindowsIconFactory$ResizeIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsIconFactory$ResizeIcon, name, initialize, &_WindowsIconFactory$ResizeIcon_ClassInfo_, allocate$WindowsIconFactory$ResizeIcon);
	return class$;
}

$Class* WindowsIconFactory$ResizeIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com