#include <com/sun/java/swing/plaf/motif/MotifBorders$ButtonBorder.h>

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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/UIManager.h>
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifBorders$ButtonBorder_FieldInfo_[] = {
	{"focus", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifBorders$ButtonBorder, focus)},
	{"shadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifBorders$ButtonBorder, shadow)},
	{"highlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifBorders$ButtonBorder, highlight)},
	{"darkShadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifBorders$ButtonBorder, darkShadow)},
	{}
};

$MethodInfo _MotifBorders$ButtonBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifBorders$ButtonBorder::*)($Color*,$Color*,$Color*,$Color*)>(&MotifBorders$ButtonBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifBorders$ButtonBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifBorders$ButtonBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "ButtonBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifBorders$ButtonBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifBorders$ButtonBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MotifBorders$ButtonBorder_FieldInfo_,
	_MotifBorders$ButtonBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MotifBorders$ButtonBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifBorders"
};

$Object* allocate$MotifBorders$ButtonBorder($Class* clazz) {
	return $of($alloc(MotifBorders$ButtonBorder));
}

int32_t MotifBorders$ButtonBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MotifBorders$ButtonBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MotifBorders$ButtonBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MotifBorders$ButtonBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MotifBorders$ButtonBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MotifBorders$ButtonBorder::init$($Color* shadow, $Color* highlight, $Color* darkShadow, $Color* focus) {
	$AbstractBorder::init$();
	$set(this, focus, $UIManager::getColor("activeCaptionBorder"_s));
	$set(this, shadow, $UIManager::getColor("Button.shadow"_s));
	$set(this, highlight, $UIManager::getColor("Button.light"_s));
	$set(this, shadow, shadow);
	$set(this, highlight, highlight);
	$set(this, darkShadow, darkShadow);
	$set(this, focus, focus);
}

void MotifBorders$ButtonBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	bool isPressed = false;
	bool hasFocus = false;
	bool canBeDefault = false;
	bool isDefault = false;
	if ($instanceOf($AbstractButton, c)) {
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($ButtonModel, model, $nc(b)->getModel());
		bool var$0 = $nc(model)->isArmed();
		isPressed = (var$0 && model->isPressed());
		bool var$1 = (model->isArmed() && isPressed);
		if (!var$1) {
			bool var$2 = b->isFocusPainted();
			var$1 = (var$2 && b->hasFocus());
		}
		hasFocus = var$1;
		if ($instanceOf($JButton, b)) {
			canBeDefault = $nc(($cast($JButton, b)))->isDefaultCapable();
			isDefault = $nc(($cast($JButton, b)))->isDefaultButton();
		}
	}
	int32_t bx1 = x + 1;
	int32_t by1 = y + 1;
	int32_t bx2 = x + w - 2;
	int32_t by2 = y + h - 2;
	if (canBeDefault) {
		if (isDefault) {
			$nc(g)->setColor(this->shadow);
			g->drawLine(x + 3, y + 3, x + 3, y + h - 4);
			g->drawLine(x + 3, y + 3, x + w - 4, y + 3);
			g->setColor(this->highlight);
			g->drawLine(x + 4, y + h - 4, x + w - 4, y + h - 4);
			g->drawLine(x + w - 4, y + 3, x + w - 4, y + h - 4);
		}
		bx1 += 6;
		by1 += 6;
		bx2 -= 6;
		by2 -= 6;
	}
	if (hasFocus) {
		$nc(g)->setColor(this->focus);
		if (isDefault) {
			g->drawRect(x, y, w - 1, h - 1);
		} else {
			g->drawRect(bx1 - 1, by1 - 1, bx2 - bx1 + 2, by2 - by1 + 2);
		}
	}
	$nc(g)->setColor(isPressed ? this->shadow : this->highlight);
	g->drawLine(bx1, by1, bx2, by1);
	g->drawLine(bx1, by1, bx1, by2);
	g->setColor(isPressed ? this->highlight : this->shadow);
	g->drawLine(bx2, by1 + 1, bx2, by2);
	g->drawLine(bx1 + 1, by2, bx2, by2);
}

$Insets* MotifBorders$ButtonBorder::getBorderInsets($Component* c, $Insets* insets) {
	int32_t thickness = ($instanceOf($JButton, c) && $nc(($cast($JButton, c)))->isDefaultCapable()) ? 8 : 2;
	$nc(insets)->set(thickness, thickness, thickness, thickness);
	return insets;
}

MotifBorders$ButtonBorder::MotifBorders$ButtonBorder() {
}

$Class* MotifBorders$ButtonBorder::load$($String* name, bool initialize) {
	$loadClass(MotifBorders$ButtonBorder, name, initialize, &_MotifBorders$ButtonBorder_ClassInfo_, allocate$MotifBorders$ButtonBorder);
	return class$;
}

$Class* MotifBorders$ButtonBorder::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com