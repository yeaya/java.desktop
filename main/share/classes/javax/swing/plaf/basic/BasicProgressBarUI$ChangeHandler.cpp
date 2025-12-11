#include <javax/swing/plaf/basic/BasicProgressBarUI$ChangeHandler.h>

#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI$Handler.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $BasicProgressBarUI = ::javax::swing::plaf::basic::BasicProgressBarUI;
using $BasicProgressBarUI$Handler = ::javax::swing::plaf::basic::BasicProgressBarUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicProgressBarUI$ChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicProgressBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicProgressBarUI$ChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicProgressBarUI$ChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicProgressBarUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicProgressBarUI$ChangeHandler::*)($BasicProgressBarUI*)>(&BasicProgressBarUI$ChangeHandler::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicProgressBarUI$ChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicProgressBarUI$ChangeHandler", "javax.swing.plaf.basic.BasicProgressBarUI", "ChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicProgressBarUI$ChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicProgressBarUI$ChangeHandler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_BasicProgressBarUI$ChangeHandler_FieldInfo_,
	_BasicProgressBarUI$ChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicProgressBarUI$ChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicProgressBarUI"
};

$Object* allocate$BasicProgressBarUI$ChangeHandler($Class* clazz) {
	return $of($alloc(BasicProgressBarUI$ChangeHandler));
}

void BasicProgressBarUI$ChangeHandler::init$($BasicProgressBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicProgressBarUI$ChangeHandler::stateChanged($ChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->stateChanged(e);
}

BasicProgressBarUI$ChangeHandler::BasicProgressBarUI$ChangeHandler() {
}

$Class* BasicProgressBarUI$ChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicProgressBarUI$ChangeHandler, name, initialize, &_BasicProgressBarUI$ChangeHandler_ClassInfo_, allocate$BasicProgressBarUI$ChangeHandler);
	return class$;
}

$Class* BasicProgressBarUI$ChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax