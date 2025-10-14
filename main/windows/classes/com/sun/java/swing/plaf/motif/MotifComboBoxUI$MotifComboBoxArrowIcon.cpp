#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboBoxArrowIcon.h>

#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $MotifComboBoxUI = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifComboBoxUI$MotifComboBoxArrowIcon_FieldInfo_[] = {
	{"lightShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifComboBoxUI$MotifComboBoxArrowIcon, lightShadow)},
	{"darkShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifComboBoxUI$MotifComboBoxArrowIcon, darkShadow)},
	{"fill", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifComboBoxUI$MotifComboBoxArrowIcon, fill)},
	{}
};

$MethodInfo _MotifComboBoxUI$MotifComboBoxArrowIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifComboBoxUI$MotifComboBoxArrowIcon::*)($Color*,$Color*,$Color*)>(&MotifComboBoxUI$MotifComboBoxArrowIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifComboBoxUI$MotifComboBoxArrowIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboBoxArrowIcon", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "MotifComboBoxArrowIcon", $STATIC},
	{}
};

$ClassInfo _MotifComboBoxUI$MotifComboBoxArrowIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboBoxArrowIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	_MotifComboBoxUI$MotifComboBoxArrowIcon_FieldInfo_,
	_MotifComboBoxUI$MotifComboBoxArrowIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MotifComboBoxUI$MotifComboBoxArrowIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI"
};

$Object* allocate$MotifComboBoxUI$MotifComboBoxArrowIcon($Class* clazz) {
	return $of($alloc(MotifComboBoxUI$MotifComboBoxArrowIcon));
}

int32_t MotifComboBoxUI$MotifComboBoxArrowIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MotifComboBoxUI$MotifComboBoxArrowIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MotifComboBoxUI$MotifComboBoxArrowIcon::clone() {
	 return this->$Icon::clone();
}

$String* MotifComboBoxUI$MotifComboBoxArrowIcon::toString() {
	 return this->$Icon::toString();
}

void MotifComboBoxUI$MotifComboBoxArrowIcon::finalize() {
	this->$Icon::finalize();
}

void MotifComboBoxUI$MotifComboBoxArrowIcon::init$($Color* lightShadow, $Color* darkShadow, $Color* fill) {
	$set(this, lightShadow, lightShadow);
	$set(this, darkShadow, darkShadow);
	$set(this, fill, fill);
}

void MotifComboBoxUI$MotifComboBoxArrowIcon::paintIcon($Component* c, $Graphics* g, int32_t xo, int32_t yo) {
	int32_t w = getIconWidth();
	int32_t h = getIconHeight();
	int32_t x1 = xo + w - 1;
	int32_t y1 = yo;
	int32_t x2 = xo + w / 2;
	int32_t y2 = yo + h - 1;
	$nc(g)->setColor(this->fill);
	g->fillPolygon($$new($ints, {
		xo,
		x1,
		x2
	}), $$new($ints, {
		yo,
		y1,
		y2
	}), 3);
	g->setColor(this->lightShadow);
	g->drawLine(xo, yo, x1, y1);
	g->drawLine(xo, yo + 1, x2, y2);
	g->drawLine(xo, yo + 1, x1, y1 + 1);
	g->drawLine(xo + 1, yo + 1, x2, y2 - 1);
	g->setColor(this->darkShadow);
	g->drawLine(x1, y1 + 1, x2, y2);
	g->drawLine(x1 - 1, y1 + 1, x2, y2 - 1);
	g->drawLine(x1 - 1, y1 + 1, x1, y1 + 1);
	g->drawLine(x2, y2, x2, y2);
}

int32_t MotifComboBoxUI$MotifComboBoxArrowIcon::getIconWidth() {
	return 11;
}

int32_t MotifComboBoxUI$MotifComboBoxArrowIcon::getIconHeight() {
	return 11;
}

MotifComboBoxUI$MotifComboBoxArrowIcon::MotifComboBoxUI$MotifComboBoxArrowIcon() {
}

$Class* MotifComboBoxUI$MotifComboBoxArrowIcon::load$($String* name, bool initialize) {
	$loadClass(MotifComboBoxUI$MotifComboBoxArrowIcon, name, initialize, &_MotifComboBoxUI$MotifComboBoxArrowIcon_ClassInfo_, allocate$MotifComboBoxUI$MotifComboBoxArrowIcon);
	return class$;
}

$Class* MotifComboBoxUI$MotifComboBoxArrowIcon::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com