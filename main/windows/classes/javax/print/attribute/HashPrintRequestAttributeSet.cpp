#include <javax/print/attribute/HashPrintRequestAttributeSet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $PrintRequestAttributeArray = $Array<::javax::print::attribute::PrintRequestAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _HashPrintRequestAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HashPrintRequestAttributeSet, serialVersionUID)},
	{}
};

$MethodInfo _HashPrintRequestAttributeSet_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HashPrintRequestAttributeSet::*)()>(&HashPrintRequestAttributeSet::init$))},
	{"<init>", "(Ljavax/print/attribute/PrintRequestAttribute;)V", nullptr, $PUBLIC, $method(static_cast<void(HashPrintRequestAttributeSet::*)($PrintRequestAttribute*)>(&HashPrintRequestAttributeSet::init$))},
	{"<init>", "([Ljavax/print/attribute/PrintRequestAttribute;)V", nullptr, $PUBLIC, $method(static_cast<void(HashPrintRequestAttributeSet::*)($PrintRequestAttributeArray*)>(&HashPrintRequestAttributeSet::init$))},
	{"<init>", "(Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(HashPrintRequestAttributeSet::*)($PrintRequestAttributeSet*)>(&HashPrintRequestAttributeSet::init$))},
	{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC},
	{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HashPrintRequestAttributeSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.HashPrintRequestAttributeSet",
	"javax.print.attribute.HashAttributeSet",
	"javax.print.attribute.PrintRequestAttributeSet",
	_HashPrintRequestAttributeSet_FieldInfo_,
	_HashPrintRequestAttributeSet_MethodInfo_
};

$Object* allocate$HashPrintRequestAttributeSet($Class* clazz) {
	return $of($alloc(HashPrintRequestAttributeSet));
}

$Attribute* HashPrintRequestAttributeSet::get($Class* category) {
	 return this->$HashAttributeSet::get(category);
}

bool HashPrintRequestAttributeSet::add($Attribute* attribute) {
	 return this->$HashAttributeSet::add(attribute);
}

bool HashPrintRequestAttributeSet::remove($Class* category) {
	 return this->$HashAttributeSet::remove(category);
}

bool HashPrintRequestAttributeSet::remove($Attribute* attribute) {
	 return this->$HashAttributeSet::remove(attribute);
}

bool HashPrintRequestAttributeSet::containsKey($Class* category) {
	 return this->$HashAttributeSet::containsKey(category);
}

bool HashPrintRequestAttributeSet::containsValue($Attribute* attribute) {
	 return this->$HashAttributeSet::containsValue(attribute);
}

bool HashPrintRequestAttributeSet::addAll($AttributeSet* attributes) {
	 return this->$HashAttributeSet::addAll(attributes);
}

int32_t HashPrintRequestAttributeSet::size() {
	 return this->$HashAttributeSet::size();
}

$AttributeArray* HashPrintRequestAttributeSet::toArray() {
	 return this->$HashAttributeSet::toArray();
}

void HashPrintRequestAttributeSet::clear() {
	this->$HashAttributeSet::clear();
}

bool HashPrintRequestAttributeSet::isEmpty() {
	 return this->$HashAttributeSet::isEmpty();
}

bool HashPrintRequestAttributeSet::equals(Object$* object) {
	 return this->$HashAttributeSet::equals(object);
}

int32_t HashPrintRequestAttributeSet::hashCode() {
	 return this->$HashAttributeSet::hashCode();
}

$Object* HashPrintRequestAttributeSet::clone() {
	 return this->$HashAttributeSet::clone();
}

$String* HashPrintRequestAttributeSet::toString() {
	 return this->$HashAttributeSet::toString();
}

void HashPrintRequestAttributeSet::finalize() {
	this->$HashAttributeSet::finalize();
}

void HashPrintRequestAttributeSet::init$() {
	$load($PrintRequestAttribute);
	$HashAttributeSet::init$($PrintRequestAttribute::class$);
}

void HashPrintRequestAttributeSet::init$($PrintRequestAttribute* attribute) {
	$load($PrintRequestAttribute);
	$HashAttributeSet::init$(static_cast<$Attribute*>(attribute), $PrintRequestAttribute::class$);
}

void HashPrintRequestAttributeSet::init$($PrintRequestAttributeArray* attributes) {
	$load($PrintRequestAttribute);
	$HashAttributeSet::init$($fcast($AttributeArray, attributes), $PrintRequestAttribute::class$);
}

void HashPrintRequestAttributeSet::init$($PrintRequestAttributeSet* attributes) {
	$load($PrintRequestAttribute);
	$HashAttributeSet::init$(static_cast<$AttributeSet*>(attributes), $PrintRequestAttribute::class$);
}

HashPrintRequestAttributeSet::HashPrintRequestAttributeSet() {
}

$Class* HashPrintRequestAttributeSet::load$($String* name, bool initialize) {
	$loadClass(HashPrintRequestAttributeSet, name, initialize, &_HashPrintRequestAttributeSet_ClassInfo_, allocate$HashPrintRequestAttributeSet);
	return class$;
}

$Class* HashPrintRequestAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax