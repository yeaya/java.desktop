#include <javax/swing/plaf/basic/BasicTreeUI$PropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$Handler = ::javax::swing::plaf::basic::BasicTreeUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicTreeUI$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$PropertyChangeHandler::*)($BasicTreeUI*)>(&BasicTreeUI$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicTreeUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$PropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicTreeUI$PropertyChangeHandler_FieldInfo_,
	_BasicTreeUI$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$PropertyChangeHandler));
}

void BasicTreeUI$PropertyChangeHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTreeUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* event) {
	$nc($(this->this$0->getHandler()))->propertyChange(event);
}

BasicTreeUI$PropertyChangeHandler::BasicTreeUI$PropertyChangeHandler() {
}

$Class* BasicTreeUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$PropertyChangeHandler, name, initialize, &_BasicTreeUI$PropertyChangeHandler_ClassInfo_, allocate$BasicTreeUI$PropertyChangeHandler);
	return class$;
}

$Class* BasicTreeUI$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax