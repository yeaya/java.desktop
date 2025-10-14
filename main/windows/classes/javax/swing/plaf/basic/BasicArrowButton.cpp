#include <javax/swing/plaf/basic/BasicArrowButton.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Double.h>
#include <java/awt/geom/Path2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef EAST
#undef MAX_VALUE
#undef NORTH
#undef PI
#undef SOUTH
#undef WEST

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Double = ::java::awt::geom::Path2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicArrowButton_FieldInfo_[] = {
	{"direction", "I", nullptr, $PROTECTED, $field(BasicArrowButton, direction)},
	{"shadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicArrowButton, shadow)},
	{"darkShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicArrowButton, darkShadow)},
	{"highlight", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicArrowButton, highlight)},
	{}
};

$MethodInfo _BasicArrowButton_MethodInfo_[] = {
	{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicArrowButton::*)(int32_t,$Color*,$Color*,$Color*,$Color*)>(&BasicArrowButton::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BasicArrowButton::*)(int32_t)>(&BasicArrowButton::init$))},
	{"getDirection", "()I", nullptr, $PUBLIC},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintScaledTriangle", "(Ljava/awt/Graphics;DDDIZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicArrowButton::*)($Graphics*,double,double,double,int32_t,bool)>(&BasicArrowButton::paintScaledTriangle))},
	{"paintTriangle", "(Ljava/awt/Graphics;IIIIZ)V", nullptr, $PUBLIC},
	{"paintUnscaledTriangle", "(Ljava/awt/Graphics;IIIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicArrowButton::*)($Graphics*,int32_t,int32_t,int32_t,int32_t,bool)>(&BasicArrowButton::paintUnscaledTriangle))},
	{"setDirection", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicArrowButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicArrowButton",
	"javax.swing.JButton",
	nullptr,
	_BasicArrowButton_FieldInfo_,
	_BasicArrowButton_MethodInfo_
};

$Object* allocate$BasicArrowButton($Class* clazz) {
	return $of($alloc(BasicArrowButton));
}

void BasicArrowButton::init$(int32_t direction, $Color* background, $Color* shadow, $Color* darkShadow, $Color* highlight) {
	$JButton::init$();
	setRequestFocusEnabled(false);
	setDirection(direction);
	setBackground(background);
	$set(this, shadow, shadow);
	$set(this, darkShadow, darkShadow);
	$set(this, highlight, highlight);
}

void BasicArrowButton::init$(int32_t direction) {
	int32_t var$0 = direction;
	$var($Color, var$1, $UIManager::getColor("control"_s));
	$var($Color, var$2, $UIManager::getColor("controlShadow"_s));
	$var($Color, var$3, $UIManager::getColor("controlDkShadow"_s));
	BasicArrowButton::init$(var$0, var$1, var$2, var$3, $($UIManager::getColor("controlLtHighlight"_s)));
}

int32_t BasicArrowButton::getDirection() {
	return this->direction;
}

void BasicArrowButton::setDirection(int32_t direction) {
	this->direction = direction;
}

void BasicArrowButton::paint($Graphics* g) {
	$var($Color, origColor, nullptr);
	bool isPressed = false;
	bool isEnabled = false;
	int32_t w = 0;
	int32_t h = 0;
	int32_t size = 0;
	w = $nc($(getSize()))->width;
	h = $nc($(getSize()))->height;
	$assign(origColor, $nc(g)->getColor());
	isPressed = $nc($(getModel()))->isPressed();
	isEnabled = this->isEnabled();
	g->setColor($(getBackground()));
	g->fillRect(1, 1, w - 2, h - 2);
	bool var$0 = getBorder() != nullptr;
	if (var$0 && !($instanceOf($UIResource, $(getBorder())))) {
		paintBorder(g);
	} else if (isPressed) {
		g->setColor(this->shadow);
		g->drawRect(0, 0, w - 1, h - 1);
	} else {
		g->drawLine(0, 0, 0, h - 1);
		g->drawLine(1, 0, w - 2, 0);
		g->setColor(this->highlight);
		g->drawLine(1, 1, 1, h - 3);
		g->drawLine(2, 1, w - 3, 1);
		g->setColor(this->shadow);
		g->drawLine(1, h - 2, w - 2, h - 2);
		g->drawLine(w - 2, 1, w - 2, h - 3);
		g->setColor(this->darkShadow);
		g->drawLine(0, h - 1, w - 1, h - 1);
		g->drawLine(w - 1, h - 1, w - 1, 0);
	}
	if (h < 5 || w < 5) {
		g->setColor(origColor);
		return;
	}
	if (isPressed) {
		g->translate(1, 1);
	}
	size = $Math::min((h - 4) / 3, (w - 4) / 3);
	size = $Math::max(size, 2);
	paintTriangle(g, (w - size) / 2, (h - size) / 2, size, this->direction, isEnabled);
	if (isPressed) {
		g->translate(-1, -1);
	}
	g->setColor(origColor);
}

$Dimension* BasicArrowButton::getPreferredSize() {
	return $new($Dimension, 16, 16);
}

$Dimension* BasicArrowButton::getMinimumSize() {
	return $new($Dimension, 5, 5);
}

$Dimension* BasicArrowButton::getMaximumSize() {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

bool BasicArrowButton::isFocusTraversable() {
	return false;
}

void BasicArrowButton::paintTriangle($Graphics* g, int32_t x, int32_t y, int32_t size, int32_t direction, bool isEnabled) {
	if ($SwingUtilities2::isScaledGraphics(g)) {
		paintScaledTriangle(g, (double)x, (double)y, (double)size, direction, isEnabled);
	} else {
		paintUnscaledTriangle(g, x, y, size, direction, isEnabled);
	}
}

void BasicArrowButton::paintUnscaledTriangle($Graphics* g, int32_t x, int32_t y, int32_t size, int32_t direction, bool isEnabled) {
	$var($Color, oldColor, $nc(g)->getColor());
	int32_t mid = 0;
	int32_t i = 0;
	int32_t j = 0;
	j = 0;
	size = $Math::max(size, 2);
	mid = (size / 2) - 1;
	g->translate(x, y);
	if (isEnabled) {
		g->setColor(this->darkShadow);
	} else {
		g->setColor(this->shadow);
	}
	switch (direction) {
	case $SwingConstants::NORTH:
		{
			for (i = 0; i < size; ++i) {
				g->drawLine(mid - i, i, mid + i, i);
			}
			if (!isEnabled) {
				g->setColor(this->highlight);
				g->drawLine(mid - i + 2, i, mid + i, i);
			}
			break;
		}
	case $SwingConstants::SOUTH:
		{
			if (!isEnabled) {
				g->translate(1, 1);
				g->setColor(this->highlight);
				for (i = size - 1; i >= 0; --i) {
					g->drawLine(mid - i, j, mid + i, j);
					++j;
				}
				g->translate(-1, -1);
				g->setColor(this->shadow);
			}
			j = 0;
			for (i = size - 1; i >= 0; --i) {
				g->drawLine(mid - i, j, mid + i, j);
				++j;
			}
			break;
		}
	case $SwingConstants::WEST:
		{
			for (i = 0; i < size; ++i) {
				g->drawLine(i, mid - i, i, mid + i);
			}
			if (!isEnabled) {
				g->setColor(this->highlight);
				g->drawLine(i, mid - i + 2, i, mid + i);
			}
			break;
		}
	case $SwingConstants::EAST:
		{
			if (!isEnabled) {
				g->translate(1, 1);
				g->setColor(this->highlight);
				for (i = size - 1; i >= 0; --i) {
					g->drawLine(j, mid - i, j, mid + i);
					++j;
				}
				g->translate(-1, -1);
				g->setColor(this->shadow);
			}
			j = 0;
			for (i = size - 1; i >= 0; --i) {
				g->drawLine(j, mid - i, j, mid + i);
				++j;
			}
			break;
		}
	}
	g->translate(-x, -y);
	g->setColor(oldColor);
}

void BasicArrowButton::paintScaledTriangle($Graphics* g, double x, double y, double size, int32_t direction, bool isEnabled) {
	size = $Math::max(size, (double)2);
	$var($Path2D$Double, path, $new($Path2D$Double));
	path->moveTo(-size, size / 2);
	path->lineTo(size, size / 2);
	path->lineTo((double)0, -size / 2);
	path->closePath();
	$var($AffineTransform, affineTransform, $new($AffineTransform));
	affineTransform->rotate($Math::PI * (direction - 1) / 4);
	path->transform(affineTransform);
	$var($Graphics2D, g2d, $cast($Graphics2D, g));
	double tx = x + size / 2;
	double ty = y + size / 2;
	$nc(g2d)->translate(tx, ty);
	$var($Color, oldColor, $nc(g)->getColor());
	if (!isEnabled) {
		g2d->translate(1, 0);
		g2d->setColor(this->highlight);
		g2d->fill(path);
		g2d->translate(-1, 0);
	}
	g2d->setColor(isEnabled ? this->darkShadow : this->shadow);
	g2d->fill(path);
	g2d->translate(-tx, -ty);
	g2d->setColor(oldColor);
}

BasicArrowButton::BasicArrowButton() {
}

$Class* BasicArrowButton::load$($String* name, bool initialize) {
	$loadClass(BasicArrowButton, name, initialize, &_BasicArrowButton_ClassInfo_, allocate$BasicArrowButton);
	return class$;
}

$Class* BasicArrowButton::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax