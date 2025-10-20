#include <javax/swing/JFormattedTextField$FocusLostHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParseException.h>
#include <javax/swing/JFormattedTextField.h>
#include <jcpp.h>

#undef COMMIT
#undef COMMIT_OR_REVERT
#undef REVERT

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ParseException = ::java::text::ParseException;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;

namespace javax {
	namespace swing {

$FieldInfo _JFormattedTextField$FocusLostHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JFormattedTextField;", nullptr, $FINAL | $SYNTHETIC, $field(JFormattedTextField$FocusLostHandler, this$0)},
	{}
};

$MethodInfo _JFormattedTextField$FocusLostHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JFormattedTextField;)V", nullptr, $PRIVATE, $method(static_cast<void(JFormattedTextField$FocusLostHandler::*)($JFormattedTextField*)>(&JFormattedTextField$FocusLostHandler::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JFormattedTextField$FocusLostHandler_InnerClassesInfo_[] = {
	{"javax.swing.JFormattedTextField$FocusLostHandler", "javax.swing.JFormattedTextField", "FocusLostHandler", $PRIVATE},
	{}
};

$ClassInfo _JFormattedTextField$FocusLostHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JFormattedTextField$FocusLostHandler",
	"java.lang.Object",
	"java.lang.Runnable,java.io.Serializable",
	_JFormattedTextField$FocusLostHandler_FieldInfo_,
	_JFormattedTextField$FocusLostHandler_MethodInfo_,
	nullptr,
	nullptr,
	_JFormattedTextField$FocusLostHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JFormattedTextField"
};

$Object* allocate$JFormattedTextField$FocusLostHandler($Class* clazz) {
	return $of($alloc(JFormattedTextField$FocusLostHandler));
}

int32_t JFormattedTextField$FocusLostHandler::hashCode() {
	 return this->$Runnable::hashCode();
}

bool JFormattedTextField$FocusLostHandler::equals(Object$* arg0) {
	 return this->$Runnable::equals(arg0);
}

$Object* JFormattedTextField$FocusLostHandler::clone() {
	 return this->$Runnable::clone();
}

$String* JFormattedTextField$FocusLostHandler::toString() {
	 return this->$Runnable::toString();
}

void JFormattedTextField$FocusLostHandler::finalize() {
	this->$Runnable::finalize();
}

void JFormattedTextField$FocusLostHandler::init$($JFormattedTextField* this$0) {
	$set(this, this$0, this$0);
}

void JFormattedTextField$FocusLostHandler::run() {
	$useLocalCurrentObjectStackCache();
	int32_t fb = this->this$0->getFocusLostBehavior();
	if (fb == $JFormattedTextField::COMMIT || fb == $JFormattedTextField::COMMIT_OR_REVERT) {
		try {
			this->this$0->commitEdit();
			this->this$0->setValue($(this->this$0->getValue()), true, true);
		} catch ($ParseException&) {
			$var($ParseException, pe, $catch());
			if (fb == $JFormattedTextField::COMMIT_OR_REVERT) {
				this->this$0->setValue($(this->this$0->getValue()), true, true);
			}
		}
	} else if (fb == $JFormattedTextField::REVERT) {
		this->this$0->setValue($(this->this$0->getValue()), true, true);
	}
}

JFormattedTextField$FocusLostHandler::JFormattedTextField$FocusLostHandler() {
}

$Class* JFormattedTextField$FocusLostHandler::load$($String* name, bool initialize) {
	$loadClass(JFormattedTextField$FocusLostHandler, name, initialize, &_JFormattedTextField$FocusLostHandler_ClassInfo_, allocate$JFormattedTextField$FocusLostHandler);
	return class$;
}

$Class* JFormattedTextField$FocusLostHandler::class$ = nullptr;

	} // swing
} // javax