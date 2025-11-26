#include <DeserializedJFileChooserTest.h>

#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Robot.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $Robot = ::java::awt::Robot;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class DeserializedJFileChooserTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(DeserializedJFileChooserTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		DeserializedJFileChooserTest::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeserializedJFileChooserTest$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DeserializedJFileChooserTest$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(DeserializedJFileChooserTest$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo DeserializedJFileChooserTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(DeserializedJFileChooserTest$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&DeserializedJFileChooserTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeserializedJFileChooserTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"DeserializedJFileChooserTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* DeserializedJFileChooserTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(DeserializedJFileChooserTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DeserializedJFileChooserTest$$Lambda$lambda$main$0::class$ = nullptr;

class DeserializedJFileChooserTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(DeserializedJFileChooserTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DeserializedJFileChooserTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeserializedJFileChooserTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DeserializedJFileChooserTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeserializedJFileChooserTest$$Lambda$lambda$main$1$1::*)()>(&DeserializedJFileChooserTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeserializedJFileChooserTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DeserializedJFileChooserTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DeserializedJFileChooserTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(DeserializedJFileChooserTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DeserializedJFileChooserTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class DeserializedJFileChooserTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(DeserializedJFileChooserTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DeserializedJFileChooserTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeserializedJFileChooserTest$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DeserializedJFileChooserTest$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeserializedJFileChooserTest$$Lambda$lambda$main$2$2::*)()>(&DeserializedJFileChooserTest$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeserializedJFileChooserTest$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"DeserializedJFileChooserTest$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DeserializedJFileChooserTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(DeserializedJFileChooserTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DeserializedJFileChooserTest$$Lambda$lambda$main$2$2::class$ = nullptr;

$FieldInfo _DeserializedJFileChooserTest_FieldInfo_[] = {
	{"defaultSet", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DeserializedJFileChooserTest, defaultSet)},
	{"deserialized", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $STATIC, $staticField(DeserializedJFileChooserTest, deserialized)},
	{}
};

$MethodInfo _DeserializedJFileChooserTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeserializedJFileChooserTest::*)()>(&DeserializedJFileChooserTest::init$))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&DeserializedJFileChooserTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&DeserializedJFileChooserTest::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&DeserializedJFileChooserTest::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DeserializedJFileChooserTest::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&DeserializedJFileChooserTest::setLookAndFeel))},
	{}
};

$ClassInfo _DeserializedJFileChooserTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DeserializedJFileChooserTest",
	"java.lang.Object",
	nullptr,
	_DeserializedJFileChooserTest_FieldInfo_,
	_DeserializedJFileChooserTest_MethodInfo_
};

$Object* allocate$DeserializedJFileChooserTest($Class* clazz) {
	return $of($alloc(DeserializedJFileChooserTest));
}

$volatile($JButton*) DeserializedJFileChooserTest::defaultSet = nullptr;
$JFileChooser* DeserializedJFileChooserTest::deserialized = nullptr;

void DeserializedJFileChooserTest::init$() {
}

void DeserializedJFileChooserTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(DeserializedJFileChooserTest$$Lambda$lambda$main$0, laf)));
				$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(DeserializedJFileChooserTest$$Lambda$lambda$main$1$1)));
				$var($Robot, robot, $new($Robot));
				robot->waitForIdle();
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(DeserializedJFileChooserTest$$Lambda$lambda$main$2$2)));
				robot->waitForIdle();
				$init(DeserializedJFileChooserTest);
				if (DeserializedJFileChooserTest::defaultSet == nullptr) {
					$throwNew($RuntimeException, "default button is null"_s);
				}
			}
		}
	}
}

void DeserializedJFileChooserTest::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc($System::out)->println($$str({"laf = "_s, laf}));
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void DeserializedJFileChooserTest::lambda$main$2() {
	$useLocalCurrentObjectStackCache();
	$init(DeserializedJFileChooserTest);
	$assignStatic(DeserializedJFileChooserTest::defaultSet, $nc($($nc(DeserializedJFileChooserTest::deserialized)->getRootPane()))->getDefaultButton());
	$nc(DeserializedJFileChooserTest::deserialized)->setVisible(false);
	$($Thread::currentThread())->interrupt();
}

void DeserializedJFileChooserTest::lambda$main$1() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($JFileChooser, jfc, $new($JFileChooser));
		$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream));
		$var($ObjectOutputStream, oos, $new($ObjectOutputStream, bos));
		oos->writeObject(jfc);
		oos->close();
		$var($ByteArrayInputStream, bis, $new($ByteArrayInputStream, $(bos->toByteArray())));
		$var($ObjectInputStream, ois, $new($ObjectInputStream, bis));
		$init(DeserializedJFileChooserTest);
		$assignStatic(DeserializedJFileChooserTest::deserialized, $cast($JFileChooser, ois->readObject()));
		$nc(DeserializedJFileChooserTest::deserialized)->showOpenDialog(nullptr);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void DeserializedJFileChooserTest::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

DeserializedJFileChooserTest::DeserializedJFileChooserTest() {
}

$Class* DeserializedJFileChooserTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DeserializedJFileChooserTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return DeserializedJFileChooserTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(DeserializedJFileChooserTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return DeserializedJFileChooserTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(DeserializedJFileChooserTest$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return DeserializedJFileChooserTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
	}
	$loadClass(DeserializedJFileChooserTest, name, initialize, &_DeserializedJFileChooserTest_ClassInfo_, allocate$DeserializedJFileChooserTest);
	return class$;
}

$Class* DeserializedJFileChooserTest::class$ = nullptr;