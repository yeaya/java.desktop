#include <javax/swing/plaf/basic/BasicScrollBarUI$PropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$Handler.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $BasicScrollBarUI$Handler = ::javax::swing::plaf::basic::BasicScrollBarUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicScrollBarUI$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollBarUI$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicScrollBarUI$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollBarUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicScrollBarUI$PropertyChangeHandler::*)($BasicScrollBarUI*)>(&BasicScrollBarUI$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicScrollBarUI$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollBarUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicScrollBarUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicScrollBarUI$PropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollBarUI$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicScrollBarUI$PropertyChangeHandler_FieldInfo_,
	_BasicScrollBarUI$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollBarUI$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollBarUI"
};

$Object* allocate$BasicScrollBarUI$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(BasicScrollBarUI$PropertyChangeHandler));
}

void BasicScrollBarUI$PropertyChangeHandler::init$($BasicScrollBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicScrollBarUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->propertyChange(e);
}

BasicScrollBarUI$PropertyChangeHandler::BasicScrollBarUI$PropertyChangeHandler() {
}

$Class* BasicScrollBarUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicScrollBarUI$PropertyChangeHandler, name, initialize, &_BasicScrollBarUI$PropertyChangeHandler_ClassInfo_, allocate$BasicScrollBarUI$PropertyChangeHandler);
	return class$;
}

$Class* BasicScrollBarUI$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax