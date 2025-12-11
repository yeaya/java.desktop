#include <javax/swing/JSlider$ModelListener.h>

#include <javax/swing/JSlider.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSlider = ::javax::swing::JSlider;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$FieldInfo _JSlider$ModelListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JSlider;", nullptr, $FINAL | $SYNTHETIC, $field(JSlider$ModelListener, this$0)},
	{}
};

$MethodInfo _JSlider$ModelListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JSlider;)V", nullptr, $PRIVATE, $method(static_cast<void(JSlider$ModelListener::*)($JSlider*)>(&JSlider$ModelListener::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JSlider$ModelListener_InnerClassesInfo_[] = {
	{"javax.swing.JSlider$ModelListener", "javax.swing.JSlider", "ModelListener", $PRIVATE},
	{}
};

$ClassInfo _JSlider$ModelListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JSlider$ModelListener",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.io.Serializable",
	_JSlider$ModelListener_FieldInfo_,
	_JSlider$ModelListener_MethodInfo_,
	nullptr,
	nullptr,
	_JSlider$ModelListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSlider"
};

$Object* allocate$JSlider$ModelListener($Class* clazz) {
	return $of($alloc(JSlider$ModelListener));
}

int32_t JSlider$ModelListener::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool JSlider$ModelListener::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* JSlider$ModelListener::clone() {
	 return this->$ChangeListener::clone();
}

$String* JSlider$ModelListener::toString() {
	 return this->$ChangeListener::toString();
}

void JSlider$ModelListener::finalize() {
	this->$ChangeListener::finalize();
}

void JSlider$ModelListener::init$($JSlider* this$0) {
	$set(this, this$0, this$0);
}

void JSlider$ModelListener::stateChanged($ChangeEvent* e) {
	this->this$0->fireStateChanged();
}

JSlider$ModelListener::JSlider$ModelListener() {
}

$Class* JSlider$ModelListener::load$($String* name, bool initialize) {
	$loadClass(JSlider$ModelListener, name, initialize, &_JSlider$ModelListener_ClassInfo_, allocate$JSlider$ModelListener);
	return class$;
}

$Class* JSlider$ModelListener::class$ = nullptr;

	} // swing
} // javax