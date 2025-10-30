#include <javax/swing/GroupLayout$ContainerAutoPreferredGapSpring.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Math.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/GroupLayout$AutoPreferredGapSpring.h>
#include <javax/swing/GroupLayout$ComponentSpring.h>
#include <javax/swing/GroupLayout$Spring.h>
#include <javax/swing/GroupLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/SwingConstants.h>
#include <jcpp.h>

#undef EAST
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
using $List = ::java::util::List;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$AutoPreferredGapSpring = ::javax::swing::GroupLayout$AutoPreferredGapSpring;
using $GroupLayout$ComponentSpring = ::javax::swing::GroupLayout$ComponentSpring;
using $GroupLayout$Spring = ::javax::swing::GroupLayout$Spring;
using $JComponent = ::javax::swing::JComponent;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $SwingConstants = ::javax::swing::SwingConstants;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$ContainerAutoPreferredGapSpring_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/GroupLayout;", nullptr, $FINAL | $SYNTHETIC, $field(GroupLayout$ContainerAutoPreferredGapSpring, this$0)},
	{"targets", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/GroupLayout$ComponentSpring;>;", $PRIVATE, $field(GroupLayout$ContainerAutoPreferredGapSpring, targets)},
	{}
};

$MethodInfo _GroupLayout$ContainerAutoPreferredGapSpring_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/GroupLayout;)V", nullptr, 0, $method(static_cast<void(GroupLayout$ContainerAutoPreferredGapSpring::*)($GroupLayout*)>(&GroupLayout$ContainerAutoPreferredGapSpring::init$))},
	{"<init>", "(Ljavax/swing/GroupLayout;II)V", nullptr, 0, $method(static_cast<void(GroupLayout$ContainerAutoPreferredGapSpring::*)($GroupLayout*,int32_t,int32_t)>(&GroupLayout$ContainerAutoPreferredGapSpring::init$))},
	{"addTarget", "(Ljavax/swing/GroupLayout$ComponentSpring;I)V", nullptr, $PUBLIC},
	{"calculatePadding", "(I)V", nullptr, $PUBLIC},
	{"getMatchDescription", "()Ljava/lang/String;", nullptr, 0},
	{"updateSize", "(Ljavax/swing/LayoutStyle;Ljavax/swing/GroupLayout$ComponentSpring;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GroupLayout$ContainerAutoPreferredGapSpring::*)($LayoutStyle*,$GroupLayout$ComponentSpring*,int32_t)>(&GroupLayout$ContainerAutoPreferredGapSpring::updateSize))},
	{}
};

$InnerClassInfo _GroupLayout$ContainerAutoPreferredGapSpring_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$ContainerAutoPreferredGapSpring", "javax.swing.GroupLayout", "ContainerAutoPreferredGapSpring", $PRIVATE},
	{"javax.swing.GroupLayout$AutoPreferredGapSpring", "javax.swing.GroupLayout", "AutoPreferredGapSpring", $PRIVATE},
	{}
};

$ClassInfo _GroupLayout$ContainerAutoPreferredGapSpring_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.GroupLayout$ContainerAutoPreferredGapSpring",
	"javax.swing.GroupLayout$AutoPreferredGapSpring",
	nullptr,
	_GroupLayout$ContainerAutoPreferredGapSpring_FieldInfo_,
	_GroupLayout$ContainerAutoPreferredGapSpring_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$ContainerAutoPreferredGapSpring_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$ContainerAutoPreferredGapSpring($Class* clazz) {
	return $of($alloc(GroupLayout$ContainerAutoPreferredGapSpring));
}

void GroupLayout$ContainerAutoPreferredGapSpring::init$($GroupLayout* this$0) {
	$set(this, this$0, this$0);
	$GroupLayout$AutoPreferredGapSpring::init$(this$0);
	setUserCreated(true);
}

void GroupLayout$ContainerAutoPreferredGapSpring::init$($GroupLayout* this$0, int32_t pref, int32_t max) {
	$set(this, this$0, this$0);
	$GroupLayout$AutoPreferredGapSpring::init$(this$0, pref, max);
	setUserCreated(true);
}

void GroupLayout$ContainerAutoPreferredGapSpring::addTarget($GroupLayout$ComponentSpring* spring, int32_t axis) {
	if (this->targets == nullptr) {
		$set(this, targets, $new($ArrayList, 1));
	}
	$nc(this->targets)->add(spring);
}

void GroupLayout$ContainerAutoPreferredGapSpring::calculatePadding(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	$var($LayoutStyle, p, this->this$0->getLayoutStyle0());
	int32_t maxPadding = 0;
	int32_t position = 0;
	this->size = 0;
	if (this->targets != nullptr) {
		if (axis == 0) {
			if (this->this$0->isLeftToRight()) {
				position = $SwingConstants::WEST;
			} else {
				position = $SwingConstants::EAST;
			}
		} else {
			position = $SwingConstants::SOUTH;
		}
		for (int32_t i = $nc(this->targets)->size() - 1; i >= 0; --i) {
			$var($GroupLayout$ComponentSpring, targetSpring, $cast($GroupLayout$ComponentSpring, $nc(this->targets)->get(i)));
			int32_t padding = 10;
			if ($instanceOf($JComponent, $($nc(targetSpring)->getComponent()))) {
				padding = $nc(p)->getContainerGap($cast($JComponent, $(targetSpring->getComponent())), position, this->this$0->host);
				maxPadding = $Math::max(padding, maxPadding);
				padding -= targetSpring->getOrigin();
			} else {
				maxPadding = $Math::max(padding, maxPadding);
			}
			this->size = $Math::max(this->size, padding);
		}
	} else {
		if (axis == 0) {
			if (this->this$0->isLeftToRight()) {
				position = $SwingConstants::EAST;
			} else {
				position = $SwingConstants::WEST;
			}
		} else {
			position = $SwingConstants::SOUTH;
		}
		if (this->sources != nullptr) {
			for (int32_t i = $nc(this->sources)->size() - 1; i >= 0; --i) {
				$var($GroupLayout$ComponentSpring, sourceSpring, $cast($GroupLayout$ComponentSpring, $nc(this->sources)->get(i)));
				maxPadding = $Math::max(maxPadding, updateSize(p, sourceSpring, position));
			}
		} else if (this->source != nullptr) {
			maxPadding = updateSize(p, this->source, position);
		}
	}
	if (this->lastSize != (int32_t)0x80000000) {
		this->size += $Math::min(maxPadding, this->lastSize);
	}
}

int32_t GroupLayout$ContainerAutoPreferredGapSpring::updateSize($LayoutStyle* p, $GroupLayout$ComponentSpring* sourceSpring, int32_t position) {
	$useLocalCurrentObjectStackCache();
	int32_t padding = 10;
	if ($instanceOf($JComponent, $($nc(sourceSpring)->getComponent()))) {
		padding = $nc(p)->getContainerGap($cast($JComponent, $(sourceSpring->getComponent())), position, this->this$0->host);
	}
	int32_t var$1 = $nc($(getParent()))->getSize();
	int32_t var$0 = var$1 - $nc(sourceSpring)->getSize();
	int32_t delta = $Math::max(0, var$0 - sourceSpring->getOrigin());
	this->size = $Math::max(this->size, padding - delta);
	return padding;
}

$String* GroupLayout$ContainerAutoPreferredGapSpring::getMatchDescription() {
	$useLocalCurrentObjectStackCache();
	if (this->targets != nullptr) {
		return $str({"leading: "_s, $($nc($of(this->targets))->toString())});
	}
	if (this->sources != nullptr) {
		return $str({"trailing: "_s, $($nc($of(this->sources))->toString())});
	}
	return "--"_s;
}

GroupLayout$ContainerAutoPreferredGapSpring::GroupLayout$ContainerAutoPreferredGapSpring() {
}

$Class* GroupLayout$ContainerAutoPreferredGapSpring::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$ContainerAutoPreferredGapSpring, name, initialize, &_GroupLayout$ContainerAutoPreferredGapSpring_ClassInfo_, allocate$GroupLayout$ContainerAutoPreferredGapSpring);
	return class$;
}

$Class* GroupLayout$ContainerAutoPreferredGapSpring::class$ = nullptr;

	} // swing
} // javax