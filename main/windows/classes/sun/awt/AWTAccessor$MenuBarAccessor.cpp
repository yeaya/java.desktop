#include <sun/awt/AWTAccessor$MenuBarAccessor.h>

#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$MenuBarAccessor_MethodInfo_[] = {
	{"getHelpMenu", "(Ljava/awt/MenuBar;)Ljava/awt/Menu;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMenus", "(Ljava/awt/MenuBar;)Ljava/util/Vector;", "(Ljava/awt/MenuBar;)Ljava/util/Vector<Ljava/awt/Menu;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$MenuBarAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$MenuBarAccessor", "sun.awt.AWTAccessor", "MenuBarAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$MenuBarAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$MenuBarAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$MenuBarAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$MenuBarAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$MenuBarAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$MenuBarAccessor));
}

$Class* AWTAccessor$MenuBarAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$MenuBarAccessor, name, initialize, &_AWTAccessor$MenuBarAccessor_ClassInfo_, allocate$AWTAccessor$MenuBarAccessor);
	return class$;
}

$Class* AWTAccessor$MenuBarAccessor::class$ = nullptr;

	} // awt
} // sun