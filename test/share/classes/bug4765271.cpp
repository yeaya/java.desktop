#include <bug4765271.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Window.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <javax/swing/text/html/InlineView.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE
#undef RES
#undef TEXT
#undef TRUE
#undef W3C_LENGTH_UNITS

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Window = ::java::awt::Window;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $View = ::javax::swing::text::View;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $InlineView = ::javax::swing::text::html::InlineView;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

class bug4765271$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4765271$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4765271* test) {
		$set(this, test, test);
	}
	virtual void run() override {
		bug4765271::lambda$main$0(test);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4765271$$Lambda$lambda$main$0>());
	}
	bug4765271* test = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4765271$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"test", "Lbug4765271;", nullptr, $PUBLIC, $field(bug4765271$$Lambda$lambda$main$0, test)},
	{}
};
$MethodInfo bug4765271$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Lbug4765271;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4765271$$Lambda$lambda$main$0::*)(bug4765271*)>(&bug4765271$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4765271$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4765271$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4765271$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4765271$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4765271$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug4765271_FieldInfo_[] = {
	{"RES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug4765271, RES)},
	{"TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4765271, TEXT)},
	{"jep", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE, $field(bug4765271, jep)},
	{"showFrame", "Z", nullptr, $PRIVATE | $FINAL, $field(bug4765271, showFrame)},
	{"passed", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(bug4765271, passed)},
	{}
};

$MethodInfo _bug4765271_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(bug4765271::*)(bool)>(&bug4765271::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{"lambda$main$0", "(Lbug4765271;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bug4765271*)>(&bug4765271::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4765271::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _bug4765271_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4765271",
	"java.lang.Object",
	nullptr,
	_bug4765271_FieldInfo_,
	_bug4765271_MethodInfo_
};

$Object* allocate$bug4765271($Class* clazz) {
	return $of($alloc(bug4765271));
}

$String* bug4765271::TEXT = nullptr;

void bug4765271::init$(bool showFrame) {
	$set(this, passed, $new($AtomicBoolean, true));
	this->showFrame = showFrame;
}

void bug4765271::init() {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({"res = "_s, $$str(bug4765271::RES)}));
	$set(this, jep, $new($JEditorPane));
	$init($JEditorPane);
	$init($Boolean);
	$nc(this->jep)->putClientProperty($JEditorPane::W3C_LENGTH_UNITS, $Boolean::TRUE);
	$nc(this->jep)->setEditorKit($$new($HTMLEditorKit));
	$nc(this->jep)->setEditable(false);
	$nc(this->jep)->setText(bug4765271::TEXT);
	if (this->showFrame) {
		$var($JFrame, f, $new($JFrame, "Reg test for bug4765271"_s));
		f->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
		$nc($(f->getContentPane()))->add(static_cast<$Component*>(this->jep));
		f->pack();
		f->setVisible(true);
	} else {
		$nc(this->jep)->setSize($($nc(this->jep)->getPreferredSize()));
	}
}

void bug4765271::test() {
	$useLocalCurrentObjectStackCache();
	$var($Shape, r, $nc(this->jep)->getBounds());
	$var($View, v, $nc($($cast($TextUI, $nc(this->jep)->getUI())))->getRootView(this->jep));
	while (!($instanceOf($InlineView, v))) {
		$var($String, viewName, $nc($of(v))->getClass()->getName());
		int32_t n = v->getViewCount();
		if ($nc(viewName)->endsWith("Row"_s)) {
			break;
		}
		$var($Shape, sh, v->getChildAllocation(n - 1, r));
		if (sh != nullptr) {
			$assign(r, sh);
		}
		$assign(v, v->getView(n - 1));
	}
	$var($Shape, sh, $nc(v)->getChildAllocation(0, r));
	int32_t h1 = $nc($($nc(sh)->getBounds()))->height;
	$var($StyleSheet, ss, $nc(($cast($HTMLDocument, $(v->getDocument()))))->getStyleSheet());
	$var($View, childView, v->getView(0));
	$var($AttributeSet, attrs, $nc(childView)->getAttributes());
	$var($Font, font, $nc(ss)->getFont(attrs));
	int32_t size1 = $nc(font)->getSize();
	$nc($System::out)->println($$str({"Font Size for InlineView #0 = "_s, $$str(size1), "; height = "_s, $$str(h1), "; element = {"_s}));
	$nc(($cast($AbstractDocument$AbstractElement, $(childView->getElement()))))->dump($System::out, 3);
	$nc($System::out)->println("}"_s);
	bool testPassed = true;
	int32_t n = v->getViewCount() - 1;
	for (int32_t i = 1; i < n; ++i) {
		$assign(sh, v->getChildAllocation(i, r));
		int32_t h2 = $nc($($nc(sh)->getBounds()))->height;
		$assign(childView, v->getView(i));
		$assign(attrs, $nc(childView)->getAttributes());
		$assign(font, ss->getFont(attrs));
		int32_t size2 = $nc(font)->getSize();
		$nc($System::out)->println($$str({"Font Size for InlineView #"_s, $$str(i), " = "_s, $$str(size2), "; height = "_s, $$str(h2), "; element = {"_s}));
		$nc(($cast($AbstractDocument$AbstractElement, $(childView->getElement()))))->dump($System::out, 3);
		$nc($System::out)->println("}"_s);
		testPassed &= ((size1 == size2) && (h1 == h2));
	}
	$nc(this->passed)->set(testPassed);
}

void bug4765271::main($StringArray* args) {
	$init(bug4765271);
	$useLocalCurrentObjectStackCache();
	$var(bug4765271, test, $new(bug4765271, ($nc(args)->length > 0) && "-show"_s->equals(args->get(0))));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4765271$$Lambda$lambda$main$0, test)));
	if (!$nc(test->passed)->get()) {
		$throwNew($RuntimeException, "Test failed"_s);
	} else {
		$nc($System::out)->println("Test succeeded"_s);
	}
}

void bug4765271::lambda$main$0(bug4765271* test) {
	$init(bug4765271);
	$nc(test)->init();
	test->test();
}

bug4765271::bug4765271() {
}

void clinit$bug4765271($Class* class$) {
	$assignStatic(bug4765271::TEXT, $str({"<html><body><span style=\"font-size: 72pt  \">A</span><span style=\"font-size: 6pc   \">B</span><span style=\"font-size: "_s, $$str(bug4765271::RES), "px  \">C</span><span style=\"font-size: 25.4mm\">D</span><span style=\"font-size: 2.54cm\">E</span><span style=\"font-size: 1in   \">F</span></body></html>"_s}));
}

$Class* bug4765271::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4765271$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4765271$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug4765271, name, initialize, &_bug4765271_ClassInfo_, clinit$bug4765271, allocate$bug4765271);
	return class$;
}

$Class* bug4765271::class$ = nullptr;