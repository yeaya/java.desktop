#include <com/sun/java/swing/plaf/motif/MotifBorders$FocusBorder.h>

#include <com/sun/java/swing/plaf/motif/MotifBorders.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/border/AbstractBorder.h>
#include <jcpp.h>

using $MotifBorders = ::com::sun::java::swing::plaf::motif::MotifBorders;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifBorders$FocusBorder_FieldInfo_[] = {
	{"focus", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifBorders$FocusBorder, focus)},
	{"control", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifBorders$FocusBorder, control)},
	{}
};

$MethodInfo _MotifBorders$FocusBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifBorders$FocusBorder::*)($Color*,$Color*)>(&MotifBorders$FocusBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifBorders$FocusBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifBorders$FocusBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "FocusBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifBorders$FocusBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifBorders$FocusBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MotifBorders$FocusBorder_FieldInfo_,
	_MotifBorders$FocusBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MotifBorders$FocusBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifBorders"
};

$Object* allocate$MotifBorders$FocusBorder($Class* clazz) {
	return $of($alloc(MotifBorders$FocusBorder));
}

int32_t MotifBorders$FocusBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MotifBorders$FocusBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MotifBorders$FocusBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MotifBorders$FocusBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MotifBorders$FocusBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MotifBorders$FocusBorder::init$($Color* control, $Color* focus) {
	$AbstractBorder::init$();
	$set(this, control, control);
	$set(this, focus, focus);
}

void MotifBorders$FocusBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($nc(c)->hasFocus()) {
		$nc(g)->setColor(this->focus);
		g->drawRect(x, y, w - 1, h - 1);
	} else {
		$nc(g)->setColor(this->control);
		g->drawRect(x, y, w - 1, h - 1);
	}
}

$Insets* MotifBorders$FocusBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(1, 1, 1, 1);
	return insets;
}

MotifBorders$FocusBorder::MotifBorders$FocusBorder() {
}

$Class* MotifBorders$FocusBorder::load$($String* name, bool initialize) {
	$loadClass(MotifBorders$FocusBorder, name, initialize, &_MotifBorders$FocusBorder_ClassInfo_, allocate$MotifBorders$FocusBorder);
	return class$;
}

$Class* MotifBorders$FocusBorder::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com