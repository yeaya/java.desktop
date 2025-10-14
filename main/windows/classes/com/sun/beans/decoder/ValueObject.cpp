#include <com/sun/beans/decoder/ValueObject.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _ValueObject_MethodInfo_[] = {
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"isVoid", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ValueObject_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.beans.decoder.ValueObject",
	nullptr,
	nullptr,
	nullptr,
	_ValueObject_MethodInfo_
};

$Object* allocate$ValueObject($Class* clazz) {
	return $of($alloc(ValueObject));
}

$Class* ValueObject::load$($String* name, bool initialize) {
	$loadClass(ValueObject, name, initialize, &_ValueObject_ClassInfo_, allocate$ValueObject);
	return class$;
}

$Class* ValueObject::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com