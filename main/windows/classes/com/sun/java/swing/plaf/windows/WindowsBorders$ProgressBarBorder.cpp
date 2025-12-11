#include <com/sun/java/swing/plaf/windows/WindowsBorders$ProgressBarBorder.h>

#include <com/sun/java/swing/plaf/windows/WindowsBorders.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsBorders$ProgressBarBorder_FieldInfo_[] = {
	{"shadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(WindowsBorders$ProgressBarBorder, shadow)},
	{"highlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(WindowsBorders$ProgressBarBorder, highlight)},
	{}
};

$MethodInfo _WindowsBorders$ProgressBarBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsBorders$ProgressBarBorder::*)($Color*,$Color*)>(&WindowsBorders$ProgressBarBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsBorders$ProgressBarBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsBorders$ProgressBarBorder", "com.sun.java.swing.plaf.windows.WindowsBorders", "ProgressBarBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WindowsBorders$ProgressBarBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsBorders$ProgressBarBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_WindowsBorders$ProgressBarBorder_FieldInfo_,
	_WindowsBorders$ProgressBarBorder_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsBorders$ProgressBarBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsBorders"
};

$Object* allocate$WindowsBorders$ProgressBarBorder($Class* clazz) {
	return $of($alloc(WindowsBorders$ProgressBarBorder));
}

int32_t WindowsBorders$ProgressBarBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool WindowsBorders$ProgressBarBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* WindowsBorders$ProgressBarBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* WindowsBorders$ProgressBarBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void WindowsBorders$ProgressBarBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void WindowsBorders$ProgressBarBorder::init$($Color* shadow, $Color* highlight) {
	$AbstractBorder::init$();
	$set(this, highlight, highlight);
	$set(this, shadow, shadow);
}

void WindowsBorders$ProgressBarBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(g)->setColor(this->shadow);
	g->drawLine(x, y, width - 1, y);
	g->drawLine(x, y, x, height - 1);
	g->setColor(this->highlight);
	g->drawLine(x, height - 1, width - 1, height - 1);
	g->drawLine(width - 1, y, width - 1, height - 1);
}

$Insets* WindowsBorders$ProgressBarBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(1, 1, 1, 1);
	return insets;
}

WindowsBorders$ProgressBarBorder::WindowsBorders$ProgressBarBorder() {
}

$Class* WindowsBorders$ProgressBarBorder::load$($String* name, bool initialize) {
	$loadClass(WindowsBorders$ProgressBarBorder, name, initialize, &_WindowsBorders$ProgressBarBorder_ClassInfo_, allocate$WindowsBorders$ProgressBarBorder);
	return class$;
}

$Class* WindowsBorders$ProgressBarBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com