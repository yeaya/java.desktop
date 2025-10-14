#include <java/awt/MenuContainer.h>

#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/MenuComponent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $MenuComponent = ::java::awt::MenuComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$CompoundAttribute _MenuContainer_MethodAnnotations_postEvent1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _MenuContainer_MethodInfo_[] = {
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT},
	{"postEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _MenuContainer_MethodAnnotations_postEvent1},
	{"remove", "(Ljava/awt/MenuComponent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MenuContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.MenuContainer",
	nullptr,
	nullptr,
	nullptr,
	_MenuContainer_MethodInfo_
};

$Object* allocate$MenuContainer($Class* clazz) {
	return $of($alloc(MenuContainer));
}

$Class* MenuContainer::load$($String* name, bool initialize) {
	$loadClass(MenuContainer, name, initialize, &_MenuContainer_ClassInfo_, allocate$MenuContainer);
	return class$;
}

$Class* MenuContainer::class$ = nullptr;

	} // awt
} // java