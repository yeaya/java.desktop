#include <javax/print/AttributeException.h>

#include <javax/print/attribute/Attribute.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$MethodInfo _AttributeException_MethodInfo_[] = {
	{"getUnsupportedAttributes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"getUnsupportedValues", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AttributeException_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.AttributeException",
	nullptr,
	nullptr,
	nullptr,
	_AttributeException_MethodInfo_
};

$Object* allocate$AttributeException($Class* clazz) {
	return $of($alloc(AttributeException));
}

$Class* AttributeException::load$($String* name, bool initialize) {
	$loadClass(AttributeException, name, initialize, &_AttributeException_ClassInfo_, allocate$AttributeException);
	return class$;
}

$Class* AttributeException::class$ = nullptr;

	} // print
} // javax