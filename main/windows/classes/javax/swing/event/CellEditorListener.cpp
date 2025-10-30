#include <javax/swing/event/CellEditorListener.h>

#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _CellEditorListener_MethodInfo_[] = {
	{"editingCanceled", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"editingStopped", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CellEditorListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.CellEditorListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_CellEditorListener_MethodInfo_
};

$Object* allocate$CellEditorListener($Class* clazz) {
	return $of($alloc(CellEditorListener));
}

$Class* CellEditorListener::load$($String* name, bool initialize) {
	$loadClass(CellEditorListener, name, initialize, &_CellEditorListener_ClassInfo_, allocate$CellEditorListener);
	return class$;
}

$Class* CellEditorListener::class$ = nullptr;

		} // event
	} // swing
} // javax