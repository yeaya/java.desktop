#include <com/sun/java/swing/plaf/motif/MotifBorders$BevelBorder.h>

#include <com/sun/java/swing/plaf/motif/MotifBorders.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
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
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifBorders$BevelBorder_FieldInfo_[] = {
	{"darkShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifBorders$BevelBorder, darkShadow)},
	{"lightShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifBorders$BevelBorder, lightShadow)},
	{"isRaised", "Z", nullptr, $PRIVATE, $field(MotifBorders$BevelBorder, isRaised)},
	{}
};

$MethodInfo _MotifBorders$BevelBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ZLjava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifBorders$BevelBorder::*)(bool,$Color*,$Color*)>(&MotifBorders$BevelBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isOpaque", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifBorders$BevelBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifBorders$BevelBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "BevelBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifBorders$BevelBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifBorders$BevelBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MotifBorders$BevelBorder_FieldInfo_,
	_MotifBorders$BevelBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MotifBorders$BevelBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifBorders"
};

$Object* allocate$MotifBorders$BevelBorder($Class* clazz) {
	return $of($alloc(MotifBorders$BevelBorder));
}

int32_t MotifBorders$BevelBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MotifBorders$BevelBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MotifBorders$BevelBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MotifBorders$BevelBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MotifBorders$BevelBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MotifBorders$BevelBorder::init$(bool isRaised, $Color* darkShadow, $Color* lightShadow) {
	$AbstractBorder::init$();
	$set(this, darkShadow, $UIManager::getColor("controlShadow"_s));
	$set(this, lightShadow, $UIManager::getColor("controlLtHighlight"_s));
	this->isRaised = isRaised;
	$set(this, darkShadow, darkShadow);
	$set(this, lightShadow, lightShadow);
}

void MotifBorders$BevelBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->setColor((this->isRaised) ? this->lightShadow : this->darkShadow);
	g->drawLine(x, y, x + w - 1, y);
	g->drawLine(x, y + h - 1, x, y + 1);
	g->setColor((this->isRaised) ? this->darkShadow : this->lightShadow);
	g->drawLine(x + 1, y + h - 1, x + w - 1, y + h - 1);
	g->drawLine(x + w - 1, y + h - 1, x + w - 1, y + 1);
}

$Insets* MotifBorders$BevelBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(1, 1, 1, 1);
	return insets;
}

bool MotifBorders$BevelBorder::isOpaque($Component* c) {
	return true;
}

MotifBorders$BevelBorder::MotifBorders$BevelBorder() {
}

$Class* MotifBorders$BevelBorder::load$($String* name, bool initialize) {
	$loadClass(MotifBorders$BevelBorder, name, initialize, &_MotifBorders$BevelBorder_ClassInfo_, allocate$MotifBorders$BevelBorder);
	return class$;
}

$Class* MotifBorders$BevelBorder::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com