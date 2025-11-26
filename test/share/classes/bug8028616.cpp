#include <bug8028616.h>

#include <bug8028616$ParserCB.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$Parser.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $bug8028616$ParserCB = ::bug8028616$ParserCB;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Document = ::javax::swing::text::Document;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLEditorKit$Parser = ::javax::swing::text::html::HTMLEditorKit$Parser;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

$FieldInfo _bug8028616_FieldInfo_[] = {
	{"text", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8028616, text)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(bug8028616, lock)},
	{"isCallbackInvoked", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug8028616, isCallbackInvoked)},
	{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE | $STATIC, $staticField(bug8028616, exception)},
	{}
};

$MethodInfo _bug8028616_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8028616::*)()>(&bug8028616::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8028616::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8028616_InnerClassesInfo_[] = {
	{"bug8028616$ParserCB", "bug8028616", "ParserCB", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug8028616_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8028616",
	"java.lang.Object",
	nullptr,
	_bug8028616_FieldInfo_,
	_bug8028616_MethodInfo_,
	nullptr,
	nullptr,
	_bug8028616_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8028616$ParserCB"
};

$Object* allocate$bug8028616($Class* clazz) {
	return $of($alloc(bug8028616));
}

$String* bug8028616::text = nullptr;
$Object* bug8028616::lock = nullptr;
bool bug8028616::isCallbackInvoked = false;
$Exception* bug8028616::exception = nullptr;

void bug8028616::init$() {
}

void bug8028616::main($StringArray* args) {
	$init(bug8028616);
	$useLocalCurrentObjectStackCache();
	$var($bug8028616$ParserCB, cb, $new($bug8028616$ParserCB));
	$var($HTMLEditorKit, htmlKit, $new($HTMLEditorKit));
	$var($HTMLDocument, htmlDoc, $cast($HTMLDocument, htmlKit->createDefaultDocument()));
	$nc($($nc(htmlDoc)->getParser()))->parse($$new($StringReader, bug8028616::text), cb, true);
	$synchronized(bug8028616::lock) {
		if (!bug8028616::isCallbackInvoked) {
			$nc($of(bug8028616::lock))->wait(5000);
		}
	}
	if (!bug8028616::isCallbackInvoked) {
		$throwNew($RuntimeException, $$str({"Test Failed: ParserCallback.handleText() is not invoked for text - "_s, bug8028616::text}));
	}
	if (bug8028616::exception != nullptr) {
		$throw(bug8028616::exception);
	}
}

void clinit$bug8028616($Class* class$) {
	$assignStatic(bug8028616::text, "/ at start is bad"_s);
	$assignStatic(bug8028616::lock, $new($Object));
	bug8028616::isCallbackInvoked = false;
	$assignStatic(bug8028616::exception, nullptr);
}

bug8028616::bug8028616() {
}

$Class* bug8028616::load$($String* name, bool initialize) {
	$loadClass(bug8028616, name, initialize, &_bug8028616_ClassInfo_, clinit$bug8028616, allocate$bug8028616);
	return class$;
}

$Class* bug8028616::class$ = nullptr;