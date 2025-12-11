#include <java/awt/MenuItem$1.h>

#include <java/awt/MenuItem.h>
#include <java/awt/MenuShortcut.h>
#include <jcpp.h>

using $MenuItem = ::java::awt::MenuItem;
using $MenuShortcut = ::java::awt::MenuShortcut;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _MenuItem$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MenuItem$1::*)()>(&MenuItem$1::init$))},
	{"getActionCommandImpl", "(Ljava/awt/MenuItem;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLabel", "(Ljava/awt/MenuItem;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getShortcut", "(Ljava/awt/MenuItem;)Ljava/awt/MenuShortcut;", nullptr, $PUBLIC},
	{"isEnabled", "(Ljava/awt/MenuItem;)Z", nullptr, $PUBLIC},
	{"isItemEnabled", "(Ljava/awt/MenuItem;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MenuItem$1_EnclosingMethodInfo_ = {
	"java.awt.MenuItem",
	nullptr,
	nullptr
};

$InnerClassInfo _MenuItem$1_InnerClassesInfo_[] = {
	{"java.awt.MenuItem$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$MenuItemAccessor", "sun.awt.AWTAccessor", "MenuItemAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MenuItem$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.MenuItem$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$MenuItemAccessor",
	nullptr,
	_MenuItem$1_MethodInfo_,
	nullptr,
	&_MenuItem$1_EnclosingMethodInfo_,
	_MenuItem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.MenuItem"
};

$Object* allocate$MenuItem$1($Class* clazz) {
	return $of($alloc(MenuItem$1));
}

void MenuItem$1::init$() {
}

bool MenuItem$1::isEnabled($MenuItem* item) {
	return $nc(item)->enabled;
}

$String* MenuItem$1::getLabel($MenuItem* item) {
	return $nc(item)->label;
}

$MenuShortcut* MenuItem$1::getShortcut($MenuItem* item) {
	return $nc(item)->shortcut;
}

$String* MenuItem$1::getActionCommandImpl($MenuItem* item) {
	return $nc(item)->getActionCommandImpl();
}

bool MenuItem$1::isItemEnabled($MenuItem* item) {
	return $nc(item)->isItemEnabled();
}

MenuItem$1::MenuItem$1() {
}

$Class* MenuItem$1::load$($String* name, bool initialize) {
	$loadClass(MenuItem$1, name, initialize, &_MenuItem$1_ClassInfo_, allocate$MenuItem$1);
	return class$;
}

$Class* MenuItem$1::class$ = nullptr;

	} // awt
} // java