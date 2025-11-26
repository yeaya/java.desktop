#include <bug7011777$MyParserCallback.h>

#include <bug7011777.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <jcpp.h>

using $bug7011777 = ::bug7011777;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

$MethodInfo _bug7011777$MyParserCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7011777$MyParserCallback::*)()>(&bug7011777$MyParserCallback::init$))},
	{"handleComment", "([CI)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug7011777$MyParserCallback_InnerClassesInfo_[] = {
	{"bug7011777$MyParserCallback", "bug7011777", "MyParserCallback", $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$ParserCallback", "javax.swing.text.html.HTMLEditorKit", "ParserCallback", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _bug7011777$MyParserCallback_ClassInfo_ = {
	$ACC_SUPER,
	"bug7011777$MyParserCallback",
	"javax.swing.text.html.HTMLEditorKit$ParserCallback",
	nullptr,
	nullptr,
	_bug7011777$MyParserCallback_MethodInfo_,
	nullptr,
	nullptr,
	_bug7011777$MyParserCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7011777"
};

$Object* allocate$bug7011777$MyParserCallback($Class* clazz) {
	return $of($alloc(bug7011777$MyParserCallback));
}

void bug7011777$MyParserCallback::init$() {
	$HTMLEditorKit$ParserCallback::init$();
}

void bug7011777$MyParserCallback::handleComment($chars* data, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$init($bug7011777);
	int32_t var$0 = "<!--"_s->length();
	int32_t var$1 = $nc($bug7011777::comment)->length();
	$var($String, commentWithoutTags, $nc($bug7011777::comment)->substring(var$0, var$1 - "-->"_s->length()));
	$var($String, str, $new($String, data));
	if (!commentWithoutTags->equals(str)) {
		$nc($System::out)->println($$str({"Sample string:\n"_s, commentWithoutTags}));
		$nc($System::out)->println($$str({"Returned string:\n"_s, str}));
		$throwNew($RuntimeException, "Test Failed, sample and returned strings are mismatched!"_s);
	}
}

bug7011777$MyParserCallback::bug7011777$MyParserCallback() {
}

$Class* bug7011777$MyParserCallback::load$($String* name, bool initialize) {
	$loadClass(bug7011777$MyParserCallback, name, initialize, &_bug7011777$MyParserCallback_ClassInfo_, allocate$bug7011777$MyParserCallback);
	return class$;
}

$Class* bug7011777$MyParserCallback::class$ = nullptr;