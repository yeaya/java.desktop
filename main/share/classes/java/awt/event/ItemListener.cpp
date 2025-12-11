#include <java/awt/event/ItemListener.h>

#include <java/awt/event/ItemEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _ItemListener_MethodInfo_[] = {
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ItemListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.ItemListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_ItemListener_MethodInfo_
};

$Object* allocate$ItemListener($Class* clazz) {
	return $of($alloc(ItemListener));
}

$Class* ItemListener::load$($String* name, bool initialize) {
	$loadClass(ItemListener, name, initialize, &_ItemListener_ClassInfo_, allocate$ItemListener);
	return class$;
}

$Class* ItemListener::class$ = nullptr;

		} // event
	} // awt
} // java