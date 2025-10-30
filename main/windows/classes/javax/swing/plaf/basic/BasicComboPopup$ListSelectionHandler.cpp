#include <javax/swing/plaf/basic/BasicComboPopup$ListSelectionHandler.h>

#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboPopup$ListSelectionHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$ListSelectionHandler, this$0)},
	{}
};

$MethodInfo _BasicComboPopup$ListSelectionHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicComboPopup$ListSelectionHandler::*)($BasicComboPopup*)>(&BasicComboPopup$ListSelectionHandler::init$))},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboPopup$ListSelectionHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$ListSelectionHandler", "javax.swing.plaf.basic.BasicComboPopup", "ListSelectionHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicComboPopup$ListSelectionHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$ListSelectionHandler",
	"java.lang.Object",
	"javax.swing.event.ListSelectionListener",
	_BasicComboPopup$ListSelectionHandler_FieldInfo_,
	_BasicComboPopup$ListSelectionHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboPopup$ListSelectionHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$ListSelectionHandler($Class* clazz) {
	return $of($alloc(BasicComboPopup$ListSelectionHandler));
}

void BasicComboPopup$ListSelectionHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboPopup$ListSelectionHandler::valueChanged($ListSelectionEvent* e) {
}

BasicComboPopup$ListSelectionHandler::BasicComboPopup$ListSelectionHandler() {
}

$Class* BasicComboPopup$ListSelectionHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$ListSelectionHandler, name, initialize, &_BasicComboPopup$ListSelectionHandler_ClassInfo_, allocate$BasicComboPopup$ListSelectionHandler);
	return class$;
}

$Class* BasicComboPopup$ListSelectionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax