#include <Test6981576.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Graphics.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Graphics = ::java::awt::Graphics;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;

class Test6981576$$Lambda$lambda$main$0 : public $Thread$UncaughtExceptionHandler {
	$class(Test6981576$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Thread$UncaughtExceptionHandler)
public:
	void init$() {
	}
	virtual void uncaughtException($Thread* t, $Throwable* e) override {
		Test6981576::lambda$main$0(t, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test6981576$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Test6981576$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6981576$$Lambda$lambda$main$0::*)()>(&Test6981576$$Lambda$lambda$main$0::init$))},
	{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test6981576$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test6981576$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Thread$UncaughtExceptionHandler",
	nullptr,
	methodInfos
};
$Class* Test6981576$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(Test6981576$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test6981576$$Lambda$lambda$main$0::class$ = nullptr;

class Test6981576$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(Test6981576$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		Test6981576::lambda$main$1(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test6981576$$Lambda$lambda$main$1$1>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Test6981576$$Lambda$lambda$main$1$1::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(Test6981576$$Lambda$lambda$main$1$1, laf)},
	{}
};
$MethodInfo Test6981576$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(Test6981576$$Lambda$lambda$main$1$1::*)($UIManager$LookAndFeelInfo*)>(&Test6981576$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test6981576$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test6981576$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Test6981576$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(Test6981576$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test6981576$$Lambda$lambda$main$1$1::class$ = nullptr;

class Test6981576$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(Test6981576$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Test6981576::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test6981576$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Test6981576$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6981576$$Lambda$lambda$main$2$2::*)()>(&Test6981576$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test6981576$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test6981576$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Test6981576$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(Test6981576$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test6981576$$Lambda$lambda$main$2$2::class$ = nullptr;

class Test6981576$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(Test6981576$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Test6981576::lambda$main$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test6981576$$Lambda$lambda$main$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Test6981576$$Lambda$lambda$main$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6981576$$Lambda$lambda$main$3$3::*)()>(&Test6981576$$Lambda$lambda$main$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test6981576$$Lambda$lambda$main$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test6981576$$Lambda$lambda$main$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Test6981576$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$loadClass(Test6981576$$Lambda$lambda$main$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test6981576$$Lambda$lambda$main$3$3::class$ = nullptr;

class Test6981576$$Lambda$lambda$main$4$4 : public $Runnable {
	$class(Test6981576$$Lambda$lambda$main$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Test6981576::lambda$main$4();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test6981576$$Lambda$lambda$main$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Test6981576$$Lambda$lambda$main$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6981576$$Lambda$lambda$main$4$4::*)()>(&Test6981576$$Lambda$lambda$main$4$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test6981576$$Lambda$lambda$main$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test6981576$$Lambda$lambda$main$4$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Test6981576$$Lambda$lambda$main$4$4::load$($String* name, bool initialize) {
	$loadClass(Test6981576$$Lambda$lambda$main$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test6981576$$Lambda$lambda$main$4$4::class$ = nullptr;

$FieldInfo _Test6981576_FieldInfo_[] = {
	{"failed", "Ljava/lang/Throwable;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Test6981576, failed)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Test6981576, frame)},
	{}
};

$MethodInfo _Test6981576_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Test6981576::*)()>(&Test6981576::init$))},
	{"lambda$main$0", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Thread*,$Throwable*)>(&Test6981576::lambda$main$0))},
	{"lambda$main$1", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&Test6981576::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Test6981576::lambda$main$2))},
	{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Test6981576::lambda$main$3))},
	{"lambda$main$4", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Test6981576::lambda$main$4))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6981576::main)), "java.lang.Throwable"},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&Test6981576::setLookAndFeel))},
	{}
};

$ClassInfo _Test6981576_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6981576",
	"javax.swing.border.TitledBorder",
	nullptr,
	_Test6981576_FieldInfo_,
	_Test6981576_MethodInfo_
};

$Object* allocate$Test6981576($Class* clazz) {
	return $of($alloc(Test6981576));
}

$volatile($Throwable*) Test6981576::failed = nullptr;
$JFrame* Test6981576::frame = nullptr;

void Test6981576::main($StringArray* args) {
	$init(Test6981576);
	$($Thread::currentThread())->setUncaughtExceptionHandler(static_cast<$Thread$UncaughtExceptionHandler*>($$new(Test6981576$$Lambda$lambda$main$0)));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(Test6981576$$Lambda$lambda$main$1$1, laf)));
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(Test6981576$$Lambda$lambda$main$2$2)));
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(Test6981576$$Lambda$lambda$main$3$3)));
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(Test6981576$$Lambda$lambda$main$4$4)));
			}
		}
	}
	if (Test6981576::failed != nullptr) {
		$throw(Test6981576::failed);
	}
}

void Test6981576::init$() {
	$TitledBorder::init$(""_s);
}

void Test6981576::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc($(getBorder()))->paintBorder(c, g, x, y, width, height);
}

void Test6981576::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(Test6981576);
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$init($System);
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($UnsupportedLookAndFeelException&) {
		$var($UnsupportedLookAndFeelException, ignored, $catch());
		$init($System);
		$nc($System::out)->println($$str({"Unsupported LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void Test6981576::lambda$main$4() {
	$init(Test6981576);
	$nc(Test6981576::frame)->dispose();
}

void Test6981576::lambda$main$3() {
	$init(Test6981576);
	$nc(Test6981576::frame)->repaint();
}

void Test6981576::lambda$main$2() {
	$init(Test6981576);
	$var($JPanel, panel, $new($JPanel));
	panel->setBorder($$new(Test6981576));
	$assignStatic(Test6981576::frame, $new($JFrame, "Test6981576"_s));
	$nc(Test6981576::frame)->add(static_cast<$Component*>(panel));
	$nc(Test6981576::frame)->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	$nc(Test6981576::frame)->setSize(300, 300);
	$nc(Test6981576::frame)->setLocationRelativeTo(nullptr);
	$nc(Test6981576::frame)->setVisible(true);
}

void Test6981576::lambda$main$1($UIManager$LookAndFeelInfo* laf) {
	$init(Test6981576);
	setLookAndFeel(laf);
}

void Test6981576::lambda$main$0($Thread* t, $Throwable* e) {
	$init(Test6981576);
	$nc(e)->printStackTrace();
	$assignStatic(Test6981576::failed, e);
}

Test6981576::Test6981576() {
}

$Class* Test6981576::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Test6981576$$Lambda$lambda$main$0::classInfo$.name)) {
			return Test6981576$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(Test6981576$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return Test6981576$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(Test6981576$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return Test6981576$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals(Test6981576$$Lambda$lambda$main$3$3::classInfo$.name)) {
			return Test6981576$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals(Test6981576$$Lambda$lambda$main$4$4::classInfo$.name)) {
			return Test6981576$$Lambda$lambda$main$4$4::load$(name, initialize);
		}
	}
	$loadClass(Test6981576, name, initialize, &_Test6981576_ClassInfo_, allocate$Test6981576);
	return class$;
}

$Class* Test6981576::class$ = nullptr;