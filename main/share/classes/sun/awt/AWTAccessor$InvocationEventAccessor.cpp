#include <sun/awt/AWTAccessor$InvocationEventAccessor.h>

#include <java/awt/event/InvocationEvent.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$InvocationEventAccessor_MethodInfo_[] = {
	{"dispose", "(Ljava/awt/event/InvocationEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$InvocationEventAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$InvocationEventAccessor", "sun.awt.AWTAccessor", "InvocationEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$InvocationEventAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$InvocationEventAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$InvocationEventAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$InvocationEventAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$InvocationEventAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$InvocationEventAccessor));
}

$Class* AWTAccessor$InvocationEventAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$InvocationEventAccessor, name, initialize, &_AWTAccessor$InvocationEventAccessor_ClassInfo_, allocate$AWTAccessor$InvocationEventAccessor);
	return class$;
}

$Class* AWTAccessor$InvocationEventAccessor::class$ = nullptr;

	} // awt
} // sun