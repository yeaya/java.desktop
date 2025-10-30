#include <SerializationTest.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
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
using $JComponent = ::javax::swing::JComponent;
using $JSpinner = ::javax::swing::JSpinner;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class SerializationTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(SerializationTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		SerializationTest::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SerializationTest$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SerializationTest$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(SerializationTest$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo SerializationTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(SerializationTest$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&SerializationTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SerializationTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"SerializationTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* SerializationTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(SerializationTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SerializationTest$$Lambda$lambda$main$0::class$ = nullptr;

class SerializationTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(SerializationTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SerializationTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SerializationTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SerializationTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializationTest$$Lambda$lambda$main$1$1::*)()>(&SerializationTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SerializationTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"SerializationTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SerializationTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(SerializationTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SerializationTest$$Lambda$lambda$main$1$1::class$ = nullptr;

$MethodInfo _SerializationTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializationTest::*)()>(&SerializationTest::init$))},
	{"createCopy", "(Ljava/io/Serializable;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($Serializable*)>(&SerializationTest::createCopy))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&SerializationTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&SerializationTest::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SerializationTest::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&SerializationTest::setLookAndFeel))},
	{}
};

$ClassInfo _SerializationTest_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"SerializationTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SerializationTest_MethodInfo_
};

$Object* allocate$SerializationTest($Class* clazz) {
	return $of($alloc(SerializationTest));
}

void SerializationTest::init$() {
}

void SerializationTest::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(SerializationTest$$Lambda$lambda$main$0, laf)));
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(SerializationTest$$Lambda$lambda$main$1$1)));
			}
		}
	}
}

$Object* SerializationTest::createCopy($Serializable* objectToCopy) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		$var($ObjectOutputStream, oos, $new($ObjectOutputStream, baos));
		oos->writeObject(objectToCopy);
		$var($InputStream, bais, $new($ByteArrayInputStream, $(baos->toByteArray())));
		$var($ObjectInputStream, ois, $new($ObjectInputStream, bais));
		return $of(ois->readObject());
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void SerializationTest::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void SerializationTest::lambda$main$1() {
	$useLocalCurrentObjectStackCache();
	$var($JSpinner, spinner, $new($JSpinner));
	$var($JSpinner, firstCopy, $cast($JSpinner, createCopy(spinner)));
	$var($JSpinner, secondCopy, $cast($JSpinner, createCopy(firstCopy)));
}

void SerializationTest::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

SerializationTest::SerializationTest() {
}

$Class* SerializationTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SerializationTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return SerializationTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(SerializationTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return SerializationTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(SerializationTest, name, initialize, &_SerializationTest_ClassInfo_, allocate$SerializationTest);
	return class$;
}

$Class* SerializationTest::class$ = nullptr;