#include <javax/swing/plaf/basic/BasicComboBoxUI$KeyHandler.h>

#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$Handler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$Handler = ::javax::swing::plaf::basic::BasicComboBoxUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboBoxUI$KeyHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboBoxUI$KeyHandler, this$0)},
	{}
};

$MethodInfo _BasicComboBoxUI$KeyHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboBoxUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboBoxUI$KeyHandler::*)($BasicComboBoxUI*)>(&BasicComboBoxUI$KeyHandler::init$))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboBoxUI$KeyHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxUI$KeyHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "KeyHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicComboBoxUI$KeyHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxUI$KeyHandler",
	"java.awt.event.KeyAdapter",
	nullptr,
	_BasicComboBoxUI$KeyHandler_FieldInfo_,
	_BasicComboBoxUI$KeyHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxUI$KeyHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxUI"
};

$Object* allocate$BasicComboBoxUI$KeyHandler($Class* clazz) {
	return $of($alloc(BasicComboBoxUI$KeyHandler));
}

void BasicComboBoxUI$KeyHandler::init$($BasicComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
}

void BasicComboBoxUI$KeyHandler::keyPressed($KeyEvent* e) {
	$nc($(this->this$0->getHandler()))->keyPressed(e);
}

BasicComboBoxUI$KeyHandler::BasicComboBoxUI$KeyHandler() {
}

$Class* BasicComboBoxUI$KeyHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxUI$KeyHandler, name, initialize, &_BasicComboBoxUI$KeyHandler_ClassInfo_, allocate$BasicComboBoxUI$KeyHandler);
	return class$;
}

$Class* BasicComboBoxUI$KeyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax