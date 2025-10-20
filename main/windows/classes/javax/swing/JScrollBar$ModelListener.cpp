#include <javax/swing/JScrollBar$ModelListener.h>

#include <java/awt/event/AdjustmentEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

#undef ADJUSTMENT_VALUE_CHANGED
#undef TRACK

using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JScrollBar = ::javax::swing::JScrollBar;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$FieldInfo _JScrollBar$ModelListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JScrollBar;", nullptr, $FINAL | $SYNTHETIC, $field(JScrollBar$ModelListener, this$0)},
	{}
};

$MethodInfo _JScrollBar$ModelListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JScrollBar;)V", nullptr, $PRIVATE, $method(static_cast<void(JScrollBar$ModelListener::*)($JScrollBar*)>(&JScrollBar$ModelListener::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JScrollBar$ModelListener_InnerClassesInfo_[] = {
	{"javax.swing.JScrollBar$ModelListener", "javax.swing.JScrollBar", "ModelListener", $PRIVATE},
	{}
};

$ClassInfo _JScrollBar$ModelListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JScrollBar$ModelListener",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.io.Serializable",
	_JScrollBar$ModelListener_FieldInfo_,
	_JScrollBar$ModelListener_MethodInfo_,
	nullptr,
	nullptr,
	_JScrollBar$ModelListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JScrollBar"
};

$Object* allocate$JScrollBar$ModelListener($Class* clazz) {
	return $of($alloc(JScrollBar$ModelListener));
}

int32_t JScrollBar$ModelListener::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool JScrollBar$ModelListener::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* JScrollBar$ModelListener::clone() {
	 return this->$ChangeListener::clone();
}

$String* JScrollBar$ModelListener::toString() {
	 return this->$ChangeListener::toString();
}

void JScrollBar$ModelListener::finalize() {
	this->$ChangeListener::finalize();
}

void JScrollBar$ModelListener::init$($JScrollBar* this$0) {
	$set(this, this$0, this$0);
}

void JScrollBar$ModelListener::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, $nc(e)->getSource());
	if ($instanceOf($BoundedRangeModel, obj)) {
		int32_t id = $AdjustmentEvent::ADJUSTMENT_VALUE_CHANGED;
		int32_t type = $AdjustmentEvent::TRACK;
		$var($BoundedRangeModel, model, $cast($BoundedRangeModel, obj));
		int32_t value = $nc(model)->getValue();
		bool isAdjusting = model->getValueIsAdjusting();
		this->this$0->fireAdjustmentValueChanged(id, type, value, isAdjusting);
	}
}

JScrollBar$ModelListener::JScrollBar$ModelListener() {
}

$Class* JScrollBar$ModelListener::load$($String* name, bool initialize) {
	$loadClass(JScrollBar$ModelListener, name, initialize, &_JScrollBar$ModelListener_ClassInfo_, allocate$JScrollBar$ModelListener);
	return class$;
}

$Class* JScrollBar$ModelListener::class$ = nullptr;

	} // swing
} // javax