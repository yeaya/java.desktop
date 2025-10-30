#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InputEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ETCHED_INSETS
#undef GROOVE_INSETS
#undef MAX_VALUE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $InputEvent = ::java::awt::event::InputEvent;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicGraphicsUtils_FieldInfo_[] = {
	{"GROOVE_INSETS", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicGraphicsUtils, GROOVE_INSETS)},
	{"ETCHED_INSETS", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicGraphicsUtils, ETCHED_INSETS)},
	{}
};

$MethodInfo _BasicGraphicsUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicGraphicsUtils::*)()>(&BasicGraphicsUtils::init$))},
	{"drawBezel", "(Ljava/awt/Graphics;IIIIZZLjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t,bool,bool,$Color*,$Color*,$Color*,$Color*)>(&BasicGraphicsUtils::drawBezel))},
	{"drawDashedRect", "(Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t)>(&BasicGraphicsUtils::drawDashedRect))},
	{"drawEtchedRect", "(Ljava/awt/Graphics;IIIILjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t,$Color*,$Color*,$Color*,$Color*)>(&BasicGraphicsUtils::drawEtchedRect))},
	{"drawGroove", "(Ljava/awt/Graphics;IIIILjava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t,$Color*,$Color*)>(&BasicGraphicsUtils::drawGroove))},
	{"drawLoweredBezel", "(Ljava/awt/Graphics;IIIILjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t,$Color*,$Color*,$Color*,$Color*)>(&BasicGraphicsUtils::drawLoweredBezel))},
	{"drawString", "(Ljava/awt/Graphics;Ljava/lang/String;III)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,$String*,int32_t,int32_t,int32_t)>(&BasicGraphicsUtils::drawString))},
	{"drawString", "(Ljavax/swing/JComponent;Ljava/awt/Graphics2D;Ljava/lang/String;FF)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,$Graphics2D*,$String*,float,float)>(&BasicGraphicsUtils::drawString))},
	{"drawStringUnderlineCharAt", "(Ljava/awt/Graphics;Ljava/lang/String;III)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,$String*,int32_t,int32_t,int32_t)>(&BasicGraphicsUtils::drawStringUnderlineCharAt))},
	{"drawStringUnderlineCharAt", "(Ljavax/swing/JComponent;Ljava/awt/Graphics2D;Ljava/lang/String;IFF)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,$Graphics2D*,$String*,int32_t,float,float)>(&BasicGraphicsUtils::drawStringUnderlineCharAt))},
	{"getClippedString", "(Ljavax/swing/JComponent;Ljava/awt/FontMetrics;Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($JComponent*,$FontMetrics*,$String*,int32_t)>(&BasicGraphicsUtils::getClippedString))},
	{"getEtchedInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Insets*(*)()>(&BasicGraphicsUtils::getEtchedInsets))},
	{"getGrooveInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Insets*(*)()>(&BasicGraphicsUtils::getGrooveInsets))},
	{"getPreferredButtonSize", "(Ljavax/swing/AbstractButton;I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Dimension*(*)($AbstractButton*,int32_t)>(&BasicGraphicsUtils::getPreferredButtonSize))},
	{"getStringWidth", "(Ljavax/swing/JComponent;Ljava/awt/FontMetrics;Ljava/lang/String;)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($JComponent*,$FontMetrics*,$String*)>(&BasicGraphicsUtils::getStringWidth))},
	{"isLeftToRight", "(Ljava/awt/Component;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*)>(&BasicGraphicsUtils::isLeftToRight))},
	{"isMenuShortcutKeyDown", "(Ljava/awt/event/InputEvent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($InputEvent*)>(&BasicGraphicsUtils::isMenuShortcutKeyDown))},
	{}
};

$ClassInfo _BasicGraphicsUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicGraphicsUtils",
	"java.lang.Object",
	nullptr,
	_BasicGraphicsUtils_FieldInfo_,
	_BasicGraphicsUtils_MethodInfo_
};

$Object* allocate$BasicGraphicsUtils($Class* clazz) {
	return $of($alloc(BasicGraphicsUtils));
}

$Insets* BasicGraphicsUtils::GROOVE_INSETS = nullptr;
$Insets* BasicGraphicsUtils::ETCHED_INSETS = nullptr;

void BasicGraphicsUtils::init$() {
}

void BasicGraphicsUtils::drawEtchedRect($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $Color* shadow, $Color* darkShadow, $Color* highlight, $Color* lightHighlight) {
	$init(BasicGraphicsUtils);
	$var($Color, oldColor, $nc(g)->getColor());
	g->translate(x, y);
	g->setColor(shadow);
	g->drawLine(0, 0, w - 1, 0);
	g->drawLine(0, 1, 0, h - 2);
	g->setColor(darkShadow);
	g->drawLine(1, 1, w - 3, 1);
	g->drawLine(1, 2, 1, h - 3);
	g->setColor(lightHighlight);
	g->drawLine(w - 1, 0, w - 1, h - 1);
	g->drawLine(0, h - 1, w - 1, h - 1);
	g->setColor(highlight);
	g->drawLine(w - 2, 1, w - 2, h - 3);
	g->drawLine(1, h - 2, w - 2, h - 2);
	g->translate(-x, -y);
	g->setColor(oldColor);
}

$Insets* BasicGraphicsUtils::getEtchedInsets() {
	$init(BasicGraphicsUtils);
	return BasicGraphicsUtils::ETCHED_INSETS;
}

void BasicGraphicsUtils::drawGroove($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $Color* shadow, $Color* highlight) {
	$init(BasicGraphicsUtils);
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

$Insets* BasicGraphicsUtils::getGrooveInsets() {
	$init(BasicGraphicsUtils);
	return BasicGraphicsUtils::GROOVE_INSETS;
}

void BasicGraphicsUtils::drawBezel($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, bool isPressed, bool isDefault, $Color* shadow, $Color* darkShadow, $Color* highlight, $Color* lightHighlight) {
	$init(BasicGraphicsUtils);
	$var($Color, oldColor, $nc(g)->getColor());
	g->translate(x, y);
	if (isPressed && isDefault) {
		g->setColor(darkShadow);
		g->drawRect(0, 0, w - 1, h - 1);
		g->setColor(shadow);
		g->drawRect(1, 1, w - 3, h - 3);
	} else if (isPressed) {
		drawLoweredBezel(g, x, y, w, h, shadow, darkShadow, highlight, lightHighlight);
	} else if (isDefault) {
		g->setColor(darkShadow);
		g->drawRect(0, 0, w - 1, h - 1);
		g->setColor(lightHighlight);
		g->drawLine(1, 1, 1, h - 3);
		g->drawLine(2, 1, w - 3, 1);
		g->setColor(highlight);
		g->drawLine(2, 2, 2, h - 4);
		g->drawLine(3, 2, w - 4, 2);
		g->setColor(shadow);
		g->drawLine(2, h - 3, w - 3, h - 3);
		g->drawLine(w - 3, 2, w - 3, h - 4);
		g->setColor(darkShadow);
		g->drawLine(1, h - 2, w - 2, h - 2);
		g->drawLine(w - 2, h - 2, w - 2, 1);
	} else {
		g->setColor(lightHighlight);
		g->drawLine(0, 0, 0, h - 1);
		g->drawLine(1, 0, w - 2, 0);
		g->setColor(highlight);
		g->drawLine(1, 1, 1, h - 3);
		g->drawLine(2, 1, w - 3, 1);
		g->setColor(shadow);
		g->drawLine(1, h - 2, w - 2, h - 2);
		g->drawLine(w - 2, 1, w - 2, h - 3);
		g->setColor(darkShadow);
		g->drawLine(0, h - 1, w - 1, h - 1);
		g->drawLine(w - 1, h - 1, w - 1, 0);
	}
	g->translate(-x, -y);
	g->setColor(oldColor);
}

void BasicGraphicsUtils::drawLoweredBezel($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $Color* shadow, $Color* darkShadow, $Color* highlight, $Color* lightHighlight) {
	$init(BasicGraphicsUtils);
	$nc(g)->setColor(darkShadow);
	g->drawLine(0, 0, 0, h - 1);
	g->drawLine(1, 0, w - 2, 0);
	g->setColor(shadow);
	g->drawLine(1, 1, 1, h - 2);
	g->drawLine(1, 1, w - 3, 1);
	g->setColor(lightHighlight);
	g->drawLine(0, h - 1, w - 1, h - 1);
	g->drawLine(w - 1, h - 1, w - 1, 0);
	g->setColor(highlight);
	g->drawLine(1, h - 2, w - 2, h - 2);
	g->drawLine(w - 2, h - 2, w - 2, 1);
}

void BasicGraphicsUtils::drawString($Graphics* g, $String* text, int32_t underlinedChar, int32_t x, int32_t y) {
	$init(BasicGraphicsUtils);
	int32_t index = -1;
	if (underlinedChar != u'\0') {
		char16_t uc = $Character::toUpperCase((char16_t)underlinedChar);
		char16_t lc = $Character::toLowerCase((char16_t)underlinedChar);
		int32_t uci = $nc(text)->indexOf((int32_t)uc);
		int32_t lci = text->indexOf((int32_t)lc);
		if (uci == -1) {
			index = lci;
		} else if (lci == -1) {
			index = uci;
		} else {
			index = (lci < uci) ? lci : uci;
		}
	}
	drawStringUnderlineCharAt(g, text, index, x, y);
}

void BasicGraphicsUtils::drawStringUnderlineCharAt($Graphics* g, $String* text, int32_t underlinedIndex, int32_t x, int32_t y) {
	$init(BasicGraphicsUtils);
	$SwingUtilities2::drawStringUnderlineCharAt(nullptr, g, text, underlinedIndex, x, y);
}

void BasicGraphicsUtils::drawDashedRect($Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init(BasicGraphicsUtils);
	int32_t vx = 0;
	int32_t vy = 0;
	for (vx = x; vx < (x + width); vx += 2) {
		$nc(g)->fillRect(vx, y, 1, 1);
		g->fillRect(vx, y + height - 1, 1, 1);
	}
	for (vy = y; vy < (y + height); vy += 2) {
		$nc(g)->fillRect(x, vy, 1, 1);
		g->fillRect(x + width - 1, vy, 1, 1);
	}
}

$Dimension* BasicGraphicsUtils::getPreferredButtonSize($AbstractButton* b, int32_t textIconGap) {
	$init(BasicGraphicsUtils);
	$useLocalCurrentObjectStackCache();
	if ($nc(b)->getComponentCount() > 0) {
		return nullptr;
	}
	$var($Icon, icon, $nc(b)->getIcon());
	$var($String, text, b->getText());
	$var($Font, font, b->getFont());
	$var($FontMetrics, fm, b->getFontMetrics(font));
	$var($Rectangle, iconR, $new($Rectangle));
	$var($Rectangle, textR, $new($Rectangle));
	$var($Rectangle, viewR, $new($Rectangle, (int32_t)$Short::MAX_VALUE, (int32_t)$Short::MAX_VALUE));
	$var($JComponent, var$0, static_cast<$JComponent*>(b));
	$var($FontMetrics, var$1, fm);
	$var($String, var$2, text);
	$var($Icon, var$3, icon);
	int32_t var$4 = b->getVerticalAlignment();
	int32_t var$5 = b->getHorizontalAlignment();
	int32_t var$6 = b->getVerticalTextPosition();
	$SwingUtilities::layoutCompoundLabel(var$0, var$1, var$2, var$3, var$4, var$5, var$6, b->getHorizontalTextPosition(), viewR, iconR, textR, (text == nullptr ? 0 : textIconGap));
	$var($Rectangle, r, iconR->union$(textR));
	$var($Insets, insets, b->getInsets());
	$nc(r)->width += $nc(insets)->left + insets->right;
	r->height += insets->top + insets->bottom;
	return r->getSize();
}

bool BasicGraphicsUtils::isLeftToRight($Component* c) {
	$init(BasicGraphicsUtils);
	return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
}

bool BasicGraphicsUtils::isMenuShortcutKeyDown($InputEvent* event) {
	$init(BasicGraphicsUtils);
	int32_t var$0 = $nc(event)->getModifiersEx();
	return ((int32_t)(var$0 & (uint32_t)$nc($($Toolkit::getDefaultToolkit()))->getMenuShortcutKeyMaskEx())) != 0;
}

void BasicGraphicsUtils::drawString($JComponent* c, $Graphics2D* g, $String* string, float x, float y) {
	$init(BasicGraphicsUtils);
	$SwingUtilities2::drawString(c, g, string, x, y, true);
}

void BasicGraphicsUtils::drawStringUnderlineCharAt($JComponent* c, $Graphics2D* g, $String* string, int32_t underlinedIndex, float x, float y) {
	$init(BasicGraphicsUtils);
	$SwingUtilities2::drawStringUnderlineCharAt(c, g, string, underlinedIndex, x, y, true);
}

$String* BasicGraphicsUtils::getClippedString($JComponent* c, $FontMetrics* fm, $String* string, int32_t availTextWidth) {
	$init(BasicGraphicsUtils);
	return $SwingUtilities2::clipStringIfNecessary(c, fm, string, availTextWidth);
}

float BasicGraphicsUtils::getStringWidth($JComponent* c, $FontMetrics* fm, $String* string) {
	$init(BasicGraphicsUtils);
	return $SwingUtilities2::stringWidth(c, fm, string, true);
}

void clinit$BasicGraphicsUtils($Class* class$) {
	$assignStatic(BasicGraphicsUtils::GROOVE_INSETS, $new($Insets, 2, 2, 2, 2));
	$assignStatic(BasicGraphicsUtils::ETCHED_INSETS, $new($Insets, 2, 2, 2, 2));
}

BasicGraphicsUtils::BasicGraphicsUtils() {
}

$Class* BasicGraphicsUtils::load$($String* name, bool initialize) {
	$loadClass(BasicGraphicsUtils, name, initialize, &_BasicGraphicsUtils_ClassInfo_, clinit$BasicGraphicsUtils, allocate$BasicGraphicsUtils);
	return class$;
}

$Class* BasicGraphicsUtils::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax