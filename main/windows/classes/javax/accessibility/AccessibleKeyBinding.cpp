#include <javax/accessibility/AccessibleKeyBinding.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleKeyBinding_MethodInfo_[] = {
	{"getAccessibleKeyBinding", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleKeyBindingCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleKeyBinding_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleKeyBinding",
	nullptr,
	nullptr,
	nullptr,
	_AccessibleKeyBinding_MethodInfo_
};

$Object* allocate$AccessibleKeyBinding($Class* clazz) {
	return $of($alloc(AccessibleKeyBinding));
}

$Class* AccessibleKeyBinding::load$($String* name, bool initialize) {
	$loadClass(AccessibleKeyBinding, name, initialize, &_AccessibleKeyBinding_ClassInfo_, allocate$AccessibleKeyBinding);
	return class$;
}

$Class* AccessibleKeyBinding::class$ = nullptr;

	} // accessibility
} // javax