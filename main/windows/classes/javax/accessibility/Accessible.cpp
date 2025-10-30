#include <javax/accessibility/Accessible.h>

#include <javax/accessibility/AccessibleContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace javax {
	namespace accessibility {

$MethodInfo _Accessible_MethodInfo_[] = {
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Accessible_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.Accessible",
	nullptr,
	nullptr,
	nullptr,
	_Accessible_MethodInfo_
};

$Object* allocate$Accessible($Class* clazz) {
	return $of($alloc(Accessible));
}

$Class* Accessible::load$($String* name, bool initialize) {
	$loadClass(Accessible, name, initialize, &_Accessible_ClassInfo_, allocate$Accessible);
	return class$;
}

$Class* Accessible::class$ = nullptr;

	} // accessibility
} // javax