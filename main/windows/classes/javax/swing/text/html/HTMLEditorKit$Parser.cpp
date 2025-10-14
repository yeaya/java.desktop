#include <javax/swing/text/html/HTMLEditorKit$Parser.h>

#include <java/io/Reader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _HTMLEditorKit$Parser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(HTMLEditorKit$Parser::*)()>(&HTMLEditorKit$Parser::init$))},
	{"parse", "(Ljava/io/Reader;Ljavax/swing/text/html/HTMLEditorKit$ParserCallback;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _HTMLEditorKit$Parser_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$Parser", "javax.swing.text.html.HTMLEditorKit", "Parser", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _HTMLEditorKit$Parser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.html.HTMLEditorKit$Parser",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HTMLEditorKit$Parser_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit$Parser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$Parser($Class* clazz) {
	return $of($alloc(HTMLEditorKit$Parser));
}

void HTMLEditorKit$Parser::init$() {
}

HTMLEditorKit$Parser::HTMLEditorKit$Parser() {
}

$Class* HTMLEditorKit$Parser::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$Parser, name, initialize, &_HTMLEditorKit$Parser_ClassInfo_, allocate$HTMLEditorKit$Parser);
	return class$;
}

$Class* HTMLEditorKit$Parser::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax