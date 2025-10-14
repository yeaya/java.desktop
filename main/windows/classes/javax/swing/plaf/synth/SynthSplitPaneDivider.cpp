#include <javax/swing/plaf/synth/SynthSplitPaneDivider.h>

#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthArrowButton.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthSplitPaneUI.h>
#include <sun/swing/DefaultLookup.h>
#include <jcpp.h>

#undef DEFAULT_CURSOR
#undef EAST
#undef HORIZONTAL_SPLIT
#undef NORTH
#undef ONE_TOUCH_SIZE
#undef ORIENTATION_PROPERTY
#undef SOUTH
#undef SPLIT_PANE_DIVIDER
#undef WEST

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthArrowButton = ::javax::swing::plaf::synth::SynthArrowButton;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthSplitPaneUI = ::javax::swing::plaf::synth::SynthSplitPaneUI;
using $DefaultLookup = ::sun::swing::DefaultLookup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthSplitPaneDivider_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(SynthSplitPaneDivider::*)($BasicSplitPaneUI*)>(&SynthSplitPaneDivider::init$))},
	{"createLeftOneTouchButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createRightOneTouchButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"lookupOneTouchSize", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthSplitPaneDivider::*)()>(&SynthSplitPaneDivider::lookupOneTouchSize))},
	{"mapDirection", "(Z)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthSplitPaneDivider::*)(bool)>(&SynthSplitPaneDivider::mapDirection))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"setMouseOver", "(Z)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _SynthSplitPaneDivider_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthSplitPaneDivider",
	"javax.swing.plaf.basic.BasicSplitPaneDivider",
	nullptr,
	nullptr,
	_SynthSplitPaneDivider_MethodInfo_
};

$Object* allocate$SynthSplitPaneDivider($Class* clazz) {
	return $of($alloc(SynthSplitPaneDivider));
}

void SynthSplitPaneDivider::init$($BasicSplitPaneUI* ui) {
	$BasicSplitPaneDivider::init$(ui);
}

void SynthSplitPaneDivider::setMouseOver(bool mouseOver) {
	if (isMouseOver() != mouseOver) {
		repaint();
	}
	$BasicSplitPaneDivider::setMouseOver(mouseOver);
}

void SynthSplitPaneDivider::propertyChange($PropertyChangeEvent* e) {
	$BasicSplitPaneDivider::propertyChange(e);
	if ($equals($nc(e)->getSource(), this->splitPane)) {
		$init($JSplitPane);
		if (e->getPropertyName() == $JSplitPane::ORIENTATION_PROPERTY) {
			if ($instanceOf($SynthArrowButton, this->leftButton)) {
				$nc(($cast($SynthArrowButton, this->leftButton)))->setDirection(mapDirection(true));
			}
			if ($instanceOf($SynthArrowButton, this->rightButton)) {
				$nc(($cast($SynthArrowButton, this->rightButton)))->setDirection(mapDirection(false));
			}
		}
	}
}

void SynthSplitPaneDivider::paint($Graphics* g) {
	$var($Graphics, g2, $nc(g)->create());
	$init($Region);
	$var($SynthContext, context, $nc(($cast($SynthSplitPaneUI, this->splitPaneUI)))->getContext(static_cast<$JComponent*>(this->splitPane), $Region::SPLIT_PANE_DIVIDER));
	$var($Rectangle, bounds, getBounds());
	$nc(bounds)->x = (bounds->y = 0);
	$SynthLookAndFeel::updateSubregion(context, g, bounds);
	$nc($($nc(context)->getPainter()))->paintSplitPaneDividerBackground(context, g, 0, 0, bounds->width, bounds->height, $nc(this->splitPane)->getOrientation());
	$var($SynthPainter, foreground, nullptr);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = getWidth();
	int32_t var$3 = getHeight();
	$nc($(context->getPainter()))->paintSplitPaneDividerForeground(var$0, var$1, 0, 0, var$2, var$3, $nc(this->splitPane)->getOrientation());
	for (int32_t counter = 0; counter < getComponentCount(); ++counter) {
		$var($Component, child, getComponent(counter));
		$var($Rectangle, childBounds, $nc(child)->getBounds());
		$var($Graphics, childG, g->create($nc(childBounds)->x, childBounds->y, childBounds->width, childBounds->height));
		child->paint(childG);
		$nc(childG)->dispose();
	}
	$nc(g2)->dispose();
}

int32_t SynthSplitPaneDivider::mapDirection(bool isLeft) {
	if (isLeft) {
		if ($nc(this->splitPane)->getOrientation() == $JSplitPane::HORIZONTAL_SPLIT) {
			return $SwingConstants::WEST;
		}
		return $SwingConstants::NORTH;
	}
	if ($nc(this->splitPane)->getOrientation() == $JSplitPane::HORIZONTAL_SPLIT) {
		return $SwingConstants::EAST;
	}
	return $SwingConstants::SOUTH;
}

$JButton* SynthSplitPaneDivider::createLeftOneTouchButton() {
	$var($SynthArrowButton, b, $new($SynthArrowButton, $SwingConstants::NORTH));
	int32_t oneTouchSize = lookupOneTouchSize();
	b->setName("SplitPaneDivider.leftOneTouchButton"_s);
	b->setMinimumSize($$new($Dimension, oneTouchSize, oneTouchSize));
	b->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
	b->setFocusPainted(false);
	b->setBorderPainted(false);
	b->setRequestFocusEnabled(false);
	b->setDirection(mapDirection(true));
	return b;
}

int32_t SynthSplitPaneDivider::lookupOneTouchSize() {
	return $DefaultLookup::getInt($($nc(this->splitPaneUI)->getSplitPane()), this->splitPaneUI, "SplitPaneDivider.oneTouchButtonSize"_s, $BasicSplitPaneDivider::ONE_TOUCH_SIZE);
}

$JButton* SynthSplitPaneDivider::createRightOneTouchButton() {
	$var($SynthArrowButton, b, $new($SynthArrowButton, $SwingConstants::NORTH));
	int32_t oneTouchSize = lookupOneTouchSize();
	b->setName("SplitPaneDivider.rightOneTouchButton"_s);
	b->setMinimumSize($$new($Dimension, oneTouchSize, oneTouchSize));
	b->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
	b->setFocusPainted(false);
	b->setBorderPainted(false);
	b->setRequestFocusEnabled(false);
	b->setDirection(mapDirection(false));
	return b;
}

SynthSplitPaneDivider::SynthSplitPaneDivider() {
}

$Class* SynthSplitPaneDivider::load$($String* name, bool initialize) {
	$loadClass(SynthSplitPaneDivider, name, initialize, &_SynthSplitPaneDivider_ClassInfo_, allocate$SynthSplitPaneDivider);
	return class$;
}

$Class* SynthSplitPaneDivider::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax