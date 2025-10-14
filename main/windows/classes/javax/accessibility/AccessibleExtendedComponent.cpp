#include <javax/accessibility/AccessibleExtendedComponent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleKeyBinding.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleKeyBinding = ::javax::accessibility::AccessibleKeyBinding;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleExtendedComponent_MethodInfo_[] = {
	{"getAccessibleKeyBinding", "()Ljavax/accessibility/AccessibleKeyBinding;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTitledBorderText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getToolTipText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleExtendedComponent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleExtendedComponent",
	nullptr,
	"javax.accessibility.AccessibleComponent",
	nullptr,
	_AccessibleExtendedComponent_MethodInfo_
};

$Object* allocate$AccessibleExtendedComponent($Class* clazz) {
	return $of($alloc(AccessibleExtendedComponent));
}

$Class* AccessibleExtendedComponent::load$($String* name, bool initialize) {
	$loadClass(AccessibleExtendedComponent, name, initialize, &_AccessibleExtendedComponent_ClassInfo_, allocate$AccessibleExtendedComponent);
	return class$;
}

$Class* AccessibleExtendedComponent::class$ = nullptr;

	} // accessibility
} // javax