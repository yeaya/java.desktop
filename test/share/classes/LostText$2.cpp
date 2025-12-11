#include <LostText$2.h>

#include <LostText.h>
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

using $LostText = ::LostText;
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

class LostText$2$$Lambda$lambda$run$0 : public $ActionListener {
	$class(LostText$2$$Lambda$lambda$run$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(LostText$2* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LostText$2$$Lambda$lambda$run$0>());
	}
	LostText$2* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LostText$2$$Lambda$lambda$run$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LostText$2$$Lambda$lambda$run$0, inst$)},
	{}
};
$MethodInfo LostText$2$$Lambda$lambda$run$0::methodInfos[3] = {
	{"<init>", "(LLostText$2;)V", nullptr, $PUBLIC, $method(static_cast<void(LostText$2$$Lambda$lambda$run$0::*)(LostText$2*)>(&LostText$2$$Lambda$lambda$run$0::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LostText$2$$Lambda$lambda$run$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"LostText$2$$Lambda$lambda$run$0",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* LostText$2$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$loadClass(LostText$2$$Lambda$lambda$run$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LostText$2$$Lambda$lambda$run$0::class$ = nullptr;

class LostText$2$$Lambda$lambda$run$1$1 : public $ActionListener {
	$class(LostText$2$$Lambda$lambda$run$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(LostText$2* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$1(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LostText$2$$Lambda$lambda$run$1$1>());
	}
	LostText$2* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LostText$2$$Lambda$lambda$run$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LostText$2$$Lambda$lambda$run$1$1, inst$)},
	{}
};
$MethodInfo LostText$2$$Lambda$lambda$run$1$1::methodInfos[3] = {
	{"<init>", "(LLostText$2;)V", nullptr, $PUBLIC, $method(static_cast<void(LostText$2$$Lambda$lambda$run$1$1::*)(LostText$2*)>(&LostText$2$$Lambda$lambda$run$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LostText$2$$Lambda$lambda$run$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"LostText$2$$Lambda$lambda$run$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* LostText$2$$Lambda$lambda$run$1$1::load$($String* name, bool initialize) {
	$loadClass(LostText$2$$Lambda$lambda$run$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LostText$2$$Lambda$lambda$run$1$1::class$ = nullptr;

$FieldInfo _LostText$2_FieldInfo_[] = {
	{"this$0", "LLostText;", nullptr, $FINAL | $SYNTHETIC, $field(LostText$2, this$0)},
	{}
};

$MethodInfo _LostText$2_MethodInfo_[] = {
	{"<init>", "(LLostText;)V", nullptr, 0, $method(static_cast<void(LostText$2::*)($LostText*)>(&LostText$2::init$))},
	{"lambda$run$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(LostText$2::*)($ActionEvent*)>(&LostText$2::lambda$run$0))},
	{"lambda$run$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(LostText$2::*)($ActionEvent*)>(&LostText$2::lambda$run$1))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LostText$2_EnclosingMethodInfo_ = {
	"LostText",
	"createUI",
	"()V"
};

$InnerClassInfo _LostText$2_InnerClassesInfo_[] = {
	{"LostText$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LostText$2_ClassInfo_ = {
	$ACC_SUPER,
	"LostText$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_LostText$2_FieldInfo_,
	_LostText$2_MethodInfo_,
	nullptr,
	&_LostText$2_EnclosingMethodInfo_,
	_LostText$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LostText"
};

$Object* allocate$LostText$2($Class* clazz) {
	return $of($alloc(LostText$2));
}

void LostText$2::init$($LostText* this$0) {
	$set(this, this$0, this$0);
}

void LostText$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, description, " INSTRUCTIONS:\n A JTable will be shown.\n Try to select different rows via mouse or keyboard.\n  Please verify if text are painted properly.\n If any moment any part of the rows will not be\n  painted properly and if some text are missing in JTable,\n  then press fail else press pass"_s);
	$init($LostText);
	$assignStatic($LostText::dialog, $new($JDialog));
	$nc($LostText::dialog)->setTitle("textselectionTest"_s);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	passButton->addActionListener(static_cast<$ActionListener*>($$new(LostText$2$$Lambda$lambda$run$0, this)));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	failButton->addActionListener(static_cast<$ActionListener*>($$new(LostText$2$$Lambda$lambda$run$1$1, this)));
	$var($JPanel, mainPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$init($BorderLayout);
	mainPanel->add(static_cast<$Component*>(textArea), $of($BorderLayout::CENTER));
	$var($JPanel, buttonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	buttonPanel->add(static_cast<$Component*>(passButton));
	buttonPanel->add(static_cast<$Component*>(failButton));
	mainPanel->add(static_cast<$Component*>(buttonPanel), $of($BorderLayout::SOUTH));
	$nc($LostText::dialog)->add(static_cast<$Component*>(mainPanel));
	$nc($LostText::dialog)->pack();
	$nc($LostText::dialog)->setVisible(true);
}

void LostText$2::lambda$run$1($ActionEvent* e) {
	this->this$0->testResult = false;
	this->this$0->dispose();
	$nc(this->this$0->latch)->countDown();
}

void LostText$2::lambda$run$0($ActionEvent* e) {
	this->this$0->testResult = true;
	this->this$0->dispose();
	$nc(this->this$0->latch)->countDown();
}

LostText$2::LostText$2() {
}

$Class* LostText$2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LostText$2$$Lambda$lambda$run$0::classInfo$.name)) {
			return LostText$2$$Lambda$lambda$run$0::load$(name, initialize);
		}
		if (name->equals(LostText$2$$Lambda$lambda$run$1$1::classInfo$.name)) {
			return LostText$2$$Lambda$lambda$run$1$1::load$(name, initialize);
		}
	}
	$loadClass(LostText$2, name, initialize, &_LostText$2_ClassInfo_, allocate$LostText$2);
	return class$;
}

$Class* LostText$2::class$ = nullptr;