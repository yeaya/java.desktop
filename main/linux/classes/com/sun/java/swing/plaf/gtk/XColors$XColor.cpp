#include <com/sun/java/swing/plaf/gtk/XColors$XColor.h>

#include <com/sun/java/swing/plaf/gtk/XColors.h>
#include <java/awt/Color.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _XColors$XColor_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(XColors$XColor, name)},
	{"red", "I", nullptr, 0, $field(XColors$XColor, red)},
	{"green", "I", nullptr, 0, $field(XColors$XColor, green)},
	{"blue", "I", nullptr, 0, $field(XColors$XColor, blue)},
	{}
};

$MethodInfo _XColors$XColor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;III)V", nullptr, 0, $method(static_cast<void(XColors$XColor::*)($String*,int32_t,int32_t,int32_t)>(&XColors$XColor::init$))},
	{"compareTo", "(Lcom/sun/java/swing/plaf/gtk/XColors$XColor;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toColor", "()Ljava/awt/Color;", nullptr, 0},
	{}
};

$InnerClassInfo _XColors$XColor_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.XColors$XColor", "com.sun.java.swing.plaf.gtk.XColors", "XColor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XColors$XColor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.XColors$XColor",
	"java.lang.Object",
	"java.lang.Comparable",
	_XColors$XColor_FieldInfo_,
	_XColors$XColor_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lcom/sun/java/swing/plaf/gtk/XColors$XColor;>;",
	nullptr,
	_XColors$XColor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.XColors"
};

$Object* allocate$XColors$XColor($Class* clazz) {
	return $of($alloc(XColors$XColor));
}

void XColors$XColor::init$($String* name, int32_t red, int32_t green, int32_t blue) {
	$set(this, name, name);
	this->red = red;
	this->green = green;
	this->blue = blue;
}

$Color* XColors$XColor::toColor() {
	return $new($ColorUIResource, this->red, this->green, this->blue);
}

int32_t XColors$XColor::compareTo(XColors$XColor* o) {
	return $nc(this->name)->compareTo($nc(o)->name);
}

int32_t XColors$XColor::compareTo(Object$* o) {
	return this->compareTo($cast(XColors$XColor, o));
}

XColors$XColor::XColors$XColor() {
}

$Class* XColors$XColor::load$($String* name, bool initialize) {
	$loadClass(XColors$XColor, name, initialize, &_XColors$XColor_ClassInfo_, allocate$XColors$XColor);
	return class$;
}

$Class* XColors$XColor::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com