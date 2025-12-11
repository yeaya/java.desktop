#include <javax/swing/text/SimpleAttributeSet$EmptyAttributeSet.h>

#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _SimpleAttributeSet$EmptyAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SimpleAttributeSet$EmptyAttributeSet, serialVersionUID)},
	{}
};

$MethodInfo _SimpleAttributeSet$EmptyAttributeSet_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SimpleAttributeSet$EmptyAttributeSet::*)()>(&SimpleAttributeSet$EmptyAttributeSet::init$))},
	{"containsAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAttributes", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"copyAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttributeCount", "()I", nullptr, $PUBLIC},
	{"getAttributeNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC},
	{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEqual", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SimpleAttributeSet$EmptyAttributeSet_InnerClassesInfo_[] = {
	{"javax.swing.text.SimpleAttributeSet$EmptyAttributeSet", "javax.swing.text.SimpleAttributeSet", "EmptyAttributeSet", $STATIC},
	{}
};

$ClassInfo _SimpleAttributeSet$EmptyAttributeSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.SimpleAttributeSet$EmptyAttributeSet",
	"java.lang.Object",
	"javax.swing.text.AttributeSet,java.io.Serializable",
	_SimpleAttributeSet$EmptyAttributeSet_FieldInfo_,
	_SimpleAttributeSet$EmptyAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_SimpleAttributeSet$EmptyAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.SimpleAttributeSet"
};

$Object* allocate$SimpleAttributeSet$EmptyAttributeSet($Class* clazz) {
	return $of($alloc(SimpleAttributeSet$EmptyAttributeSet));
}

$Object* SimpleAttributeSet$EmptyAttributeSet::clone() {
	 return this->$AttributeSet::clone();
}

$String* SimpleAttributeSet$EmptyAttributeSet::toString() {
	 return this->$AttributeSet::toString();
}

void SimpleAttributeSet$EmptyAttributeSet::finalize() {
	this->$AttributeSet::finalize();
}

void SimpleAttributeSet$EmptyAttributeSet::init$() {
}

int32_t SimpleAttributeSet$EmptyAttributeSet::getAttributeCount() {
	return 0;
}

bool SimpleAttributeSet$EmptyAttributeSet::isDefined(Object$* attrName) {
	return false;
}

bool SimpleAttributeSet$EmptyAttributeSet::isEqual($AttributeSet* attr) {
	return ($nc(attr)->getAttributeCount() == 0);
}

$AttributeSet* SimpleAttributeSet$EmptyAttributeSet::copyAttributes() {
	return this;
}

$Object* SimpleAttributeSet$EmptyAttributeSet::getAttribute(Object$* key) {
	return $of(nullptr);
}

$Enumeration* SimpleAttributeSet$EmptyAttributeSet::getAttributeNames() {
	return $Collections::emptyEnumeration();
}

bool SimpleAttributeSet$EmptyAttributeSet::containsAttribute(Object$* name, Object$* value) {
	return false;
}

bool SimpleAttributeSet$EmptyAttributeSet::containsAttributes($AttributeSet* attributes) {
	return ($nc(attributes)->getAttributeCount() == 0);
}

$AttributeSet* SimpleAttributeSet$EmptyAttributeSet::getResolveParent() {
	return nullptr;
}

bool SimpleAttributeSet$EmptyAttributeSet::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	return (($instanceOf($AttributeSet, obj)) && ($nc(($cast($AttributeSet, obj)))->getAttributeCount() == 0));
}

int32_t SimpleAttributeSet$EmptyAttributeSet::hashCode() {
	return 0;
}

SimpleAttributeSet$EmptyAttributeSet::SimpleAttributeSet$EmptyAttributeSet() {
}

$Class* SimpleAttributeSet$EmptyAttributeSet::load$($String* name, bool initialize) {
	$loadClass(SimpleAttributeSet$EmptyAttributeSet, name, initialize, &_SimpleAttributeSet$EmptyAttributeSet_ClassInfo_, allocate$SimpleAttributeSet$EmptyAttributeSet);
	return class$;
}

$Class* SimpleAttributeSet$EmptyAttributeSet::class$ = nullptr;

		} // text
	} // swing
} // javax