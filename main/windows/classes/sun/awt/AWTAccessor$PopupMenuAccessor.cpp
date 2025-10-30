#include <sun/awt/AWTAccessor$PopupMenuAccessor.h>

#include <java/awt/PopupMenu.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $PopupMenu = ::java::awt::PopupMenu;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$PopupMenuAccessor_MethodInfo_[] = {
	{"isTrayIconPopup", "(Ljava/awt/PopupMenu;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$PopupMenuAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$PopupMenuAccessor", "sun.awt.AWTAccessor", "PopupMenuAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$PopupMenuAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$PopupMenuAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$PopupMenuAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$PopupMenuAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$PopupMenuAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$PopupMenuAccessor));
}

$Class* AWTAccessor$PopupMenuAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$PopupMenuAccessor, name, initialize, &_AWTAccessor$PopupMenuAccessor_ClassInfo_, allocate$AWTAccessor$PopupMenuAccessor);
	return class$;
}

$Class* AWTAccessor$PopupMenuAccessor::class$ = nullptr;

	} // awt
} // sun