#include <javax/swing/JWindow$AccessibleJWindow.h>

#include <java/awt/Window$AccessibleAWTWindow.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JWindow.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $Window$AccessibleAWTWindow = ::java::awt::Window$AccessibleAWTWindow;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JWindow = ::javax::swing::JWindow;

namespace javax {
	namespace swing {

$FieldInfo _JWindow$AccessibleJWindow_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JWindow;", nullptr, $FINAL | $SYNTHETIC, $field(JWindow$AccessibleJWindow, this$0)},
	{}
};

$MethodInfo _JWindow$AccessibleJWindow_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JWindow;)V", nullptr, $PROTECTED, $method(static_cast<void(JWindow$AccessibleJWindow::*)($JWindow*)>(&JWindow$AccessibleJWindow::init$))},
	{}
};

$InnerClassInfo _JWindow$AccessibleJWindow_InnerClassesInfo_[] = {
	{"javax.swing.JWindow$AccessibleJWindow", "javax.swing.JWindow", "AccessibleJWindow", $PROTECTED},
	{"java.awt.Window$AccessibleAWTWindow", "java.awt.Window", "AccessibleAWTWindow", $PROTECTED},
	{}
};

$ClassInfo _JWindow$AccessibleJWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JWindow$AccessibleJWindow",
	"java.awt.Window$AccessibleAWTWindow",
	nullptr,
	_JWindow$AccessibleJWindow_FieldInfo_,
	_JWindow$AccessibleJWindow_MethodInfo_,
	nullptr,
	nullptr,
	_JWindow$AccessibleJWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JWindow"
};

$Object* allocate$JWindow$AccessibleJWindow($Class* clazz) {
	return $of($alloc(JWindow$AccessibleJWindow));
}

void JWindow$AccessibleJWindow::init$($JWindow* this$0) {
	$set(this, this$0, this$0);
	$Window$AccessibleAWTWindow::init$(this$0);
}

JWindow$AccessibleJWindow::JWindow$AccessibleJWindow() {
}

$Class* JWindow$AccessibleJWindow::load$($String* name, bool initialize) {
	$loadClass(JWindow$AccessibleJWindow, name, initialize, &_JWindow$AccessibleJWindow_ClassInfo_, allocate$JWindow$AccessibleJWindow);
	return class$;
}

$Class* JWindow$AccessibleJWindow::class$ = nullptr;

	} // swing
} // javax