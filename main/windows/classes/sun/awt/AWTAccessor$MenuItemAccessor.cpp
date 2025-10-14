#include <sun/awt/AWTAccessor$MenuItemAccessor.h>

#include <java/awt/MenuItem.h>
#include <java/awt/MenuShortcut.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $MenuItem = ::java::awt::MenuItem;
using $MenuShortcut = ::java::awt::MenuShortcut;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$MenuItemAccessor_MethodInfo_[] = {
	{"getActionCommandImpl", "(Ljava/awt/MenuItem;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLabel", "(Ljava/awt/MenuItem;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getShortcut", "(Ljava/awt/MenuItem;)Ljava/awt/MenuShortcut;", nullptr, $PUBLIC | $ABSTRACT},
	{"isEnabled", "(Ljava/awt/MenuItem;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isItemEnabled", "(Ljava/awt/MenuItem;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$MenuItemAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$MenuItemAccessor", "sun.awt.AWTAccessor", "MenuItemAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$MenuItemAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$MenuItemAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$MenuItemAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$MenuItemAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$MenuItemAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$MenuItemAccessor));
}

$Class* AWTAccessor$MenuItemAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$MenuItemAccessor, name, initialize, &_AWTAccessor$MenuItemAccessor_ClassInfo_, allocate$AWTAccessor$MenuItemAccessor);
	return class$;
}

$Class* AWTAccessor$MenuItemAccessor::class$ = nullptr;

	} // awt
} // sun