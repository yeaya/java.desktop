#include <java/awt/MenuContainer.h>

#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/MenuComponent.h>
#include <jcpp.h>

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