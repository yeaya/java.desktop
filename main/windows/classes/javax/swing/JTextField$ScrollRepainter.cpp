#include <javax/swing/JTextField$ScrollRepainter.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$FieldInfo _JTextField$ScrollRepainter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTextField;", nullptr, $FINAL | $SYNTHETIC, $field(JTextField$ScrollRepainter, this$0)},
	{}
};

$MethodInfo _JTextField$ScrollRepainter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JTextField;)V", nullptr, 0, $method(static_cast<void(JTextField$ScrollRepainter::*)($JTextField*)>(&JTextField$ScrollRepainter::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTextField$ScrollRepainter_InnerClassesInfo_[] = {
	{"javax.swing.JTextField$ScrollRepainter", "javax.swing.JTextField", "ScrollRepainter", 0},
	{}
};

$ClassInfo _JTextField$ScrollRepainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTextField$ScrollRepainter",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.io.Serializable",
	_JTextField$ScrollRepainter_FieldInfo_,
	_JTextField$ScrollRepainter_MethodInfo_,
	nullptr,
	nullptr,
	_JTextField$ScrollRepainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTextField"
};

$Object* allocate$JTextField$ScrollRepainter($Class* clazz) {
	return $of($alloc(JTextField$ScrollRepainter));
}

int32_t JTextField$ScrollRepainter::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool JTextField$ScrollRepainter::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* JTextField$ScrollRepainter::clone() {
	 return this->$ChangeListener::clone();
}

$String* JTextField$ScrollRepainter::toString() {
	 return this->$ChangeListener::toString();
}

void JTextField$ScrollRepainter::finalize() {
	this->$ChangeListener::finalize();
}

void JTextField$ScrollRepainter::init$($JTextField* this$0) {
	$set(this, this$0, this$0);
}

void JTextField$ScrollRepainter::stateChanged($ChangeEvent* e) {
	this->this$0->repaint();
}

JTextField$ScrollRepainter::JTextField$ScrollRepainter() {
}

$Class* JTextField$ScrollRepainter::load$($String* name, bool initialize) {
	$loadClass(JTextField$ScrollRepainter, name, initialize, &_JTextField$ScrollRepainter_ClassInfo_, allocate$JTextField$ScrollRepainter);
	return class$;
}

$Class* JTextField$ScrollRepainter::class$ = nullptr;

	} // swing
} // javax