#include <javax/swing/plaf/basic/BasicSliderUI$ChangeHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Handler.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$Handler = ::javax::swing::plaf::basic::BasicSliderUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSliderUI$ChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$ChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicSliderUI$ChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSliderUI$ChangeHandler::*)($BasicSliderUI*)>(&BasicSliderUI$ChangeHandler::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSliderUI$ChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSliderUI$ChangeHandler", "javax.swing.plaf.basic.BasicSliderUI", "ChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicSliderUI$ChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSliderUI$ChangeHandler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_BasicSliderUI$ChangeHandler_FieldInfo_,
	_BasicSliderUI$ChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSliderUI$ChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSliderUI"
};

$Object* allocate$BasicSliderUI$ChangeHandler($Class* clazz) {
	return $of($alloc(BasicSliderUI$ChangeHandler));
}

void BasicSliderUI$ChangeHandler::init$($BasicSliderUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSliderUI$ChangeHandler::stateChanged($ChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->stateChanged(e);
}

BasicSliderUI$ChangeHandler::BasicSliderUI$ChangeHandler() {
}

$Class* BasicSliderUI$ChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicSliderUI$ChangeHandler, name, initialize, &_BasicSliderUI$ChangeHandler_ClassInfo_, allocate$BasicSliderUI$ChangeHandler);
	return class$;
}

$Class* BasicSliderUI$ChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax