#include <javax/print/attribute/AttributeSetUtilities$UnmodifiableAttributeSet.h>

#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/UnmodifiableSetException.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;
using $UnmodifiableSetException = ::javax::print::attribute::UnmodifiableSetException;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _AttributeSetUtilities$UnmodifiableAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeSetUtilities$UnmodifiableAttributeSet, serialVersionUID)},
	{"attrset", "Ljavax/print/attribute/AttributeSet;", nullptr, $PRIVATE, $field(AttributeSetUtilities$UnmodifiableAttributeSet, attrset)},
	{}
};

$MethodInfo _AttributeSetUtilities$UnmodifiableAttributeSet_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljavax/print/attribute/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeSetUtilities$UnmodifiableAttributeSet::*)($AttributeSet*)>(&AttributeSetUtilities$UnmodifiableAttributeSet::init$))},
	{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"containsKey", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC},
	{"containsValue", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Class;)Ljavax/print/attribute/Attribute;", "(Ljava/lang/Class<*>;)Ljavax/print/attribute/Attribute;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $SYNCHRONIZED},
	{"remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AttributeSetUtilities$UnmodifiableAttributeSet_InnerClassesInfo_[] = {
	{"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiableAttributeSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AttributeSetUtilities$UnmodifiableAttributeSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet",
	"java.lang.Object",
	"javax.print.attribute.AttributeSet,java.io.Serializable",
	_AttributeSetUtilities$UnmodifiableAttributeSet_FieldInfo_,
	_AttributeSetUtilities$UnmodifiableAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_AttributeSetUtilities$UnmodifiableAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.AttributeSetUtilities"
};

$Object* allocate$AttributeSetUtilities$UnmodifiableAttributeSet($Class* clazz) {
	return $of($alloc(AttributeSetUtilities$UnmodifiableAttributeSet));
}

$Object* AttributeSetUtilities$UnmodifiableAttributeSet::clone() {
	 return this->$AttributeSet::clone();
}

$String* AttributeSetUtilities$UnmodifiableAttributeSet::toString() {
	 return this->$AttributeSet::toString();
}

void AttributeSetUtilities$UnmodifiableAttributeSet::finalize() {
	this->$AttributeSet::finalize();
}

void AttributeSetUtilities$UnmodifiableAttributeSet::init$($AttributeSet* attributeSet) {
	$set(this, attrset, attributeSet);
}

$Attribute* AttributeSetUtilities$UnmodifiableAttributeSet::get($Class* key) {
	return $nc(this->attrset)->get(key);
}

bool AttributeSetUtilities$UnmodifiableAttributeSet::add($Attribute* attribute) {
	$throwNew($UnmodifiableSetException);
	$shouldNotReachHere();
}

bool AttributeSetUtilities$UnmodifiableAttributeSet::remove($Class* category) {
	$synchronized(this) {
		$throwNew($UnmodifiableSetException);
	}
	$shouldNotReachHere();
}

bool AttributeSetUtilities$UnmodifiableAttributeSet::remove($Attribute* attribute) {
	$throwNew($UnmodifiableSetException);
	$shouldNotReachHere();
}

bool AttributeSetUtilities$UnmodifiableAttributeSet::containsKey($Class* category) {
	return $nc(this->attrset)->containsKey(category);
}

bool AttributeSetUtilities$UnmodifiableAttributeSet::containsValue($Attribute* attribute) {
	return $nc(this->attrset)->containsValue(attribute);
}

bool AttributeSetUtilities$UnmodifiableAttributeSet::addAll($AttributeSet* attributes) {
	$throwNew($UnmodifiableSetException);
	$shouldNotReachHere();
}

int32_t AttributeSetUtilities$UnmodifiableAttributeSet::size() {
	return $nc(this->attrset)->size();
}

$AttributeArray* AttributeSetUtilities$UnmodifiableAttributeSet::toArray() {
	return $nc(this->attrset)->toArray();
}

void AttributeSetUtilities$UnmodifiableAttributeSet::clear() {
	$throwNew($UnmodifiableSetException);
}

bool AttributeSetUtilities$UnmodifiableAttributeSet::isEmpty() {
	return $nc(this->attrset)->isEmpty();
}

bool AttributeSetUtilities$UnmodifiableAttributeSet::equals(Object$* o) {
	return $nc(this->attrset)->equals(o);
}

int32_t AttributeSetUtilities$UnmodifiableAttributeSet::hashCode() {
	return $nc(this->attrset)->hashCode();
}

AttributeSetUtilities$UnmodifiableAttributeSet::AttributeSetUtilities$UnmodifiableAttributeSet() {
}

$Class* AttributeSetUtilities$UnmodifiableAttributeSet::load$($String* name, bool initialize) {
	$loadClass(AttributeSetUtilities$UnmodifiableAttributeSet, name, initialize, &_AttributeSetUtilities$UnmodifiableAttributeSet_ClassInfo_, allocate$AttributeSetUtilities$UnmodifiableAttributeSet);
	return class$;
}

$Class* AttributeSetUtilities$UnmodifiableAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax