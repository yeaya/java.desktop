#include <javax/swing/event/DocumentListener.h>

#include <javax/swing/event/DocumentEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _DocumentListener_MethodInfo_[] = {
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DocumentListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.DocumentListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_DocumentListener_MethodInfo_
};

$Object* allocate$DocumentListener($Class* clazz) {
	return $of($alloc(DocumentListener));
}

$Class* DocumentListener::load$($String* name, bool initialize) {
	$loadClass(DocumentListener, name, initialize, &_DocumentListener_ClassInfo_, allocate$DocumentListener);
	return class$;
}

$Class* DocumentListener::class$ = nullptr;

		} // event
	} // swing
} // javax