#include <javax/swing/plaf/basic/BasicInternalFrameUI$InternalFramePropertyChangeListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;
using $BasicInternalFrameUI$Handler = ::javax::swing::plaf::basic::BasicInternalFrameUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameUI$InternalFramePropertyChangeListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameUI$InternalFramePropertyChangeListener, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameUI$InternalFramePropertyChangeListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameUI$InternalFramePropertyChangeListener::*)($BasicInternalFrameUI*)>(&BasicInternalFrameUI$InternalFramePropertyChangeListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameUI$InternalFramePropertyChangeListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameUI$InternalFramePropertyChangeListener", "javax.swing.plaf.basic.BasicInternalFrameUI", "InternalFramePropertyChangeListener", $PUBLIC},
	{}
};

$ClassInfo _BasicInternalFrameUI$InternalFramePropertyChangeListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameUI$InternalFramePropertyChangeListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicInternalFrameUI$InternalFramePropertyChangeListener_FieldInfo_,
	_BasicInternalFrameUI$InternalFramePropertyChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameUI$InternalFramePropertyChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameUI"
};

$Object* allocate$BasicInternalFrameUI$InternalFramePropertyChangeListener($Class* clazz) {
	return $of($alloc(BasicInternalFrameUI$InternalFramePropertyChangeListener));
}

void BasicInternalFrameUI$InternalFramePropertyChangeListener::init$($BasicInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameUI$InternalFramePropertyChangeListener::propertyChange($PropertyChangeEvent* evt) {
	$nc($(this->this$0->getHandler()))->propertyChange(evt);
}

BasicInternalFrameUI$InternalFramePropertyChangeListener::BasicInternalFrameUI$InternalFramePropertyChangeListener() {
}

$Class* BasicInternalFrameUI$InternalFramePropertyChangeListener::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameUI$InternalFramePropertyChangeListener, name, initialize, &_BasicInternalFrameUI$InternalFramePropertyChangeListener_ClassInfo_, allocate$BasicInternalFrameUI$InternalFramePropertyChangeListener);
	return class$;
}

$Class* BasicInternalFrameUI$InternalFramePropertyChangeListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax