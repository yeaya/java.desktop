#include <SpanTest$2.h>

#include <SpanTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef SOUTH

using $SpanTest = ::SpanTest;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class SpanTest$2$$Lambda$lambda$run$0 : public $ActionListener {
	$class(SpanTest$2$$Lambda$lambda$run$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(SpanTest$2* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpanTest$2$$Lambda$lambda$run$0>());
	}
	SpanTest$2* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SpanTest$2$$Lambda$lambda$run$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SpanTest$2$$Lambda$lambda$run$0, inst$)},
	{}
};
$MethodInfo SpanTest$2$$Lambda$lambda$run$0::methodInfos[3] = {
	{"<init>", "(LSpanTest$2;)V", nullptr, $PUBLIC, $method(static_cast<void(SpanTest$2$$Lambda$lambda$run$0::*)(SpanTest$2*)>(&SpanTest$2$$Lambda$lambda$run$0::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SpanTest$2$$Lambda$lambda$run$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpanTest$2$$Lambda$lambda$run$0",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* SpanTest$2$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$loadClass(SpanTest$2$$Lambda$lambda$run$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpanTest$2$$Lambda$lambda$run$0::class$ = nullptr;

class SpanTest$2$$Lambda$lambda$run$1$1 : public $ActionListener {
	$class(SpanTest$2$$Lambda$lambda$run$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(SpanTest$2* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$1(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpanTest$2$$Lambda$lambda$run$1$1>());
	}
	SpanTest$2* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SpanTest$2$$Lambda$lambda$run$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SpanTest$2$$Lambda$lambda$run$1$1, inst$)},
	{}
};
$MethodInfo SpanTest$2$$Lambda$lambda$run$1$1::methodInfos[3] = {
	{"<init>", "(LSpanTest$2;)V", nullptr, $PUBLIC, $method(static_cast<void(SpanTest$2$$Lambda$lambda$run$1$1::*)(SpanTest$2*)>(&SpanTest$2$$Lambda$lambda$run$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SpanTest$2$$Lambda$lambda$run$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpanTest$2$$Lambda$lambda$run$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* SpanTest$2$$Lambda$lambda$run$1$1::load$($String* name, bool initialize) {
	$loadClass(SpanTest$2$$Lambda$lambda$run$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpanTest$2$$Lambda$lambda$run$1$1::class$ = nullptr;

$FieldInfo _SpanTest$2_FieldInfo_[] = {
	{"this$0", "LSpanTest;", nullptr, $FINAL | $SYNTHETIC, $field(SpanTest$2, this$0)},
	{}
};

$MethodInfo _SpanTest$2_MethodInfo_[] = {
	{"<init>", "(LSpanTest;)V", nullptr, 0, $method(static_cast<void(SpanTest$2::*)($SpanTest*)>(&SpanTest$2::init$))},
	{"lambda$run$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(SpanTest$2::*)($ActionEvent*)>(&SpanTest$2::lambda$run$0))},
	{"lambda$run$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(SpanTest$2::*)($ActionEvent*)>(&SpanTest$2::lambda$run$1))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SpanTest$2_EnclosingMethodInfo_ = {
	"SpanTest",
	"createUI",
	"()V"
};

$InnerClassInfo _SpanTest$2_InnerClassesInfo_[] = {
	{"SpanTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SpanTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"SpanTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_SpanTest$2_FieldInfo_,
	_SpanTest$2_MethodInfo_,
	nullptr,
	&_SpanTest$2_EnclosingMethodInfo_,
	_SpanTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpanTest"
};

$Object* allocate$SpanTest$2($Class* clazz) {
	return $of($alloc(SpanTest$2));
}

void SpanTest$2::init$($SpanTest* this$0) {
	$set(this, this$0, this$0);
}

void SpanTest$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, description, " INSTRUCTIONS:\n A string will be shown.\n  Press Pass if there is no overlap of characters\n else press Fail."_s);
	$init($SpanTest);
	$assignStatic($SpanTest::dialog, $new($JDialog));
	$nc($SpanTest::dialog)->setTitle("textselectionTest"_s);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	passButton->addActionListener(static_cast<$ActionListener*>($$new(SpanTest$2$$Lambda$lambda$run$0, this)));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	failButton->addActionListener(static_cast<$ActionListener*>($$new(SpanTest$2$$Lambda$lambda$run$1$1, this)));
	$var($JPanel, mainPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$init($BorderLayout);
	mainPanel->add(static_cast<$Component*>(textArea), $of($BorderLayout::CENTER));
	$var($JPanel, buttonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	buttonPanel->add(static_cast<$Component*>(passButton));
	buttonPanel->add(static_cast<$Component*>(failButton));
	mainPanel->add(static_cast<$Component*>(buttonPanel), $of($BorderLayout::SOUTH));
	$nc($SpanTest::dialog)->add(static_cast<$Component*>(mainPanel));
	$nc($SpanTest::dialog)->pack();
	$nc($SpanTest::dialog)->setVisible(true);
}

void SpanTest$2::lambda$run$1($ActionEvent* e) {
	this->this$0->testResult = false;
	this->this$0->dispose();
	$nc(this->this$0->latch)->countDown();
}

void SpanTest$2::lambda$run$0($ActionEvent* e) {
	this->this$0->testResult = true;
	this->this$0->dispose();
	$nc(this->this$0->latch)->countDown();
}

SpanTest$2::SpanTest$2() {
}

$Class* SpanTest$2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SpanTest$2$$Lambda$lambda$run$0::classInfo$.name)) {
			return SpanTest$2$$Lambda$lambda$run$0::load$(name, initialize);
		}
		if (name->equals(SpanTest$2$$Lambda$lambda$run$1$1::classInfo$.name)) {
			return SpanTest$2$$Lambda$lambda$run$1$1::load$(name, initialize);
		}
	}
	$loadClass(SpanTest$2, name, initialize, &_SpanTest$2_ClassInfo_, allocate$SpanTest$2);
	return class$;
}

$Class* SpanTest$2::class$ = nullptr;