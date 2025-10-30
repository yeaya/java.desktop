#include <HtmlCommentTagParseTest$MyParser.h>

#include <HtmlCommentTagParseTest.h>
#include <java/lang/CharSequence.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <jcpp.h>

using $HtmlCommentTagParseTest = ::HtmlCommentTagParseTest;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

$MethodInfo _HtmlCommentTagParseTest$MyParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(HtmlCommentTagParseTest$MyParser::*)()>(&HtmlCommentTagParseTest$MyParser::init$))},
	{"handleError", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HtmlCommentTagParseTest$MyParser_InnerClassesInfo_[] = {
	{"HtmlCommentTagParseTest$MyParser", "HtmlCommentTagParseTest", "MyParser", $PRIVATE | $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$ParserCallback", "javax.swing.text.html.HTMLEditorKit", "ParserCallback", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _HtmlCommentTagParseTest$MyParser_ClassInfo_ = {
	$ACC_SUPER,
	"HtmlCommentTagParseTest$MyParser",
	"javax.swing.text.html.HTMLEditorKit$ParserCallback",
	nullptr,
	nullptr,
	_HtmlCommentTagParseTest$MyParser_MethodInfo_,
	nullptr,
	nullptr,
	_HtmlCommentTagParseTest$MyParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HtmlCommentTagParseTest"
};

$Object* allocate$HtmlCommentTagParseTest$MyParser($Class* clazz) {
	return $of($alloc(HtmlCommentTagParseTest$MyParser));
}

void HtmlCommentTagParseTest$MyParser::init$() {
	$HTMLEditorKit$ParserCallback::init$();
}

void HtmlCommentTagParseTest$MyParser::handleError($String* errorMsg, int32_t pos) {
	$init($HtmlCommentTagParseTest);
	$HtmlCommentTagParseTest::failed = $nc(errorMsg)->contains("eof.script"_s);
}

HtmlCommentTagParseTest$MyParser::HtmlCommentTagParseTest$MyParser() {
}

$Class* HtmlCommentTagParseTest$MyParser::load$($String* name, bool initialize) {
	$loadClass(HtmlCommentTagParseTest$MyParser, name, initialize, &_HtmlCommentTagParseTest$MyParser_ClassInfo_, allocate$HtmlCommentTagParseTest$MyParser);
	return class$;
}

$Class* HtmlCommentTagParseTest$MyParser::class$ = nullptr;