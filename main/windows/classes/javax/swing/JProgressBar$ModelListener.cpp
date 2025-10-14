#include <javax/swing/JProgressBar$ModelListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JProgressBar = ::javax::swing::JProgressBar;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$FieldInfo _JProgressBar$ModelListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JProgressBar;", nullptr, $FINAL | $SYNTHETIC, $field(JProgressBar$ModelListener, this$0)},
	{}
};

$MethodInfo _JProgressBar$ModelListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JProgressBar;)V", nullptr, $PRIVATE, $method(static_cast<void(JProgressBar$ModelListener::*)($JProgressBar*)>(&JProgressBar$ModelListener::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JProgressBar$ModelListener_InnerClassesInfo_[] = {
	{"javax.swing.JProgressBar$ModelListener", "javax.swing.JProgressBar", "ModelListener", $PRIVATE},
	{}
};

$ClassInfo _JProgressBar$ModelListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JProgressBar$ModelListener",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.io.Serializable",
	_JProgressBar$ModelListener_FieldInfo_,
	_JProgressBar$ModelListener_MethodInfo_,
	nullptr,
	nullptr,
	_JProgressBar$ModelListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JProgressBar"
};

$Object* allocate$JProgressBar$ModelListener($Class* clazz) {
	return $of($alloc(JProgressBar$ModelListener));
}

int32_t JProgressBar$ModelListener::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool JProgressBar$ModelListener::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* JProgressBar$ModelListener::clone() {
	 return this->$ChangeListener::clone();
}

$String* JProgressBar$ModelListener::toString() {
	 return this->$ChangeListener::toString();
}

void JProgressBar$ModelListener::finalize() {
	this->$ChangeListener::finalize();
}

void JProgressBar$ModelListener::init$($JProgressBar* this$0) {
	$set(this, this$0, this$0);
}

void JProgressBar$ModelListener::stateChanged($ChangeEvent* e) {
	this->this$0->fireStateChanged();
}

JProgressBar$ModelListener::JProgressBar$ModelListener() {
}

$Class* JProgressBar$ModelListener::load$($String* name, bool initialize) {
	$loadClass(JProgressBar$ModelListener, name, initialize, &_JProgressBar$ModelListener_ClassInfo_, allocate$JProgressBar$ModelListener);
	return class$;
}

$Class* JProgressBar$ModelListener::class$ = nullptr;

	} // swing
} // javax