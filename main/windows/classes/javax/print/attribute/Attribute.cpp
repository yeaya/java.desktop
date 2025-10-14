#include <javax/print/attribute/Attribute.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {
		namespace attribute {

$MethodInfo _Attribute_MethodInfo_[] = {
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Attribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.attribute.Attribute",
	nullptr,
	"java.io.Serializable",
	nullptr,
	_Attribute_MethodInfo_
};

$Object* allocate$Attribute($Class* clazz) {
	return $of($alloc(Attribute));
}

$Class* Attribute::load$($String* name, bool initialize) {
	$loadClass(Attribute, name, initialize, &_Attribute_ClassInfo_, allocate$Attribute);
	return class$;
}

$Class* Attribute::class$ = nullptr;

		} // attribute
	} // print
} // javax