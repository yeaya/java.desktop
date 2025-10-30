#include <HtmlCommentTagParseTest.h>

#include <HtmlCommentTagParseTest$MyParser.h>
#include <java/io/File.h>
#include <java/io/FileReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$Parser.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $HtmlCommentTagParseTest$MyParser = ::HtmlCommentTagParseTest$MyParser;
using $File = ::java::io::File;
using $FileReader = ::java::io::FileReader;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Document = ::javax::swing::text::Document;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLEditorKit$Parser = ::javax::swing::text::html::HTMLEditorKit$Parser;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

class HtmlCommentTagParseTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(HtmlCommentTagParseTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HtmlCommentTagParseTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HtmlCommentTagParseTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HtmlCommentTagParseTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HtmlCommentTagParseTest$$Lambda$lambda$main$0::*)()>(&HtmlCommentTagParseTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HtmlCommentTagParseTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"HtmlCommentTagParseTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HtmlCommentTagParseTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(HtmlCommentTagParseTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HtmlCommentTagParseTest$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _HtmlCommentTagParseTest_FieldInfo_[] = {
	{"failed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(HtmlCommentTagParseTest, failed)},
	{}
};

$MethodInfo _HtmlCommentTagParseTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HtmlCommentTagParseTest::*)()>(&HtmlCommentTagParseTest::init$))},
	{"getDirURL", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&HtmlCommentTagParseTest::getDirURL))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HtmlCommentTagParseTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HtmlCommentTagParseTest::main)), "java.io.IOException,java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _HtmlCommentTagParseTest_InnerClassesInfo_[] = {
	{"HtmlCommentTagParseTest$MyParser", "HtmlCommentTagParseTest", "MyParser", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HtmlCommentTagParseTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HtmlCommentTagParseTest",
	"java.lang.Object",
	nullptr,
	_HtmlCommentTagParseTest_FieldInfo_,
	_HtmlCommentTagParseTest_MethodInfo_,
	nullptr,
	nullptr,
	_HtmlCommentTagParseTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HtmlCommentTagParseTest$MyParser"
};

$Object* allocate$HtmlCommentTagParseTest($Class* clazz) {
	return $of($alloc(HtmlCommentTagParseTest));
}

$volatile(bool) HtmlCommentTagParseTest::failed = false;

void HtmlCommentTagParseTest::init$() {
}

void HtmlCommentTagParseTest::main($StringArray* args) {
	$init(HtmlCommentTagParseTest);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HtmlCommentTagParseTest$$Lambda$lambda$main$0)));
}

$String* HtmlCommentTagParseTest::getDirURL() {
	$init(HtmlCommentTagParseTest);
	$useLocalCurrentObjectStackCache();
	$init($File);
	return $str({$($$new($File, $($System::getProperty("test.src"_s, "."_s)))->getAbsolutePath()), $File::separator});
}

void HtmlCommentTagParseTest::lambda$main$0() {
	$init(HtmlCommentTagParseTest);
	$useLocalCurrentObjectStackCache();
	$var($HtmlCommentTagParseTest$MyParser, cb, $new($HtmlCommentTagParseTest$MyParser));
	$var($HTMLEditorKit, htmlKit, $new($HTMLEditorKit));
	$var($HTMLDocument, htmlDoc, $cast($HTMLDocument, htmlKit->createDefaultDocument()));
	$var($FileReader, reader, nullptr);
	try {
		$assign(reader, $new($FileReader, $$str({$(getDirURL()), "test.html"_s})));
		$nc($($nc(htmlDoc)->getParser()))->parse(reader, cb, true);
		if (HtmlCommentTagParseTest::failed) {
			$throwNew($RuntimeException, "Test failed"_s);
		}
	} catch ($IOException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void clinit$HtmlCommentTagParseTest($Class* class$) {
	HtmlCommentTagParseTest::failed = false;
}

HtmlCommentTagParseTest::HtmlCommentTagParseTest() {
}

$Class* HtmlCommentTagParseTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(HtmlCommentTagParseTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return HtmlCommentTagParseTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(HtmlCommentTagParseTest, name, initialize, &_HtmlCommentTagParseTest_ClassInfo_, clinit$HtmlCommentTagParseTest, allocate$HtmlCommentTagParseTest);
	return class$;
}

$Class* HtmlCommentTagParseTest::class$ = nullptr;