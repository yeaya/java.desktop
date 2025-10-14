#include <javax/swing/plaf/basic/BasicComboPopup$ListDataHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboPopup$ListDataHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$ListDataHandler, this$0)},
	{}
};

$MethodInfo _BasicComboPopup$ListDataHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboPopup$ListDataHandler::*)($BasicComboPopup*)>(&BasicComboPopup$ListDataHandler::init$))},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboPopup$ListDataHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$ListDataHandler", "javax.swing.plaf.basic.BasicComboPopup", "ListDataHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicComboPopup$ListDataHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$ListDataHandler",
	"java.lang.Object",
	"javax.swing.event.ListDataListener",
	_BasicComboPopup$ListDataHandler_FieldInfo_,
	_BasicComboPopup$ListDataHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboPopup$ListDataHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$ListDataHandler($Class* clazz) {
	return $of($alloc(BasicComboPopup$ListDataHandler));
}

void BasicComboPopup$ListDataHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboPopup$ListDataHandler::contentsChanged($ListDataEvent* e) {
}

void BasicComboPopup$ListDataHandler::intervalAdded($ListDataEvent* e) {
}

void BasicComboPopup$ListDataHandler::intervalRemoved($ListDataEvent* e) {
}

BasicComboPopup$ListDataHandler::BasicComboPopup$ListDataHandler() {
}

$Class* BasicComboPopup$ListDataHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$ListDataHandler, name, initialize, &_BasicComboPopup$ListDataHandler_ClassInfo_, allocate$BasicComboPopup$ListDataHandler);
	return class$;
}

$Class* BasicComboPopup$ListDataHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax