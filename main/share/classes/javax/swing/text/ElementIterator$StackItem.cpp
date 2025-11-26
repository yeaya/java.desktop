#include <javax/swing/text/ElementIterator$StackItem.h>

#include <java/lang/Cloneable.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ElementIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $ElementIterator = ::javax::swing::text::ElementIterator;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _ElementIterator$StackItem_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/ElementIterator;", nullptr, $FINAL | $SYNTHETIC, $field(ElementIterator$StackItem, this$0)},
	{"item", "Ljavax/swing/text/Element;", nullptr, 0, $field(ElementIterator$StackItem, item)},
	{"childIndex", "I", nullptr, 0, $field(ElementIterator$StackItem, childIndex)},
	{}
};

$MethodInfo _ElementIterator$StackItem_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/ElementIterator;Ljavax/swing/text/Element;)V", nullptr, $PRIVATE, $method(static_cast<void(ElementIterator$StackItem::*)($ElementIterator*,$Element*)>(&ElementIterator$StackItem::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.lang.CloneNotSupportedException"},
	{"getElement", "()Ljavax/swing/text/Element;", nullptr, $PRIVATE, $method(static_cast<$Element*(ElementIterator$StackItem::*)()>(&ElementIterator$StackItem::getElement))},
	{"getIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ElementIterator$StackItem::*)()>(&ElementIterator$StackItem::getIndex))},
	{"incrementIndex", "()V", nullptr, $PRIVATE, $method(static_cast<void(ElementIterator$StackItem::*)()>(&ElementIterator$StackItem::incrementIndex))},
	{}
};

$InnerClassInfo _ElementIterator$StackItem_InnerClassesInfo_[] = {
	{"javax.swing.text.ElementIterator$StackItem", "javax.swing.text.ElementIterator", "StackItem", $PRIVATE},
	{}
};

$ClassInfo _ElementIterator$StackItem_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.ElementIterator$StackItem",
	"java.lang.Object",
	"java.lang.Cloneable",
	_ElementIterator$StackItem_FieldInfo_,
	_ElementIterator$StackItem_MethodInfo_,
	nullptr,
	nullptr,
	_ElementIterator$StackItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.ElementIterator"
};

$Object* allocate$ElementIterator$StackItem($Class* clazz) {
	return $of($alloc(ElementIterator$StackItem));
}

void ElementIterator$StackItem::init$($ElementIterator* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$set(this, item, elem);
	this->childIndex = -1;
}

void ElementIterator$StackItem::incrementIndex() {
	++this->childIndex;
}

$Element* ElementIterator$StackItem::getElement() {
	return this->item;
}

int32_t ElementIterator$StackItem::getIndex() {
	return this->childIndex;
}

$Object* ElementIterator$StackItem::clone() {
	return $of($Cloneable::clone());
}

ElementIterator$StackItem::ElementIterator$StackItem() {
}

$Class* ElementIterator$StackItem::load$($String* name, bool initialize) {
	$loadClass(ElementIterator$StackItem, name, initialize, &_ElementIterator$StackItem_ClassInfo_, allocate$ElementIterator$StackItem);
	return class$;
}

$Class* ElementIterator$StackItem::class$ = nullptr;

		} // text
	} // swing
} // javax