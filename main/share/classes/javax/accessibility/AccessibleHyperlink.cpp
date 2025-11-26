#include <javax/accessibility/AccessibleHyperlink.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleHyperlink_MethodInfo_[] = {
	{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleActionCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AccessibleHyperlink::*)()>(&AccessibleHyperlink::init$))},
	{"getAccessibleActionAnchor", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleActionObject", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEndIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getStartIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleHyperlink_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.accessibility.AccessibleHyperlink",
	"java.lang.Object",
	"javax.accessibility.AccessibleAction",
	nullptr,
	_AccessibleHyperlink_MethodInfo_
};

$Object* allocate$AccessibleHyperlink($Class* clazz) {
	return $of($alloc(AccessibleHyperlink));
}

void AccessibleHyperlink::init$() {
}

AccessibleHyperlink::AccessibleHyperlink() {
}

$Class* AccessibleHyperlink::load$($String* name, bool initialize) {
	$loadClass(AccessibleHyperlink, name, initialize, &_AccessibleHyperlink_ClassInfo_, allocate$AccessibleHyperlink);
	return class$;
}

$Class* AccessibleHyperlink::class$ = nullptr;

	} // accessibility
} // javax