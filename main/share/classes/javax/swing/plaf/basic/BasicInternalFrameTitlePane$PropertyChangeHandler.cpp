#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameTitlePane$Handler = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameTitlePane$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameTitlePane$PropertyChangeHandler::*)($BasicInternalFrameTitlePane*)>(&BasicInternalFrameTitlePane$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane$PropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicInternalFrameTitlePane$PropertyChangeHandler_FieldInfo_,
	_BasicInternalFrameTitlePane$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
};

$Object* allocate$BasicInternalFrameTitlePane$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane$PropertyChangeHandler));
}

void BasicInternalFrameTitlePane$PropertyChangeHandler::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameTitlePane$PropertyChangeHandler::propertyChange($PropertyChangeEvent* evt) {
	$nc($(this->this$0->getHandler()))->propertyChange(evt);
}

BasicInternalFrameTitlePane$PropertyChangeHandler::BasicInternalFrameTitlePane$PropertyChangeHandler() {
}

$Class* BasicInternalFrameTitlePane$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane$PropertyChangeHandler, name, initialize, &_BasicInternalFrameTitlePane$PropertyChangeHandler_ClassInfo_, allocate$BasicInternalFrameTitlePane$PropertyChangeHandler);
	return class$;
}

$Class* BasicInternalFrameTitlePane$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax