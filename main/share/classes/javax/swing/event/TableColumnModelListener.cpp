#include <javax/swing/event/TableColumnModelListener.h>

#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/TableColumnModelEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _TableColumnModelListener_MethodInfo_[] = {
	{"columnAdded", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"columnMarginChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"columnMoved", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"columnRemoved", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"columnSelectionChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TableColumnModelListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.TableColumnModelListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_TableColumnModelListener_MethodInfo_
};

$Object* allocate$TableColumnModelListener($Class* clazz) {
	return $of($alloc(TableColumnModelListener));
}

$Class* TableColumnModelListener::load$($String* name, bool initialize) {
	$loadClass(TableColumnModelListener, name, initialize, &_TableColumnModelListener_ClassInfo_, allocate$TableColumnModelListener);
	return class$;
}

$Class* TableColumnModelListener::class$ = nullptr;

		} // event
	} // swing
} // javax