#include <sun/awt/AWTAccessor$TrayIconAccessor.h>

#include <java/awt/TrayIcon.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $TrayIcon = ::java::awt::TrayIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$TrayIconAccessor_MethodInfo_[] = {
	{"addNotify", "(Ljava/awt/TrayIcon;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.AWTException"},
	{"removeNotify", "(Ljava/awt/TrayIcon;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$TrayIconAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$TrayIconAccessor", "sun.awt.AWTAccessor", "TrayIconAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$TrayIconAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$TrayIconAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$TrayIconAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$TrayIconAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$TrayIconAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$TrayIconAccessor));
}

$Class* AWTAccessor$TrayIconAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$TrayIconAccessor, name, initialize, &_AWTAccessor$TrayIconAccessor_ClassInfo_, allocate$AWTAccessor$TrayIconAccessor);
	return class$;
}

$Class* AWTAccessor$TrayIconAccessor::class$ = nullptr;

	} // awt
} // sun