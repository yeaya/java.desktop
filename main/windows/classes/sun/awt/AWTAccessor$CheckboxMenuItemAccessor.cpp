#include <sun/awt/AWTAccessor$CheckboxMenuItemAccessor.h>

#include <java/awt/CheckboxMenuItem.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$CheckboxMenuItemAccessor_MethodInfo_[] = {
	{"getState", "(Ljava/awt/CheckboxMenuItem;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$CheckboxMenuItemAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$CheckboxMenuItemAccessor", "sun.awt.AWTAccessor", "CheckboxMenuItemAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$CheckboxMenuItemAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$CheckboxMenuItemAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$CheckboxMenuItemAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$CheckboxMenuItemAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$CheckboxMenuItemAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$CheckboxMenuItemAccessor));
}

$Class* AWTAccessor$CheckboxMenuItemAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$CheckboxMenuItemAccessor, name, initialize, &_AWTAccessor$CheckboxMenuItemAccessor_ClassInfo_, allocate$AWTAccessor$CheckboxMenuItemAccessor);
	return class$;
}

$Class* AWTAccessor$CheckboxMenuItemAccessor::class$ = nullptr;

	} // awt
} // sun