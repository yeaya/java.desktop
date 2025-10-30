#include <javax/swing/plaf/basic/BasicComboPopup$ListMouseHandler.h>

#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/BasicComboPopup$Handler.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $BasicComboPopup$Handler = ::javax::swing::plaf::basic::BasicComboPopup$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboPopup$ListMouseHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$ListMouseHandler, this$0)},
	{}
};

$MethodInfo _BasicComboPopup$ListMouseHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicComboPopup$ListMouseHandler::*)($BasicComboPopup*)>(&BasicComboPopup$ListMouseHandler::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboPopup$ListMouseHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$ListMouseHandler", "javax.swing.plaf.basic.BasicComboPopup", "ListMouseHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicComboPopup$ListMouseHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$ListMouseHandler",
	"java.awt.event.MouseAdapter",
	nullptr,
	_BasicComboPopup$ListMouseHandler_FieldInfo_,
	_BasicComboPopup$ListMouseHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboPopup$ListMouseHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$ListMouseHandler($Class* clazz) {
	return $of($alloc(BasicComboPopup$ListMouseHandler));
}

void BasicComboPopup$ListMouseHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void BasicComboPopup$ListMouseHandler::mousePressed($MouseEvent* e) {
}

void BasicComboPopup$ListMouseHandler::mouseReleased($MouseEvent* anEvent) {
	$nc($(this->this$0->getHandler()))->mouseReleased(anEvent);
}

BasicComboPopup$ListMouseHandler::BasicComboPopup$ListMouseHandler() {
}

$Class* BasicComboPopup$ListMouseHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$ListMouseHandler, name, initialize, &_BasicComboPopup$ListMouseHandler_ClassInfo_, allocate$BasicComboPopup$ListMouseHandler);
	return class$;
}

$Class* BasicComboPopup$ListMouseHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax