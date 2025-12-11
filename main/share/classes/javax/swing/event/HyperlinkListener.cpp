#include <javax/swing/event/HyperlinkListener.h>

#include <javax/swing/event/HyperlinkEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _HyperlinkListener_MethodInfo_[] = {
	{"hyperlinkUpdate", "(Ljavax/swing/event/HyperlinkEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HyperlinkListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.HyperlinkListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_HyperlinkListener_MethodInfo_
};

$Object* allocate$HyperlinkListener($Class* clazz) {
	return $of($alloc(HyperlinkListener));
}

$Class* HyperlinkListener::load$($String* name, bool initialize) {
	$loadClass(HyperlinkListener, name, initialize, &_HyperlinkListener_ClassInfo_, allocate$HyperlinkListener);
	return class$;
}

$Class* HyperlinkListener::class$ = nullptr;

		} // event
	} // swing
} // javax