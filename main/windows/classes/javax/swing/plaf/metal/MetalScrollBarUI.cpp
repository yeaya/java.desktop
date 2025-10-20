#include <javax/swing/plaf/metal/MetalScrollBarUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <javax/swing/plaf/metal/MetalBumps.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalScrollBarUI$ScrollBarListener.h>
#include <javax/swing/plaf/metal/MetalScrollButton.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef FREE_STANDING_PROP
#undef VERTICAL

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $UIManager = ::javax::swing::UIManager;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $BasicScrollBarUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicScrollBarUI$PropertyChangeHandler;
using $MetalBumps = ::javax::swing::plaf::metal::MetalBumps;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalScrollBarUI$ScrollBarListener = ::javax::swing::plaf::metal::MetalScrollBarUI$ScrollBarListener;
using $MetalScrollButton = ::javax::swing::plaf::metal::MetalScrollButton;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalScrollBarUI_FieldInfo_[] = {
	{"shadowColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(MetalScrollBarUI, shadowColor)},
	{"highlightColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(MetalScrollBarUI, highlightColor)},
	{"darkShadowColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(MetalScrollBarUI, darkShadowColor)},
	{"thumbColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(MetalScrollBarUI, thumbColor)},
	{"thumbShadow", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(MetalScrollBarUI, thumbShadow)},
	{"thumbHighlightColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(MetalScrollBarUI, thumbHighlightColor)},
	{"bumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, $PRIVATE, $field(MetalScrollBarUI, bumps)},
	{"increaseButton", "Ljavax/swing/plaf/metal/MetalScrollButton;", nullptr, $PROTECTED, $field(MetalScrollBarUI, increaseButton)},
	{"decreaseButton", "Ljavax/swing/plaf/metal/MetalScrollButton;", nullptr, $PROTECTED, $field(MetalScrollBarUI, decreaseButton)},
	{"scrollBarWidth", "I", nullptr, $PROTECTED, $field(MetalScrollBarUI, scrollBarWidth)},
	{"FREE_STANDING_PROP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MetalScrollBarUI, FREE_STANDING_PROP)},
	{"isFreeStanding", "Z", nullptr, $PROTECTED, $field(MetalScrollBarUI, isFreeStanding)},
	{}
};

$MethodInfo _MetalScrollBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalScrollBarUI::*)()>(&MetalScrollBarUI::init$))},
	{"configureScrollBarColors", "()V", nullptr, $PROTECTED},
	{"createDecreaseButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createIncreaseButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalScrollBarUI::createUI))},
	{"getMinimumThumbSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"oceanPaintThumb", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalScrollBarUI::*)($Graphics*,$JComponent*,$Rectangle*)>(&MetalScrollBarUI::oceanPaintThumb))},
	{"paintThumb", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintTrack", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"setThumbBounds", "(IIII)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetalScrollBarUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalScrollBarUI$ScrollBarListener", "javax.swing.plaf.metal.MetalScrollBarUI", "ScrollBarListener", 0},
	{}
};

$ClassInfo _MetalScrollBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalScrollBarUI",
	"javax.swing.plaf.basic.BasicScrollBarUI",
	nullptr,
	_MetalScrollBarUI_FieldInfo_,
	_MetalScrollBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_MetalScrollBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalScrollBarUI$ScrollBarListener"
};

$Object* allocate$MetalScrollBarUI($Class* clazz) {
	return $of($alloc(MetalScrollBarUI));
}

$Color* MetalScrollBarUI::shadowColor = nullptr;
$Color* MetalScrollBarUI::highlightColor = nullptr;
$Color* MetalScrollBarUI::darkShadowColor = nullptr;
$Color* MetalScrollBarUI::thumbColor = nullptr;
$Color* MetalScrollBarUI::thumbShadow = nullptr;
$Color* MetalScrollBarUI::thumbHighlightColor = nullptr;

$String* MetalScrollBarUI::FREE_STANDING_PROP = nullptr;

void MetalScrollBarUI::init$() {
	$BasicScrollBarUI::init$();
	this->isFreeStanding = true;
}

$ComponentUI* MetalScrollBarUI::createUI($JComponent* c) {
	$init(MetalScrollBarUI);
	return $new(MetalScrollBarUI);
}

void MetalScrollBarUI::installDefaults() {
	this->scrollBarWidth = $nc((($cast($Integer, $($UIManager::get("ScrollBar.width"_s))))))->intValue();
	$BasicScrollBarUI::installDefaults();
	$set(this, bumps, $new($MetalBumps, 10, 10, MetalScrollBarUI::thumbHighlightColor, MetalScrollBarUI::thumbShadow, MetalScrollBarUI::thumbColor));
}

void MetalScrollBarUI::installListeners() {
	$BasicScrollBarUI::installListeners();
	$nc(($cast($MetalScrollBarUI$ScrollBarListener, this->propertyChangeListener)))->handlePropertyChange($($nc(this->scrollbar)->getClientProperty(MetalScrollBarUI::FREE_STANDING_PROP)));
}

$PropertyChangeListener* MetalScrollBarUI::createPropertyChangeListener() {
	return $new($MetalScrollBarUI$ScrollBarListener, this);
}

void MetalScrollBarUI::configureScrollBarColors() {
	$BasicScrollBarUI::configureScrollBarColors();
	$assignStatic(MetalScrollBarUI::shadowColor, $UIManager::getColor("ScrollBar.shadow"_s));
	$assignStatic(MetalScrollBarUI::highlightColor, $UIManager::getColor("ScrollBar.highlight"_s));
	$assignStatic(MetalScrollBarUI::darkShadowColor, $UIManager::getColor("ScrollBar.darkShadow"_s));
	$assignStatic(MetalScrollBarUI::thumbColor, $UIManager::getColor("ScrollBar.thumb"_s));
	$assignStatic(MetalScrollBarUI::thumbShadow, $UIManager::getColor("ScrollBar.thumbShadow"_s));
	$assignStatic(MetalScrollBarUI::thumbHighlightColor, $UIManager::getColor("ScrollBar.thumbHighlight"_s));
}

$Dimension* MetalScrollBarUI::getPreferredSize($JComponent* c) {
	if ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) {
		return $new($Dimension, this->scrollBarWidth, this->scrollBarWidth * 3 + 10);
	} else {
		return $new($Dimension, this->scrollBarWidth * 3 + 10, this->scrollBarWidth);
	}
}

$JButton* MetalScrollBarUI::createDecreaseButton(int32_t orientation) {
	$set(this, decreaseButton, $new($MetalScrollButton, orientation, this->scrollBarWidth, this->isFreeStanding));
	return this->decreaseButton;
}

$JButton* MetalScrollBarUI::createIncreaseButton(int32_t orientation) {
	$set(this, increaseButton, $new($MetalScrollButton, orientation, this->scrollBarWidth, this->isFreeStanding));
	return this->increaseButton;
}

void MetalScrollBarUI::paintTrack($Graphics* g, $JComponent* c, $Rectangle* trackBounds) {
	$nc(g)->translate($nc(trackBounds)->x, trackBounds->y);
	bool leftToRight = $MetalUtils::isLeftToRight(c);
	if ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) {
		if (!this->isFreeStanding) {
			$nc(trackBounds)->width += 2;
			if (!leftToRight) {
				g->translate(-1, 0);
			}
		}
		if ($nc(c)->isEnabled()) {
			g->setColor(MetalScrollBarUI::darkShadowColor);
			$SwingUtilities2::drawVLine(g, 0, 0, $nc(trackBounds)->height - 1);
			$SwingUtilities2::drawVLine(g, $nc(trackBounds)->width - 2, 0, trackBounds->height - 1);
			$SwingUtilities2::drawHLine(g, 2, $nc(trackBounds)->width - 1, trackBounds->height - 1);
			$SwingUtilities2::drawHLine(g, 2, $nc(trackBounds)->width - 2, 0);
			g->setColor(MetalScrollBarUI::shadowColor);
			$SwingUtilities2::drawVLine(g, 1, 1, $nc(trackBounds)->height - 2);
			$SwingUtilities2::drawHLine(g, 1, $nc(trackBounds)->width - 3, 1);
			int32_t var$0 = $nc(this->scrollbar)->getValue();
			if (var$0 != $nc(this->scrollbar)->getMaximum()) {
				int32_t y = $nc(this->thumbRect)->y + $nc(this->thumbRect)->height - $nc(trackBounds)->y;
				$SwingUtilities2::drawHLine(g, 1, trackBounds->width - 1, y);
			}
			g->setColor(MetalScrollBarUI::highlightColor);
			$SwingUtilities2::drawVLine(g, $nc(trackBounds)->width - 1, 0, trackBounds->height - 1);
		} else {
			$MetalUtils::drawDisabledBorder(g, 0, 0, $nc(trackBounds)->width, trackBounds->height);
		}
		if (!this->isFreeStanding) {
			$nc(trackBounds)->width -= 2;
			if (!leftToRight) {
				g->translate(1, 0);
			}
		}
	} else {
		if (!this->isFreeStanding) {
			$nc(trackBounds)->height += 2;
		}
		if ($nc(c)->isEnabled()) {
			g->setColor(MetalScrollBarUI::darkShadowColor);
			$SwingUtilities2::drawHLine(g, 0, $nc(trackBounds)->width - 1, 0);
			$SwingUtilities2::drawVLine(g, 0, 2, $nc(trackBounds)->height - 2);
			$SwingUtilities2::drawHLine(g, 0, $nc(trackBounds)->width - 1, trackBounds->height - 2);
			$SwingUtilities2::drawVLine(g, $nc(trackBounds)->width - 1, 2, trackBounds->height - 1);
			g->setColor(MetalScrollBarUI::shadowColor);
			$SwingUtilities2::drawHLine(g, 1, $nc(trackBounds)->width - 2, 1);
			$SwingUtilities2::drawVLine(g, 1, 1, $nc(trackBounds)->height - 3);
			$SwingUtilities2::drawHLine(g, 0, $nc(trackBounds)->width - 1, trackBounds->height - 1);
			int32_t var$1 = $nc(this->scrollbar)->getValue();
			if (var$1 != $nc(this->scrollbar)->getMaximum()) {
				int32_t x = $nc(this->thumbRect)->x + $nc(this->thumbRect)->width - $nc(trackBounds)->x;
				$SwingUtilities2::drawVLine(g, x, 1, trackBounds->height - 1);
			}
		} else {
			$MetalUtils::drawDisabledBorder(g, 0, 0, $nc(trackBounds)->width, trackBounds->height);
		}
		if (!this->isFreeStanding) {
			$nc(trackBounds)->height -= 2;
		}
	}
	g->translate(-$nc(trackBounds)->x, -trackBounds->y);
}

void MetalScrollBarUI::paintThumb($Graphics* g, $JComponent* c, $Rectangle* thumbBounds) {
	if (!$nc(c)->isEnabled()) {
		return;
	}
	if ($MetalLookAndFeel::usingOcean()) {
		oceanPaintThumb(g, c, thumbBounds);
		return;
	}
	bool leftToRight = $MetalUtils::isLeftToRight(c);
	$nc(g)->translate($nc(thumbBounds)->x, thumbBounds->y);
	if ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) {
		if (!this->isFreeStanding) {
			$nc(thumbBounds)->width += 2;
			if (!leftToRight) {
				g->translate(-1, 0);
			}
		}
		g->setColor(MetalScrollBarUI::thumbColor);
		g->fillRect(0, 0, $nc(thumbBounds)->width - 2, thumbBounds->height - 1);
		g->setColor(MetalScrollBarUI::thumbShadow);
		$SwingUtilities2::drawRect(g, 0, 0, $nc(thumbBounds)->width - 2, thumbBounds->height - 1);
		g->setColor(MetalScrollBarUI::thumbHighlightColor);
		$SwingUtilities2::drawHLine(g, 1, $nc(thumbBounds)->width - 3, 1);
		$SwingUtilities2::drawVLine(g, 1, 1, $nc(thumbBounds)->height - 2);
		$nc(this->bumps)->setBumpArea($nc(thumbBounds)->width - 6, thumbBounds->height - 7);
		$nc(this->bumps)->paintIcon(c, g, 3, 4);
		if (!this->isFreeStanding) {
			$nc(thumbBounds)->width -= 2;
			if (!leftToRight) {
				g->translate(1, 0);
			}
		}
	} else {
		if (!this->isFreeStanding) {
			$nc(thumbBounds)->height += 2;
		}
		g->setColor(MetalScrollBarUI::thumbColor);
		g->fillRect(0, 0, $nc(thumbBounds)->width - 1, thumbBounds->height - 2);
		g->setColor(MetalScrollBarUI::thumbShadow);
		$SwingUtilities2::drawRect(g, 0, 0, $nc(thumbBounds)->width - 1, thumbBounds->height - 2);
		g->setColor(MetalScrollBarUI::thumbHighlightColor);
		$SwingUtilities2::drawHLine(g, 1, $nc(thumbBounds)->width - 3, 1);
		$SwingUtilities2::drawVLine(g, 1, 1, $nc(thumbBounds)->height - 3);
		$nc(this->bumps)->setBumpArea($nc(thumbBounds)->width - 7, thumbBounds->height - 6);
		$nc(this->bumps)->paintIcon(c, g, 4, 3);
		if (!this->isFreeStanding) {
			$nc(thumbBounds)->height -= 2;
		}
	}
	g->translate(-$nc(thumbBounds)->x, -thumbBounds->y);
}

void MetalScrollBarUI::oceanPaintThumb($Graphics* g, $JComponent* c, $Rectangle* thumbBounds) {
	$useLocalCurrentObjectStackCache();
	bool leftToRight = $MetalUtils::isLeftToRight(c);
	$nc(g)->translate($nc(thumbBounds)->x, thumbBounds->y);
	if ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) {
		if (!this->isFreeStanding) {
			$nc(thumbBounds)->width += 2;
			if (!leftToRight) {
				g->translate(-1, 0);
			}
		}
		if (MetalScrollBarUI::thumbColor != nullptr) {
			g->setColor(MetalScrollBarUI::thumbColor);
			g->fillRect(0, 0, $nc(thumbBounds)->width - 2, thumbBounds->height - 1);
		}
		g->setColor(MetalScrollBarUI::thumbShadow);
		$SwingUtilities2::drawRect(g, 0, 0, $nc(thumbBounds)->width - 2, thumbBounds->height - 1);
		g->setColor(MetalScrollBarUI::thumbHighlightColor);
		$SwingUtilities2::drawHLine(g, 1, $nc(thumbBounds)->width - 3, 1);
		$SwingUtilities2::drawVLine(g, 1, 1, $nc(thumbBounds)->height - 2);
		$MetalUtils::drawGradient(c, g, "ScrollBar.gradient"_s, 2, 2, $nc(thumbBounds)->width - 4, thumbBounds->height - 3, false);
		int32_t gripSize = $nc(thumbBounds)->width - 8;
		if (gripSize > 2 && thumbBounds->height >= 10) {
			g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
			int32_t gripY = thumbBounds->height / 2 - 2;
			for (int32_t counter = 0; counter < 6; counter += 2) {
				g->fillRect(4, counter + gripY, gripSize, 1);
			}
			g->setColor($($MetalLookAndFeel::getWhite()));
			++gripY;
			for (int32_t counter = 0; counter < 6; counter += 2) {
				g->fillRect(5, counter + gripY, gripSize, 1);
			}
		}
		if (!this->isFreeStanding) {
			thumbBounds->width -= 2;
			if (!leftToRight) {
				g->translate(1, 0);
			}
		}
	} else {
		if (!this->isFreeStanding) {
			$nc(thumbBounds)->height += 2;
		}
		if (MetalScrollBarUI::thumbColor != nullptr) {
			g->setColor(MetalScrollBarUI::thumbColor);
			g->fillRect(0, 0, $nc(thumbBounds)->width - 1, thumbBounds->height - 2);
		}
		g->setColor(MetalScrollBarUI::thumbShadow);
		$SwingUtilities2::drawRect(g, 0, 0, $nc(thumbBounds)->width - 1, thumbBounds->height - 2);
		g->setColor(MetalScrollBarUI::thumbHighlightColor);
		$SwingUtilities2::drawHLine(g, 1, $nc(thumbBounds)->width - 2, 1);
		$SwingUtilities2::drawVLine(g, 1, 1, $nc(thumbBounds)->height - 3);
		$MetalUtils::drawGradient(c, g, "ScrollBar.gradient"_s, 2, 2, $nc(thumbBounds)->width - 3, thumbBounds->height - 4, true);
		int32_t gripSize = $nc(thumbBounds)->height - 8;
		if (gripSize > 2 && thumbBounds->width >= 10) {
			g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
			int32_t gripX = thumbBounds->width / 2 - 2;
			for (int32_t counter = 0; counter < 6; counter += 2) {
				g->fillRect(gripX + counter, 4, 1, gripSize);
			}
			g->setColor($($MetalLookAndFeel::getWhite()));
			++gripX;
			for (int32_t counter = 0; counter < 6; counter += 2) {
				g->fillRect(gripX + counter, 5, 1, gripSize);
			}
		}
		if (!this->isFreeStanding) {
			thumbBounds->height -= 2;
		}
	}
	g->translate(-$nc(thumbBounds)->x, -thumbBounds->y);
}

$Dimension* MetalScrollBarUI::getMinimumThumbSize() {
	return $new($Dimension, this->scrollBarWidth, this->scrollBarWidth);
}

void MetalScrollBarUI::setThumbBounds(int32_t x, int32_t y, int32_t width, int32_t height) {
	if (($nc(this->thumbRect)->x == x) && ($nc(this->thumbRect)->y == y) && ($nc(this->thumbRect)->width == width) && ($nc(this->thumbRect)->height == height)) {
		return;
	}
	int32_t minX = $Math::min(x, $nc(this->thumbRect)->x);
	int32_t minY = $Math::min(y, $nc(this->thumbRect)->y);
	int32_t maxX = $Math::max(x + width, $nc(this->thumbRect)->x + $nc(this->thumbRect)->width);
	int32_t maxY = $Math::max(y + height, $nc(this->thumbRect)->y + $nc(this->thumbRect)->height);
	$nc(this->thumbRect)->setBounds(x, y, width, height);
	$nc(this->scrollbar)->repaint(minX, minY, (maxX - minX) + 1, (maxY - minY) + 1);
}

MetalScrollBarUI::MetalScrollBarUI() {
}

void clinit$MetalScrollBarUI($Class* class$) {
	$assignStatic(MetalScrollBarUI::FREE_STANDING_PROP, "JScrollBar.isFreeStanding"_s);
}

$Class* MetalScrollBarUI::load$($String* name, bool initialize) {
	$loadClass(MetalScrollBarUI, name, initialize, &_MetalScrollBarUI_ClassInfo_, clinit$MetalScrollBarUI, allocate$MetalScrollBarUI);
	return class$;
}

$Class* MetalScrollBarUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax