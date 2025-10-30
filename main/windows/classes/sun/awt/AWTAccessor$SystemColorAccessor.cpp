#include <sun/awt/AWTAccessor$SystemColorAccessor.h>

#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$SystemColorAccessor_MethodInfo_[] = {
	{"updateSystemColors", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$SystemColorAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$SystemColorAccessor", "sun.awt.AWTAccessor", "SystemColorAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$SystemColorAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$SystemColorAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$SystemColorAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$SystemColorAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$SystemColorAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$SystemColorAccessor));
}

$Class* AWTAccessor$SystemColorAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$SystemColorAccessor, name, initialize, &_AWTAccessor$SystemColorAccessor_ClassInfo_, allocate$AWTAccessor$SystemColorAccessor);
	return class$;
}

$Class* AWTAccessor$SystemColorAccessor::class$ = nullptr;

	} // awt
} // sun