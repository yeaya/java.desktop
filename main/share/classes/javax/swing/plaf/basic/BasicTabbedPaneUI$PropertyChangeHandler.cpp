#include <javax/swing/plaf/basic/BasicTabbedPaneUI$PropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$Handler = ::javax::swing::plaf::basic::BasicTabbedPaneUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTabbedPaneUI$PropertyChangeHandler::*)($BasicTabbedPaneUI*)>(&BasicTabbedPaneUI$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicTabbedPaneUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTabbedPaneUI$PropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicTabbedPaneUI$PropertyChangeHandler_FieldInfo_,
	_BasicTabbedPaneUI$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$PropertyChangeHandler));
}

void BasicTabbedPaneUI$PropertyChangeHandler::init$($BasicTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTabbedPaneUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->propertyChange(e);
}

BasicTabbedPaneUI$PropertyChangeHandler::BasicTabbedPaneUI$PropertyChangeHandler() {
}

$Class* BasicTabbedPaneUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$PropertyChangeHandler, name, initialize, &_BasicTabbedPaneUI$PropertyChangeHandler_ClassInfo_, allocate$BasicTabbedPaneUI$PropertyChangeHandler);
	return class$;
}

$Class* BasicTabbedPaneUI$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax