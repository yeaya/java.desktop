#include <javax/swing/GroupLayout$BaselineGroup.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/GroupLayout$1.h>
#include <javax/swing/GroupLayout$Alignment.h>
#include <javax/swing/GroupLayout$Group.h>
#include <javax/swing/GroupLayout$ParallelGroup.h>
#include <javax/swing/GroupLayout$Spring.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

#undef BASELINE
#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT
#undef LEADING

using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$1 = ::javax::swing::GroupLayout$1;
using $GroupLayout$Alignment = ::javax::swing::GroupLayout$Alignment;
using $GroupLayout$ParallelGroup = ::javax::swing::GroupLayout$ParallelGroup;
using $GroupLayout$Spring = ::javax::swing::GroupLayout$Spring;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$BaselineGroup_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/GroupLayout;", nullptr, $FINAL | $SYNTHETIC, $field(GroupLayout$BaselineGroup, this$0)},
	{"allSpringsHaveBaseline", "Z", nullptr, $PRIVATE, $field(GroupLayout$BaselineGroup, allSpringsHaveBaseline)},
	{"prefAscent", "I", nullptr, $PRIVATE, $field(GroupLayout$BaselineGroup, prefAscent)},
	{"prefDescent", "I", nullptr, $PRIVATE, $field(GroupLayout$BaselineGroup, prefDescent)},
	{"baselineAnchorSet", "Z", nullptr, $PRIVATE, $field(GroupLayout$BaselineGroup, baselineAnchorSet)},
	{"baselineAnchoredToTop", "Z", nullptr, $PRIVATE, $field(GroupLayout$BaselineGroup, baselineAnchoredToTop)},
	{"calcedBaseline", "Z", nullptr, $PRIVATE, $field(GroupLayout$BaselineGroup, calcedBaseline)},
	{}
};

$MethodInfo _GroupLayout$BaselineGroup_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/GroupLayout;Z)V", nullptr, 0, $method(static_cast<void(GroupLayout$BaselineGroup::*)($GroupLayout*,bool)>(&GroupLayout$BaselineGroup::init$))},
	{"<init>", "(Ljavax/swing/GroupLayout;ZZ)V", nullptr, 0, $method(static_cast<void(GroupLayout$BaselineGroup::*)($GroupLayout*,bool,bool)>(&GroupLayout$BaselineGroup::init$))},
	{"baselineLayout", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout$BaselineGroup::*)(int32_t,int32_t)>(&GroupLayout$BaselineGroup::baselineLayout))},
	{"calculateBaselineAndResizeBehavior", "()V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout$BaselineGroup::*)()>(&GroupLayout$BaselineGroup::calculateBaselineAndResizeBehavior))},
	{"calculateMaxSize", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(GroupLayout$BaselineGroup::*)()>(&GroupLayout$BaselineGroup::calculateMaxSize))},
	{"calculateMinSize", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(GroupLayout$BaselineGroup::*)()>(&GroupLayout$BaselineGroup::calculateMinSize))},
	{"calculateSize", "(II)I", nullptr, 0},
	{"checkAxis", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout$BaselineGroup::*)(int32_t)>(&GroupLayout$BaselineGroup::checkAxis))},
	{"getBaseline", "()I", nullptr, 0},
	{"getBaselineResizeBehavior", "()Ljava/awt/Component$BaselineResizeBehavior;", nullptr, 0},
	{"setValidSize", "(III)V", nullptr, 0},
	{"unset", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _GroupLayout$BaselineGroup_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$BaselineGroup", "javax.swing.GroupLayout", "BaselineGroup", $PRIVATE},
	{"javax.swing.GroupLayout$ParallelGroup", "javax.swing.GroupLayout", "ParallelGroup", $PUBLIC},
	{}
};

$ClassInfo _GroupLayout$BaselineGroup_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.GroupLayout$BaselineGroup",
	"javax.swing.GroupLayout$ParallelGroup",
	nullptr,
	_GroupLayout$BaselineGroup_FieldInfo_,
	_GroupLayout$BaselineGroup_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$BaselineGroup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$BaselineGroup($Class* clazz) {
	return $of($alloc(GroupLayout$BaselineGroup));
}

void GroupLayout$BaselineGroup::init$($GroupLayout* this$0, bool resizable) {
	$set(this, this$0, this$0);
	$init($GroupLayout$Alignment);
	$GroupLayout$ParallelGroup::init$(this$0, $GroupLayout$Alignment::LEADING, resizable);
	this->prefAscent = (this->prefDescent = -1);
	this->calcedBaseline = false;
}

void GroupLayout$BaselineGroup::init$($GroupLayout* this$0, bool resizable, bool baselineAnchoredToTop) {
	GroupLayout$BaselineGroup::init$(this$0, resizable);
	this->baselineAnchoredToTop = baselineAnchoredToTop;
	this->baselineAnchorSet = true;
}

void GroupLayout$BaselineGroup::unset() {
	$GroupLayout$ParallelGroup::unset();
	this->prefAscent = (this->prefDescent = -1);
	this->calcedBaseline = false;
}

void GroupLayout$BaselineGroup::setValidSize(int32_t axis, int32_t origin, int32_t size) {
	checkAxis(axis);
	if (this->prefAscent == -1) {
		$GroupLayout$ParallelGroup::setValidSize(axis, origin, size);
	} else {
		baselineLayout(origin, size);
	}
}

int32_t GroupLayout$BaselineGroup::calculateSize(int32_t axis, int32_t type) {
	checkAxis(axis);
	if (!this->calcedBaseline) {
		calculateBaselineAndResizeBehavior();
	}
	if (type == 0) {
		return calculateMinSize();
	}
	if (type == 2) {
		return calculateMaxSize();
	}
	if (this->allSpringsHaveBaseline) {
		return this->prefAscent + this->prefDescent;
	}
	return $Math::max(this->prefAscent + this->prefDescent, $GroupLayout$ParallelGroup::calculateSize(axis, type));
}

void GroupLayout$BaselineGroup::calculateBaselineAndResizeBehavior() {
	$useLocalCurrentObjectStackCache();
	this->prefAscent = 0;
	this->prefDescent = 0;
	int32_t baselineSpringCount = 0;
	$Component$BaselineResizeBehavior* resizeBehavior = nullptr;
	{
		$var($Iterator, i$, $nc(this->springs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, i$->next()));
			{
				bool var$0 = $nc(spring)->getAlignment() == nullptr;
				$init($GroupLayout$Alignment);
				if (var$0 || $nc(spring)->getAlignment() == $GroupLayout$Alignment::BASELINE) {
					int32_t baseline = spring->getBaseline();
					if (baseline >= 0) {
						if (spring->isResizable(1)) {
							$Component$BaselineResizeBehavior* brb = spring->getBaselineResizeBehavior();
							if (resizeBehavior == nullptr) {
								resizeBehavior = brb;
							} else if (brb != resizeBehavior) {
								$init($Component$BaselineResizeBehavior);
								resizeBehavior = $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
							}
						}
						this->prefAscent = $Math::max(this->prefAscent, baseline);
						this->prefDescent = $Math::max(this->prefDescent, spring->getPreferredSize(1) - baseline);
						++baselineSpringCount;
					}
				}
			}
		}
	}
	if (!this->baselineAnchorSet) {
		$init($Component$BaselineResizeBehavior);
		if (resizeBehavior == $Component$BaselineResizeBehavior::CONSTANT_DESCENT) {
			this->baselineAnchoredToTop = false;
		} else {
			this->baselineAnchoredToTop = true;
		}
	}
	this->allSpringsHaveBaseline = (baselineSpringCount == $nc(this->springs)->size());
	this->calcedBaseline = true;
}

int32_t GroupLayout$BaselineGroup::calculateMaxSize() {
	$useLocalCurrentObjectStackCache();
	int32_t maxAscent = this->prefAscent;
	int32_t maxDescent = this->prefDescent;
	int32_t nonBaselineMax = 0;
	{
		$var($Iterator, i$, $nc(this->springs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, i$->next()));
			{
				int32_t baseline = 0;
				int32_t springMax = $nc(spring)->getMaximumSize(1);
				bool var$1 = spring->getAlignment() == nullptr;
				$init($GroupLayout$Alignment);
				bool var$0 = (var$1 || spring->getAlignment() == $GroupLayout$Alignment::BASELINE);
				if (var$0 && (baseline = spring->getBaseline()) >= 0) {
					int32_t springPref = spring->getPreferredSize(1);
					if (springPref != springMax) {
						$init($GroupLayout$1);
						switch ($nc($GroupLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->get($nc(($(spring->getBaselineResizeBehavior())))->ordinal())) {
						case 1:
							{
								if (this->baselineAnchoredToTop) {
									maxDescent = $Math::max(maxDescent, springMax - baseline);
								}
								break;
							}
						case 2:
							{
								if (!this->baselineAnchoredToTop) {
									maxAscent = $Math::max(maxAscent, springMax - springPref + baseline);
								}
								break;
							}
						default:
							{
								break;
							}
						}
					}
				} else {
					nonBaselineMax = $Math::max(nonBaselineMax, springMax);
				}
			}
		}
	}
	return $Math::max(nonBaselineMax, maxAscent + maxDescent);
}

int32_t GroupLayout$BaselineGroup::calculateMinSize() {
	$useLocalCurrentObjectStackCache();
	int32_t minAscent = 0;
	int32_t minDescent = 0;
	int32_t nonBaselineMin = 0;
	if (this->baselineAnchoredToTop) {
		minAscent = this->prefAscent;
	} else {
		minDescent = this->prefDescent;
	}
	{
		$var($Iterator, i$, $nc(this->springs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, i$->next()));
			{
				int32_t springMin = $nc(spring)->getMinimumSize(1);
				int32_t baseline = 0;
				bool var$1 = spring->getAlignment() == nullptr;
				$init($GroupLayout$Alignment);
				bool var$0 = (var$1 || spring->getAlignment() == $GroupLayout$Alignment::BASELINE);
				if (var$0 && (baseline = spring->getBaseline()) >= 0) {
					int32_t springPref = spring->getPreferredSize(1);
					$Component$BaselineResizeBehavior* brb = spring->getBaselineResizeBehavior();
					$init($GroupLayout$1);
					switch ($nc($GroupLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->get($nc((brb))->ordinal())) {
					case 1:
						{
							if (this->baselineAnchoredToTop) {
								minDescent = $Math::max(springMin - baseline, minDescent);
							} else {
								minAscent = $Math::max(baseline, minAscent);
							}
							break;
						}
					case 2:
						{
							if (!this->baselineAnchoredToTop) {
								minAscent = $Math::max(baseline - (springPref - springMin), minAscent);
							} else {
								minDescent = $Math::max(springPref - baseline, minDescent);
							}
							break;
						}
					default:
						{
							minAscent = $Math::max(baseline, minAscent);
							minDescent = $Math::max(springPref - baseline, minDescent);
							break;
						}
					}
				} else {
					nonBaselineMin = $Math::max(nonBaselineMin, springMin);
				}
			}
		}
	}
	return $Math::max(nonBaselineMin, minAscent + minDescent);
}

void GroupLayout$BaselineGroup::baselineLayout(int32_t origin, int32_t size) {
	$useLocalCurrentObjectStackCache();
	int32_t ascent = 0;
	int32_t descent = 0;
	if (this->baselineAnchoredToTop) {
		ascent = this->prefAscent;
		descent = size - ascent;
	} else {
		ascent = size - this->prefDescent;
		descent = this->prefDescent;
	}
	{
		$var($Iterator, i$, $nc(this->springs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GroupLayout$Spring, spring, $cast($GroupLayout$Spring, i$->next()));
			{
				$GroupLayout$Alignment* alignment = $nc(spring)->getAlignment();
				$init($GroupLayout$Alignment);
				if (alignment == nullptr || alignment == $GroupLayout$Alignment::BASELINE) {
					int32_t baseline = spring->getBaseline();
					if (baseline >= 0) {
						int32_t springMax = spring->getMaximumSize(1);
						int32_t springPref = spring->getPreferredSize(1);
						int32_t height = springPref;
						int32_t y = 0;
						$init($GroupLayout$1);
						switch ($nc($GroupLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->get($nc(($(spring->getBaselineResizeBehavior())))->ordinal())) {
						case 1:
							{
								y = origin + ascent - baseline;
								height = $Math::min(descent, springMax - baseline) + baseline;
								break;
							}
						case 2:
							{
								height = $Math::min(ascent, springMax - springPref + baseline) + (springPref - baseline);
								y = origin + ascent + (springPref - baseline) - height;
								break;
							}
						default:
							{
								y = origin + ascent - baseline;
								break;
							}
						}
						spring->setSize(1, y, height);
					} else {
						setChildSize(spring, 1, origin, size);
					}
				} else {
					setChildSize(spring, 1, origin, size);
				}
			}
		}
	}
}

int32_t GroupLayout$BaselineGroup::getBaseline() {
	if ($nc(this->springs)->size() > 1) {
		getPreferredSize(1);
		return this->prefAscent;
	} else if ($nc(this->springs)->size() == 1) {
		return $nc(($cast($GroupLayout$Spring, $($nc(this->springs)->get(0)))))->getBaseline();
	}
	return -1;
}

$Component$BaselineResizeBehavior* GroupLayout$BaselineGroup::getBaselineResizeBehavior() {
	if ($nc(this->springs)->size() == 1) {
		return $nc(($cast($GroupLayout$Spring, $($nc(this->springs)->get(0)))))->getBaselineResizeBehavior();
	}
	if (this->baselineAnchoredToTop) {
		$init($Component$BaselineResizeBehavior);
		return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::CONSTANT_DESCENT;
}

void GroupLayout$BaselineGroup::checkAxis(int32_t axis) {
	if (axis == 0) {
		$throwNew($IllegalStateException, "Baseline must be used along vertical axis"_s);
	}
}

GroupLayout$BaselineGroup::GroupLayout$BaselineGroup() {
}

$Class* GroupLayout$BaselineGroup::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$BaselineGroup, name, initialize, &_GroupLayout$BaselineGroup_ClassInfo_, allocate$GroupLayout$BaselineGroup);
	return class$;
}

$Class* GroupLayout$BaselineGroup::class$ = nullptr;

	} // swing
} // javax