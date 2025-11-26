#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>

#include <java/awt/Font.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuComponentPeer = ::java::awt::peer::MenuComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$MenuComponentAccessor_MethodInfo_[] = {
	{"getAppContext", "(Ljava/awt/MenuComponent;)Lsun/awt/AppContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFont_NoClientCode", "(Ljava/awt/MenuComponent;)Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParent", "(Ljava/awt/MenuComponent;)Ljava/awt/MenuContainer;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPeer", "(Ljava/awt/MenuComponent;)Ljava/awt/peer/MenuComponentPeer;", "<T::Ljava/awt/peer/MenuComponentPeer;>(Ljava/awt/MenuComponent;)TT;", $PUBLIC | $ABSTRACT},
	{"setAppContext", "(Ljava/awt/MenuComponent;Lsun/awt/AppContext;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setParent", "(Ljava/awt/MenuComponent;Ljava/awt/MenuContainer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$MenuComponentAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$MenuComponentAccessor", "sun.awt.AWTAccessor", "MenuComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$MenuComponentAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$MenuComponentAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$MenuComponentAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$MenuComponentAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$MenuComponentAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$MenuComponentAccessor));
}

$Class* AWTAccessor$MenuComponentAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$MenuComponentAccessor, name, initialize, &_AWTAccessor$MenuComponentAccessor_ClassInfo_, allocate$AWTAccessor$MenuComponentAccessor);
	return class$;
}

$Class* AWTAccessor$MenuComponentAccessor::class$ = nullptr;

	} // awt
} // sun