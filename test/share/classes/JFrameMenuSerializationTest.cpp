#include <JFrameMenuSerializationTest.h>

#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/NotSerializableException.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamException.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $NotSerializableException = ::java::io::NotSerializableException;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectStreamException = ::java::io::ObjectStreamException;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JFrame = ::javax::swing::JFrame;
using $JMenuBar = ::javax::swing::JMenuBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class JFrameMenuSerializationTest$$Lambda$lambda$main$1 : public $Runnable {
	$class(JFrameMenuSerializationTest$$Lambda$lambda$main$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JFrameMenuSerializationTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JFrameMenuSerializationTest$$Lambda$lambda$main$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JFrameMenuSerializationTest$$Lambda$lambda$main$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JFrameMenuSerializationTest$$Lambda$lambda$main$1::*)()>(&JFrameMenuSerializationTest$$Lambda$lambda$main$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JFrameMenuSerializationTest$$Lambda$lambda$main$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JFrameMenuSerializationTest$$Lambda$lambda$main$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JFrameMenuSerializationTest$$Lambda$lambda$main$1::load$($String* name, bool initialize) {
	$loadClass(JFrameMenuSerializationTest$$Lambda$lambda$main$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JFrameMenuSerializationTest$$Lambda$lambda$main$1::class$ = nullptr;

class JFrameMenuSerializationTest$$Lambda$lambda$main$2$1 : public $Runnable {
	$class(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($ObjectOutputStream* oos) {
		$set(this, oos, oos);
	}
	virtual void run() override {
		JFrameMenuSerializationTest::lambda$main$2(oos);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JFrameMenuSerializationTest$$Lambda$lambda$main$2$1>());
	}
	$ObjectOutputStream* oos = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JFrameMenuSerializationTest$$Lambda$lambda$main$2$1::fieldInfos[2] = {
	{"oos", "Ljava/io/ObjectOutputStream;", nullptr, $PUBLIC, $field(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1, oos)},
	{}
};
$MethodInfo JFrameMenuSerializationTest$$Lambda$lambda$main$2$1::methodInfos[3] = {
	{"<init>", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1::*)($ObjectOutputStream*)>(&JFrameMenuSerializationTest$$Lambda$lambda$main$2$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JFrameMenuSerializationTest$$Lambda$lambda$main$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JFrameMenuSerializationTest$$Lambda$lambda$main$2$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JFrameMenuSerializationTest$$Lambda$lambda$main$2$1::load$($String* name, bool initialize) {
	$loadClass(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JFrameMenuSerializationTest$$Lambda$lambda$main$2$1::class$ = nullptr;

class JFrameMenuSerializationTest$$Lambda$dispose$2 : public $Runnable {
	$class(JFrameMenuSerializationTest$$Lambda$dispose$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JFrameMenuSerializationTest$$Lambda$dispose$2>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JFrameMenuSerializationTest$$Lambda$dispose$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JFrameMenuSerializationTest$$Lambda$dispose$2, inst$)},
	{}
};
$MethodInfo JFrameMenuSerializationTest$$Lambda$dispose$2::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(JFrameMenuSerializationTest$$Lambda$dispose$2::*)($Window*)>(&JFrameMenuSerializationTest$$Lambda$dispose$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JFrameMenuSerializationTest$$Lambda$dispose$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"JFrameMenuSerializationTest$$Lambda$dispose$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JFrameMenuSerializationTest$$Lambda$dispose$2::load$($String* name, bool initialize) {
	$loadClass(JFrameMenuSerializationTest$$Lambda$dispose$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JFrameMenuSerializationTest$$Lambda$dispose$2::class$ = nullptr;

class JFrameMenuSerializationTest$$Lambda$lambda$main$0$3 : public $PropertyChangeListener {
	$class(JFrameMenuSerializationTest$$Lambda$lambda$main$0$3, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$() {
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		JFrameMenuSerializationTest::lambda$main$0(evt);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JFrameMenuSerializationTest$$Lambda$lambda$main$0$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JFrameMenuSerializationTest$$Lambda$lambda$main$0$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JFrameMenuSerializationTest$$Lambda$lambda$main$0$3::*)()>(&JFrameMenuSerializationTest$$Lambda$lambda$main$0$3::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JFrameMenuSerializationTest$$Lambda$lambda$main$0$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"JFrameMenuSerializationTest$$Lambda$lambda$main$0$3",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	methodInfos
};
$Class* JFrameMenuSerializationTest$$Lambda$lambda$main$0$3::load$($String* name, bool initialize) {
	$loadClass(JFrameMenuSerializationTest$$Lambda$lambda$main$0$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JFrameMenuSerializationTest$$Lambda$lambda$main$0$3::class$ = nullptr;

$FieldInfo _JFrameMenuSerializationTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JFrameMenuSerializationTest, frame)},
	{}
};

$MethodInfo _JFrameMenuSerializationTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JFrameMenuSerializationTest::*)()>(&JFrameMenuSerializationTest::init$))},
	{"lambda$main$0", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($PropertyChangeEvent*)>(&JFrameMenuSerializationTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JFrameMenuSerializationTest::lambda$main$1))},
	{"lambda$main$2", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ObjectOutputStream*)>(&JFrameMenuSerializationTest::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JFrameMenuSerializationTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _JFrameMenuSerializationTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JFrameMenuSerializationTest",
	"java.lang.Object",
	nullptr,
	_JFrameMenuSerializationTest_FieldInfo_,
	_JFrameMenuSerializationTest_MethodInfo_
};

$Object* allocate$JFrameMenuSerializationTest($Class* clazz) {
	return $of($alloc(JFrameMenuSerializationTest));
}

$JFrame* JFrameMenuSerializationTest::frame = nullptr;

void JFrameMenuSerializationTest::init$() {
}

void JFrameMenuSerializationTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$System::setProperty("apple.laf.useScreenMenuBar"_s, "true"_s);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JFrameMenuSerializationTest$$Lambda$lambda$main$1)));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(200);
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream, 10000));
	$var($ObjectOutputStream, oos, $new($ObjectOutputStream, baos));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1, oos)));
	$init(JFrameMenuSerializationTest);
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(JFrameMenuSerializationTest$$Lambda$dispose$2, static_cast<$JFrame*>($nc(JFrameMenuSerializationTest::frame)))));
}

void JFrameMenuSerializationTest::lambda$main$2($ObjectOutputStream* oos) {
	try {
		$init(JFrameMenuSerializationTest);
		$nc(oos)->writeObject(JFrameMenuSerializationTest::frame);
	} catch ($NotSerializableException& e) {
		$throwNew($RuntimeException, "Test failed"_s, e);
	} catch ($IOException& e) {
		e->printStackTrace();
	}
}

void JFrameMenuSerializationTest::lambda$main$1() {
	$useLocalCurrentObjectStackCache();
	$init(JFrameMenuSerializationTest);
	$assignStatic(JFrameMenuSerializationTest::frame, $new($JFrame));
	$nc(JFrameMenuSerializationTest::frame)->setJMenuBar($$new($JMenuBar));
	$nc(JFrameMenuSerializationTest::frame)->setVisible(true);
	$nc($($nc(JFrameMenuSerializationTest::frame)->getAccessibleContext()))->addPropertyChangeListener(static_cast<$PropertyChangeListener*>($$new(JFrameMenuSerializationTest$$Lambda$lambda$main$0$3)));
}

void JFrameMenuSerializationTest::lambda$main$0($PropertyChangeEvent* evt) {
}

JFrameMenuSerializationTest::JFrameMenuSerializationTest() {
}

$Class* JFrameMenuSerializationTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JFrameMenuSerializationTest$$Lambda$lambda$main$1::classInfo$.name)) {
			return JFrameMenuSerializationTest$$Lambda$lambda$main$1::load$(name, initialize);
		}
		if (name->equals(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1::classInfo$.name)) {
			return JFrameMenuSerializationTest$$Lambda$lambda$main$2$1::load$(name, initialize);
		}
		if (name->equals(JFrameMenuSerializationTest$$Lambda$dispose$2::classInfo$.name)) {
			return JFrameMenuSerializationTest$$Lambda$dispose$2::load$(name, initialize);
		}
		if (name->equals(JFrameMenuSerializationTest$$Lambda$lambda$main$0$3::classInfo$.name)) {
			return JFrameMenuSerializationTest$$Lambda$lambda$main$0$3::load$(name, initialize);
		}
	}
	$loadClass(JFrameMenuSerializationTest, name, initialize, &_JFrameMenuSerializationTest_ClassInfo_, allocate$JFrameMenuSerializationTest);
	return class$;
}

$Class* JFrameMenuSerializationTest::class$ = nullptr;