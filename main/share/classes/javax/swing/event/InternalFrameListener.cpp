#include <javax/swing/event/InternalFrameListener.h>

#include <javax/swing/event/InternalFrameEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $InternalFrameEvent = ::javax::swing::event::InternalFrameEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _InternalFrameListener_MethodInfo_[] = {
	{"internalFrameActivated", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"internalFrameClosed", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"internalFrameClosing", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"internalFrameDeactivated", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"internalFrameDeiconified", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"internalFrameIconified", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"internalFrameOpened", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InternalFrameListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.InternalFrameListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_InternalFrameListener_MethodInfo_
};

$Object* allocate$InternalFrameListener($Class* clazz) {
	return $of($alloc(InternalFrameListener));
}

$Class* InternalFrameListener::load$($String* name, bool initialize) {
	$loadClass(InternalFrameListener, name, initialize, &_InternalFrameListener_ClassInfo_, allocate$InternalFrameListener);
	return class$;
}

$Class* InternalFrameListener::class$ = nullptr;

		} // event
	} // swing
} // javax