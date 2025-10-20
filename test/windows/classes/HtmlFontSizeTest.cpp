#include <HtmlFontSizeTest.h>

#include <java/awt/Dimension.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef ENGLISH
#undef TRUE
#undef W3C_LENGTH_UNITS

using $Dimension = ::java::awt::Dimension;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Locale = ::java::util::Locale;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

class HtmlFontSizeTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(HtmlFontSizeTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HtmlFontSizeTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HtmlFontSizeTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HtmlFontSizeTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HtmlFontSizeTest$$Lambda$lambda$main$0::*)()>(&HtmlFontSizeTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HtmlFontSizeTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"HtmlFontSizeTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HtmlFontSizeTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(HtmlFontSizeTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HtmlFontSizeTest$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _HtmlFontSizeTest_FieldInfo_[] = {
	{"w3cFrameSize", "Ljava/awt/Dimension;", nullptr, $STATIC | $VOLATILE, $staticField(HtmlFontSizeTest, w3cFrameSize)},
	{"stdFrameSize", "Ljava/awt/Dimension;", nullptr, $STATIC | $VOLATILE, $staticField(HtmlFontSizeTest, stdFrameSize)},
	{}
};

$MethodInfo _HtmlFontSizeTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HtmlFontSizeTest::*)()>(&HtmlFontSizeTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HtmlFontSizeTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HtmlFontSizeTest::main)), "java.lang.Exception"},
	{"test", "(Z)Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Dimension*(*)(bool)>(&HtmlFontSizeTest::test))},
	{}
};

$ClassInfo _HtmlFontSizeTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HtmlFontSizeTest",
	"java.lang.Object",
	nullptr,
	_HtmlFontSizeTest_FieldInfo_,
	_HtmlFontSizeTest_MethodInfo_
};

$Object* allocate$HtmlFontSizeTest($Class* clazz) {
	return $of($alloc(HtmlFontSizeTest));
}

$volatile($Dimension*) HtmlFontSizeTest::w3cFrameSize = nullptr;
$volatile($Dimension*) HtmlFontSizeTest::stdFrameSize = nullptr;

void HtmlFontSizeTest::init$() {
}

$Dimension* HtmlFontSizeTest::test(bool w3ccheck) {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, htmlPane, $new($JEditorPane));
	htmlPane->setEditable(false);
	if (w3ccheck) {
		$init($Boolean);
		htmlPane->putClientProperty($JEditorPane::W3C_LENGTH_UNITS, $Boolean::TRUE);
	}
	$var($HTMLEditorKit, kit, $new($HTMLEditorKit));
	htmlPane->setEditorKit(kit);
	$var($String, htmlString, "<html>\n<body style=\"font-family:SansSerif; font-size:16pt\">\n<p>This should be 16 pt.</p>\n</body>\n</html>"_s);
	$var($Document, doc, kit->createDefaultDocument());
	htmlPane->setDocument(doc);
	htmlPane->setText(htmlString);
	return htmlPane->getPreferredSize();
}

void HtmlFontSizeTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HtmlFontSizeTest$$Lambda$lambda$main$0)));
	$init($System);
	$init(HtmlFontSizeTest);
	$nc($System::out)->println($$str({"size with W3C:"_s, HtmlFontSizeTest::w3cFrameSize}));
	$nc($System::out)->println($$str({"size without W3C:"_s, HtmlFontSizeTest::stdFrameSize}));
	float ratio = (float)$nc(HtmlFontSizeTest::w3cFrameSize)->width / (float)$nc(HtmlFontSizeTest::stdFrameSize)->width;
	$nc($System::out)->println($$str({"w3cFrameSize.width/stdFrameSize.width "_s, $$str(ratio)}));
	$init($Locale);
	if (!"1.3"_s->equals($($String::format($Locale::ENGLISH, "%.1f"_s, $$new($ObjectArray, {$($of($Float::valueOf(ratio)))}))))) {
		$throwNew($RuntimeException, "HTML font size too large with high-DPI scaling and W3C_LENGTH_UNITS"_s);
	}
}

void HtmlFontSizeTest::lambda$main$0() {
	$init(HtmlFontSizeTest);
	$assignStatic(HtmlFontSizeTest::w3cFrameSize, test(true));
	$assignStatic(HtmlFontSizeTest::stdFrameSize, test(false));
}

HtmlFontSizeTest::HtmlFontSizeTest() {
}

$Class* HtmlFontSizeTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(HtmlFontSizeTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return HtmlFontSizeTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(HtmlFontSizeTest, name, initialize, &_HtmlFontSizeTest_ClassInfo_, allocate$HtmlFontSizeTest);
	return class$;
}

$Class* HtmlFontSizeTest::class$ = nullptr;