#include <DefaultListModelAddAllTest$MyListDataListener.h>

#include <DefaultListModelAddAllTest.h>
#include <javax/swing/event/ListDataEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;

$MethodInfo _DefaultListModelAddAllTest$MyListDataListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultListModelAddAllTest$MyListDataListener::*)()>(&DefaultListModelAddAllTest$MyListDataListener::init$))},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultListModelAddAllTest$MyListDataListener_InnerClassesInfo_[] = {
	{"DefaultListModelAddAllTest$MyListDataListener", "DefaultListModelAddAllTest", "MyListDataListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DefaultListModelAddAllTest$MyListDataListener_ClassInfo_ = {
	$ACC_SUPER,
	"DefaultListModelAddAllTest$MyListDataListener",
	"java.lang.Object",
	"javax.swing.event.ListDataListener",
	nullptr,
	_DefaultListModelAddAllTest$MyListDataListener_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultListModelAddAllTest$MyListDataListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DefaultListModelAddAllTest"
};

$Object* allocate$DefaultListModelAddAllTest$MyListDataListener($Class* clazz) {
	return $of($alloc(DefaultListModelAddAllTest$MyListDataListener));
}

void DefaultListModelAddAllTest$MyListDataListener::init$() {
}

void DefaultListModelAddAllTest$MyListDataListener::intervalAdded($ListDataEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(e)->getIndex1();
	if (var$0 - e->getIndex0() != 50 - 0 - 1) {
		$var($String, var$1, $$str({"Test case failed. Expected "_s, $$str((50 - 0)), " elements to be added, but only got "_s}));
		int32_t var$2 = e->getIndex1();
		$throwNew($RuntimeException, $$concat(var$1, $$str((var$2 - e->getIndex0()))));
	}
}

void DefaultListModelAddAllTest$MyListDataListener::intervalRemoved($ListDataEvent* e) {
}

void DefaultListModelAddAllTest$MyListDataListener::contentsChanged($ListDataEvent* e) {
}

DefaultListModelAddAllTest$MyListDataListener::DefaultListModelAddAllTest$MyListDataListener() {
}

$Class* DefaultListModelAddAllTest$MyListDataListener::load$($String* name, bool initialize) {
	$loadClass(DefaultListModelAddAllTest$MyListDataListener, name, initialize, &_DefaultListModelAddAllTest$MyListDataListener_ClassInfo_, allocate$DefaultListModelAddAllTest$MyListDataListener);
	return class$;
}

$Class* DefaultListModelAddAllTest$MyListDataListener::class$ = nullptr;