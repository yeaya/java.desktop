#include <javax/swing/plaf/metal/MetalSplitPaneDivider.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <javax/swing/plaf/metal/MetalBumps.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalSplitPaneDivider$1.h>
#include <javax/swing/plaf/metal/MetalSplitPaneDivider$2.h>
#include <jcpp.h>

#undef DEFAULT_CURSOR
#undef ONE_TOUCH_OFFSET
#undef ONE_TOUCH_SIZE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $UIManager = ::javax::swing::UIManager;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;
using $MetalBumps = ::javax::swing::plaf::metal::MetalBumps;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalSplitPaneDivider$1 = ::javax::swing::plaf::metal::MetalSplitPaneDivider$1;
using $MetalSplitPaneDivider$2 = ::javax::swing::plaf::metal::MetalSplitPaneDivider$2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalSplitPaneDivider_FieldInfo_[] = {
	{"bumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, $PRIVATE, $field(MetalSplitPaneDivider, bumps)},
	{"focusBumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, $PRIVATE, $field(MetalSplitPaneDivider, focusBumps)},
	{"inset", "I", nullptr, $PRIVATE, $field(MetalSplitPaneDivider, inset)},
	{"controlColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalSplitPaneDivider, controlColor)},
	{"primaryControlColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalSplitPaneDivider, primaryControlColor)},
	{}
};

$MethodInfo _MetalSplitPaneDivider_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalSplitPaneDivider::*)($BasicSplitPaneUI*)>(&MetalSplitPaneDivider::init$))},
	{"createLeftOneTouchButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createRightOneTouchButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"getLeftButtonFromSuper", "()Ljavax/swing/JButton;", nullptr, 0},
	{"getOneTouchOffsetFromSuper", "()I", nullptr, 0},
	{"getOneTouchSizeFromSuper", "()I", nullptr, 0},
	{"getOrientationFromSuper", "()I", nullptr, 0},
	{"getRightButtonFromSuper", "()Ljavax/swing/JButton;", nullptr, 0},
	{"getSplitPaneFromSuper", "()Ljavax/swing/JSplitPane;", nullptr, 0},
	{"maybeMakeButtonOpaque", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalSplitPaneDivider::*)($JComponent*)>(&MetalSplitPaneDivider::maybeMakeButtonOpaque))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalSplitPaneDivider_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalSplitPaneDivider$MetalDividerLayout", "javax.swing.plaf.metal.MetalSplitPaneDivider", "MetalDividerLayout", $PUBLIC},
	{"javax.swing.plaf.metal.MetalSplitPaneDivider$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.metal.MetalSplitPaneDivider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalSplitPaneDivider_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalSplitPaneDivider",
	"javax.swing.plaf.basic.BasicSplitPaneDivider",
	nullptr,
	_MetalSplitPaneDivider_FieldInfo_,
	_MetalSplitPaneDivider_MethodInfo_,
	nullptr,
	nullptr,
	_MetalSplitPaneDivider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalSplitPaneDivider$MetalDividerLayout,javax.swing.plaf.metal.MetalSplitPaneDivider$2,javax.swing.plaf.metal.MetalSplitPaneDivider$1"
};

$Object* allocate$MetalSplitPaneDivider($Class* clazz) {
	return $of($alloc(MetalSplitPaneDivider));
}

void MetalSplitPaneDivider::init$($BasicSplitPaneUI* ui) {
	$useLocalCurrentObjectStackCache();
	$BasicSplitPaneDivider::init$(ui);
	$var($Color, var$0, static_cast<$Color*>($MetalLookAndFeel::getControlHighlight()));
	$var($Color, var$1, static_cast<$Color*>($MetalLookAndFeel::getControlDarkShadow()));
	$set(this, bumps, $new($MetalBumps, 10, 10, var$0, var$1, $($MetalLookAndFeel::getControl())));
	$var($Color, var$2, static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlHighlight()));
	$var($Color, var$3, static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlDarkShadow()));
	$set(this, focusBumps, $new($MetalBumps, 10, 10, var$2, var$3, $($UIManager::getColor("SplitPane.dividerFocusColor"_s))));
	this->inset = 2;
	$set(this, controlColor, $MetalLookAndFeel::getControl());
	$set(this, primaryControlColor, $UIManager::getColor("SplitPane.dividerFocusColor"_s));
}

void MetalSplitPaneDivider::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($MetalBumps, usedBumps, nullptr);
	if ($nc(this->splitPane)->hasFocus()) {
		$assign(usedBumps, this->focusBumps);
		$nc(g)->setColor(this->primaryControlColor);
	} else {
		$assign(usedBumps, this->bumps);
		$nc(g)->setColor(this->controlColor);
	}
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	$var($Insets, insets, getInsets());
	g->fillRect($nc(clip)->x, clip->y, clip->width, clip->height);
	$var($Dimension, size, getSize());
	$nc(size)->width -= this->inset * 2;
	size->height -= this->inset * 2;
	int32_t drawX = this->inset;
	int32_t drawY = this->inset;
	if (insets != nullptr) {
		size->width -= (insets->left + insets->right);
		size->height -= (insets->top + insets->bottom);
		drawX += insets->left;
		drawY += insets->top;
	}
	$nc(usedBumps)->setBumpArea(size);
	usedBumps->paintIcon(this, g, drawX, drawY);
	$BasicSplitPaneDivider::paint(g);
}

$JButton* MetalSplitPaneDivider::createLeftOneTouchButton() {
	$useLocalCurrentObjectStackCache();
	$var($JButton, b, $new($MetalSplitPaneDivider$1, this));
	b->setRequestFocusEnabled(false);
	b->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
	b->setFocusPainted(false);
	b->setBorderPainted(false);
	maybeMakeButtonOpaque(b);
	return b;
}

void MetalSplitPaneDivider::maybeMakeButtonOpaque($JComponent* c) {
	$var($Object, opaque, $UIManager::get("SplitPane.oneTouchButtonsOpaque"_s));
	if (opaque != nullptr) {
		$nc(c)->setOpaque($nc(($cast($Boolean, opaque)))->booleanValue());
	}
}

$JButton* MetalSplitPaneDivider::createRightOneTouchButton() {
	$useLocalCurrentObjectStackCache();
	$var($JButton, b, $new($MetalSplitPaneDivider$2, this));
	b->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
	b->setFocusPainted(false);
	b->setBorderPainted(false);
	b->setRequestFocusEnabled(false);
	maybeMakeButtonOpaque(b);
	return b;
}

int32_t MetalSplitPaneDivider::getOneTouchSizeFromSuper() {
	return $BasicSplitPaneDivider::ONE_TOUCH_SIZE;
}

int32_t MetalSplitPaneDivider::getOneTouchOffsetFromSuper() {
	return $BasicSplitPaneDivider::ONE_TOUCH_OFFSET;
}

int32_t MetalSplitPaneDivider::getOrientationFromSuper() {
	return this->orientation;
}

$JSplitPane* MetalSplitPaneDivider::getSplitPaneFromSuper() {
	return this->splitPane;
}

$JButton* MetalSplitPaneDivider::getLeftButtonFromSuper() {
	return this->leftButton;
}

$JButton* MetalSplitPaneDivider::getRightButtonFromSuper() {
	return this->rightButton;
}

MetalSplitPaneDivider::MetalSplitPaneDivider() {
}

$Class* MetalSplitPaneDivider::load$($String* name, bool initialize) {
	$loadClass(MetalSplitPaneDivider, name, initialize, &_MetalSplitPaneDivider_ClassInfo_, allocate$MetalSplitPaneDivider);
	return class$;
}

$Class* MetalSplitPaneDivider::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax