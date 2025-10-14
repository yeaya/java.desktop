#include <java/awt/desktop/PreferencesHandler.h>

#include <java/awt/desktop/PreferencesEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PreferencesEvent = ::java::awt::desktop::PreferencesEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _PreferencesHandler_MethodInfo_[] = {
	{"handlePreferences", "(Ljava/awt/desktop/PreferencesEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PreferencesHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.PreferencesHandler",
	nullptr,
	nullptr,
	nullptr,
	_PreferencesHandler_MethodInfo_
};

$Object* allocate$PreferencesHandler($Class* clazz) {
	return $of($alloc(PreferencesHandler));
}

$Class* PreferencesHandler::load$($String* name, bool initialize) {
	$loadClass(PreferencesHandler, name, initialize, &_PreferencesHandler_ClassInfo_, allocate$PreferencesHandler);
	return class$;
}

$Class* PreferencesHandler::class$ = nullptr;

		} // desktop
	} // awt
} // java