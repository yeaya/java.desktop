#include <javax/swing/text/ElementIterator.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Stack.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ElementIterator$StackItem.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $ElementIterator$StackItem = ::javax::swing::text::ElementIterator$StackItem;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _ElementIterator_FieldInfo_[] = {
	{"root", "Ljavax/swing/text/Element;", nullptr, $PRIVATE, $field(ElementIterator, root)},
	{"elementStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljavax/swing/text/ElementIterator$StackItem;>;", $PRIVATE, $field(ElementIterator, elementStack)},
	{}
};

$MethodInfo _ElementIterator_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(ElementIterator::*)($Document*)>(&ElementIterator::init$))},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(ElementIterator::*)($Element*)>(&ElementIterator::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"current", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"depth", "()I", nullptr, $PUBLIC},
	{"dumpTree", "()V", nullptr, $PRIVATE, $method(static_cast<void(ElementIterator::*)()>(&ElementIterator::dumpTree))},
	{"first", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getDeepestLeaf", "(Ljavax/swing/text/Element;)Ljavax/swing/text/Element;", nullptr, $PRIVATE, $method(static_cast<$Element*(ElementIterator::*)($Element*)>(&ElementIterator::getDeepestLeaf))},
	{"next", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"previous", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ElementIterator_InnerClassesInfo_[] = {
	{"javax.swing.text.ElementIterator$StackItem", "javax.swing.text.ElementIterator", "StackItem", $PRIVATE},
	{}
};

$ClassInfo _ElementIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.ElementIterator",
	"java.lang.Object",
	"java.lang.Cloneable",
	_ElementIterator_FieldInfo_,
	_ElementIterator_MethodInfo_,
	nullptr,
	nullptr,
	_ElementIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.ElementIterator$StackItem"
};

$Object* allocate$ElementIterator($Class* clazz) {
	return $of($alloc(ElementIterator));
}

void ElementIterator::init$($Document* document) {
	$set(this, elementStack, nullptr);
	$set(this, root, $nc(document)->getDefaultRootElement());
}

void ElementIterator::init$($Element* root) {
	$set(this, elementStack, nullptr);
	$set(this, root, root);
}

$Object* ElementIterator::clone() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		try {
			$var(ElementIterator, it, $new(ElementIterator, this->root));
			if (this->elementStack != nullptr) {
				$set(it, elementStack, $new($Stack));
				for (int32_t i = 0; i < $nc(this->elementStack)->size(); ++i) {
					$var($ElementIterator$StackItem, item, $cast($ElementIterator$StackItem, $nc(this->elementStack)->elementAt(i)));
					$var($ElementIterator$StackItem, clonee, $cast($ElementIterator$StackItem, $nc(item)->clone()));
					$nc(it->elementStack)->push(clonee);
				}
			}
			return $of(it);
		} catch ($CloneNotSupportedException&) {
			$var($CloneNotSupportedException, e, $catch());
			$throwNew($InternalError, static_cast<$Throwable*>(e));
		}
	}
	$shouldNotReachHere();
}

$Element* ElementIterator::first() {
	if (this->root == nullptr) {
		return nullptr;
	}
	$set(this, elementStack, $new($Stack));
	if ($nc(this->root)->getElementCount() != 0) {
		$nc(this->elementStack)->push($$new($ElementIterator$StackItem, this, this->root));
	}
	return this->root;
}

int32_t ElementIterator::depth() {
	if (this->elementStack == nullptr) {
		return 0;
	}
	return $nc(this->elementStack)->size();
}

$Element* ElementIterator::current() {
	$useLocalCurrentObjectStackCache();
	if (this->elementStack == nullptr) {
		return first();
	}
	if (!$nc(this->elementStack)->empty()) {
		$var($ElementIterator$StackItem, item, $cast($ElementIterator$StackItem, $nc(this->elementStack)->peek()));
		$var($Element, elem, $nc(item)->getElement());
		int32_t index = item->getIndex();
		if (index == -1) {
			return elem;
		}
		return $nc(elem)->getElement(index);
	}
	return nullptr;
}

$Element* ElementIterator::next() {
	$useLocalCurrentObjectStackCache();
	if (this->elementStack == nullptr) {
		return first();
	}
	if ($nc(this->elementStack)->isEmpty()) {
		return nullptr;
	}
	$var($ElementIterator$StackItem, item, $cast($ElementIterator$StackItem, $nc(this->elementStack)->peek()));
	$var($Element, elem, $nc(item)->getElement());
	int32_t index = item->getIndex();
	if (index + 1 < $nc(elem)->getElementCount()) {
		$var($Element, child, elem->getElement(index + 1));
		if ($nc(child)->isLeaf()) {
			item->incrementIndex();
		} else {
			$nc(this->elementStack)->push($$new($ElementIterator$StackItem, this, child));
		}
		return child;
	} else {
		$nc(this->elementStack)->pop();
		if (!$nc(this->elementStack)->isEmpty()) {
			$var($ElementIterator$StackItem, top, $cast($ElementIterator$StackItem, $nc(this->elementStack)->peek()));
			$nc(top)->incrementIndex();
			return next();
		}
	}
	return nullptr;
}

$Element* ElementIterator::previous() {
	$useLocalCurrentObjectStackCache();
	int32_t stackSize = 0;
	if (this->elementStack == nullptr || (stackSize = $nc(this->elementStack)->size()) == 0) {
		return nullptr;
	}
	$var($ElementIterator$StackItem, item, $cast($ElementIterator$StackItem, $nc(this->elementStack)->peek()));
	$var($Element, elem, $nc(item)->getElement());
	int32_t index = item->getIndex();
	if (index > 0) {
		return getDeepestLeaf($($nc(elem)->getElement(--index)));
	} else if (index == 0) {
		return elem;
	} else if (index == -1) {
		if (stackSize == 1) {
			return nullptr;
		}
		$var($ElementIterator$StackItem, top, $cast($ElementIterator$StackItem, $nc(this->elementStack)->pop()));
		$assign(item, $cast($ElementIterator$StackItem, $nc(this->elementStack)->peek()));
		$nc(this->elementStack)->push(top);
		$assign(elem, $nc(item)->getElement());
		index = item->getIndex();
		return ((index == -1) ? elem : getDeepestLeaf($($nc(elem)->getElement(index))));
	}
	return nullptr;
}

$Element* ElementIterator::getDeepestLeaf($Element* parent) {
	if ($nc(parent)->isLeaf()) {
		return parent;
	}
	int32_t childCount = $nc(parent)->getElementCount();
	if (childCount == 0) {
		return parent;
	}
	return getDeepestLeaf($(parent->getElement(childCount - 1)));
}

void ElementIterator::dumpTree() {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, nullptr);
	while (true) {
		if (($assign(elem, next())) != nullptr) {
			$init($System);
			$nc($System::out)->println($$str({"elem: "_s, $($nc(elem)->getName())}));
			$var($AttributeSet, attr, $nc(elem)->getAttributes());
			$var($String, s, ""_s);
			$var($Enumeration, names, $nc(attr)->getAttributeNames());
			while ($nc(names)->hasMoreElements()) {
				$var($Object, key, names->nextElement());
				$var($Object, value, attr->getAttribute(key));
				if ($instanceOf($AttributeSet, value)) {
					$assign(s, $str({s, key, "=**AttributeSet** "_s}));
				} else {
					$assign(s, $str({s, key, "="_s, value, " "_s}));
				}
			}
			$nc($System::out)->println($$str({"attributes: "_s, s}));
		} else {
			break;
		}
	}
}

ElementIterator::ElementIterator() {
}

$Class* ElementIterator::load$($String* name, bool initialize) {
	$loadClass(ElementIterator, name, initialize, &_ElementIterator_ClassInfo_, allocate$ElementIterator);
	return class$;
}

$Class* ElementIterator::class$ = nullptr;

		} // text
	} // swing
} // javax