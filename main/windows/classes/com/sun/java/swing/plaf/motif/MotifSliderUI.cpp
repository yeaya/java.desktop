#include <com/sun/java/swing/plaf/motif/MotifSliderUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef MINIMUM_HORIZONTAL_SIZE
#undef MINIMUM_VERTICAL_SIZE
#undef PREFERRED_HORIZONTAL_SIZE
#undef PREFERRED_VERTICAL_SIZE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSlider = ::javax::swing::JSlider;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifSliderUI_FieldInfo_[] = {
	{"PREFERRED_HORIZONTAL_SIZE", "Ljava/awt/Dimension;", nullptr, $STATIC | $FINAL, $staticField(MotifSliderUI, PREFERRED_HORIZONTAL_SIZE)},
	{"PREFERRED_VERTICAL_SIZE", "Ljava/awt/Dimension;", nullptr, $STATIC | $FINAL, $staticField(MotifSliderUI, PREFERRED_VERTICAL_SIZE)},
	{"MINIMUM_HORIZONTAL_SIZE", "Ljava/awt/Dimension;", nullptr, $STATIC | $FINAL, $staticField(MotifSliderUI, MINIMUM_HORIZONTAL_SIZE)},
	{"MINIMUM_VERTICAL_SIZE", "Ljava/awt/Dimension;", nullptr, $STATIC | $FINAL, $staticField(MotifSliderUI, MINIMUM_VERTICAL_SIZE)},
	{}
};

$MethodInfo _MotifSliderUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JSlider;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifSliderUI::*)($JSlider*)>(&MotifSliderUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifSliderUI::createUI))},
	{"getMinimumHorizontalSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumVerticalSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredHorizontalSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredVerticalSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getThumbSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"paintFocus", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintThumb", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintTrack", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MotifSliderUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifSliderUI",
	"javax.swing.plaf.basic.BasicSliderUI",
	nullptr,
	_MotifSliderUI_FieldInfo_,
	_MotifSliderUI_MethodInfo_
};

$Object* allocate$MotifSliderUI($Class* clazz) {
	return $of($alloc(MotifSliderUI));
}

$Dimension* MotifSliderUI::PREFERRED_HORIZONTAL_SIZE = nullptr;
$Dimension* MotifSliderUI::PREFERRED_VERTICAL_SIZE = nullptr;
$Dimension* MotifSliderUI::MINIMUM_HORIZONTAL_SIZE = nullptr;
$Dimension* MotifSliderUI::MINIMUM_VERTICAL_SIZE = nullptr;

void MotifSliderUI::init$($JSlider* b) {
	$BasicSliderUI::init$(b);
}

$ComponentUI* MotifSliderUI::createUI($JComponent* b) {
	$init(MotifSliderUI);
	return $new(MotifSliderUI, $cast($JSlider, b));
}

$Dimension* MotifSliderUI::getPreferredHorizontalSize() {
	return MotifSliderUI::PREFERRED_HORIZONTAL_SIZE;
}

$Dimension* MotifSliderUI::getPreferredVerticalSize() {
	return MotifSliderUI::PREFERRED_VERTICAL_SIZE;
}

$Dimension* MotifSliderUI::getMinimumHorizontalSize() {
	return MotifSliderUI::MINIMUM_HORIZONTAL_SIZE;
}

$Dimension* MotifSliderUI::getMinimumVerticalSize() {
	return MotifSliderUI::MINIMUM_VERTICAL_SIZE;
}

$Dimension* MotifSliderUI::getThumbSize() {
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		return $new($Dimension, 30, 15);
	} else {
		return $new($Dimension, 15, 30);
	}
}

void MotifSliderUI::paintFocus($Graphics* g) {
}

void MotifSliderUI::paintTrack($Graphics* g) {
}

void MotifSliderUI::paintThumb($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, knobBounds, this->thumbRect);
	int32_t x = $nc(knobBounds)->x;
	int32_t y = knobBounds->y;
	int32_t w = knobBounds->width;
	int32_t h = knobBounds->height;
	if ($nc(this->slider)->isEnabled()) {
		$nc(g)->setColor($($nc(this->slider)->getForeground()));
	} else {
		$nc(g)->setColor($($nc($($nc(this->slider)->getForeground()))->darker()));
	}
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		$nc(g)->translate(x, knobBounds->y - 1);
		g->fillRect(0, 1, w, h - 1);
		g->setColor($(getHighlightColor()));
		$SwingUtilities2::drawHLine(g, 0, w - 1, 1);
		$SwingUtilities2::drawVLine(g, 0, 1, h);
		$SwingUtilities2::drawVLine(g, w / 2, 2, h - 1);
		g->setColor($(getShadowColor()));
		$SwingUtilities2::drawHLine(g, 0, w - 1, h);
		$SwingUtilities2::drawVLine(g, w - 1, 1, h);
		$SwingUtilities2::drawVLine(g, w / 2 - 1, 2, h);
		g->translate(-x, -(knobBounds->y - 1));
	} else {
		$nc(g)->translate(knobBounds->x - 1, 0);
		g->fillRect(1, y, w - 1, h);
		g->setColor($(getHighlightColor()));
		$SwingUtilities2::drawHLine(g, 1, w, y);
		$SwingUtilities2::drawVLine(g, 1, y + 1, y + h - 1);
		$SwingUtilities2::drawHLine(g, 2, w - 1, y + h / 2);
		g->setColor($(getShadowColor()));
		$SwingUtilities2::drawHLine(g, 2, w, y + h - 1);
		$SwingUtilities2::drawVLine(g, w, y + h - 1, y);
		$SwingUtilities2::drawHLine(g, 2, w - 1, y + h / 2 - 1);
		g->translate(-(knobBounds->x - 1), 0);
	}
}

void clinit$MotifSliderUI($Class* class$) {
	$assignStatic(MotifSliderUI::PREFERRED_HORIZONTAL_SIZE, $new($Dimension, 164, 15));
	$assignStatic(MotifSliderUI::PREFERRED_VERTICAL_SIZE, $new($Dimension, 15, 164));
	$assignStatic(MotifSliderUI::MINIMUM_HORIZONTAL_SIZE, $new($Dimension, 43, 15));
	$assignStatic(MotifSliderUI::MINIMUM_VERTICAL_SIZE, $new($Dimension, 15, 43));
}

MotifSliderUI::MotifSliderUI() {
}

$Class* MotifSliderUI::load$($String* name, bool initialize) {
	$loadClass(MotifSliderUI, name, initialize, &_MotifSliderUI_ClassInfo_, clinit$MotifSliderUI, allocate$MotifSliderUI);
	return class$;
}

$Class* MotifSliderUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com