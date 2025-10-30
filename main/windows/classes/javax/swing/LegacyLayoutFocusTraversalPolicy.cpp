#include <javax/swing/LegacyLayoutFocusTraversalPolicy.h>

#include <java/util/Comparator.h>
#include <javax/swing/CompareTabOrderComparator.h>
#include <javax/swing/DefaultFocusManager.h>
#include <javax/swing/LayoutFocusTraversalPolicy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $CompareTabOrderComparator = ::javax::swing::CompareTabOrderComparator;
using $DefaultFocusManager = ::javax::swing::DefaultFocusManager;
using $LayoutFocusTraversalPolicy = ::javax::swing::LayoutFocusTraversalPolicy;

namespace javax {
	namespace swing {

$MethodInfo _LegacyLayoutFocusTraversalPolicy_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/DefaultFocusManager;)V", nullptr, 0, $method(static_cast<void(LegacyLayoutFocusTraversalPolicy::*)($DefaultFocusManager*)>(&LegacyLayoutFocusTraversalPolicy::init$))},
	{}
};

$ClassInfo _LegacyLayoutFocusTraversalPolicy_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.LegacyLayoutFocusTraversalPolicy",
	"javax.swing.LayoutFocusTraversalPolicy",
	nullptr,
	nullptr,
	_LegacyLayoutFocusTraversalPolicy_MethodInfo_
};

$Object* allocate$LegacyLayoutFocusTraversalPolicy($Class* clazz) {
	return $of($alloc(LegacyLayoutFocusTraversalPolicy));
}

void LegacyLayoutFocusTraversalPolicy::init$($DefaultFocusManager* defaultFocusManager) {
	$LayoutFocusTraversalPolicy::init$($$new($CompareTabOrderComparator, defaultFocusManager));
}

LegacyLayoutFocusTraversalPolicy::LegacyLayoutFocusTraversalPolicy() {
}

$Class* LegacyLayoutFocusTraversalPolicy::load$($String* name, bool initialize) {
	$loadClass(LegacyLayoutFocusTraversalPolicy, name, initialize, &_LegacyLayoutFocusTraversalPolicy_ClassInfo_, allocate$LegacyLayoutFocusTraversalPolicy);
	return class$;
}

$Class* LegacyLayoutFocusTraversalPolicy::class$ = nullptr;

	} // swing
} // javax