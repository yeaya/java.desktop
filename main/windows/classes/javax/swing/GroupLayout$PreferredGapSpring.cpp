#include <javax/swing/GroupLayout$PreferredGapSpring.h>

#include <java/awt/Container.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/GroupLayout$Spring.h>
#include <javax/swing/GroupLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/SwingConstants.h>
#include <jcpp.h>

#undef EAST
#undef SOUTH

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$Spring = ::javax::swing::GroupLayout$Spring;
using $JComponent = ::javax::swing::JComponent;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;
using $SwingConstants = ::javax::swing::SwingConstants;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$PreferredGapSpring_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/GroupLayout;", nullptr, $FINAL | $SYNTHETIC, $field(GroupLayout$PreferredGapSpring, this$0)},
	{"source", "Ljavax/swing/JComponent;", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$PreferredGapSpring, source)},
	{"target", "Ljavax/swing/JComponent;", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$PreferredGapSpring, target)},
	{"type", "Ljavax/swing/LayoutStyle$ComponentPlacement;", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$PreferredGapSpring, type)},
	{"pref", "I", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$PreferredGapSpring, pref)},
	{"max", "I", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$PreferredGapSpring, max)},
	{}
};

$MethodInfo _GroupLayout$PreferredGapSpring_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/GroupLayout;Ljavax/swing/JComponent;Ljavax/swing/JComponent;Ljavax/swing/LayoutStyle$ComponentPlacement;II)V", nullptr, 0, $method(static_cast<void(GroupLayout$PreferredGapSpring::*)($GroupLayout*,$JComponent*,$JComponent*,$LayoutStyle$ComponentPlacement*,int32_t,int32_t)>(&GroupLayout$PreferredGapSpring::init$))},
	{"calculateMaximumSize", "(I)I", nullptr, 0},
	{"calculateMinimumSize", "(I)I", nullptr, 0},
	{"calculatePreferredSize", "(I)I", nullptr, 0},
	{"getPadding", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GroupLayout$PreferredGapSpring::*)(int32_t)>(&GroupLayout$PreferredGapSpring::getPadding))},
	{"willHaveZeroSize", "(Z)Z", nullptr, 0},
	{}
};

$InnerClassInfo _GroupLayout$PreferredGapSpring_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$PreferredGapSpring", "javax.swing.GroupLayout", "PreferredGapSpring", $PRIVATE},
	{"javax.swing.GroupLayout$Spring", "javax.swing.GroupLayout", "Spring", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _GroupLayout$PreferredGapSpring_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.GroupLayout$PreferredGapSpring",
	"javax.swing.GroupLayout$Spring",
	nullptr,
	_GroupLayout$PreferredGapSpring_FieldInfo_,
	_GroupLayout$PreferredGapSpring_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$PreferredGapSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$PreferredGapSpring($Class* clazz) {
	return $of($alloc(GroupLayout$PreferredGapSpring));
}

void GroupLayout$PreferredGapSpring::init$($GroupLayout* this$0, $JComponent* source, $JComponent* target, $LayoutStyle$ComponentPlacement* type, int32_t pref, int32_t max) {
	$set(this, this$0, this$0);
	$GroupLayout$Spring::init$(this$0);
	$set(this, source, source);
	$set(this, target, target);
	$set(this, type, type);
	this->pref = pref;
	this->max = max;
}

int32_t GroupLayout$PreferredGapSpring::calculateMinimumSize(int32_t axis) {
	return getPadding(axis);
}

int32_t GroupLayout$PreferredGapSpring::calculatePreferredSize(int32_t axis) {
	if (this->pref == -1 || this->pref == -2) {
		return getMinimumSize(axis);
	}
	int32_t min = getMinimumSize(axis);
	int32_t max = getMaximumSize(axis);
	return $Math::min(max, $Math::max(min, this->pref));
}

int32_t GroupLayout$PreferredGapSpring::calculateMaximumSize(int32_t axis) {
	if (this->max == -2 || this->max == -1) {
		return getPadding(axis);
	}
	return $Math::max(getMinimumSize(axis), this->max);
}

int32_t GroupLayout$PreferredGapSpring::getPadding(int32_t axis) {
	int32_t position = 0;
	if (axis == 0) {
		position = $SwingConstants::EAST;
	} else {
		position = $SwingConstants::SOUTH;
	}
	return $nc($(this->this$0->getLayoutStyle0()))->getPreferredGap(this->source, this->target, this->type, position, this->this$0->host);
}

bool GroupLayout$PreferredGapSpring::willHaveZeroSize(bool treatAutopaddingAsZeroSized) {
	return false;
}

GroupLayout$PreferredGapSpring::GroupLayout$PreferredGapSpring() {
}

$Class* GroupLayout$PreferredGapSpring::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$PreferredGapSpring, name, initialize, &_GroupLayout$PreferredGapSpring_ClassInfo_, allocate$GroupLayout$PreferredGapSpring);
	return class$;
}

$Class* GroupLayout$PreferredGapSpring::class$ = nullptr;

	} // swing
} // javax