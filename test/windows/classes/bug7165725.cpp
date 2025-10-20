#include <bug7165725.h>

#include <bug7165725$1.h>
#include <bug7165725$2.h>
#include <bug7165725$GoldenElement.h>
#include <bug7165725$SBParserCallback.h>
#include <java/awt/Robot.h>
#include <java/io/File.h>
#include <java/io/FileReader.h>
#include <java/io/InputStreamReader.h>
#include <java/io/PrintStream.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/parser/ParserDelegator.h>
#include <jcpp.h>

using $bug7165725$GoldenElementArray = $Array<bug7165725$GoldenElement>;
using $bug7165725$1 = ::bug7165725$1;
using $bug7165725$2 = ::bug7165725$2;
using $bug7165725$GoldenElement = ::bug7165725$GoldenElement;
using $bug7165725$SBParserCallback = ::bug7165725$SBParserCallback;
using $Robot = ::java::awt::Robot;
using $File = ::java::io::File;
using $FileReader = ::java::io::FileReader;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;
using $ParserDelegator = ::javax::swing::text::html::parser::ParserDelegator;

$FieldInfo _bug7165725_FieldInfo_[] = {
	{"editorPane", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE, $field(bug7165725, editorPane)},
	{}
};

$MethodInfo _bug7165725_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7165725::*)()>(&bug7165725::init$))},
	{"checkByCallbackForFalseTextAfterScript", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&bug7165725::checkByCallbackForFalseTextAfterScript)), "java.lang.Exception"},
	{"checkByCallbackForSuccessiveScript", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&bug7165725::checkByCallbackForSuccessiveScript)), "java.lang.Exception"},
	{"createFalseTextAfterScript", "()Lbug7165725$GoldenElement;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bug7165725$GoldenElement*(*)()>(&bug7165725::createFalseTextAfterScript))},
	{"createSuccessiveScriptTags", "()Lbug7165725$GoldenElement;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bug7165725$GoldenElement*(*)()>(&bug7165725::createSuccessiveScriptTags))},
	{"execute", "(Ljava/lang/String;Lbug7165725$GoldenElement;)V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"getDirURL", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&bug7165725::getDirURL))},
	{"getParsedContentOneLine", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&bug7165725::getParsedContentOneLine)), "java.lang.Exception"},
	{"getParsedContentOneLine", "(Ljava/net/URL;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($URL*)>(&bug7165725::getParsedContentOneLine)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7165725::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7165725_InnerClassesInfo_[] = {
	{"bug7165725$SBParserCallback", "bug7165725", "SBParserCallback", $STATIC},
	{"bug7165725$GoldenElement", "bug7165725", "GoldenElement", $PRIVATE | $STATIC},
	{"bug7165725$2", nullptr, nullptr, 0},
	{"bug7165725$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7165725_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7165725",
	"javax.swing.JFrame",
	nullptr,
	_bug7165725_FieldInfo_,
	_bug7165725_MethodInfo_,
	nullptr,
	nullptr,
	_bug7165725_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7165725$SBParserCallback,bug7165725$GoldenElement,bug7165725$2,bug7165725$1,bug7165725$1$1"
};

$Object* allocate$bug7165725($Class* clazz) {
	return $of($alloc(bug7165725));
}

void bug7165725::init$() {
	$JFrame::init$();
}

void bug7165725::execute($String* urlStr, $bug7165725$GoldenElement* goldenElement) {
	$useLocalCurrentObjectStackCache();
	$init($System);
	$nc($System::out)->println();
	$nc($System::out)->println($$str({"***** TEST: "_s, urlStr, " *****"_s}));
	$nc($System::out)->println();
	$SwingUtilities::invokeAndWait($$new($bug7165725$1, this, urlStr));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7165725$2, this, goldenElement));
	$nc($System::out)->println();
	$nc($System::out)->println("*********************************"_s);
	$nc($System::out)->println();
}

void bug7165725::main($StringArray* args) {
	$init(bug7165725);
	$useLocalCurrentObjectStackCache();
	$var($String, dirURL, getDirURL());
	$init($System);
	$nc($System::out)->println($$str({"dirURL = "_s, dirURL}));
	$$new(bug7165725)->execute($$str({dirURL, "successive-script-tag.html"_s}), $(createSuccessiveScriptTags()));
	$$new(bug7165725)->execute($$str({dirURL, "false-text-after-script.html"_s}), $(createFalseTextAfterScript()));
	checkByCallbackForSuccessiveScript();
	checkByCallbackForFalseTextAfterScript();
	$nc($System::out)->println();
	$nc($System::out)->println();
	$nc($System::out)->println("Test passed."_s);
}

$String* bug7165725::getDirURL() {
	$init(bug7165725);
	$useLocalCurrentObjectStackCache();
	$init($File);
	return $str({"file:///"_s, $($$new($File, $($System::getProperty("test.src"_s, "."_s)))->getAbsolutePath()), $File::separator});
}

$String* bug7165725::getParsedContentOneLine($String* path) {
	$init(bug7165725);
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, path));
	$var($FileReader, fr, $new($FileReader, f));
	$var($ParserDelegator, pd, $new($ParserDelegator));
	$var($bug7165725$SBParserCallback, sbcallback, $new($bug7165725$SBParserCallback));
	pd->parse(fr, sbcallback, true);
	fr->close();
	return sbcallback->getStringOneLine();
}

$String* bug7165725::getParsedContentOneLine($URL* url) {
	$init(bug7165725);
	return getParsedContentOneLine($($nc(url)->getPath()));
}

void bug7165725::checkByCallbackForSuccessiveScript() {
	$init(bug7165725);
	$useLocalCurrentObjectStackCache();
	$var($String, content, getParsedContentOneLine($$new($URL, $$str({$(getDirURL()), "successive-script-tag.html"_s}))));
	if (!$nc(content)->matches(".*<script .*/js/js1\\.js.*<script .*/js/js2\\.js.*<script .*/js/js3\\.js.*"_s)) {
		$throwNew($RuntimeException, "Failed to lookup script tags/attributes."_s);
	}
	if (!$nc(content)->matches(".*<style .*stylesheets/base\\.css.*<style .*stylesheets/adv\\.css.*"_s)) {
		$throwNew($RuntimeException, "Failed to lookup style tags."_s);
	}
}

void bug7165725::checkByCallbackForFalseTextAfterScript() {
	$init(bug7165725);
	$useLocalCurrentObjectStackCache();
	$var($String, content, getParsedContentOneLine($$new($URL, $$str({$(getDirURL()), "false-text-after-script.html"_s}))));
	int32_t bodyIdx = $nc(content)->indexOf("<body "_s);
	if (bodyIdx > 0) {
		$var($String, sbody, content->substring(bodyIdx));
		if (sbody->indexOf("Text("_s) >= 0) {
			$throwNew($RuntimeException, "Unexpected text found."_s);
		}
	} else {
		$throwNew($RuntimeException, "Failed to find body tag."_s);
	}
}

$bug7165725$GoldenElement* bug7165725::createSuccessiveScriptTags() {
	$init(bug7165725);
	$useLocalCurrentObjectStackCache();
	return $new($bug7165725$GoldenElement, "html"_s, $$new($bug7165725$GoldenElementArray, {
		$$new($bug7165725$GoldenElement, "head"_s, $$new($bug7165725$GoldenElementArray, {$$new($bug7165725$GoldenElement, "p-implied"_s, $$new($bug7165725$GoldenElementArray, {
			$$new($bug7165725$GoldenElement, "title"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "title"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "comment"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "comment"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "comment"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "content"_s, $$new($bug7165725$GoldenElementArray, 0))
		}))})),
		$$new($bug7165725$GoldenElement, "body"_s, $$new($bug7165725$GoldenElementArray, {$$new($bug7165725$GoldenElement, "p-implied"_s, $$new($bug7165725$GoldenElementArray, {$$new($bug7165725$GoldenElement, "content"_s, $$new($bug7165725$GoldenElementArray, 0))}))}))
	}));
}

$bug7165725$GoldenElement* bug7165725::createFalseTextAfterScript() {
	$init(bug7165725);
	$useLocalCurrentObjectStackCache();
	return $new($bug7165725$GoldenElement, "html"_s, $$new($bug7165725$GoldenElementArray, {
		$$new($bug7165725$GoldenElement, "head"_s, $$new($bug7165725$GoldenElementArray, {$$new($bug7165725$GoldenElement, "p-implied"_s, $$new($bug7165725$GoldenElementArray, {
			$$new($bug7165725$GoldenElement, "title"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "title"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "content"_s, $$new($bug7165725$GoldenElementArray, 0))
		}))})),
		$$new($bug7165725$GoldenElement, "body"_s, $$new($bug7165725$GoldenElementArray, {
			$$new($bug7165725$GoldenElement, "form"_s, $$new($bug7165725$GoldenElementArray, {$$new($bug7165725$GoldenElement, "p-implied"_s, $$new($bug7165725$GoldenElementArray, {
				$$new($bug7165725$GoldenElement, "input"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "input"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "content"_s, $$new($bug7165725$GoldenElementArray, 0))
			}))})),
			$$new($bug7165725$GoldenElement, "p-implied"_s, $$new($bug7165725$GoldenElementArray, {
				$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "comment"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "comment"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "content"_s, $$new($bug7165725$GoldenElementArray, 0))
			}))
		}))
	}));
}

bug7165725::bug7165725() {
}

$Class* bug7165725::load$($String* name, bool initialize) {
	$loadClass(bug7165725, name, initialize, &_bug7165725_ClassInfo_, allocate$bug7165725);
	return class$;
}

$Class* bug7165725::class$ = nullptr;