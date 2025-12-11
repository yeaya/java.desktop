#include <javax/swing/RowSorter.h>

#include <java/util/EventListener.h>
#include <java/util/List.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/RowSorterEvent$Type.h>
#include <javax/swing/event/RowSorterEvent.h>
#include <javax/swing/event/RowSorterListener.h>
#include <jcpp.h>

#undef SORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $RowSorterEvent = ::javax::swing::event::RowSorterEvent;
using $RowSorterEvent$Type = ::javax::swing::event::RowSorterEvent$Type;
using $RowSorterListener = ::javax::swing::event::RowSorterListener;

namespace javax {
	namespace swing {

$FieldInfo _RowSorter_FieldInfo_[] = {
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PRIVATE, $field(RowSorter, listenerList)},
	{}
};

$MethodInfo _RowSorter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RowSorter::*)()>(&RowSorter::init$))},
	{"addRowSorterListener", "(Ljavax/swing/event/RowSorterListener;)V", nullptr, $PUBLIC},
	{"allRowsChanged", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"convertRowIndexToModel", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"convertRowIndexToView", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"fireRowSorterChanged", "([I)V", nullptr, $PROTECTED},
	{"fireRowSorterChanged", "(Ljavax/swing/event/RowSorterEvent;)V", nullptr, 0},
	{"fireSortOrderChanged", "()V", nullptr, $PROTECTED},
	{"getModel", "()Ljava/lang/Object;", "()TM;", $PUBLIC | $ABSTRACT},
	{"getModelRowCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSortKeys", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/swing/RowSorter$SortKey;>;", $PUBLIC | $ABSTRACT},
	{"getViewRowCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"modelStructureChanged", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeRowSorterListener", "(Ljavax/swing/event/RowSorterListener;)V", nullptr, $PUBLIC},
	{"rowsDeleted", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"rowsInserted", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"rowsUpdated", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"rowsUpdated", "(III)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSortKeys", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljavax/swing/RowSorter$SortKey;>;)V", $PUBLIC | $ABSTRACT},
	{"toggleSortOrder", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _RowSorter_InnerClassesInfo_[] = {
	{"javax.swing.RowSorter$SortKey", "javax.swing.RowSorter", "SortKey", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _RowSorter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.RowSorter",
	"java.lang.Object",
	nullptr,
	_RowSorter_FieldInfo_,
	_RowSorter_MethodInfo_,
	"<M:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_RowSorter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.RowSorter$SortKey"
};

$Object* allocate$RowSorter($Class* clazz) {
	return $of($alloc(RowSorter));
}

void RowSorter::init$() {
	$set(this, listenerList, $new($EventListenerList));
}

void RowSorter::addRowSorterListener($RowSorterListener* l) {
	$load($RowSorterListener);
	$nc(this->listenerList)->add($RowSorterListener::class$, l);
}

void RowSorter::removeRowSorterListener($RowSorterListener* l) {
	$load($RowSorterListener);
	$nc(this->listenerList)->remove($RowSorterListener::class$, l);
}

void RowSorter::fireSortOrderChanged() {
	fireRowSorterChanged($$new($RowSorterEvent, this));
}

void RowSorter::fireRowSorterChanged($ints* lastRowIndexToModel) {
	$init($RowSorterEvent$Type);
	fireRowSorterChanged($$new($RowSorterEvent, this, $RowSorterEvent$Type::SORTED, lastRowIndexToModel));
}

void RowSorter::fireRowSorterChanged($RowSorterEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($RowSorterListener);
		if ($equals(listeners->get(i), $RowSorterListener::class$)) {
			$nc(($cast($RowSorterListener, listeners->get(i + 1))))->sorterChanged(event);
		}
	}
}

RowSorter::RowSorter() {
}

$Class* RowSorter::load$($String* name, bool initialize) {
	$loadClass(RowSorter, name, initialize, &_RowSorter_ClassInfo_, allocate$RowSorter);
	return class$;
}

$Class* RowSorter::class$ = nullptr;

	} // swing
} // javax