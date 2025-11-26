#include <javax/swing/plaf/basic/BasicListUI$ListSelectionHandler.h>

#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/plaf/basic/BasicListUI$Handler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;
using $BasicListUI$Handler = ::javax::swing::plaf::basic::BasicListUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicListUI$ListSelectionHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicListUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicListUI$ListSelectionHandler, this$0)},
	{}
};

$MethodInfo _BasicListUI$ListSelectionHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicListUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicListUI$ListSelectionHandler::*)($BasicListUI*)>(&BasicListUI$ListSelectionHandler::init$))},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicListUI$ListSelectionHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicListUI$ListSelectionHandler", "javax.swing.plaf.basic.BasicListUI", "ListSelectionHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicListUI$ListSelectionHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicListUI$ListSelectionHandler",
	"java.lang.Object",
	"javax.swing.event.ListSelectionListener",
	_BasicListUI$ListSelectionHandler_FieldInfo_,
	_BasicListUI$ListSelectionHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicListUI$ListSelectionHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicListUI"
};

$Object* allocate$BasicListUI$ListSelectionHandler($Class* clazz) {
	return $of($alloc(BasicListUI$ListSelectionHandler));
}

void BasicListUI$ListSelectionHandler::init$($BasicListUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicListUI$ListSelectionHandler::valueChanged($ListSelectionEvent* e) {
	$nc($(this->this$0->getHandler()))->valueChanged(e);
}

BasicListUI$ListSelectionHandler::BasicListUI$ListSelectionHandler() {
}

$Class* BasicListUI$ListSelectionHandler::load$($String* name, bool initialize) {
	$loadClass(BasicListUI$ListSelectionHandler, name, initialize, &_BasicListUI$ListSelectionHandler_ClassInfo_, allocate$BasicListUI$ListSelectionHandler);
	return class$;
}

$Class* BasicListUI$ListSelectionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax