#include <sun/awt/im/InputMethodJFrame.h>

#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/awt/im/InputContext.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRootPane.h>
#include <sun/awt/im/InputContext.h>
#include <jcpp.h>

#undef NONE

using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $InputContext = ::java::awt::im::InputContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JRootPane = ::javax::swing::JRootPane;
using $1InputContext = ::sun::awt::im::InputContext;
using $InputMethodWindow = ::sun::awt::im::InputMethodWindow;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _InputMethodJFrame_FieldInfo_[] = {
	{"inputContext", "Lsun/awt/im/InputContext;", nullptr, 0, $field(InputMethodJFrame, inputContext)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InputMethodJFrame, serialVersionUID)},
	{}
};

$MethodInfo _InputMethodJFrame_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Lsun/awt/im/InputContext;)V", nullptr, $PUBLIC, $method(static_cast<void(InputMethodJFrame::*)($String*,$1InputContext*)>(&InputMethodJFrame::init$))},
	{"getInputContext", "()Ljava/awt/im/InputContext;", nullptr, $PUBLIC},
	{"setInputContext", "(Lsun/awt/im/InputContext;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InputMethodJFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.im.InputMethodJFrame",
	"javax.swing.JFrame",
	"sun.awt.im.InputMethodWindow",
	_InputMethodJFrame_FieldInfo_,
	_InputMethodJFrame_MethodInfo_
};

$Object* allocate$InputMethodJFrame($Class* clazz) {
	return $of($alloc(InputMethodJFrame));
}

$String* InputMethodJFrame::toString() {
	 return this->$JFrame::toString();
}

int32_t InputMethodJFrame::hashCode() {
	 return this->$JFrame::hashCode();
}

bool InputMethodJFrame::equals(Object$* arg0) {
	 return this->$JFrame::equals(arg0);
}

$Object* InputMethodJFrame::clone() {
	 return this->$JFrame::clone();
}

void InputMethodJFrame::finalize() {
	this->$JFrame::finalize();
}

void InputMethodJFrame::init$($String* title, $1InputContext* context) {
	$JFrame::init$(title);
	$set(this, inputContext, nullptr);
	if ($JFrame::isDefaultLookAndFeelDecorated()) {
		this->setUndecorated(true);
		$nc($(this->getRootPane()))->setWindowDecorationStyle($JRootPane::NONE);
	}
	if (context != nullptr) {
		$set(this, inputContext, context);
	}
	setFocusableWindowState(false);
}

void InputMethodJFrame::setInputContext($1InputContext* inputContext) {
	$set(this, inputContext, inputContext);
}

$InputContext* InputMethodJFrame::getInputContext() {
	if (this->inputContext != nullptr) {
		return this->inputContext;
	} else {
		return $JFrame::getInputContext();
	}
}

InputMethodJFrame::InputMethodJFrame() {
}

$Class* InputMethodJFrame::load$($String* name, bool initialize) {
	$loadClass(InputMethodJFrame, name, initialize, &_InputMethodJFrame_ClassInfo_, allocate$InputMethodJFrame);
	return class$;
}

$Class* InputMethodJFrame::class$ = nullptr;

		} // im
	} // awt
} // sun