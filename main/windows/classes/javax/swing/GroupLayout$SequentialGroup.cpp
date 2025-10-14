#include <javax/swing/GroupLayout$SequentialGroup.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/GroupLayout$AutoPreferredGapSpring.h>
#include <javax/swing/GroupLayout$ComponentSpring.h>
#include <javax/swing/GroupLayout$ContainerAutoPreferredGapSpring.h>
#include <javax/swing/GroupLayout$Group.h>
#include <javax/swing/GroupLayout$PreferredGapSpring.h>
#include <javax/swing/GroupLayout$Spring.h>
#include <javax/swing/GroupLayout$SpringDelta.h>
#include <javax/swing/GroupLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <jcpp.h>

#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT
#undef OTHER
#undef RELATED
#undef UNRELATED

using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$AutoPreferredGapSpring = ::javax::swing::GroupLayout$AutoPreferredGapSpring;
using $GroupLayout$ComponentSpring = ::javax::swing::GroupLayout$ComponentSpring;
using $GroupLayout$ContainerAutoPreferredGapSpring = ::javax::swing::GroupLayout$ContainerAutoPreferredGapSpring;
using $GroupLayout$Group = ::javax::swing::GroupLayout$Group;
using $GroupLayout$PreferredGapSpring = ::javax::swing::GroupLayout$PreferredGapSpring;
using $GroupLayout$Spring = ::javax::swing::GroupLayout$Spring;
using $GroupLayout$SpringDelta = ::javax::swing::GroupLayout$SpringDelta;
using $JComponent = ::javax::swing::JComponent;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$SequentialGroup_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/GroupLayout;", nullptr, $FINAL | $SYNTHETIC, $field(GroupLayout$SequentialGroup, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupLayout$SequentialGroup, $assertionsDisabled)},
	{"baselineSpring", "Ljavax/swing/GroupLayout$Spring;", nullptr, $PRIVATE, $field(GroupLayout$SequentialGroup, baselineSpring)},
	{}
};

$MethodInfo _GroupLayout$SequentialGroup_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/GroupLayout;)V", nullptr, 0, $method(static_cast<void(GroupLayout$SequentialGroup::*)($GroupLayout*)>(&GroupLayout$SequentialGroup::init$))},
	{"addComponent", "(Ljava/awt/Component;)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addComponent", "(ZLjava/awt/Component;)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addComponent", "(Ljava/awt/Component;III)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addComponent", "(ZLjava/awt/Component;III)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addContainerGap", "()Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addContainerGap", "(II)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addGap", "(I)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addGap", "(III)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addGroup", "(Ljavax/swing/GroupLayout$Group;)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addGroup", "(ZLjavax/swing/GroupLayout$Group;)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addPreferredGap", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;Ljavax/swing/LayoutStyle$ComponentPlacement;)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addPreferredGap", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;Ljavax/swing/LayoutStyle$ComponentPlacement;II)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addPreferredGap", "(Ljavax/swing/LayoutStyle$ComponentPlacement;)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"addPreferredGap", "(Ljavax/swing/LayoutStyle$ComponentPlacement;II)Ljavax/swing/GroupLayout$SequentialGroup;", nullptr, $PUBLIC},
	{"buildResizableList", "(IZ)Ljava/util/List;", "(IZ)Ljava/util/List<Ljavax/swing/GroupLayout$SpringDelta;>;", $PRIVATE, $method(static_cast<$List*(GroupLayout$SequentialGroup::*)(int32_t,bool)>(&GroupLayout$SequentialGroup::buildResizableList))},
	{"checkPreferredGapValues", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout$SequentialGroup::*)(int32_t,int32_t)>(&GroupLayout$SequentialGroup::checkPreferredGapValues))},
	{"getBaseline", "()I", nullptr, 0},
	{"getBaselineResizeBehavior", "()Ljava/awt/Component$BaselineResizeBehavior;", nullptr, 0},
	{"indexOfNextNonZeroSpring", "(IZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GroupLayout$SequentialGroup::*)(int32_t,bool)>(&GroupLayout$SequentialGroup::indexOfNextNonZeroSpring))},
	{"insertAutopadding", "(ILjava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Z)V", "(ILjava/util/List<Ljavax/swing/GroupLayout$AutoPreferredGapSpring;>;Ljava/util/List<Ljavax/swing/GroupLayout$AutoPreferredGapSpring;>;Ljava/util/List<Ljavax/swing/GroupLayout$ComponentSpring;>;Ljava/util/List<Ljavax/swing/GroupLayout$ComponentSpring;>;Z)V", 0},
	{"operator", "(II)I", nullptr, 0},
	{"setValidSize", "(III)V", nullptr, 0},
	{"setValidSizeNotPreferred", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout$SequentialGroup::*)(int32_t,int32_t,int32_t)>(&GroupLayout$SequentialGroup::setValidSizeNotPreferred))},
	{}
};

$InnerClassInfo _GroupLayout$SequentialGroup_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$SequentialGroup", "javax.swing.GroupLayout", "SequentialGroup", $PUBLIC},
	{"javax.swing.GroupLayout$Group", "javax.swing.GroupLayout", "Group", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GroupLayout$SequentialGroup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.GroupLayout$SequentialGroup",
	"javax.swing.GroupLayout$Group",
	nullptr,
	_GroupLayout$SequentialGroup_FieldInfo_,
	_GroupLayout$SequentialGroup_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$SequentialGroup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$SequentialGroup($Class* clazz) {
	return $of($alloc(GroupLayout$SequentialGroup));
}

bool GroupLayout$SequentialGroup::$assertionsDisabled = false;

void GroupLayout$SequentialGroup::init$($GroupLayout* this$0) {
	$set(this, this$0, this$0);
	$GroupLayout$Group::init$(this$0);
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addGroup($GroupLayout$Group* group) {
	return $cast(GroupLayout$SequentialGroup, $GroupLayout$Group::addGroup(group));
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addGroup(bool useAsBaseline, $GroupLayout$Group* group) {
	$GroupLayout$Group::addGroup(group);
	if (useAsBaseline) {
		$set(this, baselineSpring, group);
	}
	return this;
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addComponent($Component* component) {
	return $cast(GroupLayout$SequentialGroup, $GroupLayout$Group::addComponent(component));
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addComponent(bool useAsBaseline, $Component* component) {
	$GroupLayout$Group::addComponent(component);
	if (useAsBaseline) {
		$set(this, baselineSpring, $cast($GroupLayout$Spring, $nc(this->springs)->get($nc(this->springs)->size() - 1)));
	}
	return this;
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addComponent($Component* component, int32_t min, int32_t pref, int32_t max) {
	return $cast(GroupLayout$SequentialGroup, $GroupLayout$Group::addComponent(component, min, pref, max));
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addComponent(bool useAsBaseline, $Component* component, int32_t min, int32_t pref, int32_t max) {
	$GroupLayout$Group::addComponent(component, min, pref, max);
	if (useAsBaseline) {
		$set(this, baselineSpring, $cast($GroupLayout$Spring, $nc(this->springs)->get($nc(this->springs)->size() - 1)));
	}
	return this;
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addGap(int32_t size) {
	return $cast(GroupLayout$SequentialGroup, $GroupLayout$Group::addGap(size));
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addGap(int32_t min, int32_t pref, int32_t max) {
	return $cast(GroupLayout$SequentialGroup, $GroupLayout$Group::addGap(min, pref, max));
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addPreferredGap($JComponent* comp1, $JComponent* comp2, $LayoutStyle$ComponentPlacement* type) {
	return addPreferredGap(comp1, comp2, type, -1, -2);
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addPreferredGap($JComponent* comp1, $JComponent* comp2, $LayoutStyle$ComponentPlacement* type, int32_t pref, int32_t max) {
	if (type == nullptr) {
		$throwNew($IllegalArgumentException, "Type must be non-null"_s);
	}
	if (comp1 == nullptr || comp2 == nullptr) {
		$throwNew($IllegalArgumentException, "Components must be non-null"_s);
	}
	checkPreferredGapValues(pref, max);
	return $cast(GroupLayout$SequentialGroup, addSpring($$new($GroupLayout$PreferredGapSpring, this->this$0, comp1, comp2, type, pref, max)));
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addPreferredGap($LayoutStyle$ComponentPlacement* type) {
	return addPreferredGap(type, -1, -1);
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addPreferredGap($LayoutStyle$ComponentPlacement* type, int32_t pref, int32_t max) {
	$init($LayoutStyle$ComponentPlacement);
	if (type != $LayoutStyle$ComponentPlacement::RELATED && type != $LayoutStyle$ComponentPlacement::UNRELATED) {
		$throwNew($IllegalArgumentException, "Type must be one of LayoutStyle.ComponentPlacement.RELATED or LayoutStyle.ComponentPlacement.UNRELATED"_s);
	}
	checkPreferredGapValues(pref, max);
	this->this$0->hasPreferredPaddingSprings = true;
	return $cast(GroupLayout$SequentialGroup, addSpring($$new($GroupLayout$AutoPreferredGapSpring, this->this$0, type, pref, max)));
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addContainerGap() {
	return addContainerGap(-1, -1);
}

GroupLayout$SequentialGroup* GroupLayout$SequentialGroup::addContainerGap(int32_t pref, int32_t max) {
	if ((pref < 0 && pref != -1) || (max < 0 && max != -1 && max != -2) || (pref >= 0 && max >= 0 && pref > max)) {
		$throwNew($IllegalArgumentException, "Pref and max must be either DEFAULT_VALUE or >= 0 and pref <= max"_s);
	}
	this->this$0->hasPreferredPaddingSprings = true;
	return $cast(GroupLayout$SequentialGroup, addSpring($$new($GroupLayout$ContainerAutoPreferredGapSpring, this->this$0, pref, max)));
}

int32_t GroupLayout$SequentialGroup::operator$(int32_t a, int32_t b) {
	int32_t var$0 = constrain(a);
	return var$0 + constrain(b);
}

void GroupLayout$SequentialGroup::setValidSize(int32_t axis, int32_t origin, int32_t size) {
	int32_t pref = getPreferredSize(axis);
	if (size == pref) {
		{
			$var($Iterator, i$, $nc(this->springs)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, i$->next()));
				{
					int32_t springPref = $nc(spring)->getPreferredSize(axis);
					spring->setSize(axis, origin, springPref);
					origin += springPref;
				}
			}
		}
	} else if ($nc(this->springs)->size() == 1) {
		$var($GroupLayout$Spring, spring, getSpring(0));
		int32_t var$0 = $Math::max(size, spring->getMinimumSize(axis));
		$nc(spring)->setSize(axis, origin, $Math::min(var$0, spring->getMaximumSize(axis)));
	} else if ($nc(this->springs)->size() > 1) {
		setValidSizeNotPreferred(axis, origin, size);
	}
}

void GroupLayout$SequentialGroup::setValidSizeNotPreferred(int32_t axis, int32_t origin, int32_t size) {
	int32_t delta = size - getPreferredSize(axis);
	if (!GroupLayout$SequentialGroup::$assertionsDisabled && !(delta != 0)) {
		$throwNew($AssertionError);
	}
	bool useMin = (delta < 0);
	int32_t springCount = $nc(this->springs)->size();
	if (useMin) {
		delta *= -1;
	}
	$var($List, resizable, buildResizableList(axis, useMin));
	int32_t resizableCount = $nc(resizable)->size();
	if (resizableCount > 0) {
		int32_t sDelta = $div(delta, resizableCount);
		int32_t slop = delta - sDelta * resizableCount;
		$var($ints, sizes, $new($ints, springCount));
		int32_t sign = useMin ? -1 : 1;
		for (int32_t counter = 0; counter < resizableCount; ++counter) {
			$var($GroupLayout$SpringDelta, springDelta, $cast($GroupLayout$SpringDelta, resizable->get(counter)));
			if ((counter + 1) == resizableCount) {
				sDelta += slop;
			}
			$nc(springDelta)->delta = $Math::min(sDelta, springDelta->delta);
			delta -= springDelta->delta;
			if (springDelta->delta != sDelta && counter + 1 < resizableCount) {
				sDelta = $div(delta, (resizableCount - counter - 1));
				slop = delta - sDelta * (resizableCount - counter - 1);
			}
			sizes->set(springDelta->index, sign * springDelta->delta);
		}
		for (int32_t counter = 0; counter < springCount; ++counter) {
			$var($GroupLayout$Spring, spring, getSpring(counter));
			int32_t sSize = $nc(spring)->getPreferredSize(axis) + sizes->get(counter);
			spring->setSize(axis, origin, sSize);
			origin += sSize;
		}
	} else {
		for (int32_t counter = 0; counter < springCount; ++counter) {
			$var($GroupLayout$Spring, spring, getSpring(counter));
			int32_t sSize = 0;
			if (useMin) {
				sSize = $nc(spring)->getMinimumSize(axis);
			} else {
				sSize = $nc(spring)->getMaximumSize(axis);
			}
			$nc(spring)->setSize(axis, origin, sSize);
			origin += sSize;
		}
	}
}

$List* GroupLayout$SequentialGroup::buildResizableList(int32_t axis, bool useMin) {
	int32_t size = $nc(this->springs)->size();
	$var($List, sorted, $new($ArrayList, size));
	for (int32_t counter = 0; counter < size; ++counter) {
		$var($GroupLayout$Spring, spring, getSpring(counter));
		int32_t sDelta = 0;
		if (useMin) {
			int32_t var$0 = $nc(spring)->getPreferredSize(axis);
			sDelta = var$0 - spring->getMinimumSize(axis);
		} else {
			int32_t var$1 = $nc(spring)->getMaximumSize(axis);
			sDelta = var$1 - spring->getPreferredSize(axis);
		}
		if (sDelta > 0) {
			sorted->add($$new($GroupLayout$SpringDelta, counter, sDelta));
		}
	}
	$Collections::sort(sorted);
	return sorted;
}

int32_t GroupLayout$SequentialGroup::indexOfNextNonZeroSpring(int32_t index, bool treatAutopaddingAsZeroSized) {
	while (index < $nc(this->springs)->size()) {
		$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, $nc(this->springs)->get(index)));
		if (!$nc(spring)->willHaveZeroSize(treatAutopaddingAsZeroSized)) {
			return index;
		}
		++index;
	}
	return index;
}

void GroupLayout$SequentialGroup::insertAutopadding(int32_t axis, $List* leadingPadding, $List* trailingPadding, $List* leading, $List* trailing, bool insert) {
	$var($List, newLeadingPadding, $new($ArrayList, static_cast<$Collection*>(leadingPadding)));
	$var($List, newTrailingPadding, $new($ArrayList, 1));
	$var($List, newLeading, $new($ArrayList, static_cast<$Collection*>(leading)));
	$var($List, newTrailing, nullptr);
	int32_t counter = 0;
	while (counter < $nc(this->springs)->size()) {
		$var($GroupLayout$Spring, spring, getSpring(counter));
		if ($instanceOf($GroupLayout$AutoPreferredGapSpring, spring)) {
			if (newLeadingPadding->size() == 0) {
				$var($GroupLayout$AutoPreferredGapSpring, padding, $cast($GroupLayout$AutoPreferredGapSpring, spring));
				$nc(padding)->setSources(newLeading);
				newLeading->clear();
				counter = indexOfNextNonZeroSpring(counter + 1, true);
				if (counter == $nc(this->springs)->size()) {
					if (!($instanceOf($GroupLayout$ContainerAutoPreferredGapSpring, padding))) {
						$nc(trailingPadding)->add(padding);
					}
				} else {
					newLeadingPadding->clear();
					newLeadingPadding->add(padding);
				}
			} else {
				counter = indexOfNextNonZeroSpring(counter + 1, true);
			}
		} else {
			bool var$0 = newLeading->size() > 0;
			if (var$0 && newLeadingPadding->isEmpty() && insert) {
				$var($GroupLayout$AutoPreferredGapSpring, padding, $new($GroupLayout$AutoPreferredGapSpring, this->this$0));
				$nc(this->springs)->add(counter, padding);
				continue;
			}
			if ($instanceOf($GroupLayout$ComponentSpring, spring)) {
				$var($GroupLayout$ComponentSpring, cSpring, $cast($GroupLayout$ComponentSpring, spring));
				if (!$nc(cSpring)->isVisible()) {
					++counter;
					continue;
				}
				{
					$var($Iterator, i$, newLeadingPadding->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($GroupLayout$AutoPreferredGapSpring, gapSpring, $cast($GroupLayout$AutoPreferredGapSpring, i$->next()));
						{
							$nc(gapSpring)->addTarget(cSpring, axis);
						}
					}
				}
				newLeading->clear();
				newLeadingPadding->clear();
				counter = indexOfNextNonZeroSpring(counter + 1, false);
				if (counter == $nc(this->springs)->size()) {
					$nc(trailing)->add(cSpring);
				} else {
					newLeading->add(cSpring);
				}
			} else if ($instanceOf($GroupLayout$Group, spring)) {
				if (newTrailing == nullptr) {
					$assign(newTrailing, $new($ArrayList, 1));
				} else {
					$nc(newTrailing)->clear();
				}
				newTrailingPadding->clear();
				$nc(($cast($GroupLayout$Group, spring)))->insertAutopadding(axis, newLeadingPadding, newTrailingPadding, newLeading, newTrailing, insert);
				newLeading->clear();
				newLeadingPadding->clear();
				counter = indexOfNextNonZeroSpring(counter + 1, ($nc(newTrailing)->size() == 0));
				if (counter == $nc(this->springs)->size()) {
					$nc(trailing)->addAll(newTrailing);
					$nc(trailingPadding)->addAll(newTrailingPadding);
				} else {
					newLeading->addAll(newTrailing);
					newLeadingPadding->addAll(newTrailingPadding);
				}
			} else {
				newLeadingPadding->clear();
				newLeading->clear();
				++counter;
			}
		}
	}
}

int32_t GroupLayout$SequentialGroup::getBaseline() {
	if (this->baselineSpring != nullptr) {
		int32_t baseline = $nc(this->baselineSpring)->getBaseline();
		if (baseline >= 0) {
			int32_t size = 0;
			{
				$var($Iterator, i$, $nc(this->springs)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, i$->next()));
					{
						if (spring == this->baselineSpring) {
							return size + baseline;
						} else {
							size += $nc(spring)->getPreferredSize(1);
						}
					}
				}
			}
		}
	}
	return -1;
}

$Component$BaselineResizeBehavior* GroupLayout$SequentialGroup::getBaselineResizeBehavior() {
	if (isResizable(1)) {
		if (!$nc(this->baselineSpring)->isResizable(1)) {
			bool leadingResizable = false;
			{
				$var($Iterator, i$, $nc(this->springs)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, i$->next()));
					{
						if (spring == this->baselineSpring) {
							break;
						} else if ($nc(spring)->isResizable(1)) {
							leadingResizable = true;
							break;
						}
					}
				}
			}
			bool trailingResizable = false;
			for (int32_t i = $nc(this->springs)->size() - 1; i >= 0; --i) {
				$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, $nc(this->springs)->get(i)));
				if (spring == this->baselineSpring) {
					break;
				}
				if ($nc(spring)->isResizable(1)) {
					trailingResizable = true;
					break;
				}
			}
			if (leadingResizable && !trailingResizable) {
				$init($Component$BaselineResizeBehavior);
				return $Component$BaselineResizeBehavior::CONSTANT_DESCENT;
			} else if (!leadingResizable && trailingResizable) {
				$init($Component$BaselineResizeBehavior);
				return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
			}
		} else {
			$Component$BaselineResizeBehavior* brb = $nc(this->baselineSpring)->getBaselineResizeBehavior();
			$init($Component$BaselineResizeBehavior);
			if (brb == $Component$BaselineResizeBehavior::CONSTANT_ASCENT) {
				{
					$var($Iterator, i$, $nc(this->springs)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, i$->next()));
						{
							if (spring == this->baselineSpring) {
								return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
							}
							if ($nc(spring)->isResizable(1)) {
								return $Component$BaselineResizeBehavior::OTHER;
							}
						}
					}
				}
			} else {
				if (brb == $Component$BaselineResizeBehavior::CONSTANT_DESCENT) {
					for (int32_t i = $nc(this->springs)->size() - 1; i >= 0; --i) {
						$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, $nc(this->springs)->get(i)));
						if (spring == this->baselineSpring) {
							return $Component$BaselineResizeBehavior::CONSTANT_DESCENT;
						}
						if ($nc(spring)->isResizable(1)) {
							return $Component$BaselineResizeBehavior::OTHER;
						}
					}
				}
			}
		}
		$init($Component$BaselineResizeBehavior);
		return $Component$BaselineResizeBehavior::OTHER;
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
}

void GroupLayout$SequentialGroup::checkPreferredGapValues(int32_t pref, int32_t max) {
	if ((pref < 0 && pref != -1 && pref != -2) || (max < 0 && max != -1 && max != -2) || (pref >= 0 && max >= 0 && pref > max)) {
		$throwNew($IllegalArgumentException, "Pref and max must be either DEFAULT_SIZE, PREFERRED_SIZE, or >= 0 and pref <= max"_s);
	}
}

void clinit$GroupLayout$SequentialGroup($Class* class$) {
	$load($GroupLayout);
	GroupLayout$SequentialGroup::$assertionsDisabled = !$GroupLayout::class$->desiredAssertionStatus();
}

GroupLayout$SequentialGroup::GroupLayout$SequentialGroup() {
}

$Class* GroupLayout$SequentialGroup::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$SequentialGroup, name, initialize, &_GroupLayout$SequentialGroup_ClassInfo_, clinit$GroupLayout$SequentialGroup, allocate$GroupLayout$SequentialGroup);
	return class$;
}

$Class* GroupLayout$SequentialGroup::class$ = nullptr;

	} // swing
} // javax