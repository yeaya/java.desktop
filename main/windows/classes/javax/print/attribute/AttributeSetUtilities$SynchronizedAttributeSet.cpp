#include <javax/print/attribute/AttributeSetUtilities$SynchronizedAttributeSet.h>

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
#include <javax/print/attribute/AttributeSetUtilities.h>
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

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _AttributeSetUtilities$SynchronizedAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeSetUtilities$SynchronizedAttributeSet, serialVersionUID)},
	{"attrset", "Ljavax/print/attribute/AttributeSet;", nullptr, $PRIVATE, $field(AttributeSetUtilities$SynchronizedAttributeSet, attrset)},
	{}
};

$MethodInfo _AttributeSetUtilities$SynchronizedAttributeSet_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljavax/print/attribute/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeSetUtilities$SynchronizedAttributeSet::*)($AttributeSet*)>(&AttributeSetUtilities$SynchronizedAttributeSet::init$))},
	{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"clear", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"containsKey", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $SYNCHRONIZED},
	{"containsValue", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"get", "(Ljava/lang/Class;)Ljavax/print/attribute/Attribute;", "(Ljava/lang/Class<*>;)Ljavax/print/attribute/Attribute;", $PUBLIC | $SYNCHRONIZED},
	{"hashCode", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"remove", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $SYNCHRONIZED},
	{"remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"size", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AttributeSetUtilities$SynchronizedAttributeSet_InnerClassesInfo_[] = {
	{"javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedAttributeSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AttributeSetUtilities$SynchronizedAttributeSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet",
	"java.lang.Object",
	"javax.print.attribute.AttributeSet,java.io.Serializable",
	_AttributeSetUtilities$SynchronizedAttributeSet_FieldInfo_,
	_AttributeSetUtilities$SynchronizedAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_AttributeSetUtilities$SynchronizedAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.AttributeSetUtilities"
};

$Object* allocate$AttributeSetUtilities$SynchronizedAttributeSet($Class* clazz) {
	return $of($alloc(AttributeSetUtilities$SynchronizedAttributeSet));
}

$Object* AttributeSetUtilities$SynchronizedAttributeSet::clone() {
	 return this->$AttributeSet::clone();
}

$String* AttributeSetUtilities$SynchronizedAttributeSet::toString() {
	 return this->$AttributeSet::toString();
}

void AttributeSetUtilities$SynchronizedAttributeSet::finalize() {
	this->$AttributeSet::finalize();
}

void AttributeSetUtilities$SynchronizedAttributeSet::init$($AttributeSet* attributeSet) {
	$set(this, attrset, attributeSet);
}

$Attribute* AttributeSetUtilities$SynchronizedAttributeSet::get($Class* category) {
	$synchronized(this) {
		return $nc(this->attrset)->get(category);
	}
}

bool AttributeSetUtilities$SynchronizedAttributeSet::add($Attribute* attribute) {
	$synchronized(this) {
		return $nc(this->attrset)->add(attribute);
	}
}

bool AttributeSetUtilities$SynchronizedAttributeSet::remove($Class* category) {
	$synchronized(this) {
		return $nc(this->attrset)->remove(category);
	}
}

bool AttributeSetUtilities$SynchronizedAttributeSet::remove($Attribute* attribute) {
	$synchronized(this) {
		return $nc(this->attrset)->remove(attribute);
	}
}

bool AttributeSetUtilities$SynchronizedAttributeSet::containsKey($Class* category) {
	$synchronized(this) {
		return $nc(this->attrset)->containsKey(category);
	}
}

bool AttributeSetUtilities$SynchronizedAttributeSet::containsValue($Attribute* attribute) {
	$synchronized(this) {
		return $nc(this->attrset)->containsValue(attribute);
	}
}

bool AttributeSetUtilities$SynchronizedAttributeSet::addAll($AttributeSet* attributes) {
	$synchronized(this) {
		return $nc(this->attrset)->addAll(attributes);
	}
}

int32_t AttributeSetUtilities$SynchronizedAttributeSet::size() {
	$synchronized(this) {
		return $nc(this->attrset)->size();
	}
}

$AttributeArray* AttributeSetUtilities$SynchronizedAttributeSet::toArray() {
	$synchronized(this) {
		return $nc(this->attrset)->toArray();
	}
}

void AttributeSetUtilities$SynchronizedAttributeSet::clear() {
	$synchronized(this) {
		$nc(this->attrset)->clear();
	}
}

bool AttributeSetUtilities$SynchronizedAttributeSet::isEmpty() {
	$synchronized(this) {
		return $nc(this->attrset)->isEmpty();
	}
}

bool AttributeSetUtilities$SynchronizedAttributeSet::equals(Object$* o) {
	$synchronized(this) {
		return $nc(this->attrset)->equals(o);
	}
}

int32_t AttributeSetUtilities$SynchronizedAttributeSet::hashCode() {
	$synchronized(this) {
		return $nc(this->attrset)->hashCode();
	}
}

AttributeSetUtilities$SynchronizedAttributeSet::AttributeSetUtilities$SynchronizedAttributeSet() {
}

$Class* AttributeSetUtilities$SynchronizedAttributeSet::load$($String* name, bool initialize) {
	$loadClass(AttributeSetUtilities$SynchronizedAttributeSet, name, initialize, &_AttributeSetUtilities$SynchronizedAttributeSet_ClassInfo_, allocate$AttributeSetUtilities$SynchronizedAttributeSet);
	return class$;
}

$Class* AttributeSetUtilities$SynchronizedAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax