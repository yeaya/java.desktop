#include <javax/swing/plaf/basic/BasicSliderUI$PropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Handler.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
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

$FieldInfo _BasicSliderUI$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicSliderUI$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSliderUI$PropertyChangeHandler::*)($BasicSliderUI*)>(&BasicSliderUI$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSliderUI$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSliderUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicSliderUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicSliderUI$PropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSliderUI$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicSliderUI$PropertyChangeHandler_FieldInfo_,
	_BasicSliderUI$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSliderUI$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSliderUI"
};

$Object* allocate$BasicSliderUI$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(BasicSliderUI$PropertyChangeHandler));
}

void BasicSliderUI$PropertyChangeHandler::init$($BasicSliderUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSliderUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->propertyChange(e);
}

BasicSliderUI$PropertyChangeHandler::BasicSliderUI$PropertyChangeHandler() {
}

$Class* BasicSliderUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicSliderUI$PropertyChangeHandler, name, initialize, &_BasicSliderUI$PropertyChangeHandler_ClassInfo_, allocate$BasicSliderUI$PropertyChangeHandler);
	return class$;
}

$Class* BasicSliderUI$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax