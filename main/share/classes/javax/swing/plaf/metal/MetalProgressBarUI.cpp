#include <javax/swing/plaf/metal/MetalProgressBarUI.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Stroke.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ProgressBarUI.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

#undef HORIZONTAL

using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Stroke = ::java::awt::Stroke;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JProgressBar = ::javax::swing::JProgressBar;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ProgressBarUI = ::javax::swing::plaf::ProgressBarUI;
using $BasicProgressBarUI = ::javax::swing::plaf::basic::BasicProgressBarUI;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalProgressBarUI_FieldInfo_[] = {
	{"innards", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(MetalProgressBarUI, innards)},
	{"box", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(MetalProgressBarUI, box)},
	{}
};

$MethodInfo _MetalProgressBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalProgressBarUI::*)()>(&MetalProgressBarUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalProgressBarUI::createUI))},
	{"paintDeterminate", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintIndeterminate", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MetalProgressBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalProgressBarUI",
	"javax.swing.plaf.basic.BasicProgressBarUI",
	nullptr,
	_MetalProgressBarUI_FieldInfo_,
	_MetalProgressBarUI_MethodInfo_
};

$Object* allocate$MetalProgressBarUI($Class* clazz) {
	return $of($alloc(MetalProgressBarUI));
}

void MetalProgressBarUI::init$() {
	$BasicProgressBarUI::init$();
}

$ComponentUI* MetalProgressBarUI::createUI($JComponent* c) {
	$init(MetalProgressBarUI);
	return $new(MetalProgressBarUI);
}

void MetalProgressBarUI::paintDeterminate($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$BasicProgressBarUI::paintDeterminate(g, c);
	if (!($instanceOf($Graphics2D, g))) {
		return;
	}
	if ($nc(this->progressBar)->isBorderPainted()) {
		$var($Insets, b, $nc(this->progressBar)->getInsets());
		int32_t barRectWidth = $nc(this->progressBar)->getWidth() - ($nc(b)->left + b->right);
		int32_t barRectHeight = $nc(this->progressBar)->getHeight() - (b->top + b->bottom);
		int32_t amountFull = getAmountFull(b, barRectWidth, barRectHeight);
		bool isLeftToRight = $MetalUtils::isLeftToRight(c);
		int32_t startX = 0;
		int32_t startY = 0;
		int32_t endX = 0;
		int32_t endY = 0;
		startX = b->left;
		startY = b->top;
		endX = b->left + barRectWidth - 1;
		endY = b->top + barRectHeight - 1;
		$var($Graphics2D, g2, $cast($Graphics2D, g));
		$nc(g2)->setStroke($$new($BasicStroke, 1.0f));
		if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
			g2->setColor($($MetalLookAndFeel::getControlShadow()));
			g2->drawLine(startX, startY, endX, startY);
			if (amountFull > 0) {
				g2->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
				if (isLeftToRight) {
					g2->drawLine(startX, startY, startX + amountFull - 1, startY);
				} else {
					g2->drawLine(endX, startY, endX - amountFull + 1, startY);
					if ($nc(this->progressBar)->getPercentComplete() != 1.0f) {
						g2->setColor($($MetalLookAndFeel::getControlShadow()));
					}
				}
			}
			g2->drawLine(startX, startY, startX, endY);
		} else {
			g2->setColor($($MetalLookAndFeel::getControlShadow()));
			g2->drawLine(startX, startY, startX, endY);
			if (amountFull > 0) {
				g2->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
				g2->drawLine(startX, endY, startX, endY - amountFull + 1);
			}
			g2->setColor($($MetalLookAndFeel::getControlShadow()));
			if ($nc(this->progressBar)->getPercentComplete() == 1.0f) {
				g2->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
			}
			g2->drawLine(startX, startY, endX, startY);
		}
	}
}

void MetalProgressBarUI::paintIndeterminate($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$BasicProgressBarUI::paintIndeterminate(g, c);
	if (!$nc(this->progressBar)->isBorderPainted() || (!($instanceOf($Graphics2D, g)))) {
		return;
	}
	$var($Insets, b, $nc(this->progressBar)->getInsets());
	int32_t barRectWidth = $nc(this->progressBar)->getWidth() - ($nc(b)->left + b->right);
	int32_t barRectHeight = $nc(this->progressBar)->getHeight() - (b->top + b->bottom);
	int32_t amountFull = getAmountFull(b, barRectWidth, barRectHeight);
	bool isLeftToRight = $MetalUtils::isLeftToRight(c);
	int32_t startX = 0;
	int32_t startY = 0;
	int32_t endX = 0;
	int32_t endY = 0;
	$var($Rectangle, box, nullptr);
	$assign(box, getBox(box));
	startX = b->left;
	startY = b->top;
	endX = b->left + barRectWidth - 1;
	endY = b->top + barRectHeight - 1;
	$var($Graphics2D, g2, $cast($Graphics2D, g));
	$nc(g2)->setStroke($$new($BasicStroke, 1.0f));
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		g2->setColor($($MetalLookAndFeel::getControlShadow()));
		g2->drawLine(startX, startY, endX, startY);
		g2->drawLine(startX, startY, startX, endY);
		g2->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
		g2->drawLine($nc(box)->x, startY, box->x + box->width - 1, startY);
	} else {
		g2->setColor($($MetalLookAndFeel::getControlShadow()));
		g2->drawLine(startX, startY, startX, endY);
		g2->drawLine(startX, startY, endX, startY);
		g2->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
		g2->drawLine(startX, $nc(box)->y, startX, box->y + box->height - 1);
	}
}

MetalProgressBarUI::MetalProgressBarUI() {
}

$Class* MetalProgressBarUI::load$($String* name, bool initialize) {
	$loadClass(MetalProgressBarUI, name, initialize, &_MetalProgressBarUI_ClassInfo_, allocate$MetalProgressBarUI);
	return class$;
}

$Class* MetalProgressBarUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax