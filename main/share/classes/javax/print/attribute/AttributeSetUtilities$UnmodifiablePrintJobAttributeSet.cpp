#include <javax/print/attribute/AttributeSetUtilities$UnmodifiablePrintJobAttributeSet.h>

#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$UnmodifiableAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>
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
using $PrintJobAttributeSet = ::javax::print::attribute::PrintJobAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _AttributeSetUtilities$UnmodifiablePrintJobAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeSetUtilities$UnmodifiablePrintJobAttributeSet, serialVersionUID)},
	{}
};

$MethodInfo _AttributeSetUtilities$UnmodifiablePrintJobAttributeSet_MethodInfo_[] = {
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
	{"<init>", "(Ljavax/print/attribute/PrintJobAttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::*)($PrintJobAttributeSet*)>(&AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::init$))},
	{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AttributeSetUtilities$UnmodifiablePrintJobAttributeSet_InnerClassesInfo_[] = {
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintJobAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiablePrintJobAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiableAttributeSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AttributeSetUtilities$UnmodifiablePrintJobAttributeSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintJobAttributeSet",
	"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet",
	"javax.print.attribute.PrintJobAttributeSet",
	_AttributeSetUtilities$UnmodifiablePrintJobAttributeSet_FieldInfo_,
	_AttributeSetUtilities$UnmodifiablePrintJobAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_AttributeSetUtilities$UnmodifiablePrintJobAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.AttributeSetUtilities"
};

$Object* allocate$AttributeSetUtilities$UnmodifiablePrintJobAttributeSet($Class* clazz) {
	return $of($alloc(AttributeSetUtilities$UnmodifiablePrintJobAttributeSet));
}

$Attribute* AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::get($Class* key) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::get(key);
}

bool AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::add($Attribute* attribute) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::add(attribute);
}

bool AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::remove($Class* category) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::remove(category);
}

bool AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::remove($Attribute* attribute) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::remove(attribute);
}

bool AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::containsKey($Class* category) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::containsKey(category);
}

bool AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::containsValue($Attribute* attribute) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::containsValue(attribute);
}

bool AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::addAll($AttributeSet* attributes) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::addAll(attributes);
}

int32_t AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::size() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::size();
}

$AttributeArray* AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::toArray() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::toArray();
}

void AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::clear() {
	this->$AttributeSetUtilities$UnmodifiableAttributeSet::clear();
}

bool AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::isEmpty() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::isEmpty();
}

bool AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::equals(Object$* o) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::equals(o);
}

int32_t AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::hashCode() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::hashCode();
}

$Object* AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::clone() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::clone();
}

$String* AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::toString() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::toString();
}

void AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::finalize() {
	this->$AttributeSetUtilities$UnmodifiableAttributeSet::finalize();
}

void AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::init$($PrintJobAttributeSet* attributeSet) {
	$AttributeSetUtilities$UnmodifiableAttributeSet::init$(attributeSet);
}

AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::AttributeSetUtilities$UnmodifiablePrintJobAttributeSet() {
}

$Class* AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::load$($String* name, bool initialize) {
	$loadClass(AttributeSetUtilities$UnmodifiablePrintJobAttributeSet, name, initialize, &_AttributeSetUtilities$UnmodifiablePrintJobAttributeSet_ClassInfo_, allocate$AttributeSetUtilities$UnmodifiablePrintJobAttributeSet);
	return class$;
}

$Class* AttributeSetUtilities$UnmodifiablePrintJobAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax