#include <sun/swing/MenuItemCheckIconFactory.h>

#include <javax/swing/Icon.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JMenuItem = ::javax::swing::JMenuItem;

namespace sun {
	namespace swing {

$MethodInfo _MenuItemCheckIconFactory_MethodInfo_[] = {
	{"getIcon", "(Ljavax/swing/JMenuItem;)Ljavax/swing/Icon;", nullptr, $PUBLIC | $ABSTRACT},
	{"isCompatible", "(Ljava/lang/Object;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MenuItemCheckIconFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.MenuItemCheckIconFactory",
	nullptr,
	nullptr,
	nullptr,
	_MenuItemCheckIconFactory_MethodInfo_
};

$Object* allocate$MenuItemCheckIconFactory($Class* clazz) {
	return $of($alloc(MenuItemCheckIconFactory));
}

$Class* MenuItemCheckIconFactory::load$($String* name, bool initialize) {
	$loadClass(MenuItemCheckIconFactory, name, initialize, &_MenuItemCheckIconFactory_ClassInfo_, allocate$MenuItemCheckIconFactory);
	return class$;
}

$Class* MenuItemCheckIconFactory::class$ = nullptr;

	} // swing
} // sun