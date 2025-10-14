#include <javax/swing/GroupLayout$AutoPreferredGapSpring.h>

#include <java/awt/Component.h>
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
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <javax/swing/GroupLayout$AutoPreferredGapMatch.h>
#include <javax/swing/GroupLayout$ComponentSpring.h>
#include <javax/swing/GroupLayout$Spring.h>
#include <javax/swing/GroupLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/SwingConstants.h>
#include <jcpp.h>

#undef EAST
#undef RELATED
#undef SOUTH
#undef WEST

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$AutoPreferredGapMatch = ::javax::swing::GroupLayout$AutoPreferredGapMatch;
using $GroupLayout$ComponentSpring = ::javax::swing::GroupLayout$ComponentSpring;
using $GroupLayout$Spring = ::javax::swing::GroupLayout$Spring;
using $JComponent = ::javax::swing::JComponent;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;
using $SwingConstants = ::javax::swing::SwingConstants;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$AutoPreferredGapSpring_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/GroupLayout;", nullptr, $FINAL | $SYNTHETIC, $field(GroupLayout$AutoPreferredGapSpring, this$0)},
	{"sources", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/GroupLayout$ComponentSpring;>;", 0, $field(GroupLayout$AutoPreferredGapSpring, sources)},
	{"source", "Ljavax/swing/GroupLayout$ComponentSpring;", nullptr, 0, $field(GroupLayout$AutoPreferredGapSpring, source)},
	{"matches", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/GroupLayout$AutoPreferredGapMatch;>;", $PRIVATE, $field(GroupLayout$AutoPreferredGapSpring, matches)},
	{"size", "I", nullptr, 0, $field(GroupLayout$AutoPreferredGapSpring, size)},
	{"lastSize", "I", nullptr, 0, $field(GroupLayout$AutoPreferredGapSpring, lastSize)},
	{"pref", "I", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$AutoPreferredGapSpring, pref)},
	{"max", "I", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$AutoPreferredGapSpring, max)},
	{"type", "Ljavax/swing/LayoutStyle$ComponentPlacement;", nullptr, $PRIVATE, $field(GroupLayout$AutoPreferredGapSpring, type)},
	{"userCreated", "Z", nullptr, $PRIVATE, $field(GroupLayout$AutoPreferredGapSpring, userCreated)},
	{}
};

$MethodInfo _GroupLayout$AutoPreferredGapSpring_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/GroupLayout;)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout$AutoPreferredGapSpring::*)($GroupLayout*)>(&GroupLayout$AutoPreferredGapSpring::init$))},
	{"<init>", "(Ljavax/swing/GroupLayout;II)V", nullptr, 0, $method(static_cast<void(GroupLayout$AutoPreferredGapSpring::*)($GroupLayout*,int32_t,int32_t)>(&GroupLayout$AutoPreferredGapSpring::init$))},
	{"<init>", "(Ljavax/swing/GroupLayout;Ljavax/swing/LayoutStyle$ComponentPlacement;II)V", nullptr, 0, $method(static_cast<void(GroupLayout$AutoPreferredGapSpring::*)($GroupLayout*,$LayoutStyle$ComponentPlacement*,int32_t,int32_t)>(&GroupLayout$AutoPreferredGapSpring::init$))},
	{"addTarget", "(Ljavax/swing/GroupLayout$ComponentSpring;I)V", nullptr, $PUBLIC},
	{"addValidTarget", "(Ljavax/swing/GroupLayout$ComponentSpring;Ljavax/swing/GroupLayout$ComponentSpring;)V", nullptr, $PRIVATE, $method(static_cast<void(GroupLayout$AutoPreferredGapSpring::*)($GroupLayout$ComponentSpring*,$GroupLayout$ComponentSpring*)>(&GroupLayout$AutoPreferredGapSpring::addValidTarget))},
	{"calculateMaximumSize", "(I)I", nullptr, 0},
	{"calculateMinimumSize", "(I)I", nullptr, 0},
	{"calculatePadding", "(I)V", nullptr, $PUBLIC},
	{"calculatePadding", "(Ljavax/swing/LayoutStyle;ILjavax/swing/GroupLayout$ComponentSpring;Ljavax/swing/GroupLayout$ComponentSpring;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GroupLayout$AutoPreferredGapSpring::*)($LayoutStyle*,int32_t,$GroupLayout$ComponentSpring*,$GroupLayout$ComponentSpring*)>(&GroupLayout$AutoPreferredGapSpring::calculatePadding))},
	{"calculatePreferredSize", "(I)I", nullptr, 0},
	{"getMatchDescription", "()Ljava/lang/String;", nullptr, 0},
	{"getUserCreated", "()Z", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setSource", "(Ljavax/swing/GroupLayout$ComponentSpring;)V", nullptr, $PUBLIC},
	{"setSources", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/swing/GroupLayout$ComponentSpring;>;)V", $PUBLIC},
	{"setUserCreated", "(Z)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unset", "()V", nullptr, 0},
	{"willHaveZeroSize", "(Z)Z", nullptr, 0},
	{}
};

$InnerClassInfo _GroupLayout$AutoPreferredGapSpring_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$AutoPreferredGapSpring", "javax.swing.GroupLayout", "AutoPreferredGapSpring", $PRIVATE},
	{"javax.swing.GroupLayout$Spring", "javax.swing.GroupLayout", "Spring", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _GroupLayout$AutoPreferredGapSpring_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.GroupLayout$AutoPreferredGapSpring",
	"javax.swing.GroupLayout$Spring",
	nullptr,
	_GroupLayout$AutoPreferredGapSpring_FieldInfo_,
	_GroupLayout$AutoPreferredGapSpring_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$AutoPreferredGapSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$AutoPreferredGapSpring($Class* clazz) {
	return $of($alloc(GroupLayout$AutoPreferredGapSpring));
}

void GroupLayout$AutoPreferredGapSpring::init$($GroupLayout* this$0) {
	$set(this, this$0, this$0);
	$GroupLayout$Spring::init$(this$0);
	this->pref = -2;
	this->max = -2;
	$init($LayoutStyle$ComponentPlacement);
	$set(this, type, $LayoutStyle$ComponentPlacement::RELATED);
}

void GroupLayout$AutoPreferredGapSpring::init$($GroupLayout* this$0, int32_t pref, int32_t max) {
	$set(this, this$0, this$0);
	$GroupLayout$Spring::init$(this$0);
	this->pref = pref;
	this->max = max;
}

void GroupLayout$AutoPreferredGapSpring::init$($GroupLayout* this$0, $LayoutStyle$ComponentPlacement* type, int32_t pref, int32_t max) {
	$set(this, this$0, this$0);
	$GroupLayout$Spring::init$(this$0);
	$set(this, type, type);
	this->pref = pref;
	this->max = max;
	this->userCreated = true;
}

void GroupLayout$AutoPreferredGapSpring::setSource($GroupLayout$ComponentSpring* source) {
	$set(this, source, source);
}

void GroupLayout$AutoPreferredGapSpring::setSources($List* sources) {
	$set(this, sources, $new($ArrayList, static_cast<$Collection*>(sources)));
}

void GroupLayout$AutoPreferredGapSpring::setUserCreated(bool userCreated) {
	this->userCreated = userCreated;
}

bool GroupLayout$AutoPreferredGapSpring::getUserCreated() {
	return this->userCreated;
}

void GroupLayout$AutoPreferredGapSpring::unset() {
	this->lastSize = getSize();
	$GroupLayout$Spring::unset();
	this->size = 0;
}

void GroupLayout$AutoPreferredGapSpring::reset() {
	this->size = 0;
	$set(this, sources, nullptr);
	$set(this, source, nullptr);
	$set(this, matches, nullptr);
}

void GroupLayout$AutoPreferredGapSpring::calculatePadding(int32_t axis) {
	this->size = (int32_t)0x80000000;
	int32_t maxPadding = (int32_t)0x80000000;
	if (this->matches != nullptr) {
		$var($LayoutStyle, p, this->this$0->getLayoutStyle0());
		int32_t position = 0;
		if (axis == 0) {
			if (this->this$0->isLeftToRight()) {
				position = $SwingConstants::EAST;
			} else {
				position = $SwingConstants::WEST;
			}
		} else {
			position = $SwingConstants::SOUTH;
		}
		for (int32_t i = $nc(this->matches)->size() - 1; i >= 0; --i) {
			$var($GroupLayout$AutoPreferredGapMatch, match, $cast($GroupLayout$AutoPreferredGapMatch, $nc(this->matches)->get(i)));
			maxPadding = $Math::max(maxPadding, calculatePadding(p, position, $nc(match)->source, match->target));
		}
	}
	if (this->size == (int32_t)0x80000000) {
		this->size = 0;
	}
	if (maxPadding == (int32_t)0x80000000) {
		maxPadding = 0;
	}
	if (this->lastSize != (int32_t)0x80000000) {
		this->size += $Math::min(maxPadding, this->lastSize);
	}
}

int32_t GroupLayout$AutoPreferredGapSpring::calculatePadding($LayoutStyle* p, int32_t position, $GroupLayout$ComponentSpring* source, $GroupLayout$ComponentSpring* target) {
	int32_t var$0 = $nc(target)->getOrigin();
	int32_t var$2 = $nc(source)->getOrigin();
	int32_t var$1 = (var$2 + source->getSize());
	int32_t delta = var$0 - var$1;
	if (delta >= 0) {
		int32_t padding = 0;
		bool var$3 = ($instanceOf($JComponent, $(source->getComponent())));
		if (var$3 && ($instanceOf($JComponent, $(target->getComponent())))) {
			$var($JComponent, var$4, $cast($JComponent, source->getComponent()));
			padding = $nc(p)->getPreferredGap(var$4, $cast($JComponent, $(target->getComponent())), this->type, position, this->this$0->host);
		} else {
			padding = 10;
		}
		if (padding > delta) {
			this->size = $Math::max(this->size, padding - delta);
		}
		return padding;
	}
	return 0;
}

void GroupLayout$AutoPreferredGapSpring::addTarget($GroupLayout$ComponentSpring* spring, int32_t axis) {
	int32_t oAxis = (axis == 0) ? 1 : 0;
	if (this->source != nullptr) {
		$var($Component, var$0, $nc(this->source)->getComponent());
		if (this->this$0->areParallelSiblings(var$0, $($nc(spring)->getComponent()), oAxis)) {
			addValidTarget(this->source, spring);
		}
	} else {
		$var($Component, component, $nc(spring)->getComponent());
		for (int32_t counter = $nc(this->sources)->size() - 1; counter >= 0; --counter) {
			$var($GroupLayout$ComponentSpring, source, $cast($GroupLayout$ComponentSpring, $nc(this->sources)->get(counter)));
			if (this->this$0->areParallelSiblings($($nc(source)->getComponent()), component, oAxis)) {
				addValidTarget(source, spring);
			}
		}
	}
}

void GroupLayout$AutoPreferredGapSpring::addValidTarget($GroupLayout$ComponentSpring* source, $GroupLayout$ComponentSpring* target) {
	if (this->matches == nullptr) {
		$set(this, matches, $new($ArrayList, 1));
	}
	$nc(this->matches)->add($$new($GroupLayout$AutoPreferredGapMatch, source, target));
}

int32_t GroupLayout$AutoPreferredGapSpring::calculateMinimumSize(int32_t axis) {
	return this->size;
}

int32_t GroupLayout$AutoPreferredGapSpring::calculatePreferredSize(int32_t axis) {
	if (this->pref == -2 || this->pref == -1) {
		return this->size;
	}
	return $Math::max(this->size, this->pref);
}

int32_t GroupLayout$AutoPreferredGapSpring::calculateMaximumSize(int32_t axis) {
	if (this->max >= 0) {
		return $Math::max(getPreferredSize(axis), this->max);
	}
	return this->size;
}

$String* GroupLayout$AutoPreferredGapSpring::getMatchDescription() {
	return (this->matches == nullptr) ? ""_s : $nc($of(this->matches))->toString();
}

$String* GroupLayout$AutoPreferredGapSpring::toString() {
	$var($String, var$0, $($GroupLayout$Spring::toString()));
	return $concat(var$0, $(getMatchDescription()));
}

bool GroupLayout$AutoPreferredGapSpring::willHaveZeroSize(bool treatAutopaddingAsZeroSized) {
	return treatAutopaddingAsZeroSized;
}

GroupLayout$AutoPreferredGapSpring::GroupLayout$AutoPreferredGapSpring() {
}

$Class* GroupLayout$AutoPreferredGapSpring::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$AutoPreferredGapSpring, name, initialize, &_GroupLayout$AutoPreferredGapSpring_ClassInfo_, allocate$GroupLayout$AutoPreferredGapSpring);
	return class$;
}

$Class* GroupLayout$AutoPreferredGapSpring::class$ = nullptr;

	} // swing
} // javax