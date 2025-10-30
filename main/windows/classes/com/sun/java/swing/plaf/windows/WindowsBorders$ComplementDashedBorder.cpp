#include <com/sun/java/swing/plaf/windows/WindowsBorders$ComplementDashedBorder.h>

#include <com/sun/java/swing/plaf/windows/WindowsBorders.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <jcpp.h>

using $WindowsBorders = ::com::sun::java::swing::plaf::windows::WindowsBorders;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _WindowsBorders$ComplementDashedBorder_FieldInfo_[] = {
	{"origColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(WindowsBorders$ComplementDashedBorder, origColor)},
	{"paintColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(WindowsBorders$ComplementDashedBorder, paintColor)},
	{}
};

$MethodInfo _WindowsBorders$ComplementDashedBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsBorders$ComplementDashedBorder::*)()>(&WindowsBorders$ComplementDashedBorder::init$))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsBorders$ComplementDashedBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsBorders$ComplementDashedBorder", "com.sun.java.swing.plaf.windows.WindowsBorders", "ComplementDashedBorder", $STATIC},
	{}
};

$ClassInfo _WindowsBorders$ComplementDashedBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsBorders$ComplementDashedBorder",
	"javax.swing.border.LineBorder",
	"javax.swing.plaf.UIResource",
	_WindowsBorders$ComplementDashedBorder_FieldInfo_,
	_WindowsBorders$ComplementDashedBorder_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsBorders$ComplementDashedBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsBorders"
};

$Object* allocate$WindowsBorders$ComplementDashedBorder($Class* clazz) {
	return $of($alloc(WindowsBorders$ComplementDashedBorder));
}

int32_t WindowsBorders$ComplementDashedBorder::hashCode() {
	 return this->$LineBorder::hashCode();
}

bool WindowsBorders$ComplementDashedBorder::equals(Object$* arg0) {
	 return this->$LineBorder::equals(arg0);
}

$Object* WindowsBorders$ComplementDashedBorder::clone() {
	 return this->$LineBorder::clone();
}

$String* WindowsBorders$ComplementDashedBorder::toString() {
	 return this->$LineBorder::toString();
}

void WindowsBorders$ComplementDashedBorder::finalize() {
	this->$LineBorder::finalize();
}

void WindowsBorders$ComplementDashedBorder::init$() {
	$LineBorder::init$(nullptr);
}

void WindowsBorders$ComplementDashedBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Color, color, $nc(c)->getBackground());
	if (this->origColor != color) {
		$set(this, origColor, color);
		$set(this, paintColor, $new($Color, ~$nc(this->origColor)->getRGB()));
	}
	$nc(g)->setColor(this->paintColor);
	$BasicGraphicsUtils::drawDashedRect(g, x, y, width, height);
}

WindowsBorders$ComplementDashedBorder::WindowsBorders$ComplementDashedBorder() {
}

$Class* WindowsBorders$ComplementDashedBorder::load$($String* name, bool initialize) {
	$loadClass(WindowsBorders$ComplementDashedBorder, name, initialize, &_WindowsBorders$ComplementDashedBorder_ClassInfo_, allocate$WindowsBorders$ComplementDashedBorder);
	return class$;
}

$Class* WindowsBorders$ComplementDashedBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com