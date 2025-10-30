#include <javax/print/attribute/HashDocAttributeSet.h>

#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/DocAttributeSet.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $DocAttributeArray = $Array<::javax::print::attribute::DocAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $DocAttributeSet = ::javax::print::attribute::DocAttributeSet;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _HashDocAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HashDocAttributeSet, serialVersionUID)},
	{}
};

$MethodInfo _HashDocAttributeSet_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HashDocAttributeSet::*)()>(&HashDocAttributeSet::init$))},
	{"<init>", "(Ljavax/print/attribute/DocAttribute;)V", nullptr, $PUBLIC, $method(static_cast<void(HashDocAttributeSet::*)($DocAttribute*)>(&HashDocAttributeSet::init$))},
	{"<init>", "([Ljavax/print/attribute/DocAttribute;)V", nullptr, $PUBLIC, $method(static_cast<void(HashDocAttributeSet::*)($DocAttributeArray*)>(&HashDocAttributeSet::init$))},
	{"<init>", "(Ljavax/print/attribute/DocAttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(HashDocAttributeSet::*)($DocAttributeSet*)>(&HashDocAttributeSet::init$))},
	{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC},
	{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HashDocAttributeSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.HashDocAttributeSet",
	"javax.print.attribute.HashAttributeSet",
	"javax.print.attribute.DocAttributeSet",
	_HashDocAttributeSet_FieldInfo_,
	_HashDocAttributeSet_MethodInfo_
};

$Object* allocate$HashDocAttributeSet($Class* clazz) {
	return $of($alloc(HashDocAttributeSet));
}

$Attribute* HashDocAttributeSet::get($Class* category) {
	 return this->$HashAttributeSet::get(category);
}

bool HashDocAttributeSet::add($Attribute* attribute) {
	 return this->$HashAttributeSet::add(attribute);
}

bool HashDocAttributeSet::remove($Class* category) {
	 return this->$HashAttributeSet::remove(category);
}

bool HashDocAttributeSet::remove($Attribute* attribute) {
	 return this->$HashAttributeSet::remove(attribute);
}

bool HashDocAttributeSet::containsKey($Class* category) {
	 return this->$HashAttributeSet::containsKey(category);
}

bool HashDocAttributeSet::containsValue($Attribute* attribute) {
	 return this->$HashAttributeSet::containsValue(attribute);
}

bool HashDocAttributeSet::addAll($AttributeSet* attributes) {
	 return this->$HashAttributeSet::addAll(attributes);
}

int32_t HashDocAttributeSet::size() {
	 return this->$HashAttributeSet::size();
}

$AttributeArray* HashDocAttributeSet::toArray() {
	 return this->$HashAttributeSet::toArray();
}

void HashDocAttributeSet::clear() {
	this->$HashAttributeSet::clear();
}

bool HashDocAttributeSet::isEmpty() {
	 return this->$HashAttributeSet::isEmpty();
}

bool HashDocAttributeSet::equals(Object$* object) {
	 return this->$HashAttributeSet::equals(object);
}

int32_t HashDocAttributeSet::hashCode() {
	 return this->$HashAttributeSet::hashCode();
}

$Object* HashDocAttributeSet::clone() {
	 return this->$HashAttributeSet::clone();
}

$String* HashDocAttributeSet::toString() {
	 return this->$HashAttributeSet::toString();
}

void HashDocAttributeSet::finalize() {
	this->$HashAttributeSet::finalize();
}

void HashDocAttributeSet::init$() {
	$load($DocAttribute);
	$HashAttributeSet::init$($DocAttribute::class$);
}

void HashDocAttributeSet::init$($DocAttribute* attribute) {
	$load($DocAttribute);
	$HashAttributeSet::init$(static_cast<$Attribute*>(attribute), $DocAttribute::class$);
}

void HashDocAttributeSet::init$($DocAttributeArray* attributes) {
	$load($DocAttribute);
	$HashAttributeSet::init$($fcast($AttributeArray, attributes), $DocAttribute::class$);
}

void HashDocAttributeSet::init$($DocAttributeSet* attributes) {
	$load($DocAttribute);
	$HashAttributeSet::init$(static_cast<$AttributeSet*>(attributes), $DocAttribute::class$);
}

HashDocAttributeSet::HashDocAttributeSet() {
}

$Class* HashDocAttributeSet::load$($String* name, bool initialize) {
	$loadClass(HashDocAttributeSet, name, initialize, &_HashDocAttributeSet_ClassInfo_, allocate$HashDocAttributeSet);
	return class$;
}

$Class* HashDocAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax