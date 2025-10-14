#include <javax/print/attribute/AttributeSet.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/Attribute.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;

namespace javax {
	namespace print {
		namespace attribute {

$MethodInfo _AttributeSet_MethodInfo_[] = {
	{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"containsKey", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $ABSTRACT},
	{"containsValue", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(Ljava/lang/Class;)Ljavax/print/attribute/Attribute;", "(Ljava/lang/Class<*>;)Ljavax/print/attribute/Attribute;", $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $ABSTRACT},
	{"remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AttributeSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.attribute.AttributeSet",
	nullptr,
	nullptr,
	nullptr,
	_AttributeSet_MethodInfo_
};

$Object* allocate$AttributeSet($Class* clazz) {
	return $of($alloc(AttributeSet));
}

bool AttributeSet::equals(Object$* object) {
	 return this->$Object::equals(object);
}

int32_t AttributeSet::hashCode() {
	 return this->$Object::hashCode();
}

$Class* AttributeSet::load$($String* name, bool initialize) {
	$loadClass(AttributeSet, name, initialize, &_AttributeSet_ClassInfo_, allocate$AttributeSet);
	return class$;
}

$Class* AttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax