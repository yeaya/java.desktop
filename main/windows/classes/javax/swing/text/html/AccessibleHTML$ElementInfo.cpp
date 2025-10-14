#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <jcpp.h>

#undef REMOVE

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Element = ::javax::swing::text::Element;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$ElementInfo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/AccessibleHTML;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$ElementInfo, this$0)},
	{"children", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/swing/text/html/AccessibleHTML$ElementInfo;>;", $PRIVATE, $field(AccessibleHTML$ElementInfo, children)},
	{"element", "Ljavax/swing/text/Element;", nullptr, $PRIVATE, $field(AccessibleHTML$ElementInfo, element)},
	{"parent", "Ljavax/swing/text/html/AccessibleHTML$ElementInfo;", nullptr, $PRIVATE, $field(AccessibleHTML$ElementInfo, parent)},
	{"isValid", "Z", nullptr, $PRIVATE, $field(AccessibleHTML$ElementInfo, isValid$)},
	{"canBeValid", "Z", nullptr, $PRIVATE, $field(AccessibleHTML$ElementInfo, canBeValid)},
	{}
};

$MethodInfo _AccessibleHTML$ElementInfo_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;Ljavax/swing/text/Element;)V", nullptr, 0, $method(static_cast<void(AccessibleHTML$ElementInfo::*)($AccessibleHTML*,$Element*)>(&AccessibleHTML$ElementInfo::init$))},
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;Ljavax/swing/text/Element;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, 0, $method(static_cast<void(AccessibleHTML$ElementInfo::*)($AccessibleHTML*,$Element*,AccessibleHTML$ElementInfo*)>(&AccessibleHTML$ElementInfo::init$))},
	{"addChild", "(Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, $PROTECTED},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PROTECTED},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getChild", "(I)Ljavax/swing/text/html/AccessibleHTML$ElementInfo;", nullptr, $PUBLIC},
	{"getChildCount", "()I", nullptr, $PUBLIC},
	{"getClosestInfoIndex", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AccessibleHTML$ElementInfo::*)(int32_t)>(&AccessibleHTML$ElementInfo::getClosestInfoIndex))},
	{"getElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getIndexInParent", "()I", nullptr, $PUBLIC},
	{"getIntAttr", "(Ljavax/swing/text/AttributeSet;Ljava/lang/Object;I)I", nullptr, $PROTECTED},
	{"getParent", "()Ljavax/swing/text/html/AccessibleHTML$ElementInfo;", nullptr, $PUBLIC},
	{"getView", "()Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"getView", "(Ljavax/swing/text/View;Ljavax/swing/text/Element;I)Ljavax/swing/text/View;", nullptr, $PRIVATE, $method(static_cast<$View*(AccessibleHTML$ElementInfo::*)($View*,$Element*,int32_t)>(&AccessibleHTML$ElementInfo::getView))},
	{"getViewAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PROTECTED},
	{"indexOf", "(Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)I", nullptr, $PUBLIC},
	{"invalidate", "(Z)V", nullptr, $PROTECTED},
	{"isValid", "()Z", nullptr, $PROTECTED},
	{"loadChildren", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED},
	{"update", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(AccessibleHTML$ElementInfo::*)($DocumentEvent*)>(&AccessibleHTML$ElementInfo::update))},
	{"validate", "()V", nullptr, $PROTECTED},
	{"validateIfNecessary", "()Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AccessibleHTML$ElementInfo_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$ElementInfo", "javax.swing.text.html.AccessibleHTML", "ElementInfo", $PRIVATE},
	{}
};

$ClassInfo _AccessibleHTML$ElementInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$ElementInfo",
	"java.lang.Object",
	nullptr,
	_AccessibleHTML$ElementInfo_FieldInfo_,
	_AccessibleHTML$ElementInfo_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$ElementInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$ElementInfo($Class* clazz) {
	return $of($alloc(AccessibleHTML$ElementInfo));
}

void AccessibleHTML$ElementInfo::init$($AccessibleHTML* this$0, $Element* element) {
	AccessibleHTML$ElementInfo::init$(this$0, element, nullptr);
}

void AccessibleHTML$ElementInfo::init$($AccessibleHTML* this$0, $Element* element, AccessibleHTML$ElementInfo* parent) {
	$set(this, this$0, this$0);
	$set(this, element, element);
	$set(this, parent, parent);
	this->isValid$ = false;
	this->canBeValid = true;
}

void AccessibleHTML$ElementInfo::validate() {
	this->isValid$ = true;
	loadChildren($(getElement()));
}

void AccessibleHTML$ElementInfo::loadChildren($Element* parent) {
	if (!$nc(parent)->isLeaf()) {
		{
			int32_t counter = 0;
			int32_t maxCounter = parent->getElementCount();
			for (; counter < maxCounter; ++counter) {
				$var($Element, e, parent->getElement(counter));
				$var(AccessibleHTML$ElementInfo, childInfo, this->this$0->createElementInfo(e, this));
				if (childInfo != nullptr) {
					addChild(childInfo);
				} else {
					loadChildren(e);
				}
			}
		}
	}
}

int32_t AccessibleHTML$ElementInfo::getIndexInParent() {
	if (this->parent == nullptr || !$nc(this->parent)->isValid()) {
		return -1;
	}
	return $nc(this->parent)->indexOf(this);
}

$Element* AccessibleHTML$ElementInfo::getElement() {
	return this->element;
}

AccessibleHTML$ElementInfo* AccessibleHTML$ElementInfo::getParent() {
	return this->parent;
}

int32_t AccessibleHTML$ElementInfo::indexOf(AccessibleHTML$ElementInfo* child) {
	$var($ArrayList, children, this->children);
	if (children != nullptr) {
		return children->indexOf(child);
	}
	return -1;
}

AccessibleHTML$ElementInfo* AccessibleHTML$ElementInfo::getChild(int32_t index) {
	if (validateIfNecessary()) {
		$var($ArrayList, children, this->children);
		if (children != nullptr && index >= 0 && index < children->size()) {
			return $cast(AccessibleHTML$ElementInfo, children->get(index));
		}
	}
	return nullptr;
}

int32_t AccessibleHTML$ElementInfo::getChildCount() {
	validateIfNecessary();
	return (this->children == nullptr) ? 0 : $nc(this->children)->size();
}

void AccessibleHTML$ElementInfo::addChild(AccessibleHTML$ElementInfo* child) {
	if (this->children == nullptr) {
		$set(this, children, $new($ArrayList));
	}
	$nc(this->children)->add(child);
}

$View* AccessibleHTML$ElementInfo::getView() {
	if (!validateIfNecessary()) {
		return nullptr;
	}
	$var($Object, lock, this->this$0->lock());
	{
		$var($Throwable, var$0, nullptr);
		$var($View, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($View, rootView, this->this$0->getRootView());
			$var($Element, e, getElement());
			int32_t start = $nc(e)->getStartOffset();
			if (rootView != nullptr) {
				$assign(var$2, getView(rootView, e, start));
				return$1 = true;
				goto $finally;
			}
			$assign(var$2, nullptr);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			this->this$0->unlock(lock);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Rectangle* AccessibleHTML$ElementInfo::getBounds() {
	if (!validateIfNecessary()) {
		return nullptr;
	}
	$var($Object, lock, this->this$0->lock());
	{
		$var($Throwable, var$0, nullptr);
		$var($Rectangle, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Rectangle, bounds, this->this$0->getRootEditorRect());
			$var($View, rootView, this->this$0->getRootView());
			$var($Element, e, getElement());
			if (bounds != nullptr && rootView != nullptr) {
				try {
					int32_t var$3 = $nc(e)->getStartOffset();
					$init($Position$Bias);
					$var($Position$Bias, var$4, $Position$Bias::Forward);
					return $nc($(rootView->modelToView(var$3, var$4, e->getEndOffset(), $Position$Bias::Backward, bounds)))->getBounds();
				} catch ($BadLocationException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->this$0->unlock(lock);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return nullptr;
}

bool AccessibleHTML$ElementInfo::isValid() {
	return this->isValid$;
}

$AttributeSet* AccessibleHTML$ElementInfo::getAttributes() {
	if (validateIfNecessary()) {
		return $nc($(getElement()))->getAttributes();
	}
	return nullptr;
}

$AttributeSet* AccessibleHTML$ElementInfo::getViewAttributes() {
	if (validateIfNecessary()) {
		$var($View, view, getView());
		if (view != nullptr) {
			return $nc($(view->getElement()))->getAttributes();
		}
		return $nc($(getElement()))->getAttributes();
	}
	return nullptr;
}

int32_t AccessibleHTML$ElementInfo::getIntAttr($AttributeSet* attrs, Object$* key, int32_t deflt) {
	if (attrs != nullptr && attrs->isDefined(key)) {
		int32_t i = 0;
		$var($String, val, $cast($String, attrs->getAttribute(key)));
		if (val == nullptr) {
			i = deflt;
		} else {
			try {
				i = $Math::max(0, $Integer::parseInt(val));
			} catch ($NumberFormatException&) {
				$var($NumberFormatException, x, $catch());
				i = deflt;
			}
		}
		return i;
	}
	return deflt;
}

bool AccessibleHTML$ElementInfo::validateIfNecessary() {
	if (!isValid() && this->canBeValid) {
		$set(this, children, nullptr);
		$var($Object, lock, this->this$0->lock());
		{
			$var($Throwable, var$0, nullptr);
			try {
				validate();
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				this->this$0->unlock(lock);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return isValid();
}

void AccessibleHTML$ElementInfo::invalidate(bool first) {
	if (!isValid()) {
		if (this->canBeValid && !first) {
			this->canBeValid = false;
		}
		return;
	}
	this->isValid$ = false;
	this->canBeValid = first;
	if (this->children != nullptr) {
		{
			$var($Iterator, i$, $nc(this->children)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var(AccessibleHTML$ElementInfo, child, $cast(AccessibleHTML$ElementInfo, i$->next()));
				{
					$nc(child)->invalidate(false);
				}
			}
		}
		$set(this, children, nullptr);
	}
}

$View* AccessibleHTML$ElementInfo::getView($View* parent, $Element* e, int32_t start) {
	if ($nc(parent)->getElement() == e) {
		return parent;
	}
	$init($Position$Bias);
	int32_t index = $nc(parent)->getViewIndex(start, $Position$Bias::Forward);
	if (index != -1 && index < parent->getViewCount()) {
		return getView($(parent->getView(index)), e, start);
	}
	return nullptr;
}

int32_t AccessibleHTML$ElementInfo::getClosestInfoIndex(int32_t index) {
	for (int32_t counter = 0; counter < getChildCount(); ++counter) {
		$var(AccessibleHTML$ElementInfo, info, getChild(counter));
		bool var$0 = index < $nc($($nc(info)->getElement()))->getEndOffset();
		if (var$0 || index == $nc($($nc(info)->getElement()))->getStartOffset()) {
			return counter;
		}
	}
	return -1;
}

void AccessibleHTML$ElementInfo::update($DocumentEvent* e) {
	if (!isValid()) {
		return;
	}
	$var(AccessibleHTML$ElementInfo, parent, getParent());
	$var($Element, element, getElement());
	do {
		$var($DocumentEvent$ElementChange, ec, $nc(e)->getChange(element));
		if (ec != nullptr) {
			if (element == getElement()) {
				invalidate(true);
			} else if (parent != nullptr) {
				parent->invalidate(parent == this->this$0->getRootInfo());
			}
			return;
		}
		$assign(element, $nc(element)->getParentElement());
	} while (parent != nullptr && element != nullptr && element != parent->getElement());
	if (getChildCount() > 0) {
		$var($Element, elem, getElement());
		int32_t pos = $nc(e)->getOffset();
		int32_t index0 = getClosestInfoIndex(pos);
		$init($DocumentEvent$EventType);
		bool var$0 = index0 == -1 && e->getType() == $DocumentEvent$EventType::REMOVE;
		if (var$0 && pos >= $nc(elem)->getEndOffset()) {
			index0 = getChildCount() - 1;
		}
		$var(AccessibleHTML$ElementInfo, info, (index0 >= 0) ? getChild(index0) : (AccessibleHTML$ElementInfo*)nullptr);
		if (info != nullptr && ($nc($(info->getElement()))->getStartOffset() == pos) && (pos > 0)) {
			index0 = $Math::max(index0 - 1, 0);
		}
		int32_t index1 = 0;
		if (e->getType() != $DocumentEvent$EventType::REMOVE) {
			index1 = getClosestInfoIndex(pos + e->getLength());
			if (index1 < 0) {
				index1 = getChildCount() - 1;
			}
		} else {
			index1 = index0;
			while (true) {
				bool var$1 = (index1 + 1) < getChildCount();
				if (var$1) {
					int32_t var$2 = $nc($($nc($(getChild(index1 + 1)))->getElement()))->getEndOffset();
					var$1 = var$2 == $nc($($nc($(getChild(index1 + 1)))->getElement()))->getStartOffset();
				}
				if (!(var$1)) {
					break;
				}
				{
					++index1;
				}
			}
		}
		index0 = $Math::max(index0, 0);
		for (int32_t i = index0; i <= index1 && isValid(); ++i) {
			$nc($(getChild(i)))->update(e);
		}
	}
}

AccessibleHTML$ElementInfo::AccessibleHTML$ElementInfo() {
}

$Class* AccessibleHTML$ElementInfo::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$ElementInfo, name, initialize, &_AccessibleHTML$ElementInfo_ClassInfo_, allocate$AccessibleHTML$ElementInfo);
	return class$;
}

$Class* AccessibleHTML$ElementInfo::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax