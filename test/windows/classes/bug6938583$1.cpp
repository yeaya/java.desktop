#include <bug6938583$1.h>

#include <bug6938583.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef MOUSE_CLICKED

using $bug6938583 = ::bug6938583;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JTextArea = ::javax::swing::JTextArea;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _bug6938583$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6938583$1::*)()>(&bug6938583$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6938583$1_EnclosingMethodInfo_ = {
	"bug6938583",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6938583$1_InnerClassesInfo_[] = {
	{"bug6938583$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6938583$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6938583$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6938583$1_MethodInfo_,
	nullptr,
	&_bug6938583$1_EnclosingMethodInfo_,
	_bug6938583$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6938583"
};

$Object* allocate$bug6938583$1($Class* clazz) {
	return $of($alloc(bug6938583$1));
}

void bug6938583$1::init$() {
}

void bug6938583$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JTextArea, jta, $new($JTextArea));
	$var($DefaultCaret, dc, $new($DefaultCaret));
	jta->setCaret(dc);
	dc->deinstall(jta);
	dc->mouseClicked($$new($MouseEvent, jta, $MouseEvent::MOUSE_CLICKED, 0, 0, 0, 0, 0, false));
}

bug6938583$1::bug6938583$1() {
}

$Class* bug6938583$1::load$($String* name, bool initialize) {
	$loadClass(bug6938583$1, name, initialize, &_bug6938583$1_ClassInfo_, allocate$bug6938583$1);
	return class$;
}

$Class* bug6938583$1::class$ = nullptr;