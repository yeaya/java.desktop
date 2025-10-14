#include <javax/accessibility/AccessibleSelection.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/Accessible.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleSelection_MethodInfo_[] = {
	{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"clearAccessibleSelection", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleSelection_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleSelection",
	nullptr,
	nullptr,
	nullptr,
	_AccessibleSelection_MethodInfo_
};

$Object* allocate$AccessibleSelection($Class* clazz) {
	return $of($alloc(AccessibleSelection));
}

$Class* AccessibleSelection::load$($String* name, bool initialize) {
	$loadClass(AccessibleSelection, name, initialize, &_AccessibleSelection_ClassInfo_, allocate$AccessibleSelection);
	return class$;
}

$Class* AccessibleSelection::class$ = nullptr;

	} // accessibility
} // javax