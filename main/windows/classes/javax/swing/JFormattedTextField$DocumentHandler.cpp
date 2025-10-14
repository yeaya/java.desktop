#include <javax/swing/JFormattedTextField$DocumentHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/DocumentListener.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;

namespace javax {
	namespace swing {

$FieldInfo _JFormattedTextField$DocumentHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JFormattedTextField;", nullptr, $FINAL | $SYNTHETIC, $field(JFormattedTextField$DocumentHandler, this$0)},
	{}
};

$MethodInfo _JFormattedTextField$DocumentHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JFormattedTextField;)V", nullptr, $PRIVATE, $method(static_cast<void(JFormattedTextField$DocumentHandler::*)($JFormattedTextField*)>(&JFormattedTextField$DocumentHandler::init$))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JFormattedTextField$DocumentHandler_InnerClassesInfo_[] = {
	{"javax.swing.JFormattedTextField$DocumentHandler", "javax.swing.JFormattedTextField", "DocumentHandler", $PRIVATE},
	{}
};

$ClassInfo _JFormattedTextField$DocumentHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JFormattedTextField$DocumentHandler",
	"java.lang.Object",
	"javax.swing.event.DocumentListener,java.io.Serializable",
	_JFormattedTextField$DocumentHandler_FieldInfo_,
	_JFormattedTextField$DocumentHandler_MethodInfo_,
	nullptr,
	nullptr,
	_JFormattedTextField$DocumentHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JFormattedTextField"
};

$Object* allocate$JFormattedTextField$DocumentHandler($Class* clazz) {
	return $of($alloc(JFormattedTextField$DocumentHandler));
}

int32_t JFormattedTextField$DocumentHandler::hashCode() {
	 return this->$DocumentListener::hashCode();
}

bool JFormattedTextField$DocumentHandler::equals(Object$* arg0) {
	 return this->$DocumentListener::equals(arg0);
}

$Object* JFormattedTextField$DocumentHandler::clone() {
	 return this->$DocumentListener::clone();
}

$String* JFormattedTextField$DocumentHandler::toString() {
	 return this->$DocumentListener::toString();
}

void JFormattedTextField$DocumentHandler::finalize() {
	this->$DocumentListener::finalize();
}

void JFormattedTextField$DocumentHandler::init$($JFormattedTextField* this$0) {
	$set(this, this$0, this$0);
}

void JFormattedTextField$DocumentHandler::insertUpdate($DocumentEvent* e) {
	this->this$0->setEdited(true);
}

void JFormattedTextField$DocumentHandler::removeUpdate($DocumentEvent* e) {
	this->this$0->setEdited(true);
}

void JFormattedTextField$DocumentHandler::changedUpdate($DocumentEvent* e) {
}

JFormattedTextField$DocumentHandler::JFormattedTextField$DocumentHandler() {
}

$Class* JFormattedTextField$DocumentHandler::load$($String* name, bool initialize) {
	$loadClass(JFormattedTextField$DocumentHandler, name, initialize, &_JFormattedTextField$DocumentHandler_ClassInfo_, allocate$JFormattedTextField$DocumentHandler);
	return class$;
}

$Class* JFormattedTextField$DocumentHandler::class$ = nullptr;

	} // swing
} // javax