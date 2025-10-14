#include <com/sun/java/swing/plaf/motif/MotifScrollBarButton.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <jcpp.h>

#undef EAST
#undef NORTH
#undef SOUTH
#undef WEST

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JComponent = ::javax::swing::JComponent;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifScrollBarButton_FieldInfo_[] = {
	{"darkShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifScrollBarButton, darkShadow)},
	{"lightShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MotifScrollBarButton, lightShadow)},
	{}
};

$MethodInfo _MotifScrollBarButton_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MotifScrollBarButton::*)(int32_t)>(&MotifScrollBarButton::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MotifScrollBarButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifScrollBarButton",
	"javax.swing.plaf.basic.BasicArrowButton",
	nullptr,
	_MotifScrollBarButton_FieldInfo_,
	_MotifScrollBarButton_MethodInfo_
};

$Object* allocate$MotifScrollBarButton($Class* clazz) {
	return $of($alloc(MotifScrollBarButton));
}

void MotifScrollBarButton::init$(int32_t direction) {
	$BasicArrowButton::init$(direction);
	$set(this, darkShadow, $UIManager::getColor("controlShadow"_s));
	$set(this, lightShadow, $UIManager::getColor("controlLtHighlight"_s));
	switch (direction) {
	case $SwingConstants::NORTH:
		{}
	case $SwingConstants::SOUTH:
		{}
	case $SwingConstants::EAST:
		{}
	case $SwingConstants::WEST:
		{
			this->direction = direction;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "invalid direction"_s);
		}
	}
	setRequestFocusEnabled(false);
	setOpaque(true);
	setBackground($($UIManager::getColor("ScrollBar.background"_s)));
	setForeground($($UIManager::getColor("ScrollBar.foreground"_s)));
}

$Dimension* MotifScrollBarButton::getPreferredSize() {
	switch (this->direction) {
	case $SwingConstants::NORTH:
		{}
	case $SwingConstants::SOUTH:
		{
			return $new($Dimension, 11, 12);
		}
	case $SwingConstants::EAST:
		{}
	case $SwingConstants::WEST:
		{}
	default:
		{
			return $new($Dimension, 12, 11);
		}
	}
}

$Dimension* MotifScrollBarButton::getMinimumSize() {
	return getPreferredSize();
}

$Dimension* MotifScrollBarButton::getMaximumSize() {
	return getPreferredSize();
}

bool MotifScrollBarButton::isFocusTraversable() {
	return false;
}

void MotifScrollBarButton::paint($Graphics* g) {
	int32_t w = getWidth();
	int32_t h = getHeight();
	if (isOpaque()) {
		$nc(g)->setColor($(getBackground()));
		g->fillRect(0, 0, w, h);
	}
	bool isPressed = $nc($(getModel()))->isPressed();
	$var($Color, lead, (isPressed) ? this->darkShadow : this->lightShadow);
	$var($Color, trail, (isPressed) ? this->lightShadow : this->darkShadow);
	$var($Color, fill, getBackground());
	int32_t cx = w / 2;
	int32_t cy = h / 2;
	int32_t s = $Math::min(w, h);
	switch (this->direction) {
	case $SwingConstants::NORTH:
		{
			$nc(g)->setColor(fill);
			$nc(g)->fillPolygon($$new($ints, {
				cx,
				0,
				s - 1
			}), $$new($ints, {
				0,
				s - 1,
				s - 1
			}), 3);
			$nc(g)->setColor(trail);
			$nc(g)->drawLine(cx, 0, s - 1, s - 2);
			$nc(g)->drawLine(0, s - 1, s - 1, s - 1);
			$nc(g)->drawLine(s - 1, s - 2, s - 1, s - 1);
			$nc(g)->setColor(lead);
			$nc(g)->drawLine(cx, 0, 0, s - 2);
			$nc(g)->drawLine(cx, 0, cx, 0);
			$nc(g)->drawLine(0, s - 1, 0, s - 1);
			break;
		}
	case $SwingConstants::SOUTH:
		{
			$nc(g)->setColor(fill);
			$nc(g)->fillPolygon($$new($ints, {
				0,
				s - 1,
				cx
			}), $$new($ints, {
				1,
				1,
				s
			}), 3);
			$nc(g)->setColor(trail);
			$nc(g)->drawLine(s - 1, 2, cx, s);
			$nc(g)->drawLine(s - 1, 2, s - 1, 2);
			$nc(g)->setColor(lead);
			$nc(g)->drawLine(0, 2, cx, s);
			$nc(g)->drawLine(0, 1, s - 1, 1);
			$nc(g)->drawLine(0, 1, 0, 2);
			$nc(g)->setColor(trail);
			$nc(g)->drawLine(cx, s, cx, s);
			break;
		}
	case $SwingConstants::EAST:
		{
			$nc(g)->setColor(fill);
			$nc(g)->fillPolygon($$new($ints, {
				1,
				s,
				1
			}), $$new($ints, {
				0,
				cy,
				s
			}), 3);
			$nc(g)->setColor(trail);
			$nc(g)->drawLine(1, s, s, cy);
			$nc(g)->drawLine(2, s, 2, s);
			$nc(g)->setColor(lead);
			$nc(g)->drawLine(1, 0, 1, s);
			$nc(g)->drawLine(2, 0, s, cy);
			$nc(g)->drawLine(2, 0, 2, 0);
			$nc(g)->drawLine(s, cy, s, cy);
			break;
		}
	case $SwingConstants::WEST:
		{
			$nc(g)->setColor(fill);
			$nc(g)->fillPolygon($$new($ints, {
				0,
				s - 1,
				s - 1
			}), $$new($ints, {
				cy,
				0,
				s
			}), 3);
			$nc(g)->drawLine(s - 1, 0, s - 1, s);
			$nc(g)->setColor(trail);
			$nc(g)->drawLine(0, cy, s - 1, s);
			$nc(g)->drawLine(s - 1, 0, s - 1, s);
			$nc(g)->setColor(lead);
			$nc(g)->drawLine(0, cy, s - 2, 0);
			$nc(g)->drawLine(s - 2, 0, s - 1, 0);
			$nc(g)->setColor(trail);
			$nc(g)->drawLine(0, cy, 0, cy);
			break;
		}
	}
}

MotifScrollBarButton::MotifScrollBarButton() {
}

$Class* MotifScrollBarButton::load$($String* name, bool initialize) {
	$loadClass(MotifScrollBarButton, name, initialize, &_MotifScrollBarButton_ClassInfo_, allocate$MotifScrollBarButton);
	return class$;
}

$Class* MotifScrollBarButton::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com