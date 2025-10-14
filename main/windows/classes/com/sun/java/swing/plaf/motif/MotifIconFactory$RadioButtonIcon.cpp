#include <com/sun/java/swing/plaf/motif/MotifIconFactory$RadioButtonIcon.h>

#include <com/sun/java/swing/plaf/motif/MotifIconFactory.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $MotifIconFactory = ::com::sun::java::swing::plaf::motif::MotifIconFactory;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifIconFactory$RadioButtonIcon_FieldInfo_[] = {
	{"dot", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifIconFactory$RadioButtonIcon, dot)},
	{"highlight", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifIconFactory$RadioButtonIcon, highlight)},
	{"shadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifIconFactory$RadioButtonIcon, shadow)},
	{}
};

$MethodInfo _MotifIconFactory$RadioButtonIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MotifIconFactory$RadioButtonIcon::*)()>(&MotifIconFactory$RadioButtonIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifIconFactory$RadioButtonIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifIconFactory$RadioButtonIcon", "com.sun.java.swing.plaf.motif.MotifIconFactory", "RadioButtonIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MotifIconFactory$RadioButtonIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifIconFactory$RadioButtonIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	_MotifIconFactory$RadioButtonIcon_FieldInfo_,
	_MotifIconFactory$RadioButtonIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MotifIconFactory$RadioButtonIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifIconFactory"
};

$Object* allocate$MotifIconFactory$RadioButtonIcon($Class* clazz) {
	return $of($alloc(MotifIconFactory$RadioButtonIcon));
}

int32_t MotifIconFactory$RadioButtonIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MotifIconFactory$RadioButtonIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MotifIconFactory$RadioButtonIcon::clone() {
	 return this->$Icon::clone();
}

$String* MotifIconFactory$RadioButtonIcon::toString() {
	 return this->$Icon::toString();
}

void MotifIconFactory$RadioButtonIcon::finalize() {
	this->$Icon::finalize();
}

void MotifIconFactory$RadioButtonIcon::init$() {
	$set(this, dot, $UIManager::getColor("activeCaptionBorder"_s));
	$set(this, highlight, $UIManager::getColor("controlHighlight"_s));
	$set(this, shadow, $UIManager::getColor("controlShadow"_s));
}

void MotifIconFactory$RadioButtonIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	int32_t w = getIconWidth();
	int32_t h = getIconHeight();
	bool isPressed = $nc(model)->isPressed();
	bool isArmed = model->isArmed();
	bool isEnabled = model->isEnabled();
	bool isSelected = model->isSelected();
	bool checkIn = ((isPressed && !isArmed && isSelected) || (isPressed && isArmed && !isSelected) || (!isPressed && isArmed && isSelected || (!isPressed && !isArmed && isSelected)));
	if (checkIn) {
		$nc(g)->setColor(this->shadow);
		g->drawArc(x, y, w - 1, h - 1, 45, 180);
		g->setColor(this->highlight);
		g->drawArc(x, y, w - 1, h - 1, 45, -180);
		g->setColor(this->dot);
		g->fillOval(x + 3, y + 3, 7, 7);
	} else {
		$nc(g)->setColor(this->highlight);
		g->drawArc(x, y, w - 1, h - 1, 45, 180);
		g->setColor(this->shadow);
		g->drawArc(x, y, w - 1, h - 1, 45, -180);
	}
}

int32_t MotifIconFactory$RadioButtonIcon::getIconWidth() {
	return 14;
}

int32_t MotifIconFactory$RadioButtonIcon::getIconHeight() {
	return 14;
}

MotifIconFactory$RadioButtonIcon::MotifIconFactory$RadioButtonIcon() {
}

$Class* MotifIconFactory$RadioButtonIcon::load$($String* name, bool initialize) {
	$loadClass(MotifIconFactory$RadioButtonIcon, name, initialize, &_MotifIconFactory$RadioButtonIcon_ClassInfo_, allocate$MotifIconFactory$RadioButtonIcon);
	return class$;
}

$Class* MotifIconFactory$RadioButtonIcon::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com