#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonAreaLayout.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/lang/Math.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

#undef CENTER
#undef LEFT
#undef RIGHT

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingConstants = ::javax::swing::SwingConstants;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicOptionPaneUI$ButtonAreaLayout_FieldInfo_[] = {
	{"syncAllWidths", "Z", nullptr, $PROTECTED, $field(BasicOptionPaneUI$ButtonAreaLayout, syncAllWidths)},
	{"padding", "I", nullptr, $PROTECTED, $field(BasicOptionPaneUI$ButtonAreaLayout, padding)},
	{"centersChildren", "Z", nullptr, $PROTECTED, $field(BasicOptionPaneUI$ButtonAreaLayout, centersChildren)},
	{"orientation", "I", nullptr, $PRIVATE, $field(BasicOptionPaneUI$ButtonAreaLayout, orientation)},
	{"reverseButtons", "Z", nullptr, $PRIVATE, $field(BasicOptionPaneUI$ButtonAreaLayout, reverseButtons)},
	{"useOrientation", "Z", nullptr, $PRIVATE, $field(BasicOptionPaneUI$ButtonAreaLayout, useOrientation)},
	{}
};

$MethodInfo _BasicOptionPaneUI$ButtonAreaLayout_MethodInfo_[] = {
	{"<init>", "(ZI)V", nullptr, $PUBLIC, $method(static_cast<void(BasicOptionPaneUI$ButtonAreaLayout::*)(bool,int32_t)>(&BasicOptionPaneUI$ButtonAreaLayout::init$))},
	{"<init>", "(ZIIZ)V", nullptr, 0, $method(static_cast<void(BasicOptionPaneUI$ButtonAreaLayout::*)(bool,int32_t,int32_t,bool)>(&BasicOptionPaneUI$ButtonAreaLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"getCentersChildren", "()Z", nullptr, $PUBLIC},
	{"getOrientation", "(Ljava/awt/Container;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicOptionPaneUI$ButtonAreaLayout::*)($Container*)>(&BasicOptionPaneUI$ButtonAreaLayout::getOrientation))},
	{"getPadding", "()I", nullptr, $PUBLIC},
	{"getSyncAllWidths", "()Z", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setCentersChildren", "(Z)V", nullptr, $PUBLIC},
	{"setPadding", "(I)V", nullptr, $PUBLIC},
	{"setSyncAllWidths", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicOptionPaneUI$ButtonAreaLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonAreaLayout", "javax.swing.plaf.basic.BasicOptionPaneUI", "ButtonAreaLayout", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicOptionPaneUI$ButtonAreaLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonAreaLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_BasicOptionPaneUI$ButtonAreaLayout_FieldInfo_,
	_BasicOptionPaneUI$ButtonAreaLayout_MethodInfo_,
	nullptr,
	nullptr,
	_BasicOptionPaneUI$ButtonAreaLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicOptionPaneUI"
};

$Object* allocate$BasicOptionPaneUI$ButtonAreaLayout($Class* clazz) {
	return $of($alloc(BasicOptionPaneUI$ButtonAreaLayout));
}

void BasicOptionPaneUI$ButtonAreaLayout::init$(bool syncAllWidths, int32_t padding) {
	this->syncAllWidths = syncAllWidths;
	this->padding = padding;
	this->centersChildren = true;
	this->useOrientation = false;
}

void BasicOptionPaneUI$ButtonAreaLayout::init$(bool syncAllSizes, int32_t padding, int32_t orientation, bool reverseButtons) {
	BasicOptionPaneUI$ButtonAreaLayout::init$(syncAllSizes, padding);
	this->useOrientation = true;
	this->orientation = orientation;
	this->reverseButtons = reverseButtons;
}

void BasicOptionPaneUI$ButtonAreaLayout::setSyncAllWidths(bool newValue) {
	this->syncAllWidths = newValue;
}

bool BasicOptionPaneUI$ButtonAreaLayout::getSyncAllWidths() {
	return this->syncAllWidths;
}

void BasicOptionPaneUI$ButtonAreaLayout::setPadding(int32_t newPadding) {
	this->padding = newPadding;
}

int32_t BasicOptionPaneUI$ButtonAreaLayout::getPadding() {
	return this->padding;
}

void BasicOptionPaneUI$ButtonAreaLayout::setCentersChildren(bool newValue) {
	this->centersChildren = newValue;
	this->useOrientation = false;
}

bool BasicOptionPaneUI$ButtonAreaLayout::getCentersChildren() {
	return this->centersChildren;
}

int32_t BasicOptionPaneUI$ButtonAreaLayout::getOrientation($Container* container) {
	if (!this->useOrientation) {
		return $SwingConstants::CENTER;
	}
	if ($nc($($nc(container)->getComponentOrientation()))->isLeftToRight()) {
		return this->orientation;
	}
	switch (this->orientation) {
	case $SwingConstants::LEFT:
		{
			return $SwingConstants::RIGHT;
		}
	case $SwingConstants::RIGHT:
		{
			return $SwingConstants::LEFT;
		}
	case $SwingConstants::CENTER:
		{
			return $SwingConstants::CENTER;
		}
	}
	return $SwingConstants::LEFT;
}

void BasicOptionPaneUI$ButtonAreaLayout::addLayoutComponent($String* string, $Component* comp) {
}

void BasicOptionPaneUI$ButtonAreaLayout::layoutContainer($Container* container) {
	$useLocalCurrentObjectStackCache();
	$var($ComponentArray, children, $nc(container)->getComponents());
	if (children != nullptr && children->length > 0) {
		int32_t numChildren = children->length;
		$var($Insets, insets, container->getInsets());
		int32_t maxWidth = 0;
		int32_t maxHeight = 0;
		int32_t totalButtonWidth = 0;
		int32_t x = 0;
		int32_t xOffset = 0;
		bool ltr = $nc($(container->getComponentOrientation()))->isLeftToRight();
		bool reverse = (ltr) ? this->reverseButtons : !this->reverseButtons;
		for (int32_t counter = 0; counter < numChildren; ++counter) {
			$var($Dimension, pref, $nc(children->get(counter))->getPreferredSize());
			maxWidth = $Math::max(maxWidth, $nc(pref)->width);
			maxHeight = $Math::max(maxHeight, $nc(pref)->height);
			totalButtonWidth += $nc(pref)->width;
		}
		if (getSyncAllWidths()) {
			totalButtonWidth = maxWidth * numChildren;
		}
		totalButtonWidth += (numChildren - 1) * this->padding;
		switch (getOrientation(container)) {
		case $SwingConstants::LEFT:
			{
				x = $nc(insets)->left;
				break;
			}
		case $SwingConstants::RIGHT:
			{
				x = container->getWidth() - $nc(insets)->right - totalButtonWidth;
				break;
			}
		case $SwingConstants::CENTER:
			{
				if (getCentersChildren() || numChildren < 2) {
					x = (container->getWidth() - totalButtonWidth) / 2;
				} else {
					x = $nc(insets)->left;
					if (getSyncAllWidths()) {
						xOffset = $div((container->getWidth() - insets->left - insets->right - totalButtonWidth), (numChildren - 1)) + maxWidth;
					} else {
						xOffset = $div((container->getWidth() - insets->left - insets->right - totalButtonWidth), (numChildren - 1));
					}
				}
				break;
			}
		}
		for (int32_t counter = 0; counter < numChildren; ++counter) {
			int32_t index = (reverse) ? numChildren - counter - 1 : counter;
			$var($Dimension, pref, $nc(children->get(index))->getPreferredSize());
			if (getSyncAllWidths()) {
				$nc(children->get(index))->setBounds(x, $nc(insets)->top, maxWidth, maxHeight);
			} else {
				$nc(children->get(index))->setBounds(x, $nc(insets)->top, $nc(pref)->width, pref->height);
			}
			if (xOffset != 0) {
				x += xOffset;
			} else {
				x += $nc(children->get(index))->getWidth() + this->padding;
			}
		}
	}
}

$Dimension* BasicOptionPaneUI$ButtonAreaLayout::minimumLayoutSize($Container* c) {
	$useLocalCurrentObjectStackCache();
	if (c != nullptr) {
		$var($ComponentArray, children, c->getComponents());
		if (children != nullptr && children->length > 0) {
			$var($Dimension, aSize, nullptr);
			int32_t numChildren = children->length;
			int32_t height = 0;
			$var($Insets, cInsets, c->getInsets());
			int32_t extraHeight = $nc(cInsets)->top + cInsets->bottom;
			int32_t extraWidth = cInsets->left + cInsets->right;
			if (this->syncAllWidths) {
				int32_t maxWidth = 0;
				for (int32_t counter = 0; counter < numChildren; ++counter) {
					$assign(aSize, $nc(children->get(counter))->getPreferredSize());
					height = $Math::max(height, $nc(aSize)->height);
					maxWidth = $Math::max(maxWidth, $nc(aSize)->width);
				}
				return $new($Dimension, extraWidth + (maxWidth * numChildren) + (numChildren - 1) * this->padding, extraHeight + height);
			} else {
				int32_t totalWidth = 0;
				for (int32_t counter = 0; counter < numChildren; ++counter) {
					$assign(aSize, $nc(children->get(counter))->getPreferredSize());
					height = $Math::max(height, $nc(aSize)->height);
					totalWidth += $nc(aSize)->width;
				}
				totalWidth += ((numChildren - 1) * this->padding);
				return $new($Dimension, extraWidth + totalWidth, extraHeight + height);
			}
		}
	}
	return $new($Dimension, 0, 0);
}

$Dimension* BasicOptionPaneUI$ButtonAreaLayout::preferredLayoutSize($Container* c) {
	return minimumLayoutSize(c);
}

void BasicOptionPaneUI$ButtonAreaLayout::removeLayoutComponent($Component* c) {
}

BasicOptionPaneUI$ButtonAreaLayout::BasicOptionPaneUI$ButtonAreaLayout() {
}

$Class* BasicOptionPaneUI$ButtonAreaLayout::load$($String* name, bool initialize) {
	$loadClass(BasicOptionPaneUI$ButtonAreaLayout, name, initialize, &_BasicOptionPaneUI$ButtonAreaLayout_ClassInfo_, allocate$BasicOptionPaneUI$ButtonAreaLayout);
	return class$;
}

$Class* BasicOptionPaneUI$ButtonAreaLayout::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax