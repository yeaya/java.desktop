#include <javax/swing/plaf/basic/BasicScrollPaneUI$PropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;
using $BasicScrollPaneUI$Handler = ::javax::swing::plaf::basic::BasicScrollPaneUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$NamedAttribute BasicScrollPaneUI$PropertyChangeHandler_Attribute_var$0[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _BasicScrollPaneUI$PropertyChangeHandler_Annotations_[] = {
	{"Ljava/lang/Deprecated;", BasicScrollPaneUI$PropertyChangeHandler_Attribute_var$0},
	{}
};

$FieldInfo _BasicScrollPaneUI$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollPaneUI$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicScrollPaneUI$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicScrollPaneUI$PropertyChangeHandler::*)($BasicScrollPaneUI*)>(&BasicScrollPaneUI$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicScrollPaneUI$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollPaneUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicScrollPaneUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicScrollPaneUI$PropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollPaneUI$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicScrollPaneUI$PropertyChangeHandler_FieldInfo_,
	_BasicScrollPaneUI$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollPaneUI$PropertyChangeHandler_InnerClassesInfo_,
	_BasicScrollPaneUI$PropertyChangeHandler_Annotations_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollPaneUI"
};

$Object* allocate$BasicScrollPaneUI$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(BasicScrollPaneUI$PropertyChangeHandler));
}

void BasicScrollPaneUI$PropertyChangeHandler::init$($BasicScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicScrollPaneUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->propertyChange(e);
}

BasicScrollPaneUI$PropertyChangeHandler::BasicScrollPaneUI$PropertyChangeHandler() {
}

$Class* BasicScrollPaneUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicScrollPaneUI$PropertyChangeHandler, name, initialize, &_BasicScrollPaneUI$PropertyChangeHandler_ClassInfo_, allocate$BasicScrollPaneUI$PropertyChangeHandler);
	return class$;
}

$Class* BasicScrollPaneUI$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax