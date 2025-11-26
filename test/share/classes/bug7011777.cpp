#include <bug7011777.h>

#include <bug7011777$MyParserCallback.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/parser/ParserDelegator.h>
#include <jcpp.h>

using $bug7011777$MyParserCallback = ::bug7011777$MyParserCallback;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;
using $ParserDelegator = ::javax::swing::text::html::parser::ParserDelegator;

$FieldInfo _bug7011777_FieldInfo_[] = {
	{"comment", "Ljava/lang/String;", nullptr, $STATIC, $staticField(bug7011777, comment)},
	{"html", "Ljava/lang/String;", nullptr, $STATIC, $staticField(bug7011777, html)},
	{}
};

$MethodInfo _bug7011777_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7011777::*)()>(&bug7011777::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7011777::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7011777_InnerClassesInfo_[] = {
	{"bug7011777$MyParserCallback", "bug7011777", "MyParserCallback", $STATIC},
	{}
};

$ClassInfo _bug7011777_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7011777",
	"java.lang.Object",
	nullptr,
	_bug7011777_FieldInfo_,
	_bug7011777_MethodInfo_,
	nullptr,
	nullptr,
	_bug7011777_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7011777$MyParserCallback"
};

$Object* allocate$bug7011777($Class* clazz) {
	return $of($alloc(bug7011777));
}

$String* bug7011777::comment = nullptr;
$String* bug7011777::html = nullptr;

void bug7011777::init$() {
}

void bug7011777::main($StringArray* args) {
	$init(bug7011777);
	$useLocalCurrentObjectStackCache();
	$var($Reader, var$0, static_cast<$Reader*>($new($StringReader, bug7011777::html)));
	$$new($ParserDelegator)->parse(var$0, $$new($bug7011777$MyParserCallback), true);
}

void clinit$bug7011777($Class* class$) {
	$assignStatic(bug7011777::comment, "<!--\nfunction foo() {\n  var tag1 = \"</script>\";\n  var tag2 = \"<div>\";\n  var tag3 = \"</div>\";\n  var tag4 = \"<script>\";\n}\n// -->"_s);
	$assignStatic(bug7011777::html, $str({"<script>"_s, bug7011777::comment, "</script>"_s}));
}

bug7011777::bug7011777() {
}

$Class* bug7011777::load$($String* name, bool initialize) {
	$loadClass(bug7011777, name, initialize, &_bug7011777_ClassInfo_, clinit$bug7011777, allocate$bug7011777);
	return class$;
}

$Class* bug7011777::class$ = nullptr;