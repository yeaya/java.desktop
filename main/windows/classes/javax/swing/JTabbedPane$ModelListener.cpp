#include <javax/swing/JTabbedPane$ModelListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$FieldInfo _JTabbedPane$ModelListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTabbedPane;", nullptr, $FINAL | $SYNTHETIC, $field(JTabbedPane$ModelListener, this$0)},
	{}
};

$MethodInfo _JTabbedPane$ModelListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JTabbedPane;)V", nullptr, $PROTECTED, $method(static_cast<void(JTabbedPane$ModelListener::*)($JTabbedPane*)>(&JTabbedPane$ModelListener::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTabbedPane$ModelListener_InnerClassesInfo_[] = {
	{"javax.swing.JTabbedPane$ModelListener", "javax.swing.JTabbedPane", "ModelListener", $PROTECTED},
	{}
};

$ClassInfo _JTabbedPane$ModelListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTabbedPane$ModelListener",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.io.Serializable",
	_JTabbedPane$ModelListener_FieldInfo_,
	_JTabbedPane$ModelListener_MethodInfo_,
	nullptr,
	nullptr,
	_JTabbedPane$ModelListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTabbedPane"
};

$Object* allocate$JTabbedPane$ModelListener($Class* clazz) {
	return $of($alloc(JTabbedPane$ModelListener));
}

int32_t JTabbedPane$ModelListener::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool JTabbedPane$ModelListener::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* JTabbedPane$ModelListener::clone() {
	 return this->$ChangeListener::clone();
}

$String* JTabbedPane$ModelListener::toString() {
	 return this->$ChangeListener::toString();
}

void JTabbedPane$ModelListener::finalize() {
	this->$ChangeListener::finalize();
}

void JTabbedPane$ModelListener::init$($JTabbedPane* this$0) {
	$set(this, this$0, this$0);
}

void JTabbedPane$ModelListener::stateChanged($ChangeEvent* e) {
	this->this$0->fireStateChanged();
}

JTabbedPane$ModelListener::JTabbedPane$ModelListener() {
}

$Class* JTabbedPane$ModelListener::load$($String* name, bool initialize) {
	$loadClass(JTabbedPane$ModelListener, name, initialize, &_JTabbedPane$ModelListener_ClassInfo_, allocate$JTabbedPane$ModelListener);
	return class$;
}

$Class* JTabbedPane$ModelListener::class$ = nullptr;

	} // swing
} // javax