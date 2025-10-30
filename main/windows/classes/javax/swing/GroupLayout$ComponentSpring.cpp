#include <javax/swing/GroupLayout$ComponentSpring.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <javax/swing/GroupLayout$ComponentInfo.h>
#include <javax/swing/GroupLayout$Spring.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Dimension = ::java::awt::Dimension;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$ComponentInfo = ::javax::swing::GroupLayout$ComponentInfo;
using $GroupLayout$Spring = ::javax::swing::GroupLayout$Spring;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$ComponentSpring_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/GroupLayout;", nullptr, $FINAL | $SYNTHETIC, $field(GroupLayout$ComponentSpring, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupLayout$ComponentSpring, $assertionsDisabled)},
	{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(GroupLayout$ComponentSpring, component)},
	{"origin", "I", nullptr, $PRIVATE, $field(GroupLayout$ComponentSpring, origin)},
	{"min", "I", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$ComponentSpring, min)},
	{"pref", "I", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$ComponentSpring, pref)},
	{"max", "I", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$ComponentSpring, max)},
	{"baseline", "I", nullptr, $PRIVATE, $field(GroupLayout$ComponentSpring, baseline)},
	{"installed", "Z", nullptr, $PRIVATE, $field(GroupLayout$ComponentSpring, installed)},
	{}
};

$MethodInfo _GroupLayout$ComponentSpring_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/GroupLayout;Ljava/awt/Component;III)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout$ComponentSpring::*)($GroupLayout*,$Component*,int32_t,int32_t,int32_t)>(&GroupLayout$ComponentSpring::init$))},
	{"calculateMaximumSize", "(I)I", nullptr, 0},
	{"calculateMinimumSize", "(I)I", nullptr, 0},
	{"calculateNonlinkedMaximumSize", "(I)I", nullptr, 0, $method(static_cast<int32_t(GroupLayout$ComponentSpring::*)(int32_t)>(&GroupLayout$ComponentSpring::calculateNonlinkedMaximumSize))},
	{"calculateNonlinkedMinimumSize", "(I)I", nullptr, 0, $method(static_cast<int32_t(GroupLayout$ComponentSpring::*)(int32_t)>(&GroupLayout$ComponentSpring::calculateNonlinkedMinimumSize))},
	{"calculateNonlinkedPreferredSize", "(I)I", nullptr, 0, $method(static_cast<int32_t(GroupLayout$ComponentSpring::*)(int32_t)>(&GroupLayout$ComponentSpring::calculateNonlinkedPreferredSize))},
	{"calculatePreferredSize", "(I)I", nullptr, 0},
	{"getBaseline", "()I", nullptr, 0},
	{"getBaselineResizeBehavior", "()Ljava/awt/Component$BaselineResizeBehavior;", nullptr, 0},
	{"getComponent", "()Ljava/awt/Component;", nullptr, 0, $method(static_cast<$Component*(GroupLayout$ComponentSpring::*)()>(&GroupLayout$ComponentSpring::getComponent))},
	{"getLinkSize", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GroupLayout$ComponentSpring::*)(int32_t,int32_t)>(&GroupLayout$ComponentSpring::getLinkSize))},
	{"getOrigin", "()I", nullptr, 0, $method(static_cast<int32_t(GroupLayout$ComponentSpring::*)()>(&GroupLayout$ComponentSpring::getOrigin))},
	{"getSizeAlongAxis", "(ILjava/awt/Dimension;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GroupLayout$ComponentSpring::*)(int32_t,$Dimension*)>(&GroupLayout$ComponentSpring::getSizeAlongAxis))},
	{"installIfNecessary", "(I)V", nullptr, 0, $method(static_cast<void(GroupLayout$ComponentSpring::*)(int32_t)>(&GroupLayout$ComponentSpring::installIfNecessary))},
	{"isLinked", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(GroupLayout$ComponentSpring::*)(int32_t)>(&GroupLayout$ComponentSpring::isLinked))},
	{"isVisible", "()Z", nullptr, 0, $method(static_cast<bool(GroupLayout$ComponentSpring::*)()>(&GroupLayout$ComponentSpring::isVisible))},
	{"setComponent", "(Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(GroupLayout$ComponentSpring::*)($Component*)>(&GroupLayout$ComponentSpring::setComponent))},
	{"setSize", "(III)V", nullptr, 0},
	{"willHaveZeroSize", "(Z)Z", nullptr, 0},
	{}
};

$InnerClassInfo _GroupLayout$ComponentSpring_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$ComponentSpring", "javax.swing.GroupLayout", "ComponentSpring", $PRIVATE | $FINAL},
	{"javax.swing.GroupLayout$Spring", "javax.swing.GroupLayout", "Spring", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _GroupLayout$ComponentSpring_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.GroupLayout$ComponentSpring",
	"javax.swing.GroupLayout$Spring",
	nullptr,
	_GroupLayout$ComponentSpring_FieldInfo_,
	_GroupLayout$ComponentSpring_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$ComponentSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$ComponentSpring($Class* clazz) {
	return $of($alloc(GroupLayout$ComponentSpring));
}

bool GroupLayout$ComponentSpring::$assertionsDisabled = false;

void GroupLayout$ComponentSpring::init$($GroupLayout* this$0, $Component* component, int32_t min, int32_t pref, int32_t max) {
	$set(this, this$0, this$0);
	$GroupLayout$Spring::init$(this$0);
	this->baseline = -1;
	$set(this, component, component);
	if (component == nullptr) {
		$throwNew($IllegalArgumentException, "Component must be non-null"_s);
	}
	$GroupLayout::checkSize(min, pref, max, true);
	this->min = min;
	this->max = max;
	this->pref = pref;
	this$0->getComponentInfo(component);
}

int32_t GroupLayout$ComponentSpring::calculateMinimumSize(int32_t axis) {
	if (isLinked(axis)) {
		return getLinkSize(axis, 0);
	}
	return calculateNonlinkedMinimumSize(axis);
}

int32_t GroupLayout$ComponentSpring::calculatePreferredSize(int32_t axis) {
	if (isLinked(axis)) {
		return getLinkSize(axis, 1);
	}
	int32_t min = getMinimumSize(axis);
	int32_t pref = calculateNonlinkedPreferredSize(axis);
	int32_t max = getMaximumSize(axis);
	return $Math::min(max, $Math::max(min, pref));
}

int32_t GroupLayout$ComponentSpring::calculateMaximumSize(int32_t axis) {
	if (isLinked(axis)) {
		return getLinkSize(axis, 2);
	}
	int32_t var$0 = getMinimumSize(axis);
	return $Math::max(var$0, calculateNonlinkedMaximumSize(axis));
}

bool GroupLayout$ComponentSpring::isVisible() {
	$useLocalCurrentObjectStackCache();
	return $nc($(this->this$0->getComponentInfo($(getComponent()))))->isVisible();
}

int32_t GroupLayout$ComponentSpring::calculateNonlinkedMinimumSize(int32_t axis) {
	if (!isVisible()) {
		return 0;
	}
	if (this->min >= 0) {
		return this->min;
	}
	if (this->min == -2) {
		return calculateNonlinkedPreferredSize(axis);
	}
	if (!GroupLayout$ComponentSpring::$assertionsDisabled && !(this->min == -1)) {
		$throwNew($AssertionError);
	}
	return getSizeAlongAxis(axis, $($nc(this->component)->getMinimumSize()));
}

int32_t GroupLayout$ComponentSpring::calculateNonlinkedPreferredSize(int32_t axis) {
	if (!isVisible()) {
		return 0;
	}
	if (this->pref >= 0) {
		return this->pref;
	}
	if (!GroupLayout$ComponentSpring::$assertionsDisabled && !(this->pref == -1 || this->pref == -2)) {
		$throwNew($AssertionError);
	}
	return getSizeAlongAxis(axis, $($nc(this->component)->getPreferredSize()));
}

int32_t GroupLayout$ComponentSpring::calculateNonlinkedMaximumSize(int32_t axis) {
	if (!isVisible()) {
		return 0;
	}
	if (this->max >= 0) {
		return this->max;
	}
	if (this->max == -2) {
		return calculateNonlinkedPreferredSize(axis);
	}
	if (!GroupLayout$ComponentSpring::$assertionsDisabled && !(this->max == -1)) {
		$throwNew($AssertionError);
	}
	return getSizeAlongAxis(axis, $($nc(this->component)->getMaximumSize()));
}

int32_t GroupLayout$ComponentSpring::getSizeAlongAxis(int32_t axis, $Dimension* size) {
	return (axis == 0) ? $nc(size)->width : size->height;
}

int32_t GroupLayout$ComponentSpring::getLinkSize(int32_t axis, int32_t type) {
	if (!isVisible()) {
		return 0;
	}
	$var($GroupLayout$ComponentInfo, ci, this->this$0->getComponentInfo(this->component));
	return $nc(ci)->getLinkSize(axis, type);
}

void GroupLayout$ComponentSpring::setSize(int32_t axis, int32_t origin, int32_t size) {
	$GroupLayout$Spring::setSize(axis, origin, size);
	this->origin = origin;
	if (size == (int32_t)0x80000000) {
		this->baseline = -1;
	}
}

int32_t GroupLayout$ComponentSpring::getOrigin() {
	return this->origin;
}

void GroupLayout$ComponentSpring::setComponent($Component* component) {
	$set(this, component, component);
}

$Component* GroupLayout$ComponentSpring::getComponent() {
	return this->component;
}

int32_t GroupLayout$ComponentSpring::getBaseline() {
	$useLocalCurrentObjectStackCache();
	if (this->baseline == -1) {
		$var($GroupLayout$Spring, horizontalSpring, $nc($(this->this$0->getComponentInfo(this->component)))->horizontalSpring);
		int32_t width = $nc(horizontalSpring)->getPreferredSize(0);
		int32_t height = getPreferredSize(1);
		if (width > 0 && height > 0) {
			this->baseline = $nc(this->component)->getBaseline(width, height);
		}
	}
	return this->baseline;
}

$Component$BaselineResizeBehavior* GroupLayout$ComponentSpring::getBaselineResizeBehavior() {
	return $nc($(getComponent()))->getBaselineResizeBehavior();
}

bool GroupLayout$ComponentSpring::isLinked(int32_t axis) {
	return $nc($(this->this$0->getComponentInfo(this->component)))->isLinked(axis);
}

void GroupLayout$ComponentSpring::installIfNecessary(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	if (!this->installed) {
		this->installed = true;
		if (axis == 0) {
			$set($nc($(this->this$0->getComponentInfo(this->component))), horizontalSpring, this);
		} else {
			$set($nc($(this->this$0->getComponentInfo(this->component))), verticalSpring, this);
		}
	}
}

bool GroupLayout$ComponentSpring::willHaveZeroSize(bool treatAutopaddingAsZeroSized) {
	return !isVisible();
}

void clinit$GroupLayout$ComponentSpring($Class* class$) {
	$load($GroupLayout);
	GroupLayout$ComponentSpring::$assertionsDisabled = !$GroupLayout::class$->desiredAssertionStatus();
}

GroupLayout$ComponentSpring::GroupLayout$ComponentSpring() {
}

$Class* GroupLayout$ComponentSpring::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$ComponentSpring, name, initialize, &_GroupLayout$ComponentSpring_ClassInfo_, clinit$GroupLayout$ComponentSpring, allocate$GroupLayout$ComponentSpring);
	return class$;
}

$Class* GroupLayout$ComponentSpring::class$ = nullptr;

	} // swing
} // javax