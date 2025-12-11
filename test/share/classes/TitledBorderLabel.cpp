#include <TitledBorderLabel.h>

#include <TitledBorderLabel$1.h>
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
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE
#undef EXIT_ON_CLOSE
#undef MILLISECONDS
#undef NORTH
#undef SOUTH

using $TitledBorderLabel$1 = ::TitledBorderLabel$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TitledBorderLabel$$Lambda$lambda$main$0 : public $Runnable {
	$class(TitledBorderLabel$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TitledBorderLabel::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TitledBorderLabel$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TitledBorderLabel$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabel$$Lambda$lambda$main$0::*)()>(&TitledBorderLabel$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TitledBorderLabel$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TitledBorderLabel$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TitledBorderLabel$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TitledBorderLabel$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TitledBorderLabel$$Lambda$lambda$main$0::class$ = nullptr;

class TitledBorderLabel$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TitledBorderLabel$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TitledBorderLabel::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TitledBorderLabel$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TitledBorderLabel$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabel$$Lambda$lambda$main$1$1::*)()>(&TitledBorderLabel$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TitledBorderLabel$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TitledBorderLabel$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TitledBorderLabel$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(TitledBorderLabel$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TitledBorderLabel$$Lambda$lambda$main$1$1::class$ = nullptr;

class TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2 : public $ActionListener {
	$class(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(int64_t startTime, $Timer* timer, $JDialog* dialog, $JLabel* testTimeoutLabel) {
		this->startTime = startTime;
		$set(this, timer, timer);
		$set(this, dialog, dialog);
		$set(this, testTimeoutLabel, testTimeoutLabel);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TitledBorderLabel::lambda$createAndShowTestDialog$2(startTime, timer, dialog, testTimeoutLabel, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2>());
	}
	int64_t startTime = 0;
	$Timer* timer = nullptr;
	$JDialog* dialog = nullptr;
	$JLabel* testTimeoutLabel = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2::fieldInfos[5] = {
	{"startTime", "J", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2, startTime)},
	{"timer", "Ljavax/swing/Timer;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2, timer)},
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2, dialog)},
	{"testTimeoutLabel", "Ljavax/swing/JLabel;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2, testTimeoutLabel)},
	{}
};
$MethodInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2::methodInfos[3] = {
	{"<init>", "(JLjavax/swing/Timer;Ljavax/swing/JDialog;Ljavax/swing/JLabel;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2::*)(int64_t,$Timer*,$JDialog*,$JLabel*)>(&TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2::load$($String* name, bool initialize) {
	$loadClass(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2::class$ = nullptr;

class TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3 : public $ActionListener {
	$class(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JButton* testButton, $JButton* passButton, $JButton* failButton, $JDialog* dialog) {
		$set(this, testButton, testButton);
		$set(this, passButton, passButton);
		$set(this, failButton, failButton);
		$set(this, dialog, dialog);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TitledBorderLabel::lambda$createAndShowTestDialog$5(testButton, passButton, failButton, dialog, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3>());
	}
	$JButton* testButton = nullptr;
	$JButton* passButton = nullptr;
	$JButton* failButton = nullptr;
	$JDialog* dialog = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3::fieldInfos[5] = {
	{"testButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3, testButton)},
	{"passButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3, passButton)},
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3, failButton)},
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3, dialog)},
	{}
};
$MethodInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/JButton;Ljavax/swing/JButton;Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3::*)($JButton*,$JButton*,$JButton*,$JDialog*)>(&TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3::load$($String* name, bool initialize) {
	$loadClass(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3::class$ = nullptr;

class TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4 : public $ActionListener {
	$class(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JDialog* dialog) {
		$set(this, dialog, dialog);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TitledBorderLabel::lambda$createAndShowTestDialog$6(dialog, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4>());
	}
	$JDialog* dialog = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4::fieldInfos[2] = {
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4, dialog)},
	{}
};
$MethodInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4::*)($JDialog*)>(&TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4::load$($String* name, bool initialize) {
	$loadClass(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4::class$ = nullptr;

class TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5 : public $ActionListener {
	$class(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JDialog* dialog) {
		$set(this, dialog, dialog);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TitledBorderLabel::lambda$createAndShowTestDialog$7(dialog, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5>());
	}
	$JDialog* dialog = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5::fieldInfos[2] = {
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5, dialog)},
	{}
};
$MethodInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5::*)($JDialog*)>(&TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5::load$($String* name, bool initialize) {
	$loadClass(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5::class$ = nullptr;

class TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6 : public $Runnable {
	$class(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JButton* passButton, $JButton* failButton, $JDialog* dialog) {
		$set(this, passButton, passButton);
		$set(this, failButton, failButton);
		$set(this, dialog, dialog);
	}
	virtual void run() override {
		TitledBorderLabel::lambda$createAndShowTestDialog$4(passButton, failButton, dialog);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6>());
	}
	$JButton* passButton = nullptr;
	$JButton* failButton = nullptr;
	$JDialog* dialog = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6::fieldInfos[4] = {
	{"passButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6, passButton)},
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6, failButton)},
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6, dialog)},
	{}
};
$MethodInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/JButton;Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6::*)($JButton*,$JButton*,$JDialog*)>(&TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6::load$($String* name, bool initialize) {
	$loadClass(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6::class$ = nullptr;

class TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7 : public $Runnable {
	$class(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JButton* passButton, $JButton* failButton) {
		$set(this, passButton, passButton);
		$set(this, failButton, failButton);
	}
	virtual void run() override {
		TitledBorderLabel::lambda$createAndShowTestDialog$3(passButton, failButton);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7>());
	}
	$JButton* passButton = nullptr;
	$JButton* failButton = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7::fieldInfos[3] = {
	{"passButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7, passButton)},
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7, failButton)},
	{}
};
$MethodInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/JButton;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7::*)($JButton*,$JButton*)>(&TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7::load$($String* name, bool initialize) {
	$loadClass(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7::class$ = nullptr;

$FieldInfo _TitledBorderLabel_FieldInfo_[] = {
	{"testEndedSignal", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TitledBorderLabel, testEndedSignal)},
	{"testTimeout", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TitledBorderLabel, testTimeout)},
	{"testFailureMsg", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TitledBorderLabel, testFailureMsg)},
	{"testPassed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TitledBorderLabel, testPassed)},
	{"testFinished", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TitledBorderLabel, testFinished)},
	{"panel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorderLabel, panel)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorderLabel, frame)},
	{}
};

$MethodInfo _TitledBorderLabel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabel::*)()>(&TitledBorderLabel::init$))},
	{"convertMillisToTimeStr", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&TitledBorderLabel::convertMillisToTimeStr))},
	{"createAndShowTestDialog", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TitledBorderLabel::createAndShowTestDialog))},
	{"doTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TitledBorderLabel::doTest)), "java.lang.Exception"},
	{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&TitledBorderLabel::fail))},
	{"lambda$createAndShowTestDialog$2", "(JLjavax/swing/Timer;Ljavax/swing/JDialog;Ljavax/swing/JLabel;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t,$Timer*,$JDialog*,$JLabel*,$ActionEvent*)>(&TitledBorderLabel::lambda$createAndShowTestDialog$2))},
	{"lambda$createAndShowTestDialog$3", "(Ljavax/swing/JButton;Ljavax/swing/JButton;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JButton*,$JButton*)>(&TitledBorderLabel::lambda$createAndShowTestDialog$3))},
	{"lambda$createAndShowTestDialog$4", "(Ljavax/swing/JButton;Ljavax/swing/JButton;Ljavax/swing/JDialog;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JButton*,$JButton*,$JDialog*)>(&TitledBorderLabel::lambda$createAndShowTestDialog$4))},
	{"lambda$createAndShowTestDialog$5", "(Ljavax/swing/JButton;Ljavax/swing/JButton;Ljavax/swing/JButton;Ljavax/swing/JDialog;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JButton*,$JButton*,$JButton*,$JDialog*,$ActionEvent*)>(&TitledBorderLabel::lambda$createAndShowTestDialog$5))},
	{"lambda$createAndShowTestDialog$6", "(Ljavax/swing/JDialog;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JDialog*,$ActionEvent*)>(&TitledBorderLabel::lambda$createAndShowTestDialog$6))},
	{"lambda$createAndShowTestDialog$7", "(Ljavax/swing/JDialog;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JDialog*,$ActionEvent*)>(&TitledBorderLabel::lambda$createAndShowTestDialog$7))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TitledBorderLabel::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TitledBorderLabel::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TitledBorderLabel::main)), "java.lang.Exception"},
	{"pass", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TitledBorderLabel::pass))},
	{}
};

$InnerClassInfo _TitledBorderLabel_InnerClassesInfo_[] = {
	{"TitledBorderLabel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TitledBorderLabel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TitledBorderLabel",
	"java.lang.Object",
	nullptr,
	_TitledBorderLabel_FieldInfo_,
	_TitledBorderLabel_MethodInfo_,
	nullptr,
	nullptr,
	_TitledBorderLabel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TitledBorderLabel$1"
};

$Object* allocate$TitledBorderLabel($Class* clazz) {
	return $of($alloc(TitledBorderLabel));
}

$CountDownLatch* TitledBorderLabel::testEndedSignal = nullptr;
$volatile($String*) TitledBorderLabel::testFailureMsg = nullptr;
$volatile(bool) TitledBorderLabel::testPassed = false;
$volatile(bool) TitledBorderLabel::testFinished = false;
$JPanel* TitledBorderLabel::panel = nullptr;
$JFrame* TitledBorderLabel::frame = nullptr;

void TitledBorderLabel::init$() {
}

void TitledBorderLabel::main($StringArray* args) {
	$init(TitledBorderLabel);
	$useLocalCurrentObjectStackCache();
	$System::setProperty("sun.java2d.uiScale"_s, "1.5"_s);
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(TitledBorderLabel$$Lambda$lambda$main$0)));
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$init($TimeUnit);
				if (!$nc(TitledBorderLabel::testEndedSignal)->await(TitledBorderLabel::testTimeout, $TimeUnit::MILLISECONDS)) {
					$throwNew($RuntimeException, $($String::format("Test timeout \'%d ms\' elapsed."_s, $$new($ObjectArray, {$($of($Integer::valueOf(TitledBorderLabel::testTimeout)))}))));
				}
				if (!TitledBorderLabel::testPassed) {
					$var($String, failureMsg, TitledBorderLabel::testFailureMsg);
					if ((failureMsg != nullptr) && (!$(failureMsg->trim())->isEmpty())) {
						$throwNew($RuntimeException, failureMsg);
					} else {
						$throwNew($RuntimeException, "Test failed."_s);
					}
				}
			} catch ($InterruptedException& ie) {
				$throwNew($RuntimeException, static_cast<$Throwable*>(ie));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			TitledBorderLabel::testFinished = true;
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TitledBorderLabel$$Lambda$lambda$main$1$1)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TitledBorderLabel::doTest() {
	$init(TitledBorderLabel);
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel("javax.swing.plaf.synth.SynthLookAndFeel"_s);
	$assignStatic(TitledBorderLabel::frame, $new($JFrame, "TitledBorderLabelTester"_s));
	$var($JPanel, panel, $new($JPanel));
	panel->setBorder($($BorderFactory::createTitledBorder("CERTIFICATE CERTIFICATE CERTIFICATE CERTIFICATE"_s)));
	$nc($($nc(TitledBorderLabel::frame)->getContentPane()))->add(static_cast<$Component*>(panel));
	$nc(TitledBorderLabel::frame)->setPreferredSize($$new($Dimension, 500, 150));
	$nc(TitledBorderLabel::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(TitledBorderLabel::frame)->pack();
	$nc(TitledBorderLabel::frame)->setLocationRelativeTo(nullptr);
	$nc(TitledBorderLabel::frame)->setVisible(true);
}

void TitledBorderLabel::pass() {
	$init(TitledBorderLabel);
	TitledBorderLabel::testPassed = true;
	$nc(TitledBorderLabel::testEndedSignal)->countDown();
}

void TitledBorderLabel::fail($String* failureMsg) {
	$init(TitledBorderLabel);
	$assignStatic(TitledBorderLabel::testFailureMsg, failureMsg);
	TitledBorderLabel::testPassed = false;
	$nc(TitledBorderLabel::testEndedSignal)->countDown();
}

$String* TitledBorderLabel::convertMillisToTimeStr(int32_t millis) {
	$init(TitledBorderLabel);
	$useLocalCurrentObjectStackCache();
	if (millis < 0) {
		return "00:00:00"_s;
	}
	int32_t hours = millis / 0x0036EE80;
	int32_t minutes = (millis - hours * 0x0036EE80) / 0x0000EA60;
	int32_t seconds = (millis - hours * 0x0036EE80 - minutes * 0x0000EA60) / 1000;
	return $String::format("%02d:%02d:%02d"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(hours))),
		$($of($Integer::valueOf(minutes))),
		$($of($Integer::valueOf(seconds)))
	}));
}

void TitledBorderLabel::createAndShowTestDialog() {
	$init(TitledBorderLabel);
	$useLocalCurrentObjectStackCache();
	$var($String, description, " 1. Click on \"Start Test\" button.\r\n 2. A TitledBorder with text \"CERTIFICATE CERTIFICATE CERTIFICATE CERTIFICATE\" is shown. \r\n 3. Please verify if the text is shown fully and not truncated \r\n If the titledborder text is displayed fully,\r\n  click on \"PASS\" button, otherwise click on \"FAIL\" button."_s);
	$var($JDialog, dialog, $new($JDialog));
	dialog->setDefaultCloseOperation($WindowConstants::DISPOSE_ON_CLOSE);
	dialog->addWindowListener($$new($TitledBorderLabel$1, dialog));
	$var($JLabel, testTimeoutLabel, $new($JLabel, $($String::format("Test timeout: %s"_s, $$new($ObjectArray, {$($of(convertMillisToTimeStr(TitledBorderLabel::testTimeout)))})))));
	int64_t startTime = $System::currentTimeMillis();
	$var($Timer, timer, $new($Timer, 0, nullptr));
	timer->setDelay(1000);
	timer->addActionListener(static_cast<$ActionListener*>($$new(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2, startTime, timer, dialog, testTimeoutLabel)));
	timer->start();
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, testButton, $new($JButton, "Start Test"_s));
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	testButton->addActionListener(static_cast<$ActionListener*>($$new(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3, testButton, passButton, failButton, dialog)));
	passButton->setEnabled(false);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4, dialog)));
	failButton->setEnabled(false);
	failButton->addActionListener(static_cast<$ActionListener*>($$new(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5, dialog)));
	$var($JPanel, mainPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$var($JPanel, labelPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	labelPanel->add(static_cast<$Component*>(testTimeoutLabel));
	$init($BorderLayout);
	mainPanel->add(static_cast<$Component*>(labelPanel), $of($BorderLayout::NORTH));
	mainPanel->add(static_cast<$Component*>(textArea), $of($BorderLayout::CENTER));
	$var($JPanel, buttonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	buttonPanel->add(static_cast<$Component*>(testButton));
	buttonPanel->add(static_cast<$Component*>(passButton));
	buttonPanel->add(static_cast<$Component*>(failButton));
	mainPanel->add(static_cast<$Component*>(buttonPanel), $of($BorderLayout::SOUTH));
	dialog->add(static_cast<$Component*>(mainPanel));
	dialog->pack();
	dialog->setVisible(true);
}

void TitledBorderLabel::lambda$createAndShowTestDialog$7($JDialog* dialog, $ActionEvent* e) {
	$init(TitledBorderLabel);
	$nc(dialog)->dispose();
	fail("TitledBorder label is cut off"_s);
}

void TitledBorderLabel::lambda$createAndShowTestDialog$6($JDialog* dialog, $ActionEvent* e) {
	$init(TitledBorderLabel);
	$nc(dialog)->dispose();
	pass();
}

void TitledBorderLabel::lambda$createAndShowTestDialog$5($JButton* testButton, $JButton* passButton, $JButton* failButton, $JDialog* dialog, $ActionEvent* e) {
	$init(TitledBorderLabel);
	$useLocalCurrentObjectStackCache();
	$nc(testButton)->setEnabled(false);
	$$new($Thread, static_cast<$Runnable*>($$new(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6, passButton, failButton, dialog)))->start();
}

void TitledBorderLabel::lambda$createAndShowTestDialog$4($JButton* passButton, $JButton* failButton, $JDialog* dialog) {
	$init(TitledBorderLabel);
	try {
		doTest();
		$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7, passButton, failButton)));
	} catch ($Throwable& t) {
		t->printStackTrace();
		$nc(dialog)->dispose();
		fail("Exception occurred in a thread executing the test."_s);
	}
}

void TitledBorderLabel::lambda$createAndShowTestDialog$3($JButton* passButton, $JButton* failButton) {
	$init(TitledBorderLabel);
	$nc(passButton)->setEnabled(true);
	$nc(failButton)->setEnabled(true);
}

void TitledBorderLabel::lambda$createAndShowTestDialog$2(int64_t startTime, $Timer* timer, $JDialog* dialog, $JLabel* testTimeoutLabel, $ActionEvent* e) {
	$init(TitledBorderLabel);
	$useLocalCurrentObjectStackCache();
	int32_t leftTime = TitledBorderLabel::testTimeout - (int32_t)($System::currentTimeMillis() - startTime);
	if ((leftTime < 0) || TitledBorderLabel::testFinished) {
		$nc(timer)->stop();
		$nc(dialog)->dispose();
	}
	$nc(testTimeoutLabel)->setText($($String::format("Test timeout: %s"_s, $$new($ObjectArray, {$($of(convertMillisToTimeStr(leftTime)))}))));
}

void TitledBorderLabel::lambda$main$1() {
	$init(TitledBorderLabel);
	$nc(TitledBorderLabel::frame)->dispose();
}

void TitledBorderLabel::lambda$main$0() {
	$init(TitledBorderLabel);
	createAndShowTestDialog();
}

void clinit$TitledBorderLabel($Class* class$) {
	$assignStatic(TitledBorderLabel::testEndedSignal, $new($CountDownLatch, 1));
}

TitledBorderLabel::TitledBorderLabel() {
}

$Class* TitledBorderLabel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TitledBorderLabel$$Lambda$lambda$main$0::classInfo$.name)) {
			return TitledBorderLabel$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TitledBorderLabel$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return TitledBorderLabel$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2::classInfo$.name)) {
			return TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$2$2::load$(name, initialize);
		}
		if (name->equals(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3::classInfo$.name)) {
			return TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$5$3::load$(name, initialize);
		}
		if (name->equals(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4::classInfo$.name)) {
			return TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$6$4::load$(name, initialize);
		}
		if (name->equals(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5::classInfo$.name)) {
			return TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$7$5::load$(name, initialize);
		}
		if (name->equals(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6::classInfo$.name)) {
			return TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$4$6::load$(name, initialize);
		}
		if (name->equals(TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7::classInfo$.name)) {
			return TitledBorderLabel$$Lambda$lambda$createAndShowTestDialog$3$7::load$(name, initialize);
		}
	}
	$loadClass(TitledBorderLabel, name, initialize, &_TitledBorderLabel_ClassInfo_, clinit$TitledBorderLabel, allocate$TitledBorderLabel);
	return class$;
}

$Class* TitledBorderLabel::class$ = nullptr;