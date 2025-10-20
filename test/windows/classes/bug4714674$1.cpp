#include <bug4714674$1.h>

#include <bug4714674.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <jcpp.h>

using $bug4714674 = ::bug4714674;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JEditorPane = ::javax::swing::JEditorPane;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug4714674$1_FieldInfo_[] = {
	{"this$0", "Lbug4714674;", nullptr, $FINAL | $SYNTHETIC, $field(bug4714674$1, this$0)},
	{"val$baseURL", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug4714674$1, val$baseURL)},
	{}
};

$MethodInfo _bug4714674$1_MethodInfo_[] = {
	{"<init>", "(Lbug4714674;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(bug4714674$1::*)($bug4714674*,$String*)>(&bug4714674$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4714674$1_EnclosingMethodInfo_ = {
	"bug4714674",
	"test",
	"()V"
};

$InnerClassInfo _bug4714674$1_InnerClassesInfo_[] = {
	{"bug4714674$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4714674$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4714674$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4714674$1_FieldInfo_,
	_bug4714674$1_MethodInfo_,
	nullptr,
	&_bug4714674$1_EnclosingMethodInfo_,
	_bug4714674$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4714674"
};

$Object* allocate$bug4714674$1($Class* clazz) {
	return $of($alloc(bug4714674$1));
}

void bug4714674$1::init$($bug4714674* this$0, $String* val$baseURL) {
	$set(this, this$0, this$0);
	$set(this, val$baseURL, val$baseURL);
}

void bug4714674$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($JEditorPane, pane, $new($JEditorPane));
		$nc(($cast($AbstractDocument, $(pane->getDocument()))))->setAsynchronousLoadPriority(1);
		pane->setPage(this->val$baseURL);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($Error, static_cast<$Throwable*>(e));
	}
}

bug4714674$1::bug4714674$1() {
}

$Class* bug4714674$1::load$($String* name, bool initialize) {
	$loadClass(bug4714674$1, name, initialize, &_bug4714674$1_ClassInfo_, allocate$bug4714674$1);
	return class$;
}

$Class* bug4714674$1::class$ = nullptr;