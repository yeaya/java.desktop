#include <javax/swing/event/TableModelListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/TableModelEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _TableModelListener_MethodInfo_[] = {
	{"tableChanged", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TableModelListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.TableModelListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_TableModelListener_MethodInfo_
};

$Object* allocate$TableModelListener($Class* clazz) {
	return $of($alloc(TableModelListener));
}

$Class* TableModelListener::load$($String* name, bool initialize) {
	$loadClass(TableModelListener, name, initialize, &_TableModelListener_ClassInfo_, allocate$TableModelListener);
	return class$;
}

$Class* TableModelListener::class$ = nullptr;

		} // event
	} // swing
} // javax