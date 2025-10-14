#include <javax/swing/plaf/basic/BasicToolBarUI$PropertyListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$Handler.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$Handler = ::javax::swing::plaf::basic::BasicToolBarUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolBarUI$PropertyListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$PropertyListener, this$0)},
	{}
};

$MethodInfo _BasicToolBarUI$PropertyListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicToolBarUI$PropertyListener::*)($BasicToolBarUI*)>(&BasicToolBarUI$PropertyListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicToolBarUI$PropertyListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$PropertyListener", "javax.swing.plaf.basic.BasicToolBarUI", "PropertyListener", $PROTECTED},
	{}
};

$ClassInfo _BasicToolBarUI$PropertyListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI$PropertyListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicToolBarUI$PropertyListener_FieldInfo_,
	_BasicToolBarUI$PropertyListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicToolBarUI$PropertyListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI"
};

$Object* allocate$BasicToolBarUI$PropertyListener($Class* clazz) {
	return $of($alloc(BasicToolBarUI$PropertyListener));
}

void BasicToolBarUI$PropertyListener::init$($BasicToolBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicToolBarUI$PropertyListener::propertyChange($PropertyChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->propertyChange(e);
}

BasicToolBarUI$PropertyListener::BasicToolBarUI$PropertyListener() {
}

$Class* BasicToolBarUI$PropertyListener::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI$PropertyListener, name, initialize, &_BasicToolBarUI$PropertyListener_ClassInfo_, allocate$BasicToolBarUI$PropertyListener);
	return class$;
}

$Class* BasicToolBarUI$PropertyListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax