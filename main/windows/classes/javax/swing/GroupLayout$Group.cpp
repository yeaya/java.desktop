#include <javax/swing/GroupLayout$Group.h>

#include <java/awt/Component.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/GroupLayout$AutoPreferredGapSpring.h>
#include <javax/swing/GroupLayout$ComponentSpring.h>
#include <javax/swing/GroupLayout$GapSpring.h>
#include <javax/swing/GroupLayout$Spring.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$AutoPreferredGapSpring = ::javax::swing::GroupLayout$AutoPreferredGapSpring;
using $GroupLayout$ComponentSpring = ::javax::swing::GroupLayout$ComponentSpring;
using $GroupLayout$GapSpring = ::javax::swing::GroupLayout$GapSpring;
using $GroupLayout$Spring = ::javax::swing::GroupLayout$Spring;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$Group_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/GroupLayout;", nullptr, $FINAL | $SYNTHETIC, $field(GroupLayout$Group, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupLayout$Group, $assertionsDisabled)},
	{"springs", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/GroupLayout$Spring;>;", 0, $field(GroupLayout$Group, springs)},
	{}
};

$MethodInfo _GroupLayout$Group_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/GroupLayout;)V", nullptr, 0, $method(static_cast<void(GroupLayout$Group::*)($GroupLayout*)>(&GroupLayout$Group::init$))},
	{"addComponent", "(Ljava/awt/Component;)Ljavax/swing/GroupLayout$Group;", nullptr, $PUBLIC},
	{"addComponent", "(Ljava/awt/Component;III)Ljavax/swing/GroupLayout$Group;", nullptr, $PUBLIC},
	{"addGap", "(I)Ljavax/swing/GroupLayout$Group;", nullptr, $PUBLIC},
	{"addGap", "(III)Ljavax/swing/GroupLayout$Group;", nullptr, $PUBLIC},
	{"addGroup", "(Ljavax/swing/GroupLayout$Group;)Ljavax/swing/GroupLayout$Group;", nullptr, $PUBLIC},
	{"addSpring", "(Ljavax/swing/GroupLayout$Spring;)Ljavax/swing/GroupLayout$Group;", nullptr, 0},
	{"calculateAutopadding", "(I)V", nullptr, 0},
	{"calculateMaximumSize", "(I)I", nullptr, 0},
	{"calculateMinimumSize", "(I)I", nullptr, 0},
	{"calculatePreferredSize", "(I)I", nullptr, 0},
	{"calculateSize", "(II)I", nullptr, 0},
	{"getSpring", "(I)Ljavax/swing/GroupLayout$Spring;", nullptr, 0},
	{"getSpringSize", "(Ljavax/swing/GroupLayout$Spring;II)I", nullptr, 0},
	{"indexOf", "(Ljavax/swing/GroupLayout$Spring;)I", nullptr, 0},
	{"insertAutopadding", "(ILjava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Z)V", "(ILjava/util/List<Ljavax/swing/GroupLayout$AutoPreferredGapSpring;>;Ljava/util/List<Ljavax/swing/GroupLayout$AutoPreferredGapSpring;>;Ljava/util/List<Ljavax/swing/GroupLayout$ComponentSpring;>;Ljava/util/List<Ljavax/swing/GroupLayout$ComponentSpring;>;Z)V", $ABSTRACT},
	{"operator", "(II)I", nullptr, $ABSTRACT},
	{"removeAutopadding", "()V", nullptr, 0},
	{"setSize", "(III)V", nullptr, 0},
	{"setValidSize", "(III)V", nullptr, $ABSTRACT},
	{"unsetAutopadding", "()V", nullptr, 0},
	{"willHaveZeroSize", "(Z)Z", nullptr, 0},
	{}
};

$InnerClassInfo _GroupLayout$Group_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$Group", "javax.swing.GroupLayout", "Group", $PUBLIC | $ABSTRACT},
	{"javax.swing.GroupLayout$Spring", "javax.swing.GroupLayout", "Spring", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _GroupLayout$Group_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.GroupLayout$Group",
	"javax.swing.GroupLayout$Spring",
	nullptr,
	_GroupLayout$Group_FieldInfo_,
	_GroupLayout$Group_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$Group_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$Group($Class* clazz) {
	return $of($alloc(GroupLayout$Group));
}

bool GroupLayout$Group::$assertionsDisabled = false;

void GroupLayout$Group::init$($GroupLayout* this$0) {
	$set(this, this$0, this$0);
	$GroupLayout$Spring::init$(this$0);
	$set(this, springs, $new($ArrayList));
}

GroupLayout$Group* GroupLayout$Group::addGroup(GroupLayout$Group* group) {
	return addSpring(group);
}

GroupLayout$Group* GroupLayout$Group::addComponent($Component* component) {
	return addComponent(component, -1, -1, -1);
}

GroupLayout$Group* GroupLayout$Group::addComponent($Component* component, int32_t min, int32_t pref, int32_t max) {
	return addSpring($$new($GroupLayout$ComponentSpring, this->this$0, component, min, pref, max));
}

GroupLayout$Group* GroupLayout$Group::addGap(int32_t size) {
	return addGap(size, size, size);
}

GroupLayout$Group* GroupLayout$Group::addGap(int32_t min, int32_t pref, int32_t max) {
	return addSpring($$new($GroupLayout$GapSpring, this->this$0, min, pref, max));
}

$GroupLayout$Spring* GroupLayout$Group::getSpring(int32_t index) {
	return $cast($GroupLayout$Spring, $nc(this->springs)->get(index));
}

int32_t GroupLayout$Group::indexOf($GroupLayout$Spring* spring) {
	return $nc(this->springs)->indexOf(spring);
}

GroupLayout$Group* GroupLayout$Group::addSpring($GroupLayout$Spring* spring) {
	$nc(this->springs)->add(spring);
	$nc(spring)->setParent(this);
	if (!($instanceOf($GroupLayout$AutoPreferredGapSpring, spring)) || !$nc(($cast($GroupLayout$AutoPreferredGapSpring, spring)))->getUserCreated()) {
		this->this$0->springsChanged = true;
	}
	return this;
}

void GroupLayout$Group::setSize(int32_t axis, int32_t origin, int32_t size) {
	$GroupLayout$Spring::setSize(axis, origin, size);
	if (size == (int32_t)0x80000000) {
		for (int32_t counter = $nc(this->springs)->size() - 1; counter >= 0; --counter) {
			$nc($(getSpring(counter)))->setSize(axis, origin, size);
		}
	} else {
		setValidSize(axis, origin, size);
	}
}

int32_t GroupLayout$Group::calculateMinimumSize(int32_t axis) {
	return calculateSize(axis, 0);
}

int32_t GroupLayout$Group::calculatePreferredSize(int32_t axis) {
	return calculateSize(axis, 1);
}

int32_t GroupLayout$Group::calculateMaximumSize(int32_t axis) {
	return calculateSize(axis, 2);
}

int32_t GroupLayout$Group::calculateSize(int32_t axis, int32_t type) {
	int32_t count = $nc(this->springs)->size();
	if (count == 0) {
		return 0;
	}
	if (count == 1) {
		return getSpringSize($(getSpring(0)), axis, type);
	}
	int32_t var$0 = getSpringSize($(getSpring(0)), axis, type);
	int32_t size = constrain(operator$(var$0, getSpringSize($(getSpring(1)), axis, type)));
	for (int32_t counter = 2; counter < count; ++counter) {
		size = constrain(operator$(size, getSpringSize($(getSpring(counter)), axis, type)));
	}
	return size;
}

int32_t GroupLayout$Group::getSpringSize($GroupLayout$Spring* spring, int32_t axis, int32_t type) {
	switch (type) {
	case 0:
		{
			return $nc(spring)->getMinimumSize(axis);
		}
	case 1:
		{
			return $nc(spring)->getPreferredSize(axis);
		}
	case 2:
		{
			return $nc(spring)->getMaximumSize(axis);
		}
	}
	if (!GroupLayout$Group::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
	return 0;
}

void GroupLayout$Group::removeAutopadding() {
	unset();
	for (int32_t counter = $nc(this->springs)->size() - 1; counter >= 0; --counter) {
		$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, $nc(this->springs)->get(counter)));
		if ($instanceOf($GroupLayout$AutoPreferredGapSpring, spring)) {
			if ($nc(($cast($GroupLayout$AutoPreferredGapSpring, spring)))->getUserCreated()) {
				$nc(($cast($GroupLayout$AutoPreferredGapSpring, spring)))->reset();
			} else {
				$nc(this->springs)->remove(counter);
			}
		} else if ($instanceOf(GroupLayout$Group, spring)) {
			$nc(($cast(GroupLayout$Group, spring)))->removeAutopadding();
		}
	}
}

void GroupLayout$Group::unsetAutopadding() {
	unset();
	for (int32_t counter = $nc(this->springs)->size() - 1; counter >= 0; --counter) {
		$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, $nc(this->springs)->get(counter)));
		if ($instanceOf($GroupLayout$AutoPreferredGapSpring, spring)) {
			$nc(spring)->unset();
		} else if ($instanceOf(GroupLayout$Group, spring)) {
			$nc(($cast(GroupLayout$Group, spring)))->unsetAutopadding();
		}
	}
}

void GroupLayout$Group::calculateAutopadding(int32_t axis) {
	for (int32_t counter = $nc(this->springs)->size() - 1; counter >= 0; --counter) {
		$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, $nc(this->springs)->get(counter)));
		if ($instanceOf($GroupLayout$AutoPreferredGapSpring, spring)) {
			$nc(spring)->unset();
			$nc(($cast($GroupLayout$AutoPreferredGapSpring, spring)))->calculatePadding(axis);
		} else if ($instanceOf(GroupLayout$Group, spring)) {
			$nc(($cast(GroupLayout$Group, spring)))->calculateAutopadding(axis);
		}
	}
	unset();
}

bool GroupLayout$Group::willHaveZeroSize(bool treatAutopaddingAsZeroSized) {
	for (int32_t i = $nc(this->springs)->size() - 1; i >= 0; --i) {
		$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, $nc(this->springs)->get(i)));
		if (!$nc(spring)->willHaveZeroSize(treatAutopaddingAsZeroSized)) {
			return false;
		}
	}
	return true;
}

void clinit$GroupLayout$Group($Class* class$) {
	$load($GroupLayout);
	GroupLayout$Group::$assertionsDisabled = !$GroupLayout::class$->desiredAssertionStatus();
}

GroupLayout$Group::GroupLayout$Group() {
}

$Class* GroupLayout$Group::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$Group, name, initialize, &_GroupLayout$Group_ClassInfo_, clinit$GroupLayout$Group, allocate$GroupLayout$Group);
	return class$;
}

$Class* GroupLayout$Group::class$ = nullptr;

	} // swing
} // javax