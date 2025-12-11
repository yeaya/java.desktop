#include <sun/awt/AWTAccessor$AccessibleContextAccessor.h>

#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$AccessibleContextAccessor_MethodInfo_[] = {
	{"getAppContext", "(Ljavax/accessibility/AccessibleContext;)Lsun/awt/AppContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNativeAXResource", "(Ljavax/accessibility/AccessibleContext;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"setAppContext", "(Ljavax/accessibility/AccessibleContext;Lsun/awt/AppContext;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setNativeAXResource", "(Ljavax/accessibility/AccessibleContext;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$AccessibleContextAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$AccessibleContextAccessor", "sun.awt.AWTAccessor", "AccessibleContextAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$AccessibleContextAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$AccessibleContextAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$AccessibleContextAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$AccessibleContextAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$AccessibleContextAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$AccessibleContextAccessor));
}

$Class* AWTAccessor$AccessibleContextAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$AccessibleContextAccessor, name, initialize, &_AWTAccessor$AccessibleContextAccessor_ClassInfo_, allocate$AWTAccessor$AccessibleContextAccessor);
	return class$;
}

$Class* AWTAccessor$AccessibleContextAccessor::class$ = nullptr;

	} // awt
} // sun