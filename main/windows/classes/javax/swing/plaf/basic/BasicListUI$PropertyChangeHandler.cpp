#include <javax/swing/plaf/basic/BasicListUI$PropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicListUI$Handler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;
using $BasicListUI$Handler = ::javax::swing::plaf::basic::BasicListUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicListUI$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicListUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicListUI$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicListUI$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicListUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicListUI$PropertyChangeHandler::*)($BasicListUI*)>(&BasicListUI$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicListUI$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicListUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicListUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicListUI$PropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicListUI$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicListUI$PropertyChangeHandler_FieldInfo_,
	_BasicListUI$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicListUI$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicListUI"
};

$Object* allocate$BasicListUI$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(BasicListUI$PropertyChangeHandler));
}

void BasicListUI$PropertyChangeHandler::init$($BasicListUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicListUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->propertyChange(e);
}

BasicListUI$PropertyChangeHandler::BasicListUI$PropertyChangeHandler() {
}

$Class* BasicListUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicListUI$PropertyChangeHandler, name, initialize, &_BasicListUI$PropertyChangeHandler_ClassInfo_, allocate$BasicListUI$PropertyChangeHandler);
	return class$;
}

$Class* BasicListUI$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax