#include <com/sun/java/swing/plaf/motif/MotifBorders.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifBorders_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifBorders::*)()>(&MotifBorders::init$))},
	{"drawBezel", "(Ljava/awt/Graphics;IIIIZZLjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t,bool,bool,$Color*,$Color*,$Color*,$Color*)>(&MotifBorders::drawBezel))},
	{}
};

$InnerClassInfo _MotifBorders_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifBorders$MotifPopupMenuBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "MotifPopupMenuBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifBorders$InternalFrameBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "InternalFrameBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifBorders$FrameBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "FrameBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifBorders$MenuBarBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "MenuBarBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifBorders$ToggleButtonBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "ToggleButtonBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifBorders$ButtonBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "ButtonBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifBorders$FocusBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "FocusBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifBorders$BevelBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "BevelBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifBorders_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifBorders",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MotifBorders_MethodInfo_,
	nullptr,
	nullptr,
	_MotifBorders_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifBorders$MotifPopupMenuBorder,com.sun.java.swing.plaf.motif.MotifBorders$InternalFrameBorder,com.sun.java.swing.plaf.motif.MotifBorders$FrameBorder,com.sun.java.swing.plaf.motif.MotifBorders$MenuBarBorder,com.sun.java.swing.plaf.motif.MotifBorders$ToggleButtonBorder,com.sun.java.swing.plaf.motif.MotifBorders$ButtonBorder,com.sun.java.swing.plaf.motif.MotifBorders$FocusBorder,com.sun.java.swing.plaf.motif.MotifBorders$BevelBorder"
};

$Object* allocate$MotifBorders($Class* clazz) {
	return $of($alloc(MotifBorders));
}

void MotifBorders::init$() {
}

void MotifBorders::drawBezel($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, bool isPressed, bool hasFocus, $Color* shadow, $Color* highlight, $Color* darkShadow, $Color* focus) {
	$var($Color, oldColor, $nc(g)->getColor());
	g->translate(x, y);
	if (isPressed) {
		if (hasFocus) {
			g->setColor(focus);
			g->drawRect(0, 0, w - 1, h - 1);
		}
		g->setColor(shadow);
		g->drawRect(1, 1, w - 3, h - 3);
		g->setColor(highlight);
		g->drawLine(2, h - 3, w - 3, h - 3);
		g->drawLine(w - 3, 2, w - 3, h - 4);
	} else {
		if (hasFocus) {
			g->setColor(focus);
			g->drawRect(0, 0, w - 1, h - 1);
			g->setColor(highlight);
			g->drawLine(1, 1, 1, h - 3);
			g->drawLine(2, 1, w - 4, 1);
			g->setColor(shadow);
			g->drawLine(2, h - 3, w - 3, h - 3);
			g->drawLine(w - 3, 1, w - 3, h - 4);
			g->setColor(darkShadow);
			g->drawLine(1, h - 2, w - 2, h - 2);
			g->drawLine(w - 2, h - 2, w - 2, 1);
		} else {
			g->setColor(highlight);
			g->drawLine(1, 1, 1, h - 3);
			g->drawLine(2, 1, w - 4, 1);
			g->setColor(shadow);
			g->drawLine(2, h - 3, w - 3, h - 3);
			g->drawLine(w - 3, 1, w - 3, h - 4);
			g->setColor(darkShadow);
			g->drawLine(1, h - 2, w - 2, h - 2);
			g->drawLine(w - 2, h - 2, w - 2, 0);
		}
		g->translate(-x, -y);
	}
	g->setColor(oldColor);
}

MotifBorders::MotifBorders() {
}

$Class* MotifBorders::load$($String* name, bool initialize) {
	$loadClass(MotifBorders, name, initialize, &_MotifBorders_ClassInfo_, allocate$MotifBorders);
	return class$;
}

$Class* MotifBorders::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com