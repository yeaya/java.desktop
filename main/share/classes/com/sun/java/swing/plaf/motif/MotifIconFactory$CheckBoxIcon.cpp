#include <com/sun/java/swing/plaf/motif/MotifIconFactory$CheckBoxIcon.h>

#include <com/sun/java/swing/plaf/motif/MotifIconFactory.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JCheckBox = ::javax::swing::JCheckBox;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifIconFactory$CheckBoxIcon_FieldInfo_[] = {
	{"csize", "I", nullptr, $STATIC | $FINAL, $constField(MotifIconFactory$CheckBoxIcon, csize)},
	{"control", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifIconFactory$CheckBoxIcon, control)},
	{"foreground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifIconFactory$CheckBoxIcon, foreground)},
	{"shadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifIconFactory$CheckBoxIcon, shadow)},
	{"highlight", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifIconFactory$CheckBoxIcon, highlight)},
	{"lightShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifIconFactory$CheckBoxIcon, lightShadow)},
	{}
};

$MethodInfo _MotifIconFactory$CheckBoxIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MotifIconFactory$CheckBoxIcon::*)()>(&MotifIconFactory$CheckBoxIcon::init$))},
	{"drawCheckBezel", "(Ljava/awt/Graphics;IIIZZZZ)V", nullptr, $PUBLIC},
	{"drawCheckBezelOut", "(Ljava/awt/Graphics;III)V", nullptr, $PUBLIC},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifIconFactory$CheckBoxIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifIconFactory$CheckBoxIcon", "com.sun.java.swing.plaf.motif.MotifIconFactory", "CheckBoxIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MotifIconFactory$CheckBoxIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifIconFactory$CheckBoxIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	_MotifIconFactory$CheckBoxIcon_FieldInfo_,
	_MotifIconFactory$CheckBoxIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MotifIconFactory$CheckBoxIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifIconFactory"
};

$Object* allocate$MotifIconFactory$CheckBoxIcon($Class* clazz) {
	return $of($alloc(MotifIconFactory$CheckBoxIcon));
}

int32_t MotifIconFactory$CheckBoxIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MotifIconFactory$CheckBoxIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MotifIconFactory$CheckBoxIcon::clone() {
	 return this->$Icon::clone();
}

$String* MotifIconFactory$CheckBoxIcon::toString() {
	 return this->$Icon::toString();
}

void MotifIconFactory$CheckBoxIcon::finalize() {
	this->$Icon::finalize();
}

void MotifIconFactory$CheckBoxIcon::init$() {
	$set(this, control, $UIManager::getColor("control"_s));
	$set(this, foreground, $UIManager::getColor("CheckBox.foreground"_s));
	$set(this, shadow, $UIManager::getColor("controlShadow"_s));
	$set(this, highlight, $UIManager::getColor("controlHighlight"_s));
	$set(this, lightShadow, $UIManager::getColor("controlLightShadow"_s));
}

void MotifIconFactory$CheckBoxIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	bool flat = false;
	if ($instanceOf($JCheckBox, b)) {
		flat = $nc(($cast($JCheckBox, b)))->isBorderPaintedFlat();
	}
	bool isPressed = $nc(model)->isPressed();
	bool isArmed = model->isArmed();
	bool isEnabled = model->isEnabled();
	bool isSelected = model->isSelected();
	bool checkToggleIn = ((isPressed && !isArmed && isSelected) || (isPressed && isArmed && !isSelected));
	bool uncheckToggleOut = ((isPressed && !isArmed && !isSelected) || (isPressed && isArmed && isSelected));
	bool checkIn = (!isPressed && isArmed && isSelected || (!isPressed && !isArmed && isSelected));
	if (flat) {
		$nc(g)->setColor(this->shadow);
		g->drawRect(x + 2, y, MotifIconFactory$CheckBoxIcon::csize - 1, MotifIconFactory$CheckBoxIcon::csize - 1);
		if (uncheckToggleOut || checkToggleIn) {
			g->setColor(this->control);
			g->fillRect(x + 3, y + 1, MotifIconFactory$CheckBoxIcon::csize - 2, MotifIconFactory$CheckBoxIcon::csize - 2);
		}
	}
	if (checkToggleIn) {
		drawCheckBezel(g, x, y, MotifIconFactory$CheckBoxIcon::csize, true, false, false, flat);
	} else if (uncheckToggleOut) {
		drawCheckBezel(g, x, y, MotifIconFactory$CheckBoxIcon::csize, true, true, false, flat);
	} else if (checkIn) {
		drawCheckBezel(g, x, y, MotifIconFactory$CheckBoxIcon::csize, false, false, true, flat);
	} else if (!flat) {
		drawCheckBezelOut(g, x, y, MotifIconFactory$CheckBoxIcon::csize);
	}
}

int32_t MotifIconFactory$CheckBoxIcon::getIconWidth() {
	return MotifIconFactory$CheckBoxIcon::csize;
}

int32_t MotifIconFactory$CheckBoxIcon::getIconHeight() {
	return MotifIconFactory$CheckBoxIcon::csize;
}

void MotifIconFactory$CheckBoxIcon::drawCheckBezelOut($Graphics* g, int32_t x, int32_t y, int32_t csize) {
	$useLocalCurrentObjectStackCache();
	$var($Color, controlShadow, $UIManager::getColor("controlShadow"_s));
	int32_t w = csize;
	int32_t h = csize;
	$var($Color, oldColor, $nc(g)->getColor());
	g->translate(x, y);
	g->setColor(this->highlight);
	g->drawLine(0, 0, 0, h - 1);
	g->drawLine(1, 0, w - 1, 0);
	g->setColor(this->shadow);
	g->drawLine(1, h - 1, w - 1, h - 1);
	g->drawLine(w - 1, h - 1, w - 1, 1);
	g->translate(-x, -y);
	g->setColor(oldColor);
}

void MotifIconFactory$CheckBoxIcon::drawCheckBezel($Graphics* g, int32_t x, int32_t y, int32_t csize, bool shade, bool out, bool check, bool flat) {
	$useLocalCurrentObjectStackCache();
	$var($Color, oldColor, $nc(g)->getColor());
	g->translate(x, y);
	if (!flat) {
		if (out) {
			g->setColor(this->control);
			g->fillRect(1, 1, csize - 2, csize - 2);
			g->setColor(this->shadow);
		} else {
			g->setColor(this->lightShadow);
			g->fillRect(0, 0, csize, csize);
			g->setColor(this->highlight);
		}
		g->drawLine(1, csize - 1, csize - 2, csize - 1);
		if (shade) {
			g->drawLine(2, csize - 2, csize - 3, csize - 2);
			g->drawLine(csize - 2, 2, csize - 2, csize - 1);
			if (out) {
				g->setColor(this->highlight);
			} else {
				g->setColor(this->shadow);
			}
			g->drawLine(1, 2, 1, csize - 2);
			g->drawLine(1, 1, csize - 3, 1);
			if (out) {
				g->setColor(this->shadow);
			} else {
				g->setColor(this->highlight);
			}
		}
		g->drawLine(csize - 1, 1, csize - 1, csize - 1);
		if (out) {
			g->setColor(this->highlight);
		} else {
			g->setColor(this->shadow);
		}
		g->drawLine(0, 1, 0, csize - 1);
		g->drawLine(0, 0, csize - 1, 0);
	}
	if (check) {
		g->setColor(this->foreground);
		$var($ints, xa, $new($ints, {
			csize - 12,
			csize - 8,
			csize - 7,
			csize - 4,
			csize - 2,
			csize - 2,
			csize - 8,
			csize - 10,
			csize - 11
		}));
		$var($ints, ya, $new($ints, {
			6,
			10,
			10,
			4,
			2,
			1,
			7,
			5,
			5
		}));
		g->fillPolygon(xa, ya, 9);
	}
	g->translate(-x, -y);
	g->setColor(oldColor);
}

MotifIconFactory$CheckBoxIcon::MotifIconFactory$CheckBoxIcon() {
}

$Class* MotifIconFactory$CheckBoxIcon::load$($String* name, bool initialize) {
	$loadClass(MotifIconFactory$CheckBoxIcon, name, initialize, &_MotifIconFactory$CheckBoxIcon_ClassInfo_, allocate$MotifIconFactory$CheckBoxIcon);
	return class$;
}

$Class* MotifIconFactory$CheckBoxIcon::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com