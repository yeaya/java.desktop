#include <javax/print/attribute/HashPrintJobAttributeSet.h>

#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $PrintJobAttributeArray = $Array<::javax::print::attribute::PrintJobAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintJobAttributeSet = ::javax::print::attribute::PrintJobAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _HashPrintJobAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HashPrintJobAttributeSet, serialVersionUID)},
	{}
};

$MethodInfo _HashPrintJobAttributeSet_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HashPrintJobAttributeSet::*)()>(&HashPrintJobAttributeSet::init$))},
	{"<init>", "(Ljavax/print/attribute/PrintJobAttribute;)V", nullptr, $PUBLIC, $method(static_cast<void(HashPrintJobAttributeSet::*)($PrintJobAttribute*)>(&HashPrintJobAttributeSet::init$))},
	{"<init>", "([Ljavax/print/attribute/PrintJobAttribute;)V", nullptr, $PUBLIC, $method(static_cast<void(HashPrintJobAttributeSet::*)($PrintJobAttributeArray*)>(&HashPrintJobAttributeSet::init$))},
	{"<init>", "(Ljavax/print/attribute/PrintJobAttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(HashPrintJobAttributeSet::*)($PrintJobAttributeSet*)>(&HashPrintJobAttributeSet::init$))},
	{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC},
	{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HashPrintJobAttributeSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.HashPrintJobAttributeSet",
	"javax.print.attribute.HashAttributeSet",
	"javax.print.attribute.PrintJobAttributeSet",
	_HashPrintJobAttributeSet_FieldInfo_,
	_HashPrintJobAttributeSet_MethodInfo_
};

$Object* allocate$HashPrintJobAttributeSet($Class* clazz) {
	return $of($alloc(HashPrintJobAttributeSet));
}

$Attribute* HashPrintJobAttributeSet::get($Class* category) {
	 return this->$HashAttributeSet::get(category);
}

bool HashPrintJobAttributeSet::add($Attribute* attribute) {
	 return this->$HashAttributeSet::add(attribute);
}

bool HashPrintJobAttributeSet::remove($Class* category) {
	 return this->$HashAttributeSet::remove(category);
}

bool HashPrintJobAttributeSet::remove($Attribute* attribute) {
	 return this->$HashAttributeSet::remove(attribute);
}

bool HashPrintJobAttributeSet::containsKey($Class* category) {
	 return this->$HashAttributeSet::containsKey(category);
}

bool HashPrintJobAttributeSet::containsValue($Attribute* attribute) {
	 return this->$HashAttributeSet::containsValue(attribute);
}

bool HashPrintJobAttributeSet::addAll($AttributeSet* attributes) {
	 return this->$HashAttributeSet::addAll(attributes);
}

int32_t HashPrintJobAttributeSet::size() {
	 return this->$HashAttributeSet::size();
}

$AttributeArray* HashPrintJobAttributeSet::toArray() {
	 return this->$HashAttributeSet::toArray();
}

void HashPrintJobAttributeSet::clear() {
	this->$HashAttributeSet::clear();
}

bool HashPrintJobAttributeSet::isEmpty() {
	 return this->$HashAttributeSet::isEmpty();
}

bool HashPrintJobAttributeSet::equals(Object$* object) {
	 return this->$HashAttributeSet::equals(object);
}

int32_t HashPrintJobAttributeSet::hashCode() {
	 return this->$HashAttributeSet::hashCode();
}

$Object* HashPrintJobAttributeSet::clone() {
	 return this->$HashAttributeSet::clone();
}

$String* HashPrintJobAttributeSet::toString() {
	 return this->$HashAttributeSet::toString();
}

void HashPrintJobAttributeSet::finalize() {
	this->$HashAttributeSet::finalize();
}

void HashPrintJobAttributeSet::init$() {
	$load($PrintJobAttribute);
	$HashAttributeSet::init$($PrintJobAttribute::class$);
}

void HashPrintJobAttributeSet::init$($PrintJobAttribute* attribute) {
	$load($PrintJobAttribute);
	$HashAttributeSet::init$(static_cast<$Attribute*>(attribute), $PrintJobAttribute::class$);
}

void HashPrintJobAttributeSet::init$($PrintJobAttributeArray* attributes) {
	$load($PrintJobAttribute);
	$HashAttributeSet::init$($fcast($AttributeArray, attributes), $PrintJobAttribute::class$);
}

void HashPrintJobAttributeSet::init$($PrintJobAttributeSet* attributes) {
	$load($PrintJobAttribute);
	$HashAttributeSet::init$(static_cast<$AttributeSet*>(attributes), $PrintJobAttribute::class$);
}

HashPrintJobAttributeSet::HashPrintJobAttributeSet() {
}

$Class* HashPrintJobAttributeSet::load$($String* name, bool initialize) {
	$loadClass(HashPrintJobAttributeSet, name, initialize, &_HashPrintJobAttributeSet_ClassInfo_, allocate$HashPrintJobAttributeSet);
	return class$;
}

$Class* HashPrintJobAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax