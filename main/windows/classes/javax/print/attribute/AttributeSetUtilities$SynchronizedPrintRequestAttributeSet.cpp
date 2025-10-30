#include <javax/print/attribute/AttributeSetUtilities$SynchronizedPrintRequestAttributeSet.h>

#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$SynchronizedAttributeSet.h>
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
using $AttributeSetUtilities$SynchronizedAttributeSet = ::javax::print::attribute::AttributeSetUtilities$SynchronizedAttributeSet;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _AttributeSetUtilities$SynchronizedPrintRequestAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeSetUtilities$SynchronizedPrintRequestAttributeSet, serialVersionUID)},
	{}
};

$MethodInfo _AttributeSetUtilities$SynchronizedPrintRequestAttributeSet_MethodInfo_[] = {
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
	{"<init>", "(Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::*)($PrintRequestAttributeSet*)>(&AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::init$))},
	{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*size", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*isEmpty", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AttributeSetUtilities$SynchronizedPrintRequestAttributeSet_InnerClassesInfo_[] = {
	{"javax.print.attribute.AttributeSetUtilities$SynchronizedPrintRequestAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedPrintRequestAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedAttributeSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AttributeSetUtilities$SynchronizedPrintRequestAttributeSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.attribute.AttributeSetUtilities$SynchronizedPrintRequestAttributeSet",
	"javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet",
	"javax.print.attribute.PrintRequestAttributeSet",
	_AttributeSetUtilities$SynchronizedPrintRequestAttributeSet_FieldInfo_,
	_AttributeSetUtilities$SynchronizedPrintRequestAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_AttributeSetUtilities$SynchronizedPrintRequestAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.AttributeSetUtilities"
};

$Object* allocate$AttributeSetUtilities$SynchronizedPrintRequestAttributeSet($Class* clazz) {
	return $of($alloc(AttributeSetUtilities$SynchronizedPrintRequestAttributeSet));
}

$Attribute* AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::get($Class* category) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::get(category);
}

bool AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::add($Attribute* attribute) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::add(attribute);
}

bool AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::remove($Class* category) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::remove(category);
}

bool AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::remove($Attribute* attribute) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::remove(attribute);
}

bool AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::containsKey($Class* category) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::containsKey(category);
}

bool AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::containsValue($Attribute* attribute) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::containsValue(attribute);
}

bool AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::addAll($AttributeSet* attributes) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::addAll(attributes);
}

int32_t AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::size() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::size();
}

$AttributeArray* AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::toArray() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::toArray();
}

void AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::clear() {
	this->$AttributeSetUtilities$SynchronizedAttributeSet::clear();
}

bool AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::isEmpty() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::isEmpty();
}

bool AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::equals(Object$* o) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::equals(o);
}

int32_t AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::hashCode() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::hashCode();
}

$Object* AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::clone() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::clone();
}

$String* AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::toString() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::toString();
}

void AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::finalize() {
	this->$AttributeSetUtilities$SynchronizedAttributeSet::finalize();
}

void AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::init$($PrintRequestAttributeSet* attributeSet) {
	$AttributeSetUtilities$SynchronizedAttributeSet::init$(attributeSet);
}

AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::AttributeSetUtilities$SynchronizedPrintRequestAttributeSet() {
}

$Class* AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::load$($String* name, bool initialize) {
	$loadClass(AttributeSetUtilities$SynchronizedPrintRequestAttributeSet, name, initialize, &_AttributeSetUtilities$SynchronizedPrintRequestAttributeSet_ClassInfo_, allocate$AttributeSetUtilities$SynchronizedPrintRequestAttributeSet);
	return class$;
}

$Class* AttributeSetUtilities$SynchronizedPrintRequestAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax