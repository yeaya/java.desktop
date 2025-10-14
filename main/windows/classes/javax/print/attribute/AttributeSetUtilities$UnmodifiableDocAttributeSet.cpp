#include <javax/print/attribute/AttributeSetUtilities$UnmodifiableDocAttributeSet.h>

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
#include <javax/print/attribute/DocAttributeSet.h>
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
using $DocAttributeSet = ::javax::print::attribute::DocAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _AttributeSetUtilities$UnmodifiableDocAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeSetUtilities$UnmodifiableDocAttributeSet, serialVersionUID)},
	{}
};

$MethodInfo _AttributeSetUtilities$UnmodifiableDocAttributeSet_MethodInfo_[] = {
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
	{"<init>", "(Ljavax/print/attribute/DocAttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeSetUtilities$UnmodifiableDocAttributeSet::*)($DocAttributeSet*)>(&AttributeSetUtilities$UnmodifiableDocAttributeSet::init$))},
	{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AttributeSetUtilities$UnmodifiableDocAttributeSet_InnerClassesInfo_[] = {
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiableDocAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiableDocAttributeSet", $PRIVATE | $STATIC},
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiableAttributeSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AttributeSetUtilities$UnmodifiableDocAttributeSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.attribute.AttributeSetUtilities$UnmodifiableDocAttributeSet",
	"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet",
	"javax.print.attribute.DocAttributeSet",
	_AttributeSetUtilities$UnmodifiableDocAttributeSet_FieldInfo_,
	_AttributeSetUtilities$UnmodifiableDocAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_AttributeSetUtilities$UnmodifiableDocAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.AttributeSetUtilities"
};

$Object* allocate$AttributeSetUtilities$UnmodifiableDocAttributeSet($Class* clazz) {
	return $of($alloc(AttributeSetUtilities$UnmodifiableDocAttributeSet));
}

$Attribute* AttributeSetUtilities$UnmodifiableDocAttributeSet::get($Class* key) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::get(key);
}

bool AttributeSetUtilities$UnmodifiableDocAttributeSet::add($Attribute* attribute) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::add(attribute);
}

bool AttributeSetUtilities$UnmodifiableDocAttributeSet::remove($Class* category) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::remove(category);
}

bool AttributeSetUtilities$UnmodifiableDocAttributeSet::remove($Attribute* attribute) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::remove(attribute);
}

bool AttributeSetUtilities$UnmodifiableDocAttributeSet::containsKey($Class* category) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::containsKey(category);
}

bool AttributeSetUtilities$UnmodifiableDocAttributeSet::containsValue($Attribute* attribute) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::containsValue(attribute);
}

bool AttributeSetUtilities$UnmodifiableDocAttributeSet::addAll($AttributeSet* attributes) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::addAll(attributes);
}

int32_t AttributeSetUtilities$UnmodifiableDocAttributeSet::size() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::size();
}

$AttributeArray* AttributeSetUtilities$UnmodifiableDocAttributeSet::toArray() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::toArray();
}

void AttributeSetUtilities$UnmodifiableDocAttributeSet::clear() {
	this->$AttributeSetUtilities$UnmodifiableAttributeSet::clear();
}

bool AttributeSetUtilities$UnmodifiableDocAttributeSet::isEmpty() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::isEmpty();
}

bool AttributeSetUtilities$UnmodifiableDocAttributeSet::equals(Object$* o) {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::equals(o);
}

int32_t AttributeSetUtilities$UnmodifiableDocAttributeSet::hashCode() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::hashCode();
}

$Object* AttributeSetUtilities$UnmodifiableDocAttributeSet::clone() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::clone();
}

$String* AttributeSetUtilities$UnmodifiableDocAttributeSet::toString() {
	 return this->$AttributeSetUtilities$UnmodifiableAttributeSet::toString();
}

void AttributeSetUtilities$UnmodifiableDocAttributeSet::finalize() {
	this->$AttributeSetUtilities$UnmodifiableAttributeSet::finalize();
}

void AttributeSetUtilities$UnmodifiableDocAttributeSet::init$($DocAttributeSet* attributeSet) {
	$AttributeSetUtilities$UnmodifiableAttributeSet::init$(attributeSet);
}

AttributeSetUtilities$UnmodifiableDocAttributeSet::AttributeSetUtilities$UnmodifiableDocAttributeSet() {
}

$Class* AttributeSetUtilities$UnmodifiableDocAttributeSet::load$($String* name, bool initialize) {
	$loadClass(AttributeSetUtilities$UnmodifiableDocAttributeSet, name, initialize, &_AttributeSetUtilities$UnmodifiableDocAttributeSet_ClassInfo_, allocate$AttributeSetUtilities$UnmodifiableDocAttributeSet);
	return class$;
}

$Class* AttributeSetUtilities$UnmodifiableDocAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax