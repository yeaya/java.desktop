#include <javax/swing/AbstractButton$ButtonChangeListener.h>

#include <javax/swing/AbstractButton$Handler.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractButton$Handler = ::javax::swing::AbstractButton$Handler;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$FieldInfo _AbstractButton$ButtonChangeListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/AbstractButton;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractButton$ButtonChangeListener, this$0)},
	{}
};

$MethodInfo _AbstractButton$ButtonChangeListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/AbstractButton;)V", nullptr, 0, $method(static_cast<void(AbstractButton$ButtonChangeListener::*)($AbstractButton*)>(&AbstractButton$ButtonChangeListener::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractButton$ButtonChangeListener_InnerClassesInfo_[] = {
	{"javax.swing.AbstractButton$ButtonChangeListener", "javax.swing.AbstractButton", "ButtonChangeListener", $PROTECTED},
	{}
};

$ClassInfo _AbstractButton$ButtonChangeListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.AbstractButton$ButtonChangeListener",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.io.Serializable",
	_AbstractButton$ButtonChangeListener_FieldInfo_,
	_AbstractButton$ButtonChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractButton$ButtonChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.AbstractButton"
};

$Object* allocate$AbstractButton$ButtonChangeListener($Class* clazz) {
	return $of($alloc(AbstractButton$ButtonChangeListener));
}

int32_t AbstractButton$ButtonChangeListener::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool AbstractButton$ButtonChangeListener::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* AbstractButton$ButtonChangeListener::clone() {
	 return this->$ChangeListener::clone();
}

$String* AbstractButton$ButtonChangeListener::toString() {
	 return this->$ChangeListener::toString();
}

void AbstractButton$ButtonChangeListener::finalize() {
	this->$ChangeListener::finalize();
}

void AbstractButton$ButtonChangeListener::init$($AbstractButton* this$0) {
	$set(this, this$0, this$0);
}

void AbstractButton$ButtonChangeListener::stateChanged($ChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->stateChanged(e);
}

AbstractButton$ButtonChangeListener::AbstractButton$ButtonChangeListener() {
}

$Class* AbstractButton$ButtonChangeListener::load$($String* name, bool initialize) {
	$loadClass(AbstractButton$ButtonChangeListener, name, initialize, &_AbstractButton$ButtonChangeListener_ClassInfo_, allocate$AbstractButton$ButtonChangeListener);
	return class$;
}

$Class* AbstractButton$ButtonChangeListener::class$ = nullptr;

	} // swing
} // javax