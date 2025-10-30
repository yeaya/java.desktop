#include <javax/swing/GroupLayout$GapSpring.h>

#include <javax/swing/GroupLayout$Spring.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$Spring = ::javax::swing::GroupLayout$Spring;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$GapSpring_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/GroupLayout;", nullptr, $FINAL | $SYNTHETIC, $field(GroupLayout$GapSpring, this$0)},
	{"min", "I", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$GapSpring, min)},
	{"pref", "I", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$GapSpring, pref)},
	{"max", "I", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$GapSpring, max)},
	{}
};

$MethodInfo _GroupLayout$GapSpring_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/GroupLayout;III)V", nullptr, 0, $method(static_cast<void(GroupLayout$GapSpring::*)($GroupLayout*,int32_t,int32_t,int32_t)>(&GroupLayout$GapSpring::init$))},
	{"calculateMaximumSize", "(I)I", nullptr, 0},
	{"calculateMinimumSize", "(I)I", nullptr, 0},
	{"calculatePreferredSize", "(I)I", nullptr, 0},
	{"willHaveZeroSize", "(Z)Z", nullptr, 0},
	{}
};

$InnerClassInfo _GroupLayout$GapSpring_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$GapSpring", "javax.swing.GroupLayout", "GapSpring", $PRIVATE},
	{"javax.swing.GroupLayout$Spring", "javax.swing.GroupLayout", "Spring", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _GroupLayout$GapSpring_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.GroupLayout$GapSpring",
	"javax.swing.GroupLayout$Spring",
	nullptr,
	_GroupLayout$GapSpring_FieldInfo_,
	_GroupLayout$GapSpring_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$GapSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$GapSpring($Class* clazz) {
	return $of($alloc(GroupLayout$GapSpring));
}

void GroupLayout$GapSpring::init$($GroupLayout* this$0, int32_t min, int32_t pref, int32_t max) {
	$set(this, this$0, this$0);
	$GroupLayout$Spring::init$(this$0);
	$GroupLayout::checkSize(min, pref, max, false);
	this->min = min;
	this->pref = pref;
	this->max = max;
}

int32_t GroupLayout$GapSpring::calculateMinimumSize(int32_t axis) {
	if (this->min == -2) {
		return getPreferredSize(axis);
	}
	return this->min;
}

int32_t GroupLayout$GapSpring::calculatePreferredSize(int32_t axis) {
	return this->pref;
}

int32_t GroupLayout$GapSpring::calculateMaximumSize(int32_t axis) {
	if (this->max == -2) {
		return getPreferredSize(axis);
	}
	return this->max;
}

bool GroupLayout$GapSpring::willHaveZeroSize(bool treatAutopaddingAsZeroSized) {
	return false;
}

GroupLayout$GapSpring::GroupLayout$GapSpring() {
}

$Class* GroupLayout$GapSpring::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$GapSpring, name, initialize, &_GroupLayout$GapSpring_ClassInfo_, allocate$GroupLayout$GapSpring);
	return class$;
}

$Class* GroupLayout$GapSpring::class$ = nullptr;

	} // swing
} // javax