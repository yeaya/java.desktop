#include <com/sun/java/swing/plaf/windows/WindowsBorders$DashedBorder.h>

#include <com/sun/java/swing/plaf/windows/WindowsBorders.h>
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
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <jcpp.h>

using $WindowsBorders = ::com::sun::java::swing::plaf::windows::WindowsBorders;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LineBorder = ::javax::swing::border::LineBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsBorders$DashedBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsBorders$DashedBorder::*)($Color*)>(&WindowsBorders$DashedBorder::init$))},
	{"<init>", "(Ljava/awt/Color;I)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsBorders$DashedBorder::*)($Color*,int32_t)>(&WindowsBorders$DashedBorder::init$))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsBorders$DashedBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsBorders$DashedBorder", "com.sun.java.swing.plaf.windows.WindowsBorders", "DashedBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WindowsBorders$DashedBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsBorders$DashedBorder",
	"javax.swing.border.LineBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_WindowsBorders$DashedBorder_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsBorders$DashedBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsBorders"
};

$Object* allocate$WindowsBorders$DashedBorder($Class* clazz) {
	return $of($alloc(WindowsBorders$DashedBorder));
}

int32_t WindowsBorders$DashedBorder::hashCode() {
	 return this->$LineBorder::hashCode();
}

bool WindowsBorders$DashedBorder::equals(Object$* arg0) {
	 return this->$LineBorder::equals(arg0);
}

$Object* WindowsBorders$DashedBorder::clone() {
	 return this->$LineBorder::clone();
}

$String* WindowsBorders$DashedBorder::toString() {
	 return this->$LineBorder::toString();
}

void WindowsBorders$DashedBorder::finalize() {
	this->$LineBorder::finalize();
}

void WindowsBorders$DashedBorder::init$($Color* color) {
	$LineBorder::init$(color);
}

void WindowsBorders$DashedBorder::init$($Color* color, int32_t thickness) {
	$LineBorder::init$(color, thickness);
}

void WindowsBorders$DashedBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Color, oldColor, $nc(g)->getColor());
	int32_t i = 0;
	g->setColor(this->lineColor);
	for (i = 0; i < this->thickness; ++i) {
		$BasicGraphicsUtils::drawDashedRect(g, x + i, y + i, width - i - i, height - i - i);
	}
	g->setColor(oldColor);
}

WindowsBorders$DashedBorder::WindowsBorders$DashedBorder() {
}

$Class* WindowsBorders$DashedBorder::load$($String* name, bool initialize) {
	$loadClass(WindowsBorders$DashedBorder, name, initialize, &_WindowsBorders$DashedBorder_ClassInfo_, allocate$WindowsBorders$DashedBorder);
	return class$;
}

$Class* WindowsBorders$DashedBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com