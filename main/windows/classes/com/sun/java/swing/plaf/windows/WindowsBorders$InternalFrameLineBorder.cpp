#include <com/sun/java/swing/plaf/windows/WindowsBorders$InternalFrameLineBorder.h>

#include <com/sun/java/swing/plaf/windows/WindowsBorders.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/border/LineBorder.h>
#include <jcpp.h>

using $WindowsBorders = ::com::sun::java::swing::plaf::windows::WindowsBorders;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $LineBorder = ::javax::swing::border::LineBorder;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsBorders$InternalFrameLineBorder_FieldInfo_[] = {
	{"activeColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(WindowsBorders$InternalFrameLineBorder, activeColor)},
	{"inactiveColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(WindowsBorders$InternalFrameLineBorder, inactiveColor)},
	{}
};

$MethodInfo _WindowsBorders$InternalFrameLineBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;I)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsBorders$InternalFrameLineBorder::*)($Color*,$Color*,int32_t)>(&WindowsBorders$InternalFrameLineBorder::init$))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsBorders$InternalFrameLineBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsBorders$InternalFrameLineBorder", "com.sun.java.swing.plaf.windows.WindowsBorders", "InternalFrameLineBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WindowsBorders$InternalFrameLineBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsBorders$InternalFrameLineBorder",
	"javax.swing.border.LineBorder",
	"javax.swing.plaf.UIResource",
	_WindowsBorders$InternalFrameLineBorder_FieldInfo_,
	_WindowsBorders$InternalFrameLineBorder_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsBorders$InternalFrameLineBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsBorders"
};

$Object* allocate$WindowsBorders$InternalFrameLineBorder($Class* clazz) {
	return $of($alloc(WindowsBorders$InternalFrameLineBorder));
}

int32_t WindowsBorders$InternalFrameLineBorder::hashCode() {
	 return this->$LineBorder::hashCode();
}

bool WindowsBorders$InternalFrameLineBorder::equals(Object$* arg0) {
	 return this->$LineBorder::equals(arg0);
}

$Object* WindowsBorders$InternalFrameLineBorder::clone() {
	 return this->$LineBorder::clone();
}

$String* WindowsBorders$InternalFrameLineBorder::toString() {
	 return this->$LineBorder::toString();
}

void WindowsBorders$InternalFrameLineBorder::finalize() {
	this->$LineBorder::finalize();
}

void WindowsBorders$InternalFrameLineBorder::init$($Color* activeBorderColor, $Color* inactiveBorderColor, int32_t thickness) {
	$LineBorder::init$(activeBorderColor, thickness);
	$set(this, activeColor, activeBorderColor);
	$set(this, inactiveColor, inactiveBorderColor);
}

void WindowsBorders$InternalFrameLineBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($JInternalFrame, jif, nullptr);
	if ($instanceOf($JInternalFrame, c)) {
		$assign(jif, $cast($JInternalFrame, c));
	} else if ($instanceOf($JInternalFrame$JDesktopIcon, c)) {
		$assign(jif, $nc(($cast($JInternalFrame$JDesktopIcon, c)))->getInternalFrame());
	} else {
		return;
	}
	if ($nc(jif)->isSelected()) {
		$set(this, lineColor, this->activeColor);
		$LineBorder::paintBorder(c, g, x, y, width, height);
	} else {
		$set(this, lineColor, this->inactiveColor);
		$LineBorder::paintBorder(c, g, x, y, width, height);
	}
}

WindowsBorders$InternalFrameLineBorder::WindowsBorders$InternalFrameLineBorder() {
}

$Class* WindowsBorders$InternalFrameLineBorder::load$($String* name, bool initialize) {
	$loadClass(WindowsBorders$InternalFrameLineBorder, name, initialize, &_WindowsBorders$InternalFrameLineBorder_ClassInfo_, allocate$WindowsBorders$InternalFrameLineBorder);
	return class$;
}

$Class* WindowsBorders$InternalFrameLineBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com