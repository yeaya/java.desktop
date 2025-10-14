#include <javax/swing/event/CaretListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/CaretEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $CaretEvent = ::javax::swing::event::CaretEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _CaretListener_MethodInfo_[] = {
	{"caretUpdate", "(Ljavax/swing/event/CaretEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CaretListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.CaretListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_CaretListener_MethodInfo_
};

$Object* allocate$CaretListener($Class* clazz) {
	return $of($alloc(CaretListener));
}

$Class* CaretListener::load$($String* name, bool initialize) {
	$loadClass(CaretListener, name, initialize, &_CaretListener_ClassInfo_, allocate$CaretListener);
	return class$;
}

$Class* CaretListener::class$ = nullptr;

		} // event
	} // swing
} // javax