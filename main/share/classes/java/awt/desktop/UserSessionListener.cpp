#include <java/awt/desktop/UserSessionListener.h>

#include <java/awt/desktop/UserSessionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _UserSessionListener_MethodInfo_[] = {
	{"userSessionActivated", "(Ljava/awt/desktop/UserSessionEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"userSessionDeactivated", "(Ljava/awt/desktop/UserSessionEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UserSessionListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.UserSessionListener",
	nullptr,
	"java.awt.desktop.SystemEventListener",
	nullptr,
	_UserSessionListener_MethodInfo_
};

$Object* allocate$UserSessionListener($Class* clazz) {
	return $of($alloc(UserSessionListener));
}

$Class* UserSessionListener::load$($String* name, bool initialize) {
	$loadClass(UserSessionListener, name, initialize, &_UserSessionListener_ClassInfo_, allocate$UserSessionListener);
	return class$;
}

$Class* UserSessionListener::class$ = nullptr;

		} // desktop
	} // awt
} // java