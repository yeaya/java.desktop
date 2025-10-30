#include <sun/awt/AWTAccessor$ClientPropertyKeyAccessor.h>

#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$ClientPropertyKeyAccessor_MethodInfo_[] = {
	{"getJComponent_TRANSFER_HANDLER", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$ClientPropertyKeyAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$ClientPropertyKeyAccessor", "sun.awt.AWTAccessor", "ClientPropertyKeyAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$ClientPropertyKeyAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$ClientPropertyKeyAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$ClientPropertyKeyAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$ClientPropertyKeyAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$ClientPropertyKeyAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$ClientPropertyKeyAccessor));
}

$Class* AWTAccessor$ClientPropertyKeyAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$ClientPropertyKeyAccessor, name, initialize, &_AWTAccessor$ClientPropertyKeyAccessor_ClassInfo_, allocate$AWTAccessor$ClientPropertyKeyAccessor);
	return class$;
}

$Class* AWTAccessor$ClientPropertyKeyAccessor::class$ = nullptr;

	} // awt
} // sun