#include <bug8078268$1.h>

#include <bug8078268.h>
#include <java/io/FileReader.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $bug8078268 = ::bug8078268;
using $FileReader = ::java::io::FileReader;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Document = ::javax::swing::text::Document;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

$MethodInfo _bug8078268$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8078268$1::*)()>(&bug8078268$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8078268$1_EnclosingMethodInfo_ = {
	"bug8078268",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8078268$1_InnerClassesInfo_[] = {
	{"bug8078268$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8078268$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8078268$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8078268$1_MethodInfo_,
	nullptr,
	&_bug8078268$1_EnclosingMethodInfo_,
	_bug8078268$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8078268"
};

$Object* allocate$bug8078268$1($Class* clazz) {
	return $of($alloc(bug8078268$1));
}

void bug8078268$1::init$() {
}

void bug8078268$1::run() {
	$var($HTMLEditorKit, htmlKit, $new($HTMLEditorKit));
	$var($Document, doc, htmlKit->createDefaultDocument());
	try {
		htmlKit->read(static_cast<$Reader*>($$new($FileReader, $$str({$($bug8078268::getDirURL()), "slowparse.html"_s}))), doc, 0);
		$bug8078268::parsingDone = true;
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$init($bug8078268);
		$assignStatic($bug8078268::exception, e);
	}
}

bug8078268$1::bug8078268$1() {
}

$Class* bug8078268$1::load$($String* name, bool initialize) {
	$loadClass(bug8078268$1, name, initialize, &_bug8078268$1_ClassInfo_, allocate$bug8078268$1);
	return class$;
}

$Class* bug8078268$1::class$ = nullptr;