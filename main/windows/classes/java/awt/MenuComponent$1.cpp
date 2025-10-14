#include <java/awt/MenuComponent$1.h>

#include <java/awt/Font.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuComponentPeer = ::java::awt::peer::MenuComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

$MethodInfo _MenuComponent$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MenuComponent$1::*)()>(&MenuComponent$1::init$))},
	{"getAppContext", "(Ljava/awt/MenuComponent;)Lsun/awt/AppContext;", nullptr, $PUBLIC},
	{"getFont_NoClientCode", "(Ljava/awt/MenuComponent;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getParent", "(Ljava/awt/MenuComponent;)Ljava/awt/MenuContainer;", nullptr, $PUBLIC},
	{"getPeer", "(Ljava/awt/MenuComponent;)Ljava/awt/peer/MenuComponentPeer;", "<T::Ljava/awt/peer/MenuComponentPeer;>(Ljava/awt/MenuComponent;)TT;", $PUBLIC},
	{"setAppContext", "(Ljava/awt/MenuComponent;Lsun/awt/AppContext;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljava/awt/MenuComponent;Ljava/awt/MenuContainer;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MenuComponent$1_EnclosingMethodInfo_ = {
	"java.awt.MenuComponent",
	nullptr,
	nullptr
};

$InnerClassInfo _MenuComponent$1_InnerClassesInfo_[] = {
	{"java.awt.MenuComponent$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$MenuComponentAccessor", "sun.awt.AWTAccessor", "MenuComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MenuComponent$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.MenuComponent$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$MenuComponentAccessor",
	nullptr,
	_MenuComponent$1_MethodInfo_,
	nullptr,
	&_MenuComponent$1_EnclosingMethodInfo_,
	_MenuComponent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.MenuComponent"
};

$Object* allocate$MenuComponent$1($Class* clazz) {
	return $of($alloc(MenuComponent$1));
}

void MenuComponent$1::init$() {
}

$AppContext* MenuComponent$1::getAppContext($MenuComponent* menuComp) {
	return $nc(menuComp)->appContext;
}

void MenuComponent$1::setAppContext($MenuComponent* menuComp, $AppContext* appContext) {
	$set($nc(menuComp), appContext, appContext);
}

$MenuComponentPeer* MenuComponent$1::getPeer($MenuComponent* menuComp) {
	return $nc(menuComp)->peer;
}

$MenuContainer* MenuComponent$1::getParent($MenuComponent* menuComp) {
	return $nc(menuComp)->parent;
}

void MenuComponent$1::setParent($MenuComponent* menuComp, $MenuContainer* menuContainer) {
	$set($nc(menuComp), parent, menuContainer);
}

$Font* MenuComponent$1::getFont_NoClientCode($MenuComponent* menuComp) {
	return $nc(menuComp)->getFont_NoClientCode();
}

MenuComponent$1::MenuComponent$1() {
}

$Class* MenuComponent$1::load$($String* name, bool initialize) {
	$loadClass(MenuComponent$1, name, initialize, &_MenuComponent$1_ClassInfo_, allocate$MenuComponent$1);
	return class$;
}

$Class* MenuComponent$1::class$ = nullptr;

	} // awt
} // java