#include <bug6917744$1.h>

#include <bug6917744.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/IOException.h>
#include <java/net/URL.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug6917744 = ::bug6917744;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _bug6917744$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6917744$1::*)()>(&bug6917744$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6917744$1_EnclosingMethodInfo_ = {
	"bug6917744",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6917744$1_InnerClassesInfo_[] = {
	{"bug6917744$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6917744$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6917744$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6917744$1_MethodInfo_,
	nullptr,
	&_bug6917744$1_EnclosingMethodInfo_,
	_bug6917744$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6917744"
};

$Object* allocate$bug6917744$1($Class* clazz) {
	return $of($alloc(bug6917744$1));
}

void bug6917744$1::init$() {
}

void bug6917744$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($bug6917744);
	$assignStatic($bug6917744::frame, $new($JFrame));
	$assignStatic($bug6917744::editorPane, $new($JEditorPane));
	try {
		$nc($bug6917744::editorPane)->setPage($($bug6917744::class$->getResource("/test.html"_s)));
	} catch ($IOException& e) {
		$nc($bug6917744::frame)->dispose();
		$throwNew($RuntimeException, "HTML resource not found"_s, e);
	}
	$assignStatic($bug6917744::scrollPane, $new($JScrollPane, $bug6917744::editorPane));
	$nc($($nc($bug6917744::frame)->getContentPane()))->add(static_cast<$Component*>($bug6917744::scrollPane));
	$nc($bug6917744::frame)->setSize(400, 300);
	$nc($bug6917744::frame)->setVisible(true);
}

bug6917744$1::bug6917744$1() {
}

$Class* bug6917744$1::load$($String* name, bool initialize) {
	$loadClass(bug6917744$1, name, initialize, &_bug6917744$1_ClassInfo_, allocate$bug6917744$1);
	return class$;
}

$Class* bug6917744$1::class$ = nullptr;