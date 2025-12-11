#include <javax/swing/plaf/basic/BasicComboPopup$PropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicComboPopup$Handler.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
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

$FieldInfo _BasicComboPopup$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicComboPopup$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicComboPopup$PropertyChangeHandler::*)($BasicComboPopup*)>(&BasicComboPopup$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboPopup$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$PropertyChangeHandler", "javax.swing.plaf.basic.BasicComboPopup", "PropertyChangeHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicComboPopup$PropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicComboPopup$PropertyChangeHandler_FieldInfo_,
	_BasicComboPopup$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboPopup$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(BasicComboPopup$PropertyChangeHandler));
}

void BasicComboPopup$PropertyChangeHandler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboPopup$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->propertyChange(e);
}

BasicComboPopup$PropertyChangeHandler::BasicComboPopup$PropertyChangeHandler() {
}

$Class* BasicComboPopup$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$PropertyChangeHandler, name, initialize, &_BasicComboPopup$PropertyChangeHandler_ClassInfo_, allocate$BasicComboPopup$PropertyChangeHandler);
	return class$;
}

$Class* BasicComboPopup$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax