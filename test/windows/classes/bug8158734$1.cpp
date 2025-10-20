#include <bug8158734$1.h>

#include <bug8158734$MyClassloader.h>
#include <bug8158734$MyEditorKit.h>
#include <bug8158734.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/EditorKit.h>
#include <jcpp.h>

using $bug8158734 = ::bug8158734;
using $bug8158734$MyClassloader = ::bug8158734$MyClassloader;
using $bug8158734$MyEditorKit = ::bug8158734$MyEditorKit;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JEditorPane = ::javax::swing::JEditorPane;
using $EditorKit = ::javax::swing::text::EditorKit;

$MethodInfo _bug8158734$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8158734$1::*)()>(&bug8158734$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8158734$1_EnclosingMethodInfo_ = {
	"bug8158734",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8158734$1_InnerClassesInfo_[] = {
	{"bug8158734$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8158734$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8158734$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8158734$1_MethodInfo_,
	nullptr,
	&_bug8158734$1_EnclosingMethodInfo_,
	_bug8158734$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8158734"
};

$Object* allocate$bug8158734$1($Class* clazz) {
	return $of($alloc(bug8158734$1));
}

void bug8158734$1::init$() {
}

void bug8158734$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, c, $new($JEditorPane));
	c->setContentType("test/test"_s);
	$var($bug8158734$MyClassloader, loader, $new($bug8158734$MyClassloader));
	$load($bug8158734$MyEditorKit);
	$JEditorPane::registerEditorKitForContentType("test2/test2"_s, $($bug8158734$MyEditorKit::class$->getName()), loader);
	$JEditorPane::registerEditorKitForContentType("test2/test2"_s, $($bug8158734$MyEditorKit::class$->getName()), nullptr);
	$JEditorPane::createEditorKitForContentType("test2/test2"_s);
	$init($bug8158734);
	if ($bug8158734::myClassloaderWasUsed) {
		$throwNew($RuntimeException, $$str({"Class loader has not been removed for \'"_s, "test2/test2"_s, "\' type"_s}));
	}
}

bug8158734$1::bug8158734$1() {
}

$Class* bug8158734$1::load$($String* name, bool initialize) {
	$loadClass(bug8158734$1, name, initialize, &_bug8158734$1_ClassInfo_, allocate$bug8158734$1);
	return class$;
}

$Class* bug8158734$1::class$ = nullptr;