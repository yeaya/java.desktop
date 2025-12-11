#include <javax/swing/GroupLayout$ParallelGroup.h>

#include <java/awt/Component.h>
#include <java/lang/Math.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/GroupLayout$1.h>
#include <javax/swing/GroupLayout$Alignment.h>
#include <javax/swing/GroupLayout$AutoPreferredGapSpring.h>
#include <javax/swing/GroupLayout$BaselineGroup.h>
#include <javax/swing/GroupLayout$ComponentSpring.h>
#include <javax/swing/GroupLayout$Group.h>
#include <javax/swing/GroupLayout$Spring.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

#undef BASELINE

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$1 = ::javax::swing::GroupLayout$1;
using $GroupLayout$Alignment = ::javax::swing::GroupLayout$Alignment;
using $GroupLayout$AutoPreferredGapSpring = ::javax::swing::GroupLayout$AutoPreferredGapSpring;
using $GroupLayout$BaselineGroup = ::javax::swing::GroupLayout$BaselineGroup;
using $GroupLayout$ComponentSpring = ::javax::swing::GroupLayout$ComponentSpring;
using $GroupLayout$Group = ::javax::swing::GroupLayout$Group;
using $GroupLayout$Spring = ::javax::swing::GroupLayout$Spring;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$ParallelGroup_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/GroupLayout;", nullptr, $FINAL | $SYNTHETIC, $field(GroupLayout$ParallelGroup, this$0)},
	{"childAlignment", "Ljavax/swing/GroupLayout$Alignment;", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$ParallelGroup, childAlignment)},
	{"resizable", "Z", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$ParallelGroup, resizable)},
	{}
};

$MethodInfo _GroupLayout$ParallelGroup_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/GroupLayout;Ljavax/swing/GroupLayout$Alignment;Z)V", nullptr, 0, $method(static_cast<void(GroupLayout$ParallelGroup::*)($GroupLayout*,$GroupLayout$Alignment*,bool)>(&GroupLayout$ParallelGroup::init$))},
	{"addComponent", "(Ljava/awt/Component;)Ljavax/swing/GroupLayout$ParallelGroup;", nullptr, $PUBLIC},
	{"addComponent", "(Ljava/awt/Component;III)Ljavax/swing/GroupLayout$ParallelGroup;", nullptr, $PUBLIC},
	{"addComponent", "(Ljava/awt/Component;Ljavax/swing/GroupLayout$Alignment;)Ljavax/swing/GroupLayout$ParallelGroup;", nullptr, $PUBLIC},
	{"addComponent", "(Ljava/awt/Component;Ljavax/swing/GroupLayout$Alignment;III)Ljavax/swing/GroupLayout$ParallelGroup;", nullptr, $PUBLIC},
	{"addGap", "(I)Ljavax/swing/GroupLayout$ParallelGroup;", nullptr, $PUBLIC},
	{"addGap", "(III)Ljavax/swing/GroupLayout$ParallelGroup;", nullptr, $PUBLIC},
	{"addGroup", "(Ljavax/swing/GroupLayout$Group;)Ljavax/swing/GroupLayout$ParallelGroup;", nullptr, $PUBLIC},
	{"addGroup", "(Ljavax/swing/GroupLayout$Alignment;Ljavax/swing/GroupLayout$Group;)Ljavax/swing/GroupLayout$ParallelGroup;", nullptr, $PUBLIC},
	{"calculateMaximumSize", "(I)I", nullptr, 0},
	{"calculateMinimumSize", "(I)I", nullptr, 0},
	{"checkChildAlignment", "(Ljavax/swing/GroupLayout$Alignment;)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout$ParallelGroup::*)($GroupLayout$Alignment*)>(&GroupLayout$ParallelGroup::checkChildAlignment))},
	{"checkChildAlignment", "(Ljavax/swing/GroupLayout$Alignment;Z)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout$ParallelGroup::*)($GroupLayout$Alignment*,bool)>(&GroupLayout$ParallelGroup::checkChildAlignment))},
	{"insertAutopadding", "(ILjava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Z)V", "(ILjava/util/List<Ljavax/swing/GroupLayout$AutoPreferredGapSpring;>;Ljava/util/List<Ljavax/swing/GroupLayout$AutoPreferredGapSpring;>;Ljava/util/List<Ljavax/swing/GroupLayout$ComponentSpring;>;Ljava/util/List<Ljavax/swing/GroupLayout$ComponentSpring;>;Z)V", 0},
	{"isResizable", "()Z", nullptr, 0},
	{"operator", "(II)I", nullptr, 0},
	{"setChildSize", "(Ljavax/swing/GroupLayout$Spring;III)V", nullptr, 0},
	{"setValidSize", "(III)V", nullptr, 0},
	{}
};

$InnerClassInfo _GroupLayout$ParallelGroup_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$ParallelGroup", "javax.swing.GroupLayout", "ParallelGroup", $PUBLIC},
	{"javax.swing.GroupLayout$Group", "javax.swing.GroupLayout", "Group", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GroupLayout$ParallelGroup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.GroupLayout$ParallelGroup",
	"javax.swing.GroupLayout$Group",
	nullptr,
	_GroupLayout$ParallelGroup_FieldInfo_,
	_GroupLayout$ParallelGroup_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$ParallelGroup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$ParallelGroup($Class* clazz) {
	return $of($alloc(GroupLayout$ParallelGroup));
}

void GroupLayout$ParallelGroup::init$($GroupLayout* this$0, $GroupLayout$Alignment* childAlignment, bool resizable) {
	$set(this, this$0, this$0);
	$GroupLayout$Group::init$(this$0);
	$set(this, childAlignment, childAlignment);
	this->resizable = resizable;
}

GroupLayout$ParallelGroup* GroupLayout$ParallelGroup::addGroup($GroupLayout$Group* group) {
	return $cast(GroupLayout$ParallelGroup, $GroupLayout$Group::addGroup(group));
}

GroupLayout$ParallelGroup* GroupLayout$ParallelGroup::addComponent($Component* component) {
	return $cast(GroupLayout$ParallelGroup, $GroupLayout$Group::addComponent(component));
}

GroupLayout$ParallelGroup* GroupLayout$ParallelGroup::addComponent($Component* component, int32_t min, int32_t pref, int32_t max) {
	return $cast(GroupLayout$ParallelGroup, $GroupLayout$Group::addComponent(component, min, pref, max));
}

GroupLayout$ParallelGroup* GroupLayout$ParallelGroup::addGap(int32_t pref) {
	return $cast(GroupLayout$ParallelGroup, $GroupLayout$Group::addGap(pref));
}

GroupLayout$ParallelGroup* GroupLayout$ParallelGroup::addGap(int32_t min, int32_t pref, int32_t max) {
	return $cast(GroupLayout$ParallelGroup, $GroupLayout$Group::addGap(min, pref, max));
}

GroupLayout$ParallelGroup* GroupLayout$ParallelGroup::addGroup($GroupLayout$Alignment* alignment, $GroupLayout$Group* group) {
	checkChildAlignment(alignment);
	$nc(group)->setAlignment(alignment);
	return $cast(GroupLayout$ParallelGroup, addSpring(group));
}

GroupLayout$ParallelGroup* GroupLayout$ParallelGroup::addComponent($Component* component, $GroupLayout$Alignment* alignment) {
	return addComponent(component, alignment, -1, -1, -1);
}

GroupLayout$ParallelGroup* GroupLayout$ParallelGroup::addComponent($Component* component, $GroupLayout$Alignment* alignment, int32_t min, int32_t pref, int32_t max) {
	checkChildAlignment(alignment);
	$var($GroupLayout$ComponentSpring, spring, $new($GroupLayout$ComponentSpring, this->this$0, component, min, pref, max));
	spring->setAlignment(alignment);
	return $cast(GroupLayout$ParallelGroup, addSpring(spring));
}

bool GroupLayout$ParallelGroup::isResizable() {
	return this->resizable;
}

int32_t GroupLayout$ParallelGroup::operator$(int32_t a, int32_t b) {
	return $Math::max(a, b);
}

int32_t GroupLayout$ParallelGroup::calculateMinimumSize(int32_t axis) {
	if (!isResizable()) {
		return getPreferredSize(axis);
	}
	return $GroupLayout$Group::calculateMinimumSize(axis);
}

int32_t GroupLayout$ParallelGroup::calculateMaximumSize(int32_t axis) {
	if (!isResizable()) {
		return getPreferredSize(axis);
	}
	return $GroupLayout$Group::calculateMaximumSize(axis);
}

void GroupLayout$ParallelGroup::setValidSize(int32_t axis, int32_t origin, int32_t size) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->springs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, i$->next()));
			{
				setChildSize(spring, axis, origin, size);
			}
		}
	}
}

void GroupLayout$ParallelGroup::setChildSize($GroupLayout$Spring* spring, int32_t axis, int32_t origin, int32_t size) {
	$GroupLayout$Alignment* alignment = $nc(spring)->getAlignment();
	int32_t var$0 = $Math::max(spring->getMinimumSize(axis), size);
	int32_t springSize = $Math::min(var$0, spring->getMaximumSize(axis));
	if (alignment == nullptr) {
		alignment = this->childAlignment;
	}
	$init($GroupLayout$1);
	switch ($nc($GroupLayout$1::$SwitchMap$javax$swing$GroupLayout$Alignment)->get($nc((alignment))->ordinal())) {
	case 1:
		{
			spring->setSize(axis, origin + size - springSize, springSize);
			break;
		}
	case 2:
		{
			spring->setSize(axis, origin + (size - springSize) / 2, springSize);
			break;
		}
	default:
		{
			spring->setSize(axis, origin, springSize);
			break;
		}
	}
}

void GroupLayout$ParallelGroup::insertAutopadding(int32_t axis, $List* leadingPadding, $List* trailingPadding, $List* leading, $List* trailing, bool insert) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->springs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, i$->next()));
			{
				if ($instanceOf($GroupLayout$ComponentSpring, spring)) {
					if ($nc(($cast($GroupLayout$ComponentSpring, spring)))->isVisible()) {
						{
							$var($Iterator, i$, $nc(leadingPadding)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($GroupLayout$AutoPreferredGapSpring, gapSpring, $cast($GroupLayout$AutoPreferredGapSpring, i$->next()));
								{
									$nc(gapSpring)->addTarget($cast($GroupLayout$ComponentSpring, spring), axis);
								}
							}
						}
						$nc(trailing)->add($cast($GroupLayout$ComponentSpring, spring));
					}
				} else if ($instanceOf($GroupLayout$Group, spring)) {
					$nc(($cast($GroupLayout$Group, spring)))->insertAutopadding(axis, leadingPadding, trailingPadding, leading, trailing, insert);
				} else if ($instanceOf($GroupLayout$AutoPreferredGapSpring, spring)) {
					$nc(($cast($GroupLayout$AutoPreferredGapSpring, spring)))->setSources(leading);
					$nc(trailingPadding)->add($cast($GroupLayout$AutoPreferredGapSpring, spring));
				}
			}
		}
	}
}

void GroupLayout$ParallelGroup::checkChildAlignment($GroupLayout$Alignment* alignment) {
	checkChildAlignment(alignment, ($instanceOf($GroupLayout$BaselineGroup, this)));
}

void GroupLayout$ParallelGroup::checkChildAlignment($GroupLayout$Alignment* alignment, bool allowsBaseline) {
	if (alignment == nullptr) {
		$throwNew($IllegalArgumentException, "Alignment must be non-null"_s);
	}
	$init($GroupLayout$Alignment);
	if (!allowsBaseline && alignment == $GroupLayout$Alignment::BASELINE) {
		$throwNew($IllegalArgumentException, "Alignment must be one of:LEADING, TRAILING or CENTER"_s);
	}
}

GroupLayout$ParallelGroup::GroupLayout$ParallelGroup() {
}

$Class* GroupLayout$ParallelGroup::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$ParallelGroup, name, initialize, &_GroupLayout$ParallelGroup_ClassInfo_, allocate$GroupLayout$ParallelGroup);
	return class$;
}

$Class* GroupLayout$ParallelGroup::class$ = nullptr;

	} // swing
} // javax