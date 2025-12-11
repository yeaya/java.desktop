#include <javax/swing/plaf/basic/BasicComboPopup$AutoScrollActionHandler.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboPopup$AutoScrollActionHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$AutoScrollActionHandler, this$0)},
	{"direction", "I", nullptr, $PRIVATE, $field(BasicComboPopup$AutoScrollActionHandler, direction)},
	{}
};

$MethodInfo _BasicComboPopup$AutoScrollActionHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;I)V", nullptr, 0, $method(static_cast<void(BasicComboPopup$AutoScrollActionHandler::*)($BasicComboPopup*,int32_t)>(&BasicComboPopup$AutoScrollActionHandler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboPopup$AutoScrollActionHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$AutoScrollActionHandler", "javax.swing.plaf.basic.BasicComboPopup", "AutoScrollActionHandler", $PRIVATE},
	{}
};

$ClassInfo _BasicComboPopup$AutoScrollActionHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$AutoScrollActionHandler",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_BasicComboPopup$AutoScrollActionHandler_FieldInfo_,
	_BasicComboPopup$AutoScrollActionHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboPopup$AutoScrollActionHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$AutoScrollActionHandler($Class* clazz) {
	return $of($alloc(BasicComboPopup$AutoScrollActionHandler));
}

void BasicComboPopup$AutoScrollActionHandler::init$($BasicComboPopup* this$0, int32_t direction) {
	$set(this, this$0, this$0);
	this->direction = direction;
}

void BasicComboPopup$AutoScrollActionHandler::actionPerformed($ActionEvent* e) {
	if (this->direction == 0) {
		this->this$0->autoScrollUp();
	} else {
		this->this$0->autoScrollDown();
	}
}

BasicComboPopup$AutoScrollActionHandler::BasicComboPopup$AutoScrollActionHandler() {
}

$Class* BasicComboPopup$AutoScrollActionHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$AutoScrollActionHandler, name, initialize, &_BasicComboPopup$AutoScrollActionHandler_ClassInfo_, allocate$BasicComboPopup$AutoScrollActionHandler);
	return class$;
}

$Class* BasicComboPopup$AutoScrollActionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax