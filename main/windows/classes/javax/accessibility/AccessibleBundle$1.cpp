#include <javax/accessibility/AccessibleBundle$1.h>

#include <javax/accessibility/AccessibleBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleBundle = ::javax::accessibility::AccessibleBundle;
using $AWTAccessor$AccessibleBundleAccessor = ::sun::awt::AWTAccessor$AccessibleBundleAccessor;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleBundle$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AccessibleBundle$1::*)()>(&AccessibleBundle$1::init$))},
	{"getKey", "(Ljavax/accessibility/AccessibleBundle;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AccessibleBundle$1_EnclosingMethodInfo_ = {
	"javax.accessibility.AccessibleBundle",
	nullptr,
	nullptr
};

$InnerClassInfo _AccessibleBundle$1_InnerClassesInfo_[] = {
	{"javax.accessibility.AccessibleBundle$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$AccessibleBundleAccessor", "sun.awt.AWTAccessor", "AccessibleBundleAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleBundle$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.accessibility.AccessibleBundle$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$AccessibleBundleAccessor",
	nullptr,
	_AccessibleBundle$1_MethodInfo_,
	nullptr,
	&_AccessibleBundle$1_EnclosingMethodInfo_,
	_AccessibleBundle$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.accessibility.AccessibleBundle"
};

$Object* allocate$AccessibleBundle$1($Class* clazz) {
	return $of($alloc(AccessibleBundle$1));
}

void AccessibleBundle$1::init$() {
}

$String* AccessibleBundle$1::getKey($AccessibleBundle* accessibleBundle) {
	return $nc(accessibleBundle)->key;
}

AccessibleBundle$1::AccessibleBundle$1() {
}

$Class* AccessibleBundle$1::load$($String* name, bool initialize) {
	$loadClass(AccessibleBundle$1, name, initialize, &_AccessibleBundle$1_ClassInfo_, allocate$AccessibleBundle$1);
	return class$;
}

$Class* AccessibleBundle$1::class$ = nullptr;

	} // accessibility
} // javax