#include <com/sun/java/swing/plaf/motif/MotifIconFactory$MenuArrowIcon.h>

#include <com/sun/java/swing/plaf/motif/MotifIconFactory.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
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
using $ComponentOrientation = ::java::awt::ComponentOrientation;
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

$FieldInfo _MotifIconFactory$MenuArrowIcon_FieldInfo_[] = {
	{"focus", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifIconFactory$MenuArrowIcon, focus)},
	{"shadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifIconFactory$MenuArrowIcon, shadow)},
	{"highlight", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifIconFactory$MenuArrowIcon, highlight)},
	{}
};

$MethodInfo _MotifIconFactory$MenuArrowIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MotifIconFactory$MenuArrowIcon::*)()>(&MotifIconFactory$MenuArrowIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifIconFactory$MenuArrowIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifIconFactory$MenuArrowIcon", "com.sun.java.swing.plaf.motif.MotifIconFactory", "MenuArrowIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MotifIconFactory$MenuArrowIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifIconFactory$MenuArrowIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	_MotifIconFactory$MenuArrowIcon_FieldInfo_,
	_MotifIconFactory$MenuArrowIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MotifIconFactory$MenuArrowIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifIconFactory"
};

$Object* allocate$MotifIconFactory$MenuArrowIcon($Class* clazz) {
	return $of($alloc(MotifIconFactory$MenuArrowIcon));
}

int32_t MotifIconFactory$MenuArrowIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MotifIconFactory$MenuArrowIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MotifIconFactory$MenuArrowIcon::clone() {
	 return this->$Icon::clone();
}

$String* MotifIconFactory$MenuArrowIcon::toString() {
	 return this->$Icon::toString();
}

void MotifIconFactory$MenuArrowIcon::finalize() {
	this->$Icon::finalize();
}

void MotifIconFactory$MenuArrowIcon::init$() {
	$set(this, focus, $UIManager::getColor("windowBorder"_s));
	$set(this, shadow, $UIManager::getColor("controlShadow"_s));
	$set(this, highlight, $UIManager::getColor("controlHighlight"_s));
}

void MotifIconFactory$MenuArrowIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	int32_t w = getIconWidth();
	int32_t h = getIconHeight();
	$var($Color, oldColor, $nc(g)->getColor());
	if ($nc(model)->isSelected()) {
		if ($nc($($nc(c)->getComponentOrientation()))->isLeftToRight()) {
			g->setColor(this->shadow);
			g->fillRect(x + 1, y + 1, 2, h);
			g->drawLine(x + 4, y + 2, x + 4, y + 2);
			g->drawLine(x + 6, y + 3, x + 6, y + 3);
			g->drawLine(x + 8, y + 4, x + 8, y + 5);
			g->setColor(this->focus);
			g->fillRect(x + 2, y + 2, 2, h - 2);
			g->fillRect(x + 4, y + 3, 2, h - 4);
			g->fillRect(x + 6, y + 4, 2, h - 6);
			g->setColor(this->highlight);
			g->drawLine(x + 2, y + h, x + 2, y + h);
			g->drawLine(x + 4, y + h - 1, x + 4, y + h - 1);
			g->drawLine(x + 6, y + h - 2, x + 6, y + h - 2);
			g->drawLine(x + 8, y + h - 4, x + 8, y + h - 3);
		} else {
			g->setColor(this->highlight);
			g->fillRect(x + 7, y + 1, 2, 10);
			g->drawLine(x + 5, y + 9, x + 5, y + 9);
			g->drawLine(x + 3, y + 8, x + 3, y + 8);
			g->drawLine(x + 1, y + 6, x + 1, y + 7);
			g->setColor(this->focus);
			g->fillRect(x + 6, y + 2, 2, 8);
			g->fillRect(x + 4, y + 3, 2, 6);
			g->fillRect(x + 2, y + 4, 2, 4);
			g->setColor(this->shadow);
			g->drawLine(x + 1, y + 4, x + 1, y + 5);
			g->drawLine(x + 3, y + 3, x + 3, y + 3);
			g->drawLine(x + 5, y + 2, x + 5, y + 2);
			g->drawLine(x + 7, y + 1, x + 7, y + 1);
		}
	} else if ($nc($(c->getComponentOrientation()))->isLeftToRight()) {
		g->setColor(this->highlight);
		g->drawLine(x + 1, y + 1, x + 1, y + h);
		g->drawLine(x + 2, y + 1, x + 2, y + h - 2);
		g->fillRect(x + 3, y + 2, 2, 2);
		g->fillRect(x + 5, y + 3, 2, 2);
		g->fillRect(x + 7, y + 4, 2, 2);
		g->setColor(this->shadow);
		g->drawLine(x + 2, y + h - 1, x + 2, y + h);
		g->fillRect(x + 3, y + h - 2, 2, 2);
		g->fillRect(x + 5, y + h - 3, 2, 2);
		g->fillRect(x + 7, y + h - 4, 2, 2);
		g->setColor(oldColor);
	} else {
		g->setColor(this->highlight);
		g->fillRect(x + 1, y + 4, 2, 2);
		g->fillRect(x + 3, y + 3, 2, 2);
		g->fillRect(x + 5, y + 2, 2, 2);
		g->drawLine(x + 7, y + 1, x + 7, y + 2);
		g->setColor(this->shadow);
		g->fillRect(x + 1, y + h - 4, 2, 2);
		g->fillRect(x + 3, y + h - 3, 2, 2);
		g->fillRect(x + 5, y + h - 2, 2, 2);
		g->drawLine(x + 7, y + 3, x + 7, y + h);
		g->drawLine(x + 8, y + 1, x + 8, y + h);
		g->setColor(oldColor);
	}
}

int32_t MotifIconFactory$MenuArrowIcon::getIconWidth() {
	return 10;
}

int32_t MotifIconFactory$MenuArrowIcon::getIconHeight() {
	return 10;
}

MotifIconFactory$MenuArrowIcon::MotifIconFactory$MenuArrowIcon() {
}

$Class* MotifIconFactory$MenuArrowIcon::load$($String* name, bool initialize) {
	$loadClass(MotifIconFactory$MenuArrowIcon, name, initialize, &_MotifIconFactory$MenuArrowIcon_ClassInfo_, allocate$MotifIconFactory$MenuArrowIcon);
	return class$;
}

$Class* MotifIconFactory$MenuArrowIcon::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com