#include <java/awt/event/ActionListener.h>

#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _ActionListener_MethodInfo_[] = {
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ActionListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.ActionListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_ActionListener_MethodInfo_
};

$Object* allocate$ActionListener($Class* clazz) {
	return $of($alloc(ActionListener));
}

$Class* ActionListener::load$($String* name, bool initialize) {
	$loadClass(ActionListener, name, initialize, &_ActionListener_ClassInfo_, allocate$ActionListener);
	return class$;
}

$Class* ActionListener::class$ = nullptr;

		} // event
	} // awt
} // java