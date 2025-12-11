#include <sun/awt/im/SimpleInputMethodWindow.h>

#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/awt/im/InputContext.h>
#include <sun/awt/im/InputContext.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $1InputContext = ::java::awt::im::InputContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputContext = ::sun::awt::im::InputContext;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _SimpleInputMethodWindow_FieldInfo_[] = {
	{"inputContext", "Lsun/awt/im/InputContext;", nullptr, 0, $field(SimpleInputMethodWindow, inputContext)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SimpleInputMethodWindow, serialVersionUID)},
	{}
};

$MethodInfo _SimpleInputMethodWindow_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Lsun/awt/im/InputContext;)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleInputMethodWindow::*)($String*,$InputContext*)>(&SimpleInputMethodWindow::init$))},
	{"getInputContext", "()Ljava/awt/im/InputContext;", nullptr, $PUBLIC},
	{"setInputContext", "(Lsun/awt/im/InputContext;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SimpleInputMethodWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.im.SimpleInputMethodWindow",
	"java.awt.Frame",
	"sun.awt.im.InputMethodWindow",
	_SimpleInputMethodWindow_FieldInfo_,
	_SimpleInputMethodWindow_MethodInfo_
};

$Object* allocate$SimpleInputMethodWindow($Class* clazz) {
	return $of($alloc(SimpleInputMethodWindow));
}

$String* SimpleInputMethodWindow::toString() {
	 return this->$Frame::toString();
}

int32_t SimpleInputMethodWindow::hashCode() {
	 return this->$Frame::hashCode();
}

bool SimpleInputMethodWindow::equals(Object$* arg0) {
	 return this->$Frame::equals(arg0);
}

$Object* SimpleInputMethodWindow::clone() {
	 return this->$Frame::clone();
}

void SimpleInputMethodWindow::finalize() {
	this->$Frame::finalize();
}

void SimpleInputMethodWindow::init$($String* title, $InputContext* context) {
	$Frame::init$(title);
	$set(this, inputContext, nullptr);
	if (context != nullptr) {
		$set(this, inputContext, context);
	}
	setFocusableWindowState(false);
}

void SimpleInputMethodWindow::setInputContext($InputContext* inputContext) {
	$set(this, inputContext, inputContext);
}

$1InputContext* SimpleInputMethodWindow::getInputContext() {
	if (this->inputContext != nullptr) {
		return this->inputContext;
	} else {
		return $Frame::getInputContext();
	}
}

SimpleInputMethodWindow::SimpleInputMethodWindow() {
}

$Class* SimpleInputMethodWindow::load$($String* name, bool initialize) {
	$loadClass(SimpleInputMethodWindow, name, initialize, &_SimpleInputMethodWindow_ClassInfo_, allocate$SimpleInputMethodWindow);
	return class$;
}

$Class* SimpleInputMethodWindow::class$ = nullptr;

		} // im
	} // awt
} // sun