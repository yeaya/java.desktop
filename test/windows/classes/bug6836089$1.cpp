#include <bug6836089$1.h>

#include <bug6836089.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $bug6836089 = ::bug6836089;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JTextPane = ::javax::swing::JTextPane;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $EditorKit = ::javax::swing::text::EditorKit;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

$MethodInfo _bug6836089$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6836089$1::*)()>(&bug6836089$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6836089$1_EnclosingMethodInfo_ = {
	"bug6836089",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6836089$1_InnerClassesInfo_[] = {
	{"bug6836089$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6836089$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6836089$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6836089$1_MethodInfo_,
	nullptr,
	&_bug6836089$1_EnclosingMethodInfo_,
	_bug6836089$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6836089"
};

$Object* allocate$bug6836089$1($Class* clazz) {
	return $of($alloc(bug6836089$1));
}

void bug6836089$1::init$() {
}

void bug6836089$1::run() {
	$var($JTextPane, htmlPane, $new($JTextPane));
	htmlPane->setEditorKit($$new($HTMLEditorKit));
	htmlPane->setText("<html><head></head><body>&#131072;</body></html>"_s);
	$var($String, str, htmlPane->getText());
	if ($nc(str)->contains("&#0;"_s)) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

bug6836089$1::bug6836089$1() {
}

$Class* bug6836089$1::load$($String* name, bool initialize) {
	$loadClass(bug6836089$1, name, initialize, &_bug6836089$1_ClassInfo_, allocate$bug6836089$1);
	return class$;
}

$Class* bug6836089$1::class$ = nullptr;