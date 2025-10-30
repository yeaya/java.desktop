#include <sun/awt/AWTAccessor$AWTEventAccessor.h>

#include <java/awt/AWTEvent.h>
#include <java/security/AccessControlContext.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$AWTEventAccessor_MethodInfo_[] = {
	{"getAccessControlContext", "(Ljava/awt/AWTEvent;)Ljava/security/AccessControlContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBData", "(Ljava/awt/AWTEvent;)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"isSystemGenerated", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setBData", "(Ljava/awt/AWTEvent;[B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPosted", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSystemGenerated", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$AWTEventAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$AWTEventAccessor", "sun.awt.AWTAccessor", "AWTEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$AWTEventAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$AWTEventAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$AWTEventAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$AWTEventAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$AWTEventAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$AWTEventAccessor));
}

$Class* AWTAccessor$AWTEventAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$AWTEventAccessor, name, initialize, &_AWTAccessor$AWTEventAccessor_ClassInfo_, allocate$AWTAccessor$AWTEventAccessor);
	return class$;
}

$Class* AWTAccessor$AWTEventAccessor::class$ = nullptr;

	} // awt
} // sun