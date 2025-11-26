#include <javax/swing/LayoutComparator.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Math.h>
#include <java/util/Comparator.h>
#include <java/util/LinkedList.h>
#include <java/util/ListIterator.h>
#include <jcpp.h>

#undef ROW_TOLERANCE

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $LinkedList = ::java::util::LinkedList;
using $ListIterator = ::java::util::ListIterator;

namespace javax {
	namespace swing {

$FieldInfo _LayoutComparator_FieldInfo_[] = {
	{"ROW_TOLERANCE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LayoutComparator, ROW_TOLERANCE)},
	{"horizontal", "Z", nullptr, $PRIVATE, $field(LayoutComparator, horizontal)},
	{"leftToRight", "Z", nullptr, $PRIVATE, $field(LayoutComparator, leftToRight)},
	{}
};

$MethodInfo _LayoutComparator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LayoutComparator::*)()>(&LayoutComparator::init$))},
	{"compare", "(Ljava/awt/Component;Ljava/awt/Component;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(LayoutComparator::*)($Component*,$Component*)>(&LayoutComparator::compare))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setComponentOrientation", "(Ljava/awt/ComponentOrientation;)V", nullptr, 0, $method(static_cast<void(LayoutComparator::*)($ComponentOrientation*)>(&LayoutComparator::setComponentOrientation))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LayoutComparator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.LayoutComparator",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	_LayoutComparator_FieldInfo_,
	_LayoutComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/awt/Component;>;Ljava/io/Serializable;"
};

$Object* allocate$LayoutComparator($Class* clazz) {
	return $of($alloc(LayoutComparator));
}

bool LayoutComparator::equals(Object$* arg0) {
	 return this->$Comparator::equals(arg0);
}

int32_t LayoutComparator::hashCode() {
	 return this->$Comparator::hashCode();
}

$Object* LayoutComparator::clone() {
	 return this->$Comparator::clone();
}

$String* LayoutComparator::toString() {
	 return this->$Comparator::toString();
}

void LayoutComparator::finalize() {
	this->$Comparator::finalize();
}

void LayoutComparator::init$() {
	this->horizontal = true;
	this->leftToRight = true;
}

void LayoutComparator::setComponentOrientation($ComponentOrientation* orientation) {
	this->horizontal = $nc(orientation)->isHorizontal();
	this->leftToRight = orientation->isLeftToRight();
}

int32_t LayoutComparator::compare($Component* a$renamed, $Component* b$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Component, a, a$renamed);
	$var($Component, b, b$renamed);
	if (a == b) {
		return 0;
	}
	if ($nc(a)->getParent() != $nc(b)->getParent()) {
		$var($LinkedList, aAncestory, $new($LinkedList));
		for (; a != nullptr; $assign(a, $nc(a)->getParent())) {
			aAncestory->add(a);
			if ($instanceOf($Window, a)) {
				break;
			}
		}
		if (a == nullptr) {
			$throwNew($ClassCastException);
		}
		$var($LinkedList, bAncestory, $new($LinkedList));
		for (; b != nullptr; $assign(b, $nc(b)->getParent())) {
			bAncestory->add(b);
			if ($instanceOf($Window, b)) {
				break;
			}
		}
		if (b == nullptr) {
			$throwNew($ClassCastException);
		}
		{
			$var($ListIterator, aIter, aAncestory->listIterator(aAncestory->size()));
			$var($ListIterator, bIter, bAncestory->listIterator(bAncestory->size()));
			for (;;) {
				if ($nc(aIter)->hasPrevious()) {
					$assign(a, $cast($Component, aIter->previous()));
				} else {
					return -1;
				}
				if ($nc(bIter)->hasPrevious()) {
					$assign(b, $cast($Component, bIter->previous()));
				} else {
					return 1;
				}
				if (a != b) {
					break;
				}
			}
		}
	}
	int32_t ax = $nc(a)->getX();
	int32_t ay = a->getY();
	int32_t bx = $nc(b)->getX();
	int32_t by = b->getY();
	int32_t var$0 = $nc($(a->getParent()))->getComponentZOrder(a);
	int32_t zOrder = var$0 - $nc($(b->getParent()))->getComponentZOrder(b);
	if (this->horizontal) {
		if (this->leftToRight) {
			if ($Math::abs(ay - by) < LayoutComparator::ROW_TOLERANCE) {
				return (ax < bx) ? -1 : ((ax > bx) ? 1 : zOrder);
			} else {
				return (ay < by) ? -1 : 1;
			}
		} else if ($Math::abs(ay - by) < LayoutComparator::ROW_TOLERANCE) {
			return (ax > bx) ? -1 : ((ax < bx) ? 1 : zOrder);
		} else {
			return (ay < by) ? -1 : 1;
		}
	} else if (this->leftToRight) {
		if ($Math::abs(ax - bx) < LayoutComparator::ROW_TOLERANCE) {
			return (ay < by) ? -1 : ((ay > by) ? 1 : zOrder);
		} else {
			return (ax < bx) ? -1 : 1;
		}
	} else if ($Math::abs(ax - bx) < LayoutComparator::ROW_TOLERANCE) {
		return (ay < by) ? -1 : ((ay > by) ? 1 : zOrder);
	} else {
		return (ax > bx) ? -1 : 1;
	}
}

int32_t LayoutComparator::compare(Object$* a, Object$* b) {
	return this->compare($cast($Component, a), $cast($Component, b));
}

LayoutComparator::LayoutComparator() {
}

$Class* LayoutComparator::load$($String* name, bool initialize) {
	$loadClass(LayoutComparator, name, initialize, &_LayoutComparator_ClassInfo_, allocate$LayoutComparator);
	return class$;
}

$Class* LayoutComparator::class$ = nullptr;

	} // swing
} // javax