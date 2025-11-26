#include <javax/swing/plaf/basic/BasicSplitPaneUI$BasicHorizontalLayoutManager.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/lang/Math.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef BOTTOM
#undef DIVIDER
#undef LEFT
#undef MAX_VALUE
#undef NON_CONTINUOUS_DIVIDER
#undef RIGHT
#undef TOP

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneUI$BasicHorizontalLayoutManager_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$BasicHorizontalLayoutManager, this$0)},
	{"sizes", "[I", nullptr, $PROTECTED, $field(BasicSplitPaneUI$BasicHorizontalLayoutManager, sizes)},
	{"components", "[Ljava/awt/Component;", nullptr, $PROTECTED, $field(BasicSplitPaneUI$BasicHorizontalLayoutManager, components)},
	{"lastSplitPaneSize", "I", nullptr, $PRIVATE, $field(BasicSplitPaneUI$BasicHorizontalLayoutManager, lastSplitPaneSize)},
	{"doReset", "Z", nullptr, $PRIVATE, $field(BasicSplitPaneUI$BasicHorizontalLayoutManager, doReset)},
	{"axis", "I", nullptr, $PRIVATE, $field(BasicSplitPaneUI$BasicHorizontalLayoutManager, axis)},
	{}
};

$MethodInfo _BasicSplitPaneUI$BasicHorizontalLayoutManager_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, 0, $method(static_cast<void(BasicSplitPaneUI$BasicHorizontalLayoutManager::*)($BasicSplitPaneUI*)>(&BasicSplitPaneUI$BasicHorizontalLayoutManager::init$))},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;I)V", nullptr, 0, $method(static_cast<void(BasicSplitPaneUI$BasicHorizontalLayoutManager::*)($BasicSplitPaneUI*,int32_t)>(&BasicSplitPaneUI$BasicHorizontalLayoutManager::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"distributeSpace", "(IZ)V", nullptr, 0},
	{"getAvailableSize", "(Ljava/awt/Dimension;Ljava/awt/Insets;)I", nullptr, $PROTECTED},
	{"getInitialLocation", "(Ljava/awt/Insets;)I", nullptr, $PROTECTED},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getMinimumSizeOfComponent", "(Ljava/awt/Component;)I", nullptr, 0},
	{"getMinimumSizes", "()[I", nullptr, 0},
	{"getPreferredSizeOfComponent", "(Ljava/awt/Component;)I", nullptr, $PROTECTED},
	{"getPreferredSizes", "()[I", nullptr, 0},
	{"getSizeForPrimaryAxis", "(Ljava/awt/Dimension;)I", nullptr, 0},
	{"getSizeForPrimaryAxis", "(Ljava/awt/Insets;Z)I", nullptr, 0},
	{"getSizeForSecondaryAxis", "(Ljava/awt/Dimension;)I", nullptr, 0},
	{"getSizeForSecondaryAxis", "(Ljava/awt/Insets;Z)I", nullptr, 0},
	{"getSizeOfComponent", "(Ljava/awt/Component;)I", nullptr, $PROTECTED},
	{"getSizes", "()[I", nullptr, $PROTECTED},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"resetSizeAt", "(I)V", nullptr, $PROTECTED},
	{"resetToPreferredSizes", "()V", nullptr, $PUBLIC},
	{"resetToPreferredSizes", "(I)V", nullptr, 0},
	{"setComponentToSize", "(Ljava/awt/Component;IILjava/awt/Insets;Ljava/awt/Dimension;)V", nullptr, $PROTECTED},
	{"setDividerLocation", "(II)V", nullptr, 0},
	{"setSizes", "([I)V", nullptr, $PROTECTED},
	{"updateComponents", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicSplitPaneUI$BasicHorizontalLayoutManager_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneUI$BasicHorizontalLayoutManager", "javax.swing.plaf.basic.BasicSplitPaneUI", "BasicHorizontalLayoutManager", $PUBLIC},
	{}
};

$ClassInfo _BasicSplitPaneUI$BasicHorizontalLayoutManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneUI$BasicHorizontalLayoutManager",
	"java.lang.Object",
	"java.awt.LayoutManager2",
	_BasicSplitPaneUI$BasicHorizontalLayoutManager_FieldInfo_,
	_BasicSplitPaneUI$BasicHorizontalLayoutManager_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneUI$BasicHorizontalLayoutManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneUI"
};

$Object* allocate$BasicSplitPaneUI$BasicHorizontalLayoutManager($Class* clazz) {
	return $of($alloc(BasicSplitPaneUI$BasicHorizontalLayoutManager));
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::init$($BasicSplitPaneUI* this$0) {
	BasicSplitPaneUI$BasicHorizontalLayoutManager::init$(this$0, 0);
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::init$($BasicSplitPaneUI* this$0, int32_t axis) {
	$set(this, this$0, this$0);
	this->axis = axis;
	$set(this, components, $new($ComponentArray, 3));
	$nc(this->components)->set(0, $nc(this->components)->set(1, $nc(this->components)->set(2, nullptr)));
	$set(this, sizes, $new($ints, 3));
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::layoutContainer($Container* container) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, containerSize, $nc(container)->getSize());
	if ($nc(containerSize)->height <= 0 || $nc(containerSize)->width <= 0) {
		this->lastSplitPaneSize = 0;
		return;
	}
	int32_t spDividerLocation = $nc(this->this$0->splitPane)->getDividerLocation();
	$var($Insets, insets, $nc(this->this$0->splitPane)->getInsets());
	int32_t availableSize = getAvailableSize(containerSize, insets);
	int32_t newSize = getSizeForPrimaryAxis(containerSize);
	int32_t beginLocation = this->this$0->getDividerLocation(this->this$0->splitPane);
	int32_t dOffset = getSizeForPrimaryAxis(insets, true);
	$var($Dimension, dSize, ($nc(this->components)->get(2) == nullptr) ? ($Dimension*)nullptr : $nc($nc(this->components)->get(2))->getPreferredSize());
	if ((this->doReset && !this->this$0->dividerLocationIsSet) || spDividerLocation < 0) {
		resetToPreferredSizes(availableSize);
	} else if (this->lastSplitPaneSize <= 0 || availableSize == this->lastSplitPaneSize || !this->this$0->painted || (dSize != nullptr && getSizeForPrimaryAxis(dSize) != $nc(this->sizes)->get(2))) {
		if (dSize != nullptr) {
			$nc(this->sizes)->set(2, getSizeForPrimaryAxis(dSize));
		} else {
			$nc(this->sizes)->set(2, 0);
		}
		setDividerLocation(spDividerLocation - dOffset, availableSize);
		this->this$0->dividerLocationIsSet = false;
	} else if (availableSize != this->lastSplitPaneSize) {
		distributeSpace(availableSize - this->lastSplitPaneSize, this->this$0->getKeepHidden());
	}
	this->doReset = false;
	this->this$0->dividerLocationIsSet = false;
	this->lastSplitPaneSize = availableSize;
	int32_t nextLocation = getInitialLocation(insets);
	int32_t counter = 0;
	while (counter < 3) {
		if ($nc(this->components)->get(counter) != nullptr && $nc($nc(this->components)->get(counter))->isVisible()) {
			setComponentToSize($nc(this->components)->get(counter), $nc(this->sizes)->get(counter), nextLocation, insets, containerSize);
			nextLocation += $nc(this->sizes)->get(counter);
		}
		switch (counter) {
		case 0:
			{
				counter = 2;
				break;
			}
		case 2:
			{
				counter = 1;
				break;
			}
		case 1:
			{
				counter = 3;
				break;
			}
		}
	}
	if (this->this$0->painted) {
		int32_t newLocation = this->this$0->getDividerLocation(this->this$0->splitPane);
		if (newLocation != (spDividerLocation - dOffset)) {
			int32_t lastLocation = $nc(this->this$0->splitPane)->getLastDividerLocation();
			this->this$0->ignoreDividerLocationChange = true;
			{
				$var($Throwable, var$0, nullptr);
				try {
					$nc(this->this$0->splitPane)->setDividerLocation(newLocation);
					$nc(this->this$0->splitPane)->setLastDividerLocation(lastLocation);
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					this->this$0->ignoreDividerLocationChange = false;
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::addLayoutComponent($String* place, $Component* component) {
	$useLocalCurrentObjectStackCache();
	bool isValid = true;
	if (place != nullptr) {
		$init($JSplitPane);
		if (place->equals($JSplitPane::DIVIDER)) {
			$nc(this->components)->set(2, component);
			$nc(this->sizes)->set(2, getSizeForPrimaryAxis($($nc(component)->getPreferredSize())));
		} else {
			bool var$1 = place->equals($JSplitPane::LEFT);
			if (var$1 || place->equals($JSplitPane::TOP)) {
				$nc(this->components)->set(0, component);
				$nc(this->sizes)->set(0, 0);
			} else {
				bool var$3 = place->equals($JSplitPane::RIGHT);
				if (var$3 || place->equals($JSplitPane::BOTTOM)) {
					$nc(this->components)->set(1, component);
					$nc(this->sizes)->set(1, 0);
				} else {
					$init($BasicSplitPaneUI);
					if (!place->equals($BasicSplitPaneUI::NON_CONTINUOUS_DIVIDER)) {
						isValid = false;
					}
				}
			}
		}
	} else {
		isValid = false;
	}
	if (!isValid) {
		$throwNew($IllegalArgumentException, $$str({"cannot add to layout: unknown constraint: "_s, place}));
	}
	this->doReset = true;
}

$Dimension* BasicSplitPaneUI$BasicHorizontalLayoutManager::minimumLayoutSize($Container* container) {
	$useLocalCurrentObjectStackCache();
	int32_t minPrimary = 0;
	int32_t minSecondary = 0;
	$var($Insets, insets, $nc(this->this$0->splitPane)->getInsets());
	for (int32_t counter = 0; counter < 3; ++counter) {
		if ($nc(this->components)->get(counter) != nullptr) {
			$var($Dimension, minSize, $nc($nc(this->components)->get(counter))->getMinimumSize());
			int32_t secSize = getSizeForSecondaryAxis(minSize);
			minPrimary += getSizeForPrimaryAxis(minSize);
			if (secSize > minSecondary) {
				minSecondary = secSize;
			}
		}
	}
	if (insets != nullptr) {
		int32_t var$0 = getSizeForPrimaryAxis(insets, true);
		minPrimary += var$0 + getSizeForPrimaryAxis(insets, false);
		int32_t var$1 = getSizeForSecondaryAxis(insets, true);
		minSecondary += var$1 + getSizeForSecondaryAxis(insets, false);
	}
	if (this->axis == 0) {
		return $new($Dimension, minPrimary, minSecondary);
	}
	return $new($Dimension, minSecondary, minPrimary);
}

$Dimension* BasicSplitPaneUI$BasicHorizontalLayoutManager::preferredLayoutSize($Container* container) {
	$useLocalCurrentObjectStackCache();
	int32_t prePrimary = 0;
	int32_t preSecondary = 0;
	$var($Insets, insets, $nc(this->this$0->splitPane)->getInsets());
	for (int32_t counter = 0; counter < 3; ++counter) {
		if ($nc(this->components)->get(counter) != nullptr) {
			$var($Dimension, preSize, $nc($nc(this->components)->get(counter))->getPreferredSize());
			int32_t secSize = getSizeForSecondaryAxis(preSize);
			prePrimary += getSizeForPrimaryAxis(preSize);
			if (secSize > preSecondary) {
				preSecondary = secSize;
			}
		}
	}
	if (insets != nullptr) {
		int32_t var$0 = getSizeForPrimaryAxis(insets, true);
		prePrimary += var$0 + getSizeForPrimaryAxis(insets, false);
		int32_t var$1 = getSizeForSecondaryAxis(insets, true);
		preSecondary += var$1 + getSizeForSecondaryAxis(insets, false);
	}
	if (this->axis == 0) {
		return $new($Dimension, prePrimary, preSecondary);
	}
	return $new($Dimension, preSecondary, prePrimary);
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::removeLayoutComponent($Component* component) {
	for (int32_t counter = 0; counter < 3; ++counter) {
		if ($nc(this->components)->get(counter) == component) {
			$nc(this->components)->set(counter, nullptr);
			$nc(this->sizes)->set(counter, 0);
			this->doReset = true;
		}
	}
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::addLayoutComponent($Component* comp, Object$* constraints) {
	if ((constraints == nullptr) || ($instanceOf($String, constraints))) {
		addLayoutComponent($cast($String, constraints), comp);
	} else {
		$throwNew($IllegalArgumentException, "cannot add to layout: constraint must be a string (or null)"_s);
	}
}

float BasicSplitPaneUI$BasicHorizontalLayoutManager::getLayoutAlignmentX($Container* target) {
	return 0.0f;
}

float BasicSplitPaneUI$BasicHorizontalLayoutManager::getLayoutAlignmentY($Container* target) {
	return 0.0f;
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::invalidateLayout($Container* c) {
}

$Dimension* BasicSplitPaneUI$BasicHorizontalLayoutManager::maximumLayoutSize($Container* target) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::resetToPreferredSizes() {
	this->doReset = true;
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::resetSizeAt(int32_t index) {
	$nc(this->sizes)->set(index, 0);
	this->doReset = true;
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::setSizes($ints* newSizes) {
	$System::arraycopy(newSizes, 0, this->sizes, 0, 3);
}

$ints* BasicSplitPaneUI$BasicHorizontalLayoutManager::getSizes() {
	$var($ints, retSizes, $new($ints, 3));
	$System::arraycopy(this->sizes, 0, retSizes, 0, 3);
	return retSizes;
}

int32_t BasicSplitPaneUI$BasicHorizontalLayoutManager::getPreferredSizeOfComponent($Component* c) {
	return getSizeForPrimaryAxis($($nc(c)->getPreferredSize()));
}

int32_t BasicSplitPaneUI$BasicHorizontalLayoutManager::getMinimumSizeOfComponent($Component* c) {
	return getSizeForPrimaryAxis($($nc(c)->getMinimumSize()));
}

int32_t BasicSplitPaneUI$BasicHorizontalLayoutManager::getSizeOfComponent($Component* c) {
	return getSizeForPrimaryAxis($($nc(c)->getSize()));
}

int32_t BasicSplitPaneUI$BasicHorizontalLayoutManager::getAvailableSize($Dimension* containerSize, $Insets* insets) {
	if (insets == nullptr) {
		return getSizeForPrimaryAxis(containerSize);
	}
	int32_t var$0 = getSizeForPrimaryAxis(containerSize);
	int32_t var$2 = getSizeForPrimaryAxis(insets, true);
	int32_t var$1 = (var$2 + getSizeForPrimaryAxis(insets, false));
	return (var$0 - var$1);
}

int32_t BasicSplitPaneUI$BasicHorizontalLayoutManager::getInitialLocation($Insets* insets) {
	if (insets != nullptr) {
		return getSizeForPrimaryAxis(insets, true);
	}
	return 0;
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::setComponentToSize($Component* c, int32_t size, int32_t location, $Insets* insets, $Dimension* containerSize) {
	if (insets != nullptr) {
		if (this->axis == 0) {
			$nc(c)->setBounds(location, insets->top, size, $nc(containerSize)->height - (insets->top + insets->bottom));
		} else {
			$nc(c)->setBounds(insets->left, location, $nc(containerSize)->width - (insets->left + insets->right), size);
		}
	} else if (this->axis == 0) {
		$nc(c)->setBounds(location, 0, size, $nc(containerSize)->height);
	} else {
		$nc(c)->setBounds(0, location, $nc(containerSize)->width, size);
	}
}

int32_t BasicSplitPaneUI$BasicHorizontalLayoutManager::getSizeForPrimaryAxis($Dimension* size) {
	if (this->axis == 0) {
		return $nc(size)->width;
	}
	return $nc(size)->height;
}

int32_t BasicSplitPaneUI$BasicHorizontalLayoutManager::getSizeForSecondaryAxis($Dimension* size) {
	if (this->axis == 0) {
		return $nc(size)->height;
	}
	return $nc(size)->width;
}

int32_t BasicSplitPaneUI$BasicHorizontalLayoutManager::getSizeForPrimaryAxis($Insets* insets, bool isTop) {
	if (this->axis == 0) {
		if (isTop) {
			return $nc(insets)->left;
		}
		return $nc(insets)->right;
	}
	if (isTop) {
		return $nc(insets)->top;
	}
	return $nc(insets)->bottom;
}

int32_t BasicSplitPaneUI$BasicHorizontalLayoutManager::getSizeForSecondaryAxis($Insets* insets, bool isTop) {
	if (this->axis == 0) {
		if (isTop) {
			return $nc(insets)->top;
		}
		return $nc(insets)->bottom;
	}
	if (isTop) {
		return $nc(insets)->left;
	}
	return $nc(insets)->right;
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::updateComponents() {
	$useLocalCurrentObjectStackCache();
	$var($Component, comp, nullptr);
	$assign(comp, $nc(this->this$0->splitPane)->getLeftComponent());
	if ($nc(this->components)->get(0) != comp) {
		$nc(this->components)->set(0, comp);
		if (comp == nullptr) {
			$nc(this->sizes)->set(0, 0);
		} else {
			$nc(this->sizes)->set(0, -1);
		}
	}
	$assign(comp, $nc(this->this$0->splitPane)->getRightComponent());
	if ($nc(this->components)->get(1) != comp) {
		$nc(this->components)->set(1, comp);
		if (comp == nullptr) {
			$nc(this->sizes)->set(1, 0);
		} else {
			$nc(this->sizes)->set(1, -1);
		}
	}
	$var($ComponentArray, children, $nc(this->this$0->splitPane)->getComponents());
	$var($Component, oldDivider, $nc(this->components)->get(2));
	$nc(this->components)->set(2, nullptr);
	for (int32_t counter = $nc(children)->length - 1; counter >= 0; --counter) {
		if (children->get(counter) != $nc(this->components)->get(0) && children->get(counter) != $nc(this->components)->get(1) && children->get(counter) != this->this$0->nonContinuousLayoutDivider) {
			if (oldDivider != children->get(counter)) {
				$nc(this->components)->set(2, children->get(counter));
			} else {
				$nc(this->components)->set(2, oldDivider);
			}
			break;
		}
	}
	if ($nc(this->components)->get(2) == nullptr) {
		$nc(this->sizes)->set(2, 0);
	} else {
		$nc(this->sizes)->set(2, getSizeForPrimaryAxis($($nc($nc(this->components)->get(2))->getPreferredSize())));
	}
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::setDividerLocation(int32_t leftSize, int32_t availableSize) {
	bool lValid = ($nc(this->components)->get(0) != nullptr && $nc($nc(this->components)->get(0))->isVisible());
	bool rValid = ($nc(this->components)->get(1) != nullptr && $nc($nc(this->components)->get(1))->isVisible());
	bool dValid = ($nc(this->components)->get(2) != nullptr && $nc($nc(this->components)->get(2))->isVisible());
	int32_t max = availableSize;
	if (dValid) {
		max -= $nc(this->sizes)->get(2);
	}
	leftSize = $Math::max(0, $Math::min(leftSize, max));
	if (lValid) {
		if (rValid) {
			$nc(this->sizes)->set(0, leftSize);
			$nc(this->sizes)->set(1, max - leftSize);
		} else {
			$nc(this->sizes)->set(0, max);
			$nc(this->sizes)->set(1, 0);
		}
	} else if (rValid) {
		$nc(this->sizes)->set(1, max);
		$nc(this->sizes)->set(0, 0);
	}
}

$ints* BasicSplitPaneUI$BasicHorizontalLayoutManager::getPreferredSizes() {
	$var($ints, retValue, $new($ints, 3));
	for (int32_t counter = 0; counter < 3; ++counter) {
		if ($nc(this->components)->get(counter) != nullptr && $nc($nc(this->components)->get(counter))->isVisible()) {
			retValue->set(counter, getPreferredSizeOfComponent($nc(this->components)->get(counter)));
		} else {
			retValue->set(counter, -1);
		}
	}
	return retValue;
}

$ints* BasicSplitPaneUI$BasicHorizontalLayoutManager::getMinimumSizes() {
	$var($ints, retValue, $new($ints, 3));
	for (int32_t counter = 0; counter < 2; ++counter) {
		if ($nc(this->components)->get(counter) != nullptr && $nc($nc(this->components)->get(counter))->isVisible()) {
			retValue->set(counter, getMinimumSizeOfComponent($nc(this->components)->get(counter)));
		} else {
			retValue->set(counter, -1);
		}
	}
	retValue->set(2, ($nc(this->components)->get(2) != nullptr) ? getMinimumSizeOfComponent($nc(this->components)->get(2)) : -1);
	return retValue;
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::resetToPreferredSizes(int32_t availableSize) {
	$var($ints, testSizes, getPreferredSizes());
	int32_t totalSize = 0;
	for (int32_t counter = 0; counter < 3; ++counter) {
		if ($nc(testSizes)->get(counter) != -1) {
			totalSize += testSizes->get(counter);
		}
	}
	if (totalSize > availableSize) {
		$assign(testSizes, getMinimumSizes());
		totalSize = 0;
		for (int32_t counter = 0; counter < 3; ++counter) {
			if ($nc(testSizes)->get(counter) != -1) {
				totalSize += testSizes->get(counter);
			}
		}
	}
	setSizes(testSizes);
	distributeSpace(availableSize - totalSize, false);
}

void BasicSplitPaneUI$BasicHorizontalLayoutManager::distributeSpace(int32_t space, bool keepHidden) {
	$useLocalCurrentObjectStackCache();
	bool lValid = ($nc(this->components)->get(0) != nullptr && $nc($nc(this->components)->get(0))->isVisible());
	bool rValid = ($nc(this->components)->get(1) != nullptr && $nc($nc(this->components)->get(1))->isVisible());
	if (keepHidden) {
		if (lValid && getSizeForPrimaryAxis($($nc($nc(this->components)->get(0))->getSize())) == 0) {
			lValid = false;
			if (rValid && getSizeForPrimaryAxis($($nc($nc(this->components)->get(1))->getSize())) == 0) {
				lValid = true;
			}
		} else if (rValid && getSizeForPrimaryAxis($($nc($nc(this->components)->get(1))->getSize())) == 0) {
			rValid = false;
		}
	}
	if (lValid && rValid) {
		double weight = $nc(this->this$0->splitPane)->getResizeWeight();
		int32_t lExtra = $cast(int32_t, (weight * (double)space));
		int32_t rExtra = (space - lExtra);
		(*$nc(this->sizes))[0] += lExtra;
		(*$nc(this->sizes))[1] += rExtra;
		int32_t lMin = getMinimumSizeOfComponent($nc(this->components)->get(0));
		int32_t rMin = getMinimumSizeOfComponent($nc(this->components)->get(1));
		bool lMinValid = ($nc(this->sizes)->get(0) >= lMin);
		bool rMinValid = ($nc(this->sizes)->get(1) >= rMin);
		if (!lMinValid && !rMinValid) {
			if ($nc(this->sizes)->get(0) < 0) {
				(*$nc(this->sizes))[1] += $nc(this->sizes)->get(0);
				$nc(this->sizes)->set(0, 0);
			} else if ($nc(this->sizes)->get(1) < 0) {
				(*$nc(this->sizes))[0] += $nc(this->sizes)->get(1);
				$nc(this->sizes)->set(1, 0);
			}
		} else if (!lMinValid) {
			if ($nc(this->sizes)->get(1) - (lMin - $nc(this->sizes)->get(0)) < rMin) {
				if ($nc(this->sizes)->get(0) < 0) {
					(*$nc(this->sizes))[1] += $nc(this->sizes)->get(0);
					$nc(this->sizes)->set(0, 0);
				}
			} else {
				(*$nc(this->sizes))[1] -= (lMin - $nc(this->sizes)->get(0));
				$nc(this->sizes)->set(0, lMin);
			}
		} else if (!rMinValid) {
			if ($nc(this->sizes)->get(0) - (rMin - $nc(this->sizes)->get(1)) < lMin) {
				if ($nc(this->sizes)->get(1) < 0) {
					(*$nc(this->sizes))[0] += $nc(this->sizes)->get(1);
					$nc(this->sizes)->set(1, 0);
				}
			} else {
				(*$nc(this->sizes))[0] -= (rMin - $nc(this->sizes)->get(1));
				$nc(this->sizes)->set(1, rMin);
			}
		}
		if ($nc(this->sizes)->get(0) < 0) {
			$nc(this->sizes)->set(0, 0);
		}
		if ($nc(this->sizes)->get(1) < 0) {
			$nc(this->sizes)->set(1, 0);
		}
	} else if (lValid) {
		$nc(this->sizes)->set(0, $Math::max(0, $nc(this->sizes)->get(0) + space));
	} else if (rValid) {
		$nc(this->sizes)->set(1, $Math::max(0, $nc(this->sizes)->get(1) + space));
	}
}

BasicSplitPaneUI$BasicHorizontalLayoutManager::BasicSplitPaneUI$BasicHorizontalLayoutManager() {
}

$Class* BasicSplitPaneUI$BasicHorizontalLayoutManager::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneUI$BasicHorizontalLayoutManager, name, initialize, &_BasicSplitPaneUI$BasicHorizontalLayoutManager_ClassInfo_, allocate$BasicSplitPaneUI$BasicHorizontalLayoutManager);
	return class$;
}

$Class* BasicSplitPaneUI$BasicHorizontalLayoutManager::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax