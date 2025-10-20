#include <JEditorPaneTest$1.h>

#include <JEditorPaneTest.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $JEditorPaneTest = ::JEditorPaneTest;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $JEditorPane = ::javax::swing::JEditorPane;

$FieldInfo _JEditorPaneTest$1_FieldInfo_[] = {
	{"val$file", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPaneTest$1, val$file)},
	{}
};

$MethodInfo _JEditorPaneTest$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", "()V", 0, $method(static_cast<void(JEditorPaneTest$1::*)($File*)>(&JEditorPaneTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JEditorPaneTest$1_EnclosingMethodInfo_ = {
	"JEditorPaneTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _JEditorPaneTest$1_InnerClassesInfo_[] = {
	{"JEditorPaneTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JEditorPaneTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"JEditorPaneTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_JEditorPaneTest$1_FieldInfo_,
	_JEditorPaneTest$1_MethodInfo_,
	nullptr,
	&_JEditorPaneTest$1_EnclosingMethodInfo_,
	_JEditorPaneTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JEditorPaneTest"
};

$Object* allocate$JEditorPaneTest$1($Class* clazz) {
	return $of($alloc(JEditorPaneTest$1));
}

void JEditorPaneTest$1::init$($File* val$file) {
	$set(this, val$file, val$file);
}

void JEditorPaneTest$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editorPane, $new($JEditorPane));
	try {
		editorPane->setPage($($nc($($nc(this->val$file)->toURI()))->toURL()));
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$nc(this->val$file)->delete$();
		$throwNew($RuntimeException, $$str({"Test Failed"_s, ex}));
	}
}

JEditorPaneTest$1::JEditorPaneTest$1() {
}

$Class* JEditorPaneTest$1::load$($String* name, bool initialize) {
	$loadClass(JEditorPaneTest$1, name, initialize, &_JEditorPaneTest$1_ClassInfo_, allocate$JEditorPaneTest$1);
	return class$;
}

$Class* JEditorPaneTest$1::class$ = nullptr;