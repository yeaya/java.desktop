#include <javax/swing/plaf/basic/BasicOptionPaneUI$PropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;
using $BasicOptionPaneUI$Handler = ::javax::swing::plaf::basic::BasicOptionPaneUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicOptionPaneUI$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicOptionPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicOptionPaneUI$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicOptionPaneUI$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicOptionPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicOptionPaneUI$PropertyChangeHandler::*)($BasicOptionPaneUI*)>(&BasicOptionPaneUI$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicOptionPaneUI$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicOptionPaneUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicOptionPaneUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicOptionPaneUI$PropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicOptionPaneUI$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicOptionPaneUI$PropertyChangeHandler_FieldInfo_,
	_BasicOptionPaneUI$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicOptionPaneUI$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicOptionPaneUI"
};

$Object* allocate$BasicOptionPaneUI$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(BasicOptionPaneUI$PropertyChangeHandler));
}

void BasicOptionPaneUI$PropertyChangeHandler::init$($BasicOptionPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicOptionPaneUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->propertyChange(e);
}

BasicOptionPaneUI$PropertyChangeHandler::BasicOptionPaneUI$PropertyChangeHandler() {
}

$Class* BasicOptionPaneUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicOptionPaneUI$PropertyChangeHandler, name, initialize, &_BasicOptionPaneUI$PropertyChangeHandler_ClassInfo_, allocate$BasicOptionPaneUI$PropertyChangeHandler);
	return class$;
}

$Class* BasicOptionPaneUI$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax