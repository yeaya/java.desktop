#include <javax/swing/plaf/basic/BasicComboBoxUI$FocusHandler.h>

#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$Handler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
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

$FieldInfo _BasicComboBoxUI$FocusHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboBoxUI$FocusHandler, this$0)},
	{}
};

$MethodInfo _BasicComboBoxUI$FocusHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboBoxUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboBoxUI$FocusHandler::*)($BasicComboBoxUI*)>(&BasicComboBoxUI$FocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboBoxUI$FocusHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxUI$FocusHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "FocusHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicComboBoxUI$FocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxUI$FocusHandler",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	_BasicComboBoxUI$FocusHandler_FieldInfo_,
	_BasicComboBoxUI$FocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxUI$FocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxUI"
};

$Object* allocate$BasicComboBoxUI$FocusHandler($Class* clazz) {
	return $of($alloc(BasicComboBoxUI$FocusHandler));
}

void BasicComboBoxUI$FocusHandler::init$($BasicComboBoxUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboBoxUI$FocusHandler::focusGained($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusGained(e);
}

void BasicComboBoxUI$FocusHandler::focusLost($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusLost(e);
}

BasicComboBoxUI$FocusHandler::BasicComboBoxUI$FocusHandler() {
}

$Class* BasicComboBoxUI$FocusHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxUI$FocusHandler, name, initialize, &_BasicComboBoxUI$FocusHandler_ClassInfo_, allocate$BasicComboBoxUI$FocusHandler);
	return class$;
}

$Class* BasicComboBoxUI$FocusHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax