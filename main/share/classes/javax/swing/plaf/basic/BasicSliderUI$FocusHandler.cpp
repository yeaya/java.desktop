#include <javax/swing/plaf/basic/BasicSliderUI$FocusHandler.h>

#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Handler.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$Handler = ::javax::swing::plaf::basic::BasicSliderUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSliderUI$FocusHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$FocusHandler, this$0)},
	{}
};

$MethodInfo _BasicSliderUI$FocusHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSliderUI$FocusHandler::*)($BasicSliderUI*)>(&BasicSliderUI$FocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSliderUI$FocusHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSliderUI$FocusHandler", "javax.swing.plaf.basic.BasicSliderUI", "FocusHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicSliderUI$FocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSliderUI$FocusHandler",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	_BasicSliderUI$FocusHandler_FieldInfo_,
	_BasicSliderUI$FocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSliderUI$FocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSliderUI"
};

$Object* allocate$BasicSliderUI$FocusHandler($Class* clazz) {
	return $of($alloc(BasicSliderUI$FocusHandler));
}

void BasicSliderUI$FocusHandler::init$($BasicSliderUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSliderUI$FocusHandler::focusGained($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusGained(e);
}

void BasicSliderUI$FocusHandler::focusLost($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusLost(e);
}

BasicSliderUI$FocusHandler::BasicSliderUI$FocusHandler() {
}

$Class* BasicSliderUI$FocusHandler::load$($String* name, bool initialize) {
	$loadClass(BasicSliderUI$FocusHandler, name, initialize, &_BasicSliderUI$FocusHandler_ClassInfo_, allocate$BasicSliderUI$FocusHandler);
	return class$;
}

$Class* BasicSliderUI$FocusHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax