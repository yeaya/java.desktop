#include <javax/swing/plaf/metal/MetalScrollButton.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

#undef EAST
#undef MAX_VALUE
#undef NORTH
#undef SOUTH
#undef WEST

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalScrollButton_FieldInfo_[] = {
	{"shadowColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(MetalScrollButton, shadowColor)},
	{"highlightColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(MetalScrollButton, highlightColor)},
	{"isFreeStanding", "Z", nullptr, $PRIVATE, $field(MetalScrollButton, isFreeStanding)},
	{"buttonWidth", "I", nullptr, $PRIVATE, $field(MetalScrollButton, buttonWidth)},
	{}
};

$MethodInfo _MetalScrollButton_MethodInfo_[] = {
	{"<init>", "(IIZ)V", nullptr, $PUBLIC, $method(static_cast<void(MetalScrollButton::*)(int32_t,int32_t,bool)>(&MetalScrollButton::init$))},
	{"getButtonWidth", "()I", nullptr, $PUBLIC},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setFreeStanding", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MetalScrollButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalScrollButton",
	"javax.swing.plaf.basic.BasicArrowButton",
	nullptr,
	_MetalScrollButton_FieldInfo_,
	_MetalScrollButton_MethodInfo_
};

$Object* allocate$MetalScrollButton($Class* clazz) {
	return $of($alloc(MetalScrollButton));
}

$Color* MetalScrollButton::shadowColor = nullptr;
$Color* MetalScrollButton::highlightColor = nullptr;

void MetalScrollButton::init$(int32_t direction, int32_t width, bool freeStanding) {
	$BasicArrowButton::init$(direction);
	this->isFreeStanding = false;
	$assignStatic(MetalScrollButton::shadowColor, $UIManager::getColor("ScrollBar.darkShadow"_s));
	$assignStatic(MetalScrollButton::highlightColor, $UIManager::getColor("ScrollBar.highlight"_s));
	this->buttonWidth = width;
	this->isFreeStanding = freeStanding;
}

void MetalScrollButton::setFreeStanding(bool freeStanding) {
	this->isFreeStanding = freeStanding;
}

void MetalScrollButton::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	bool leftToRight = $MetalUtils::isLeftToRight(this);
	bool isEnabled = $nc($(getParent()))->isEnabled();
	$var($Color, arrowColor, isEnabled ? static_cast<$Color*>($MetalLookAndFeel::getControlInfo()) : static_cast<$Color*>($MetalLookAndFeel::getControlDisabled()));
	bool isPressed = $nc($(getModel()))->isPressed();
	int32_t width = getWidth();
	int32_t height = getHeight();
	int32_t w = width;
	int32_t h = height;
	int32_t arrowHeight = (height + 1) / 4;
	int32_t arrowWidth = (height + 1) / 2;
	if (isPressed) {
		$nc(g)->setColor($($MetalLookAndFeel::getControlShadow()));
	} else {
		$nc(g)->setColor($(getBackground()));
	}
	$nc(g)->fillRect(0, 0, width, height);
	if (getDirection() == $SwingConstants::NORTH) {
		if (!this->isFreeStanding) {
			height += 1;
			g->translate(0, -1);
			width += 2;
			if (!leftToRight) {
				g->translate(-1, 0);
			}
		}
		g->setColor(arrowColor);
		int32_t startY = ((h + 1) - arrowHeight) / 2;
		int32_t startX = (w / 2);
		g->translate(startX, startY);
		g->fillPolygon($$new($ints, {
			0,
			1,
			arrowHeight + 1,
			-arrowHeight
		}), $$new($ints, {
			0,
			0,
			arrowHeight,
			arrowHeight
		}), 4);
		g->translate(-startX, -startY);
		if (isEnabled) {
			g->setColor(MetalScrollButton::highlightColor);
			if (!isPressed) {
				g->drawLine(1, 1, width - 3, 1);
				g->drawLine(1, 1, 1, height - 1);
			}
			g->drawLine(width - 1, 1, width - 1, height - 1);
			g->setColor(MetalScrollButton::shadowColor);
			g->drawLine(0, 0, width - 2, 0);
			g->drawLine(0, 0, 0, height - 1);
			g->drawLine(width - 2, 2, width - 2, height - 1);
		} else {
			$MetalUtils::drawDisabledBorder(g, 0, 0, width, height + 1);
		}
		if (!this->isFreeStanding) {
			height -= 1;
			g->translate(0, 1);
			width -= 2;
			if (!leftToRight) {
				g->translate(1, 0);
			}
		}
	} else if (getDirection() == $SwingConstants::SOUTH) {
		if (!this->isFreeStanding) {
			height += 1;
			width += 2;
			if (!leftToRight) {
				g->translate(-1, 0);
			}
		}
		g->setColor(arrowColor);
		int32_t startY = (((h + 1) - arrowHeight) / 2) + arrowHeight - 1;
		int32_t startX = (w / 2);
		g->translate(startX, startY);
		g->fillPolygon($$new($ints, {
			0,
			1,
			arrowHeight + 1,
			-arrowHeight
		}), $$new($ints, {
			0,
			0,
			-arrowHeight,
			-arrowHeight
		}), 4);
		g->translate(-startX, -startY);
		if (isEnabled) {
			g->setColor(MetalScrollButton::highlightColor);
			if (!isPressed) {
				g->drawLine(1, 0, width - 3, 0);
				g->drawLine(1, 0, 1, height - 3);
			}
			g->drawLine(1, height - 1, width - 1, height - 1);
			g->drawLine(width - 1, 0, width - 1, height - 1);
			g->setColor(MetalScrollButton::shadowColor);
			g->drawLine(0, 0, 0, height - 2);
			g->drawLine(width - 2, 0, width - 2, height - 2);
			g->drawLine(2, height - 2, width - 2, height - 2);
		} else {
			$MetalUtils::drawDisabledBorder(g, 0, -1, width, height + 1);
		}
		if (!this->isFreeStanding) {
			height -= 1;
			width -= 2;
			if (!leftToRight) {
				g->translate(1, 0);
			}
		}
	} else if (getDirection() == $SwingConstants::EAST) {
		if (!this->isFreeStanding) {
			height += 2;
			width += 1;
		}
		g->setColor(arrowColor);
		int32_t startX = (((w + 1) - arrowHeight) / 2) + arrowHeight - 1;
		int32_t startY = (h / 2);
		g->translate(startX, startY);
		g->fillPolygon($$new($ints, {
			0,
			0,
			-arrowHeight,
			-arrowHeight
		}), $$new($ints, {
			0,
			1,
			arrowHeight + 1,
			-arrowHeight
		}), 4);
		g->translate(-startX, -startY);
		if (isEnabled) {
			g->setColor(MetalScrollButton::highlightColor);
			if (!isPressed) {
				g->drawLine(0, 1, width - 3, 1);
				g->drawLine(0, 1, 0, height - 3);
			}
			g->drawLine(width - 1, 1, width - 1, height - 1);
			g->drawLine(0, height - 1, width - 1, height - 1);
			g->setColor(MetalScrollButton::shadowColor);
			g->drawLine(0, 0, width - 2, 0);
			g->drawLine(width - 2, 2, width - 2, height - 2);
			g->drawLine(0, height - 2, width - 2, height - 2);
		} else {
			$MetalUtils::drawDisabledBorder(g, -1, 0, width + 1, height);
		}
		if (!this->isFreeStanding) {
			height -= 2;
			width -= 1;
		}
	} else if (getDirection() == $SwingConstants::WEST) {
		if (!this->isFreeStanding) {
			height += 2;
			width += 1;
			g->translate(-1, 0);
		}
		g->setColor(arrowColor);
		int32_t startX = (((w + 1) - arrowHeight) / 2);
		int32_t startY = (h / 2);
		g->translate(startX, startY);
		g->fillPolygon($$new($ints, {
			0,
			0,
			arrowHeight,
			arrowHeight
		}), $$new($ints, {
			0,
			1,
			arrowHeight + 1,
			-arrowHeight
		}), 4);
		g->translate(-startX, -startY);
		if (isEnabled) {
			g->setColor(MetalScrollButton::highlightColor);
			if (!isPressed) {
				g->drawLine(1, 1, width - 1, 1);
				g->drawLine(1, 1, 1, height - 3);
			}
			g->drawLine(1, height - 1, width - 1, height - 1);
			g->setColor(MetalScrollButton::shadowColor);
			g->drawLine(0, 0, width - 1, 0);
			g->drawLine(0, 0, 0, height - 2);
			g->drawLine(2, height - 2, width - 1, height - 2);
		} else {
			$MetalUtils::drawDisabledBorder(g, 0, 0, width + 1, height);
		}
		if (!this->isFreeStanding) {
			height -= 2;
			width -= 1;
			g->translate(1, 0);
		}
	}
}

$Dimension* MetalScrollButton::getPreferredSize() {
	if (getDirection() == $SwingConstants::NORTH) {
		return $new($Dimension, this->buttonWidth, this->buttonWidth - 2);
	} else if (getDirection() == $SwingConstants::SOUTH) {
		return $new($Dimension, this->buttonWidth, this->buttonWidth - (this->isFreeStanding ? 1 : 2));
	} else if (getDirection() == $SwingConstants::EAST) {
		return $new($Dimension, this->buttonWidth - (this->isFreeStanding ? 1 : 2), this->buttonWidth);
	} else if (getDirection() == $SwingConstants::WEST) {
		return $new($Dimension, this->buttonWidth - 2, this->buttonWidth);
	} else {
		return $new($Dimension, 0, 0);
	}
}

$Dimension* MetalScrollButton::getMinimumSize() {
	return getPreferredSize();
}

$Dimension* MetalScrollButton::getMaximumSize() {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

int32_t MetalScrollButton::getButtonWidth() {
	return this->buttonWidth;
}

MetalScrollButton::MetalScrollButton() {
}

$Class* MetalScrollButton::load$($String* name, bool initialize) {
	$loadClass(MetalScrollButton, name, initialize, &_MetalScrollButton_ClassInfo_, allocate$MetalScrollButton);
	return class$;
}

$Class* MetalScrollButton::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax