#include <DefaultComboBoxModelAddAllElementsTest$MyListDataListener.h>

#include <DefaultComboBoxModelAddAllElementsTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ListDataEvent.h>
#include <jcpp.h>

using $DefaultComboBoxModelAddAllElementsTest = ::DefaultComboBoxModelAddAllElementsTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;

$MethodInfo _DefaultComboBoxModelAddAllElementsTest$MyListDataListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultComboBoxModelAddAllElementsTest$MyListDataListener::*)()>(&DefaultComboBoxModelAddAllElementsTest$MyListDataListener::init$))},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultComboBoxModelAddAllElementsTest$MyListDataListener_InnerClassesInfo_[] = {
	{"DefaultComboBoxModelAddAllElementsTest$MyListDataListener", "DefaultComboBoxModelAddAllElementsTest", "MyListDataListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DefaultComboBoxModelAddAllElementsTest$MyListDataListener_ClassInfo_ = {
	$ACC_SUPER,
	"DefaultComboBoxModelAddAllElementsTest$MyListDataListener",
	"java.lang.Object",
	"javax.swing.event.ListDataListener",
	nullptr,
	_DefaultComboBoxModelAddAllElementsTest$MyListDataListener_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultComboBoxModelAddAllElementsTest$MyListDataListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DefaultComboBoxModelAddAllElementsTest"
};

$Object* allocate$DefaultComboBoxModelAddAllElementsTest$MyListDataListener($Class* clazz) {
	return $of($alloc(DefaultComboBoxModelAddAllElementsTest$MyListDataListener));
}

void DefaultComboBoxModelAddAllElementsTest$MyListDataListener::init$() {
}

void DefaultComboBoxModelAddAllElementsTest$MyListDataListener::intervalAdded($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex1();
	if (var$0 - e->getIndex0() != 50 - 0 - 1) {
		$var($String, var$1, $$str({"Test case failed. Expected "_s, $$str((50 - 0)), " elements to be added, but only got "_s}));
		int32_t var$2 = e->getIndex1();
		$throwNew($RuntimeException, $$concat(var$1, $$str((var$2 - e->getIndex0()))));
	}
}

void DefaultComboBoxModelAddAllElementsTest$MyListDataListener::intervalRemoved($ListDataEvent* e) {
}

void DefaultComboBoxModelAddAllElementsTest$MyListDataListener::contentsChanged($ListDataEvent* e) {
}

DefaultComboBoxModelAddAllElementsTest$MyListDataListener::DefaultComboBoxModelAddAllElementsTest$MyListDataListener() {
}

$Class* DefaultComboBoxModelAddAllElementsTest$MyListDataListener::load$($String* name, bool initialize) {
	$loadClass(DefaultComboBoxModelAddAllElementsTest$MyListDataListener, name, initialize, &_DefaultComboBoxModelAddAllElementsTest$MyListDataListener_ClassInfo_, allocate$DefaultComboBoxModelAddAllElementsTest$MyListDataListener);
	return class$;
}

$Class* DefaultComboBoxModelAddAllElementsTest$MyListDataListener::class$ = nullptr;