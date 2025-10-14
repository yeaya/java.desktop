#include <com/sun/java/swing/plaf/motif/MotifGraphicsUtils.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CENTER
#undef RIGHT

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifGraphicsUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MotifGraphicsUtils::*)()>(&MotifGraphicsUtils::init$))},
	{"drawGroove", "(Ljava/awt/Graphics;IIIILjava/awt/Color;Ljava/awt/Color;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t,$Color*,$Color*)>(&MotifGraphicsUtils::drawGroove))},
	{"drawStringInRect", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;Ljava/lang/String;IIIII)V", nullptr, $STATIC, $method(static_cast<void(*)($JComponent*,$Graphics*,$String*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&MotifGraphicsUtils::drawStringInRect))},
	{}
};

$ClassInfo _MotifGraphicsUtils_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifGraphicsUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MotifGraphicsUtils_MethodInfo_
};

$Object* allocate$MotifGraphicsUtils($Class* clazz) {
	return $of($alloc(MotifGraphicsUtils));
}

void MotifGraphicsUtils::init$() {
}

void MotifGraphicsUtils::drawGroove($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $Color* shadow, $Color* highlight) {
	$var($Color, oldColor, $nc(g)->getColor());
	g->translate(x, y);
	g->setColor(shadow);
	g->drawRect(0, 0, w - 2, h - 2);
	g->setColor(highlight);
	g->drawLine(1, h - 3, 1, 1);
	g->drawLine(1, 1, w - 3, 1);
	g->drawLine(0, h - 1, w - 1, h - 1);
	g->drawLine(w - 1, h - 1, w - 1, 0);
	g->translate(-x, -y);
	g->setColor(oldColor);
}

void MotifGraphicsUtils::drawStringInRect($JComponent* c, $Graphics* g, $String* aString, int32_t x, int32_t y, int32_t width, int32_t height, int32_t justification) {
	$var($FontMetrics, fontMetrics, nullptr);
	int32_t drawWidth = 0;
	int32_t startX = 0;
	int32_t startY = 0;
	int32_t delta = 0;
	if ($nc(g)->getFont() == nullptr) {
		return;
	}
	$assign(fontMetrics, $SwingUtilities2::getFontMetrics(c, g));
	if (fontMetrics == nullptr) {
		return;
	}
	if (justification == $SwingConstants::CENTER) {
		drawWidth = $SwingUtilities2::stringWidth(c, fontMetrics, aString);
		if (drawWidth > width) {
			drawWidth = width;
		}
		startX = x + (width - drawWidth) / 2;
	} else if (justification == $SwingConstants::RIGHT) {
		drawWidth = $SwingUtilities2::stringWidth(c, fontMetrics, aString);
		if (drawWidth > width) {
			drawWidth = width;
		}
		startX = x + width - drawWidth;
	} else {
		startX = x;
	}
	int32_t var$0 = height - $nc(fontMetrics)->getAscent();
	delta = (var$0 - fontMetrics->getDescent()) / 2;
	if (delta < 0) {
		delta = 0;
	}
	startY = y + height - delta - fontMetrics->getDescent();
	$SwingUtilities2::drawString(c, g, aString, startX, startY);
}

MotifGraphicsUtils::MotifGraphicsUtils() {
}

$Class* MotifGraphicsUtils::load$($String* name, bool initialize) {
	$loadClass(MotifGraphicsUtils, name, initialize, &_MotifGraphicsUtils_ClassInfo_, allocate$MotifGraphicsUtils);
	return class$;
}

$Class* MotifGraphicsUtils::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com