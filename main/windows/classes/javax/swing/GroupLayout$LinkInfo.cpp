#include <javax/swing/GroupLayout$LinkInfo.h>

#include <java/lang/AssertionError.h>
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
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/GroupLayout$ComponentInfo.h>
#include <javax/swing/GroupLayout$ComponentSpring.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$ComponentInfo = ::javax::swing::GroupLayout$ComponentInfo;
using $GroupLayout$ComponentSpring = ::javax::swing::GroupLayout$ComponentSpring;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$LinkInfo_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupLayout$LinkInfo, $assertionsDisabled)},
	{"axis", "I", nullptr, $PRIVATE | $FINAL, $field(GroupLayout$LinkInfo, axis)},
	{"linked", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/GroupLayout$ComponentInfo;>;", $PRIVATE | $FINAL, $field(GroupLayout$LinkInfo, linked)},
	{"size", "I", nullptr, $PRIVATE, $field(GroupLayout$LinkInfo, size)},
	{}
};

$MethodInfo _GroupLayout$LinkInfo_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(GroupLayout$LinkInfo::*)(int32_t)>(&GroupLayout$LinkInfo::init$))},
	{"add", "(Ljavax/swing/GroupLayout$ComponentInfo;)V", nullptr, $PUBLIC},
	{"calculateLinkedSize", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GroupLayout$LinkInfo::*)(int32_t)>(&GroupLayout$LinkInfo::calculateLinkedSize))},
	{"clearCachedSize", "()V", nullptr, $PUBLIC},
	{"getSize", "(I)I", nullptr, $PUBLIC},
	{"remove", "(Ljavax/swing/GroupLayout$ComponentInfo;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GroupLayout$LinkInfo_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$LinkInfo", "javax.swing.GroupLayout", "LinkInfo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GroupLayout$LinkInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.GroupLayout$LinkInfo",
	"java.lang.Object",
	nullptr,
	_GroupLayout$LinkInfo_FieldInfo_,
	_GroupLayout$LinkInfo_MethodInfo_,
	nullptr,
	nullptr,
	_GroupLayout$LinkInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$LinkInfo($Class* clazz) {
	return $of($alloc(GroupLayout$LinkInfo));
}

bool GroupLayout$LinkInfo::$assertionsDisabled = false;

void GroupLayout$LinkInfo::init$(int32_t axis) {
	$set(this, linked, $new($ArrayList));
	this->size = (int32_t)0x80000000;
	this->axis = axis;
}

void GroupLayout$LinkInfo::add($GroupLayout$ComponentInfo* child) {
	$var(GroupLayout$LinkInfo, childMaster, $nc(child)->getLinkInfo(this->axis, false));
	if (childMaster == nullptr) {
		$nc(this->linked)->add(child);
		child->setLinkInfo(this->axis, this);
	} else if (childMaster != this) {
		$nc(this->linked)->addAll($nc(childMaster)->linked);
		{
			$var($Iterator, i$, $nc($nc(childMaster)->linked)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($GroupLayout$ComponentInfo, childInfo, $cast($GroupLayout$ComponentInfo, i$->next()));
				{
					$nc(childInfo)->setLinkInfo(this->axis, this);
				}
			}
		}
	}
	clearCachedSize();
}

void GroupLayout$LinkInfo::remove($GroupLayout$ComponentInfo* info) {
	$nc(this->linked)->remove($of(info));
	$nc(info)->setLinkInfo(this->axis, nullptr);
	if ($nc(this->linked)->size() == 1) {
		$nc(($cast($GroupLayout$ComponentInfo, $($nc(this->linked)->get(0)))))->setLinkInfo(this->axis, nullptr);
	}
	clearCachedSize();
}

void GroupLayout$LinkInfo::clearCachedSize() {
	this->size = (int32_t)0x80000000;
}

int32_t GroupLayout$LinkInfo::getSize(int32_t axis) {
	if (this->size == (int32_t)0x80000000) {
		this->size = calculateLinkedSize(axis);
	}
	return this->size;
}

int32_t GroupLayout$LinkInfo::calculateLinkedSize(int32_t axis) {
	int32_t size = 0;
	{
		$var($Iterator, i$, $nc(this->linked)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GroupLayout$ComponentInfo, info, $cast($GroupLayout$ComponentInfo, i$->next()));
			{
				$var($GroupLayout$ComponentSpring, spring, nullptr);
				if (axis == 0) {
					$assign(spring, $nc(info)->horizontalSpring);
				} else {
					if (!GroupLayout$LinkInfo::$assertionsDisabled && !(axis == 1)) {
						$throwNew($AssertionError);
					}
					$assign(spring, $nc(info)->verticalSpring);
				}
				size = $Math::max(size, $nc(spring)->calculateNonlinkedPreferredSize(axis));
			}
		}
	}
	return size;
}

void clinit$GroupLayout$LinkInfo($Class* class$) {
	$load($GroupLayout);
	GroupLayout$LinkInfo::$assertionsDisabled = !$GroupLayout::class$->desiredAssertionStatus();
}

GroupLayout$LinkInfo::GroupLayout$LinkInfo() {
}

$Class* GroupLayout$LinkInfo::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$LinkInfo, name, initialize, &_GroupLayout$LinkInfo_ClassInfo_, clinit$GroupLayout$LinkInfo, allocate$GroupLayout$LinkInfo);
	return class$;
}

$Class* GroupLayout$LinkInfo::class$ = nullptr;

	} // swing
} // javax