#include <TestWrongCSSFontSize.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/File.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/Consumer.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef TEXT
#undef TRUE
#undef TYPE_INT_ARGB
#undef W3C_LENGTH_UNITS

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $File = ::java::io::File;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $Consumer = ::java::util::function::Consumer;
using $ImageIO = ::javax::imageio::ImageIO;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Element = ::javax::swing::text::Element;
using $GlyphView = ::javax::swing::text::GlyphView;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $View = ::javax::swing::text::View;

class TestWrongCSSFontSize$$Lambda$assertFontSize : public $Consumer {
	$class(TestWrongCSSFontSize$$Lambda$assertFontSize, $NO_CLASS_INIT, $Consumer)
public:
	void init$(TestWrongCSSFontSize* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* child) override {
		$nc(inst$)->assertFontSize($cast($GlyphView, child));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestWrongCSSFontSize$$Lambda$assertFontSize>());
	}
	TestWrongCSSFontSize* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestWrongCSSFontSize$$Lambda$assertFontSize::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestWrongCSSFontSize$$Lambda$assertFontSize, inst$)},
	{}
};
$MethodInfo TestWrongCSSFontSize$$Lambda$assertFontSize::methodInfos[3] = {
	{"<init>", "(LTestWrongCSSFontSize;)V", nullptr, $PUBLIC, $method(static_cast<void(TestWrongCSSFontSize$$Lambda$assertFontSize::*)(TestWrongCSSFontSize*)>(&TestWrongCSSFontSize$$Lambda$assertFontSize::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestWrongCSSFontSize$$Lambda$assertFontSize::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestWrongCSSFontSize$$Lambda$assertFontSize",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* TestWrongCSSFontSize$$Lambda$assertFontSize::load$($String* name, bool initialize) {
	$loadClass(TestWrongCSSFontSize$$Lambda$assertFontSize, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestWrongCSSFontSize$$Lambda$assertFontSize::class$ = nullptr;

class TestWrongCSSFontSize$$Lambda$lambda$main$0$1 : public $Runnable {
	$class(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TestWrongCSSFontSize* test, $AtomicReference* failure, $StringArray* args) {
		$set(this, test, test);
		$set(this, failure, failure);
		$set(this, args, args);
	}
	virtual void run() override {
		TestWrongCSSFontSize::lambda$main$0(test, failure, args);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestWrongCSSFontSize$$Lambda$lambda$main$0$1>());
	}
	TestWrongCSSFontSize* test = nullptr;
	$AtomicReference* failure = nullptr;
	$StringArray* args = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestWrongCSSFontSize$$Lambda$lambda$main$0$1::fieldInfos[4] = {
	{"test", "LTestWrongCSSFontSize;", nullptr, $PUBLIC, $field(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, test)},
	{"failure", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $PUBLIC, $field(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, failure)},
	{"args", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, args)},
	{}
};
$MethodInfo TestWrongCSSFontSize$$Lambda$lambda$main$0$1::methodInfos[3] = {
	{"<init>", "(LTestWrongCSSFontSize;Ljava/util/concurrent/atomic/AtomicReference;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TestWrongCSSFontSize$$Lambda$lambda$main$0$1::*)(TestWrongCSSFontSize*,$AtomicReference*,$StringArray*)>(&TestWrongCSSFontSize$$Lambda$lambda$main$0$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestWrongCSSFontSize$$Lambda$lambda$main$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestWrongCSSFontSize$$Lambda$lambda$main$0$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestWrongCSSFontSize$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$loadClass(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestWrongCSSFontSize$$Lambda$lambda$main$0$1::class$ = nullptr;

$FieldInfo _TestWrongCSSFontSize_FieldInfo_[] = {
	{"TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestWrongCSSFontSize, TEXT)},
	{"expectedFontSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestWrongCSSFontSize, expectedFontSize)},
	{"expectedAssertions", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestWrongCSSFontSize, expectedAssertions)},
	{"w3cUnits", "Z", nullptr, $PRIVATE | $FINAL, $field(TestWrongCSSFontSize, w3cUnits)},
	{"editor", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE, $field(TestWrongCSSFontSize, editor)},
	{}
};

$MethodInfo _TestWrongCSSFontSize_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(TestWrongCSSFontSize::*)(bool)>(&TestWrongCSSFontSize::init$))},
	{"argCapture", "([Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($StringArray*)>(&TestWrongCSSFontSize::argCapture))},
	{"argW3CUnits", "([Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($StringArray*)>(&TestWrongCSSFontSize::argW3CUnits))},
	{"assertFontSize", "(Ljavax/swing/text/GlyphView;)V", nullptr, $PRIVATE, $method(static_cast<void(TestWrongCSSFontSize::*)($GlyphView*)>(&TestWrongCSSFontSize::assertFontSize))},
	{"captureImage", "(Ljava/awt/Component;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*,$String*)>(&TestWrongCSSFontSize::captureImage))},
	{"forEachTextRun", "(Ljavax/swing/text/View;Ljava/util/function/Consumer;)I", "(Ljavax/swing/text/View;Ljava/util/function/Consumer<Ljavax/swing/text/GlyphView;>;)I", $PRIVATE, $method(static_cast<int32_t(TestWrongCSSFontSize::*)($View*,$Consumer*)>(&TestWrongCSSFontSize::forEachTextRun))},
	{"lambda$main$0", "(LTestWrongCSSFontSize;Ljava/util/concurrent/atomic/AtomicReference;[Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(TestWrongCSSFontSize*,$AtomicReference*,$StringArray*)>(&TestWrongCSSFontSize::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestWrongCSSFontSize::main)), "java.lang.Throwable"},
	{"printSource", "(Ljavax/swing/text/View;)V", nullptr, $PRIVATE, $method(static_cast<void(TestWrongCSSFontSize::*)($View*)>(&TestWrongCSSFontSize::printSource))},
	{"run", "()V", nullptr, $PUBLIC},
	{"setUp", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TestWrongCSSFontSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestWrongCSSFontSize",
	"java.lang.Object",
	nullptr,
	_TestWrongCSSFontSize_FieldInfo_,
	_TestWrongCSSFontSize_MethodInfo_
};

$Object* allocate$TestWrongCSSFontSize($Class* clazz) {
	return $of($alloc(TestWrongCSSFontSize));
}

$String* TestWrongCSSFontSize::TEXT = nullptr;

void TestWrongCSSFontSize::init$(bool w3cUnits) {
	this->w3cUnits = w3cUnits;
}

void TestWrongCSSFontSize::setUp() {
	$set(this, editor, $new($JEditorPane));
	$nc(this->editor)->setContentType("text/html"_s);
	if (this->w3cUnits) {
		$init($Boolean);
		$nc(this->editor)->putClientProperty($JEditorPane::W3C_LENGTH_UNITS, $Boolean::TRUE);
	}
	$nc(this->editor)->setText(TestWrongCSSFontSize::TEXT);
	$nc(this->editor)->setSize($($nc(this->editor)->getPreferredSize()));
}

void TestWrongCSSFontSize::run() {
	$useLocalCurrentObjectStackCache();
	$var($View, var$0, $nc($($cast($TextUI, $nc(this->editor)->getUI())))->getRootView(this->editor));
	int32_t count = forEachTextRun(var$0, static_cast<$Consumer*>($$new(TestWrongCSSFontSize$$Lambda$assertFontSize, this)));
	if (count != TestWrongCSSFontSize::expectedAssertions) {
		$throwNew($AssertionError, $of($$str({(this->w3cUnits ? "w3cUnits - "_s : ""_s), "assertion count expected ["_s, $$str(TestWrongCSSFontSize::expectedAssertions), "] but found ["_s, $$str(count), "]"_s})));
	}
}

int32_t TestWrongCSSFontSize::forEachTextRun($View* view, $Consumer* action) {
	$useLocalCurrentObjectStackCache();
	int32_t tested = 0;
	for (int32_t i = 0; i < $nc(view)->getViewCount(); ++i) {
		$var($View, child, view->getView(i));
		if ($instanceOf($GlyphView, child)) {
			$init($Boolean);
			if ($equals($nc($($nc($($nc(child)->getElement()))->getAttributes()))->getAttribute("CR"_s), $Boolean::TRUE)) {
				continue;
			}
			$nc(action)->accept($cast($GlyphView, child));
			tested += 1;
		} else {
			tested += forEachTextRun(child, action);
		}
	}
	return tested;
}

void TestWrongCSSFontSize::assertFontSize($GlyphView* child) {
	$useLocalCurrentObjectStackCache();
	printSource(child);
	int32_t actualFontSize = $nc($($nc(child)->getFont()))->getSize();
	if (actualFontSize != TestWrongCSSFontSize::expectedFontSize) {
		$throwNew($AssertionError, $of($$str({(this->w3cUnits ? "w3cUnits - "_s : ""_s), "font size expected ["_s, $$str(TestWrongCSSFontSize::expectedFontSize), "] but found ["_s, $$str(actualFontSize), "]"_s})));
	}
}

void TestWrongCSSFontSize::printSource($View* textRun) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($OutputStream, var$0, static_cast<$OutputStream*>($System::out));
		$var($Document, var$1, $nc(this->editor)->getDocument());
		int32_t var$2 = $nc(textRun)->getStartOffset();
		int32_t var$3 = textRun->getEndOffset();
		$nc($($nc(this->editor)->getEditorKit()))->write(var$0, var$1, var$2, var$3 - textRun->getStartOffset());
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

void TestWrongCSSFontSize::captureImage($Component* comp, $String* suffix) {
	$init(TestWrongCSSFontSize);
	$useLocalCurrentObjectStackCache();
	try {
		int32_t var$0 = $nc(comp)->getWidth();
		$var($BufferedImage, capture, $new($BufferedImage, var$0, comp->getHeight(), $BufferedImage::TYPE_INT_ARGB));
		$var($Graphics, g, capture->getGraphics());
		$nc(comp)->paint(g);
		$nc(g)->dispose();
		$ImageIO::write(static_cast<$RenderedImage*>(capture), "png"_s, $$new($File, $$str({$(TestWrongCSSFontSize::class$->getSimpleName()), suffix, ".png"_s})));
	} catch ($IOException& e) {
		e->printStackTrace();
	}
}

void TestWrongCSSFontSize::main($StringArray* args) {
	$init(TestWrongCSSFontSize);
	$useLocalCurrentObjectStackCache();
	$var(TestWrongCSSFontSize, test, $new(TestWrongCSSFontSize, argW3CUnits(args)));
	$var($AtomicReference, failure, $new($AtomicReference));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestWrongCSSFontSize$$Lambda$lambda$main$0$1, test, failure, args)));
	if (failure->get() != nullptr) {
		$throw($cast($Throwable, $(failure->get())));
	}
}

bool TestWrongCSSFontSize::argW3CUnits($StringArray* args) {
	$init(TestWrongCSSFontSize);
	return $nc($($Arrays::asList(args)))->contains("-w3cUnits"_s);
}

bool TestWrongCSSFontSize::argCapture($StringArray* args) {
	$init(TestWrongCSSFontSize);
	return $nc($($Arrays::asList(args)))->contains("-capture"_s);
}

void TestWrongCSSFontSize::lambda$main$0(TestWrongCSSFontSize* test, $AtomicReference* failure, $StringArray* args) {
	$init(TestWrongCSSFontSize);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(test)->setUp();
				test->run();
			} catch ($Throwable& e) {
				$nc(failure)->set(e);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$var($String, suffix, $nc(test)->w3cUnits ? "-w3cUnits"_s : ""_s);
			if ($nc(failure)->get() != nullptr) {
				captureImage($nc(test)->editor, $$str({suffix, "-failure"_s}));
			} else if (argCapture(args)) {
				captureImage($nc(test)->editor, $$str({suffix, "-success"_s}));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

TestWrongCSSFontSize::TestWrongCSSFontSize() {
}

void clinit$TestWrongCSSFontSize($Class* class$) {
	$assignStatic(TestWrongCSSFontSize::TEXT, "<html><head><style>body { font-size: 14 }div span { font-size: 150% }span { font-size: 200% }h2, .h2 { font-size: 150% }</style></head><body><h2>Foo</h2><div class=h2>Bar</div><ol class=h2><li>Baz</li></ol><table class=h2><tr><td>Qux</td></tr></table><table><thead class=h2><tr><th>Qux</th></tr></thead></table><table><tr class=h2><td>Qux</td></tr></table><table><tr><td class=h2>Qux</td></tr></table><div><span>Quux</span></div></body></html>"_s);
}

$Class* TestWrongCSSFontSize::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestWrongCSSFontSize$$Lambda$assertFontSize::classInfo$.name)) {
			return TestWrongCSSFontSize$$Lambda$assertFontSize::load$(name, initialize);
		}
		if (name->equals(TestWrongCSSFontSize$$Lambda$lambda$main$0$1::classInfo$.name)) {
			return TestWrongCSSFontSize$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
	}
	$loadClass(TestWrongCSSFontSize, name, initialize, &_TestWrongCSSFontSize_ClassInfo_, clinit$TestWrongCSSFontSize, allocate$TestWrongCSSFontSize);
	return class$;
}

$Class* TestWrongCSSFontSize::class$ = nullptr;