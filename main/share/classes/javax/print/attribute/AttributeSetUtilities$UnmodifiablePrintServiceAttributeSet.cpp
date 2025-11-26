#include <javax/print/attribute/AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet.h>

#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$UnmodifiableAttributeSet.h>
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
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;
using $AttributeSetUtilities$UnmodifiableAttributeSet = ::javax::print::attribute::AttributeSetUtilities$UnmodifiableAttributeSet;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet, serialVersionUID)},
	{}
};

$MethodInfo _AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet_MethodInfo_[] = {
	{"*add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsKey", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC},
	{"*containsValue", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "(Ljava/lang/Class;)Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljavax/print/attribute/PrintServiceAttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::*)($PrintServiceAttributeSet*)>(&AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::init$))},
	{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet_InnerClassesInfo_[] = {
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiablePrintServiceAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiableAttributeSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet",
	"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet",
	"javax.print.attribute.PrintServiceAttributeSet",
	_AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet_FieldInfo_,
	_AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.AttributeSetUtilities"
};

$Object* allocate$AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet($Class* clazz) {
	return $of($alloc(AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet));
}

$Attribute* AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::get($Class* key) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::get(key);
}

bool AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::add($Attribute* attribute) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::add(attribute);
}

bool AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::remove($Class* category) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::remove(category);
}

bool AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::remove($Attribute* attribute) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::remove(attribute);
}

bool AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::containsKey($Class* category) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::containsKey(category);
}

bool AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::containsValue($Attribute* attribute) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::containsValue(attribute);
}

bool AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::addAll($AttributeSet* attributes) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::addAll(attributes);
}

int32_t AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::size() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::size();
}

$AttributeArray* AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::toArray() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::toArray();
}

void AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::clear() {
	this->$AttributeSetUtilities$UnmodifiableAttributeSet::clear();
}

bool AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::isEmpty() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::isEmpty();
}

bool AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::equals(Object$* o) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::equals(o);
}

int32_t AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::hashCode() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::hashCode();
}

$Object* AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::clone() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::clone();
}

$String* AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::toString() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::toString();
}

void AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::finalize() {
	this->$AttributeSetUtilities$UnmodifiableAttributeSet::finalize();
}

void AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::init$($PrintServiceAttributeSet* attributeSet) {
	$AttributeSetUtilities$UnmodifiableAttributeSet::init$(attributeSet);
}

AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet() {
}

$Class* AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::load$($String* name, bool initialize) {
	$loadClass(AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet, name, initialize, &_AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet_ClassInfo_, allocate$AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet);
	return class$;
}

$Class* AttributeSetUtilities$UnmodifiablePrintServiceAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax