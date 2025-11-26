#include <sun/awt/AWTAccessor$AccessibleBundleAccessor.h>

#include <javax/accessibility/AccessibleBundle.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleBundle = ::javax::accessibility::AccessibleBundle;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$AccessibleBundleAccessor_MethodInfo_[] = {
	{"getKey", "(Ljavax/accessibility/AccessibleBundle;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$AccessibleBundleAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$AccessibleBundleAccessor", "sun.awt.AWTAccessor", "AccessibleBundleAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$AccessibleBundleAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$AccessibleBundleAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$AccessibleBundleAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$AccessibleBundleAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$AccessibleBundleAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$AccessibleBundleAccessor));
}

$Class* AWTAccessor$AccessibleBundleAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$AccessibleBundleAccessor, name, initialize, &_AWTAccessor$AccessibleBundleAccessor_ClassInfo_, allocate$AWTAccessor$AccessibleBundleAccessor);
	return class$;
}

$Class* AWTAccessor$AccessibleBundleAccessor::class$ = nullptr;

	} // awt
} // sun