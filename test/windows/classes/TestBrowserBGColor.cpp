#include <TestBrowserBGColor.h>

#include <TestBrowserBGColor$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/event/HyperlinkEvent.h>
#include <javax/swing/event/HyperlinkListener.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLFrameHyperlinkEvent.h>
#include <jcpp.h>

#undef ACTIVATED
#undef DO_NOTHING_ON_CLOSE
#undef WHITE

using $TestBrowserBGColor$1 = ::TestBrowserBGColor$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
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
using $URL = ::java::net::URL;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $HyperlinkEvent = ::javax::swing::event::HyperlinkEvent;
using $HyperlinkEvent$EventType = ::javax::swing::event::HyperlinkEvent$EventType;
using $HyperlinkListener = ::javax::swing::event::HyperlinkListener;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLFrameHyperlinkEvent = ::javax::swing::text::html::HTMLFrameHyperlinkEvent;

class TestBrowserBGColor$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestBrowserBGColor$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestBrowserBGColor::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestBrowserBGColor$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestBrowserBGColor$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestBrowserBGColor$$Lambda$lambda$main$0::*)()>(&TestBrowserBGColor$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestBrowserBGColor$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestBrowserBGColor$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestBrowserBGColor$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestBrowserBGColor$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestBrowserBGColor$$Lambda$lambda$main$0::class$ = nullptr;

class TestBrowserBGColor$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestBrowserBGColor$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Robot* r) {
		$set(this, r, r);
	}
	virtual void run() override {
		TestBrowserBGColor::lambda$main$1(r);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestBrowserBGColor$$Lambda$lambda$main$1$1>());
	}
	$Robot* r = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestBrowserBGColor$$Lambda$lambda$main$1$1::fieldInfos[2] = {
	{"r", "Ljava/awt/Robot;", nullptr, $PUBLIC, $field(TestBrowserBGColor$$Lambda$lambda$main$1$1, r)},
	{}
};
$MethodInfo TestBrowserBGColor$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Robot;)V", nullptr, $PUBLIC, $method(static_cast<void(TestBrowserBGColor$$Lambda$lambda$main$1$1::*)($Robot*)>(&TestBrowserBGColor$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestBrowserBGColor$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestBrowserBGColor$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestBrowserBGColor$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(TestBrowserBGColor$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestBrowserBGColor$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _TestBrowserBGColor_FieldInfo_[] = {
	{"b", "LTestBrowserBGColor;", nullptr, $PRIVATE | $STATIC, $staticField(TestBrowserBGColor, b)},
	{"browser", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestBrowserBGColor, browser)},
	{"htmlDoc", "Ljava/lang/String;", nullptr, 0, $field(TestBrowserBGColor, htmlDoc)},
	{}
};

$MethodInfo _TestBrowserBGColor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestBrowserBGColor::*)()>(&TestBrowserBGColor::init$)), "java.io.IOException,java.net.MalformedURLException"},
	{"hyperlinkUpdate", "(Ljavax/swing/event/HyperlinkEvent;)V", nullptr, $PUBLIC},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestBrowserBGColor::lambda$main$0))},
	{"lambda$main$1", "(Ljava/awt/Robot;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Robot*)>(&TestBrowserBGColor::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestBrowserBGColor::main)), "java.lang.Exception"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestBrowserBGColor_InnerClassesInfo_[] = {
	{"TestBrowserBGColor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestBrowserBGColor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestBrowserBGColor",
	"javax.swing.JFrame",
	"javax.swing.event.HyperlinkListener",
	_TestBrowserBGColor_FieldInfo_,
	_TestBrowserBGColor_MethodInfo_,
	nullptr,
	nullptr,
	_TestBrowserBGColor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestBrowserBGColor$1"
};

$Object* allocate$TestBrowserBGColor($Class* clazz) {
	return $of($alloc(TestBrowserBGColor));
}

$String* TestBrowserBGColor::toString() {
	 return this->$JFrame::toString();
}

int32_t TestBrowserBGColor::hashCode() {
	 return this->$JFrame::hashCode();
}

bool TestBrowserBGColor::equals(Object$* arg0) {
	 return this->$JFrame::equals(arg0);
}

$Object* TestBrowserBGColor::clone() {
	 return this->$JFrame::clone();
}

void TestBrowserBGColor::finalize() {
	this->$JFrame::finalize();
}

TestBrowserBGColor* TestBrowserBGColor::b = nullptr;
$JEditorPane* TestBrowserBGColor::browser = nullptr;

void TestBrowserBGColor::main($StringArray* args) {
	$init(TestBrowserBGColor);
	$useLocalCurrentObjectStackCache();
	$var($Robot, r, $new($Robot));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestBrowserBGColor$$Lambda$lambda$main$0)));
	r->waitForIdle();
	r->delay(500);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestBrowserBGColor$$Lambda$lambda$main$1$1, r)));
}

void TestBrowserBGColor::init$() {
	$useLocalCurrentObjectStackCache();
	$JFrame::init$();
	$set(this, htmlDoc, " <!DOCTYPE html> <html><style> body { background: #FFF; } </style> <head> <title>Title</title> </head> <body> </body> </html>"_s);
	$assignStatic(TestBrowserBGColor::browser, $new($JEditorPane, "text/html"_s, this->htmlDoc));
	$nc(TestBrowserBGColor::browser)->setEditable(false);
	$nc(TestBrowserBGColor::browser)->addHyperlinkListener(this);
	$var($JScrollPane, scroll, $new($JScrollPane, TestBrowserBGColor::browser));
	$nc($(getContentPane()))->add(static_cast<$Component*>(scroll));
}

void TestBrowserBGColor::hyperlinkUpdate($HyperlinkEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($HyperlinkEvent$EventType);
	if ($nc(e)->getEventType() == $HyperlinkEvent$EventType::ACTIVATED) {
		$var($JEditorPane, pane, $cast($JEditorPane, e->getSource()));
		if ($instanceOf($HTMLFrameHyperlinkEvent, e)) {
			$var($HTMLFrameHyperlinkEvent, evt, $cast($HTMLFrameHyperlinkEvent, e));
			$var($HTMLDocument, doc, $cast($HTMLDocument, $nc(pane)->getDocument()));
			$nc(doc)->processHTMLFrameHyperlinkEvent(evt);
		} else {
			try {
				$nc(pane)->setPage($(e->getURL()));
			} catch ($Throwable&) {
				$var($Throwable, t, $catch());
				t->printStackTrace();
			}
		}
	}
}

void TestBrowserBGColor::lambda$main$1($Robot* r) {
	$init(TestBrowserBGColor);
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, $nc(TestBrowserBGColor::browser)->getInsets());
	$var($Point, loc, $nc(TestBrowserBGColor::browser)->getLocationOnScreen());
	$var($Color, c, $nc(r)->getPixelColor($nc(loc)->x + $nc(insets)->left + 100, loc->y + insets->top + 100));
	$nc(TestBrowserBGColor::b)->dispose();
	$init($Color);
	if (!$nc(c)->equals($Color::WHITE)) {
		$throwNew($RuntimeException, "webpage background color wrong"_s);
	}
}

void TestBrowserBGColor::lambda$main$0() {
	$init(TestBrowserBGColor);
	$useLocalCurrentObjectStackCache();
	try {
		$assignStatic(TestBrowserBGColor::b, $new(TestBrowserBGColor));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$nc(TestBrowserBGColor::b)->setSize($($nc($($Toolkit::getDefaultToolkit()))->getScreenSize()));
	$nc(TestBrowserBGColor::b)->setVisible(true);
	$nc(TestBrowserBGColor::b)->setDefaultCloseOperation($JFrame::DO_NOTHING_ON_CLOSE);
	$nc(TestBrowserBGColor::b)->addWindowListener($$new($TestBrowserBGColor$1));
}

TestBrowserBGColor::TestBrowserBGColor() {
}

$Class* TestBrowserBGColor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestBrowserBGColor$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestBrowserBGColor$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestBrowserBGColor$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return TestBrowserBGColor$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(TestBrowserBGColor, name, initialize, &_TestBrowserBGColor_ClassInfo_, allocate$TestBrowserBGColor);
	return class$;
}

$Class* TestBrowserBGColor::class$ = nullptr;