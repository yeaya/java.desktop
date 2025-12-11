#include <bug6797139$1.h>

#include <bug6797139.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;

$MethodInfo _bug6797139$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6797139$1::*)()>(&bug6797139$1::init$))},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _bug6797139$1_EnclosingMethodInfo_ = {
	"bug6797139",
	"createGui",
	"()V"
};

$InnerClassInfo _bug6797139$1_InnerClassesInfo_[] = {
	{"bug6797139$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6797139$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6797139$1",
	"javax.swing.plaf.basic.BasicButtonUI",
	nullptr,
	nullptr,
	_bug6797139$1_MethodInfo_,
	nullptr,
	&_bug6797139$1_EnclosingMethodInfo_,
	_bug6797139$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6797139"
};

$Object* allocate$bug6797139$1($Class* clazz) {
	return $of($alloc(bug6797139$1));
}

void bug6797139$1::init$() {
	$BasicButtonUI::init$();
}

void bug6797139$1::paintText($Graphics* g, $AbstractButton* b, $Rectangle* textRect, $String* text) {
	$BasicButtonUI::paintText(g, b, textRect, text);
	if ($nc(text)->endsWith("..."_s)) {
		$throwNew($RuntimeException, "Text is truncated!"_s);
	}
}

bug6797139$1::bug6797139$1() {
}

$Class* bug6797139$1::load$($String* name, bool initialize) {
	$loadClass(bug6797139$1, name, initialize, &_bug6797139$1_ClassInfo_, allocate$bug6797139$1);
	return class$;
}

$Class* bug6797139$1::class$ = nullptr;