#include <javax/print/attribute/AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$UnmodifiableAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
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
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet, serialVersionUID)},
	{}
};

$MethodInfo _AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet_MethodInfo_[] = {
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
	{"<init>", "(Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::*)($PrintRequestAttributeSet*)>(&AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::init$))},
	{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet_InnerClassesInfo_[] = {
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiablePrintRequestAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiableAttributeSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet",
	"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet",
	"javax.print.attribute.PrintRequestAttributeSet",
	_AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet_FieldInfo_,
	_AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.AttributeSetUtilities"
};

$Object* allocate$AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet($Class* clazz) {
	return $of($alloc(AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet));
}

$Attribute* AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::get($Class* key) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::get(key);
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::add($Attribute* attribute) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::add(attribute);
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::remove($Class* category) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::remove(category);
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::remove($Attribute* attribute) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::remove(attribute);
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::containsKey($Class* category) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::containsKey(category);
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::containsValue($Attribute* attribute) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::containsValue(attribute);
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::addAll($AttributeSet* attributes) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::addAll(attributes);
}

int32_t AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::size() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::size();
}

$AttributeArray* AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::toArray() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::toArray();
}

void AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::clear() {
	this->$AttributeSetUtilities$UnmodifiableAttributeSet::clear();
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::isEmpty() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::isEmpty();
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::equals(Object$* o) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::equals(o);
}

int32_t AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::hashCode() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::hashCode();
}

$Object* AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::clone() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::clone();
}

$String* AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::toString() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::toString();
}

void AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::finalize() {
	this->$AttributeSetUtilities$UnmodifiableAttributeSet::finalize();
}

void AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::init$($PrintRequestAttributeSet* attributeSet) {
	$AttributeSetUtilities$UnmodifiableAttributeSet::init$(attributeSet);
}

AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet() {
}

$Class* AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::load$($String* name, bool initialize) {
	$loadClass(AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet, name, initialize, &_AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet_ClassInfo_, allocate$AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet);
	return class$;
}

$Class* AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax