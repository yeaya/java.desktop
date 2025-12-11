#include <javax/print/attribute/AttributeSetUtilities$SynchronizedPrintServiceAttributeSet.h>

#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$SynchronizedAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities$SynchronizedAttributeSet = ::javax::print::attribute::AttributeSetUtilities$SynchronizedAttributeSet;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _AttributeSetUtilities$SynchronizedPrintServiceAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeSetUtilities$SynchronizedPrintServiceAttributeSet, serialVersionUID)},
	{}
};

$MethodInfo _AttributeSetUtilities$SynchronizedPrintServiceAttributeSet_MethodInfo_[] = {
	{"*add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*clear", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsKey", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*containsValue", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "(Ljava/lang/Class;)Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"<init>", "(Ljavax/print/attribute/PrintServiceAttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::*)($PrintServiceAttributeSet*)>(&AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::init$))},
	{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*size", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*isEmpty", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AttributeSetUtilities$SynchronizedPrintServiceAttributeSet_InnerClassesInfo_[] = {
	{"javax.print.attribute.AttributeSetUtilities$SynchronizedPrintServiceAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedPrintServiceAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedAttributeSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AttributeSetUtilities$SynchronizedPrintServiceAttributeSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.attribute.AttributeSetUtilities$SynchronizedPrintServiceAttributeSet",
	"javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet",
	"javax.print.attribute.PrintServiceAttributeSet",
	_AttributeSetUtilities$SynchronizedPrintServiceAttributeSet_FieldInfo_,
	_AttributeSetUtilities$SynchronizedPrintServiceAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_AttributeSetUtilities$SynchronizedPrintServiceAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.AttributeSetUtilities"
};

$Object* allocate$AttributeSetUtilities$SynchronizedPrintServiceAttributeSet($Class* clazz) {
	return $of($alloc(AttributeSetUtilities$SynchronizedPrintServiceAttributeSet));
}

$Attribute* AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::get($Class* category) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::get(category);
}

bool AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::add($Attribute* attribute) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::add(attribute);
}

bool AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::remove($Class* category) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::remove(category);
}

bool AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::remove($Attribute* attribute) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::remove(attribute);
}

bool AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::containsKey($Class* category) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::containsKey(category);
}

bool AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::containsValue($Attribute* attribute) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::containsValue(attribute);
}

bool AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::addAll($AttributeSet* attributes) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::addAll(attributes);
}

int32_t AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::size() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::size();
}

$AttributeArray* AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::toArray() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::toArray();
}

void AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::clear() {
	this->$AttributeSetUtilities$SynchronizedAttributeSet::clear();
}

bool AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::isEmpty() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::isEmpty();
}

bool AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::equals(Object$* o) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::equals(o);
}

int32_t AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::hashCode() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::hashCode();
}

$Object* AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::clone() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::clone();
}

$String* AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::toString() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::toString();
}

void AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::finalize() {
	this->$AttributeSetUtilities$SynchronizedAttributeSet::finalize();
}

void AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::init$($PrintServiceAttributeSet* attributeSet) {
	$AttributeSetUtilities$SynchronizedAttributeSet::init$(attributeSet);
}

AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::AttributeSetUtilities$SynchronizedPrintServiceAttributeSet() {
}

$Class* AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::load$($String* name, bool initialize) {
	$loadClass(AttributeSetUtilities$SynchronizedPrintServiceAttributeSet, name, initialize, &_AttributeSetUtilities$SynchronizedPrintServiceAttributeSet_ClassInfo_, allocate$AttributeSetUtilities$SynchronizedPrintServiceAttributeSet);
	return class$;
}

$Class* AttributeSetUtilities$SynchronizedPrintServiceAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax