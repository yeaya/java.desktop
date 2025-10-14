#include <java/awt/Window$1.h>

#include <java/awt/Window.h>
#include <java/awt/geom/Point2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $WindowArray = $Array<::java::awt::Window>;
using $Window = ::java::awt::Window;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$WindowAccessor = ::sun::awt::AWTAccessor$WindowAccessor;

namespace java {
	namespace awt {

$MethodInfo _Window$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Window$1::*)()>(&Window$1::init$))},
	{"calculateSecurityWarningPosition", "(Ljava/awt/Window;DDDD)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getOwnedWindows", "(Ljava/awt/Window;)[Ljava/awt/Window;", nullptr, $PUBLIC},
	{"isAutoRequestFocus", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC},
	{"isTrayIconWindow", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC},
	{"setLWRequestStatus", "(Ljava/awt/Window;Z)V", nullptr, $PUBLIC},
	{"setSecurityWarningSize", "(Ljava/awt/Window;II)V", nullptr, $PUBLIC},
	{"setTrayIconWindow", "(Ljava/awt/Window;Z)V", nullptr, $PUBLIC},
	{"updateWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Window$1_EnclosingMethodInfo_ = {
	"java.awt.Window",
	nullptr,
	nullptr
};

$InnerClassInfo _Window$1_InnerClassesInfo_[] = {
	{"java.awt.Window$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$WindowAccessor", "sun.awt.AWTAccessor", "WindowAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Window$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Window$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$WindowAccessor",
	nullptr,
	_Window$1_MethodInfo_,
	nullptr,
	&_Window$1_EnclosingMethodInfo_,
	_Window$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Window"
};

$Object* allocate$Window$1($Class* clazz) {
	return $of($alloc(Window$1));
}

void Window$1::init$() {
}

void Window$1::updateWindow($Window* window) {
	$nc(window)->updateWindow();
}

void Window$1::setSecurityWarningSize($Window* window, int32_t width, int32_t height) {
	$nc(window)->securityWarningWidth = width;
	window->securityWarningHeight = height;
}

$Point2D* Window$1::calculateSecurityWarningPosition($Window* window, double x, double y, double w, double h) {
	return $nc(window)->calculateSecurityWarningPosition(x, y, w, h);
}

void Window$1::setLWRequestStatus($Window* changed, bool status) {
	$nc(changed)->syncLWRequests = status;
}

bool Window$1::isAutoRequestFocus($Window* w) {
	return $nc(w)->autoRequestFocus;
}

bool Window$1::isTrayIconWindow($Window* w) {
	return $nc(w)->isTrayIconWindow;
}

void Window$1::setTrayIconWindow($Window* w, bool isTrayIconWindow) {
	$nc(w)->isTrayIconWindow = isTrayIconWindow;
}

$WindowArray* Window$1::getOwnedWindows($Window* w) {
	return $nc(w)->getOwnedWindows_NoClientCode();
}

Window$1::Window$1() {
}

$Class* Window$1::load$($String* name, bool initialize) {
	$loadClass(Window$1, name, initialize, &_Window$1_ClassInfo_, allocate$Window$1);
	return class$;
}

$Class* Window$1::class$ = nullptr;

	} // awt
} // java