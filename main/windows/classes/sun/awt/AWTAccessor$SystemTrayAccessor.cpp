#include <sun/awt/AWTAccessor$SystemTrayAccessor.h>

#include <java/awt/SystemTray.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $SystemTray = ::java::awt::SystemTray;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$SystemTrayAccessor_MethodInfo_[] = {
	{"firePropertyChange", "(Ljava/awt/SystemTray;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$SystemTrayAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$SystemTrayAccessor", "sun.awt.AWTAccessor", "SystemTrayAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$SystemTrayAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$SystemTrayAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$SystemTrayAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$SystemTrayAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$SystemTrayAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$SystemTrayAccessor));
}

$Class* AWTAccessor$SystemTrayAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$SystemTrayAccessor, name, initialize, &_AWTAccessor$SystemTrayAccessor_ClassInfo_, allocate$AWTAccessor$SystemTrayAccessor);
	return class$;
}

$Class* AWTAccessor$SystemTrayAccessor::class$ = nullptr;

	} // awt
} // sun