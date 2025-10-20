#include <AliasingTest.h>

#include <AliasingTest$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef SOUTH
#undef VERTICAL_SPLIT

using $AliasingTest$1 = ::AliasingTest$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
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
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSplitPane = ::javax::swing::JSplitPane;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class AliasingTest$$Lambda$lambda$run$0 : public $Runnable {
	$class(AliasingTest$$Lambda$lambda$run$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(AliasingTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$run$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AliasingTest$$Lambda$lambda$run$0>());
	}
	AliasingTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AliasingTest$$Lambda$lambda$run$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AliasingTest$$Lambda$lambda$run$0, inst$)},
	{}
};
$MethodInfo AliasingTest$$Lambda$lambda$run$0::methodInfos[3] = {
	{"<init>", "(LAliasingTest;)V", nullptr, $PUBLIC, $method(static_cast<void(AliasingTest$$Lambda$lambda$run$0::*)(AliasingTest*)>(&AliasingTest$$Lambda$lambda$run$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AliasingTest$$Lambda$lambda$run$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"AliasingTest$$Lambda$lambda$run$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* AliasingTest$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$loadClass(AliasingTest$$Lambda$lambda$run$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AliasingTest$$Lambda$lambda$run$0::class$ = nullptr;

class AliasingTest$$Lambda$lambda$createUI$1$1 : public $ActionListener {
	$class(AliasingTest$$Lambda$lambda$createUI$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(AliasingTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createUI$1(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AliasingTest$$Lambda$lambda$createUI$1$1>());
	}
	AliasingTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AliasingTest$$Lambda$lambda$createUI$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AliasingTest$$Lambda$lambda$createUI$1$1, inst$)},
	{}
};
$MethodInfo AliasingTest$$Lambda$lambda$createUI$1$1::methodInfos[3] = {
	{"<init>", "(LAliasingTest;)V", nullptr, $PUBLIC, $method(static_cast<void(AliasingTest$$Lambda$lambda$createUI$1$1::*)(AliasingTest*)>(&AliasingTest$$Lambda$lambda$createUI$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AliasingTest$$Lambda$lambda$createUI$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"AliasingTest$$Lambda$lambda$createUI$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* AliasingTest$$Lambda$lambda$createUI$1$1::load$($String* name, bool initialize) {
	$loadClass(AliasingTest$$Lambda$lambda$createUI$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AliasingTest$$Lambda$lambda$createUI$1$1::class$ = nullptr;

class AliasingTest$$Lambda$lambda$createUI$2$2 : public $ActionListener {
	$class(AliasingTest$$Lambda$lambda$createUI$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(AliasingTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createUI$2(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AliasingTest$$Lambda$lambda$createUI$2$2>());
	}
	AliasingTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AliasingTest$$Lambda$lambda$createUI$2$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AliasingTest$$Lambda$lambda$createUI$2$2, inst$)},
	{}
};
$MethodInfo AliasingTest$$Lambda$lambda$createUI$2$2::methodInfos[3] = {
	{"<init>", "(LAliasingTest;)V", nullptr, $PUBLIC, $method(static_cast<void(AliasingTest$$Lambda$lambda$createUI$2$2::*)(AliasingTest*)>(&AliasingTest$$Lambda$lambda$createUI$2$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AliasingTest$$Lambda$lambda$createUI$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"AliasingTest$$Lambda$lambda$createUI$2$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* AliasingTest$$Lambda$lambda$createUI$2$2::load$($String* name, bool initialize) {
	$loadClass(AliasingTest$$Lambda$lambda$createUI$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AliasingTest$$Lambda$lambda$createUI$2$2::class$ = nullptr;

$FieldInfo _AliasingTest_FieldInfo_[] = {
	{"f", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(AliasingTest, f)},
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $STATIC, $staticField(AliasingTest, dialog)},
	{"testResult", "Z", nullptr, $PUBLIC, $field(AliasingTest, testResult)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(AliasingTest, latch)},
	{}
};

$MethodInfo _AliasingTest_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(AliasingTest::*)($CountDownLatch*)>(&AliasingTest::init$)), "java.lang.Exception"},
	{"aliasingTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&AliasingTest::aliasingTest))},
	{"createHtmlViewer", "(Z)Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Component*(*)(bool)>(&AliasingTest::createHtmlViewer))},
	{"createSplitPane", "()Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Component*(*)()>(&AliasingTest::createSplitPane))},
	{"createUI", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(AliasingTest::*)()>(&AliasingTest::createUI))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getHtml", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&AliasingTest::getHtml))},
	{"lambda$createUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(AliasingTest::*)($ActionEvent*)>(&AliasingTest::lambda$createUI$1))},
	{"lambda$createUI$2", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(AliasingTest::*)($ActionEvent*)>(&AliasingTest::lambda$createUI$2))},
	{"lambda$run$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(AliasingTest::*)()>(&AliasingTest::lambda$run$0))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AliasingTest_InnerClassesInfo_[] = {
	{"AliasingTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AliasingTest_ClassInfo_ = {
	$ACC_SUPER,
	"AliasingTest",
	"java.lang.Object",
	"java.lang.Runnable",
	_AliasingTest_FieldInfo_,
	_AliasingTest_MethodInfo_,
	nullptr,
	nullptr,
	_AliasingTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"AliasingTest$1"
};

$Object* allocate$AliasingTest($Class* clazz) {
	return $of($alloc(AliasingTest));
}

$JFrame* AliasingTest::f = nullptr;
$JDialog* AliasingTest::dialog = nullptr;

void AliasingTest::init$($CountDownLatch* latch) {
	this->testResult = false;
	$set(this, latch, latch);
}

void AliasingTest::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(AliasingTest$$Lambda$lambda$run$0, this)));
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		if (AliasingTest::f != nullptr) {
			$nc(AliasingTest::f)->dispose();
		}
		$nc(this->latch)->countDown();
		$throwNew($RuntimeException, $$str({"createUI Failed: "_s, $(ex->getMessage())}));
	}
}

void AliasingTest::dispose() {
	$nc(AliasingTest::dialog)->dispose();
	$nc(AliasingTest::f)->dispose();
}

$String* AliasingTest::getHtml() {
	$init(AliasingTest);
	return "<html><body><ul><li>Text</li><li>Document</li></ul></body></html>"_s;
}

$Component* AliasingTest::createSplitPane() {
	$init(AliasingTest);
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, createHtmlViewer(false));
	$var($JSplitPane, splitPane, $new($JSplitPane, $JSplitPane::VERTICAL_SPLIT, var$0, $(createHtmlViewer(true))));
	splitPane->setOneTouchExpandable(true);
	splitPane->setResizeWeight(0.5);
	splitPane->setPreferredSize($$new($Dimension, 150, 150));
	return splitPane;
}

$Component* AliasingTest::createHtmlViewer(bool antialiasing) {
	$init(AliasingTest);
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editorPane, nullptr);
	if (antialiasing) {
		$assign(editorPane, $new($AliasingTest$1));
	} else {
		$assign(editorPane, $new($JEditorPane));
	}
	$nc(editorPane)->setEditable(false);
	editorPane->setContentType("text/html"_s);
	editorPane->setText($(getHtml()));
	return $new($JScrollPane, editorPane);
}

void AliasingTest::aliasingTest() {
	$init(AliasingTest);
	$assignStatic(AliasingTest::f, $new($JFrame, "List Bullets"_s));
	$nc(AliasingTest::f)->add($(createSplitPane()));
	$nc(AliasingTest::f)->pack();
	$nc(AliasingTest::f)->setLocationRelativeTo(nullptr);
	$nc(AliasingTest::f)->setVisible(true);
}

void AliasingTest::createUI() {
	$useLocalCurrentObjectStackCache();
	$var($String, description, " INSTRUCTIONS:\n A JEditorPane divided by SplitPane will be shown.\n The upper html is rendered in a default JEditorPane.\n  The lower html is rendered in a JEditorPane using  rendering hints to turn on antialiasing.\n If upper html bullets looks pixelated AND larger than needed relative to text font size\n and not as smooth as shown in lower html\n  then press fail else press pass"_s);
	$assignStatic(AliasingTest::dialog, $new($JDialog));
	$nc(AliasingTest::dialog)->setTitle("textselectionTest"_s);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	passButton->addActionListener(static_cast<$ActionListener*>($$new(AliasingTest$$Lambda$lambda$createUI$1$1, this)));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	failButton->addActionListener(static_cast<$ActionListener*>($$new(AliasingTest$$Lambda$lambda$createUI$2$2, this)));
	$var($JPanel, mainPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$init($BorderLayout);
	mainPanel->add(static_cast<$Component*>(textArea), $of($BorderLayout::CENTER));
	$var($JPanel, buttonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	buttonPanel->add(static_cast<$Component*>(passButton));
	buttonPanel->add(static_cast<$Component*>(failButton));
	mainPanel->add(static_cast<$Component*>(buttonPanel), $of($BorderLayout::SOUTH));
	$nc(AliasingTest::dialog)->add(static_cast<$Component*>(mainPanel));
	$nc(AliasingTest::dialog)->pack();
	$nc(AliasingTest::dialog)->setVisible(true);
}

void AliasingTest::lambda$createUI$2($ActionEvent* e) {
	this->testResult = false;
	dispose();
	$nc(this->latch)->countDown();
}

void AliasingTest::lambda$createUI$1($ActionEvent* e) {
	this->testResult = true;
	dispose();
	$nc(this->latch)->countDown();
}

void AliasingTest::lambda$run$0() {
	createUI();
	aliasingTest();
}

AliasingTest::AliasingTest() {
}

$Class* AliasingTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AliasingTest$$Lambda$lambda$run$0::classInfo$.name)) {
			return AliasingTest$$Lambda$lambda$run$0::load$(name, initialize);
		}
		if (name->equals(AliasingTest$$Lambda$lambda$createUI$1$1::classInfo$.name)) {
			return AliasingTest$$Lambda$lambda$createUI$1$1::load$(name, initialize);
		}
		if (name->equals(AliasingTest$$Lambda$lambda$createUI$2$2::classInfo$.name)) {
			return AliasingTest$$Lambda$lambda$createUI$2$2::load$(name, initialize);
		}
	}
	$loadClass(AliasingTest, name, initialize, &_AliasingTest_ClassInfo_, allocate$AliasingTest);
	return class$;
}

$Class* AliasingTest::class$ = nullptr;