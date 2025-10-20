#include <UIClientPropertyKeyTest.h>

#include <UIClientPropertyKeyTest$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $UIClientPropertyKeyTest$1 = ::UIClientPropertyKeyTest$1;
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
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class UIClientPropertyKeyTest$$Lambda$testSetUI : public $Runnable {
	$class(UIClientPropertyKeyTest$$Lambda$testSetUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		UIClientPropertyKeyTest::testSetUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<UIClientPropertyKeyTest$$Lambda$testSetUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo UIClientPropertyKeyTest$$Lambda$testSetUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UIClientPropertyKeyTest$$Lambda$testSetUI::*)()>(&UIClientPropertyKeyTest$$Lambda$testSetUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo UIClientPropertyKeyTest$$Lambda$testSetUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"UIClientPropertyKeyTest$$Lambda$testSetUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* UIClientPropertyKeyTest$$Lambda$testSetUI::load$($String* name, bool initialize) {
	$loadClass(UIClientPropertyKeyTest$$Lambda$testSetUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* UIClientPropertyKeyTest$$Lambda$testSetUI::class$ = nullptr;

class UIClientPropertyKeyTest$$Lambda$testSerialization$1 : public $Runnable {
	$class(UIClientPropertyKeyTest$$Lambda$testSerialization$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		UIClientPropertyKeyTest::testSerialization();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<UIClientPropertyKeyTest$$Lambda$testSerialization$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo UIClientPropertyKeyTest$$Lambda$testSerialization$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UIClientPropertyKeyTest$$Lambda$testSerialization$1::*)()>(&UIClientPropertyKeyTest$$Lambda$testSerialization$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo UIClientPropertyKeyTest$$Lambda$testSerialization$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"UIClientPropertyKeyTest$$Lambda$testSerialization$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* UIClientPropertyKeyTest$$Lambda$testSerialization$1::load$($String* name, bool initialize) {
	$loadClass(UIClientPropertyKeyTest$$Lambda$testSerialization$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* UIClientPropertyKeyTest$$Lambda$testSerialization$1::class$ = nullptr;

$FieldInfo _UIClientPropertyKeyTest_FieldInfo_[] = {
	{"key", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(UIClientPropertyKeyTest, key)},
	{}
};

$MethodInfo _UIClientPropertyKeyTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UIClientPropertyKeyTest::*)()>(&UIClientPropertyKeyTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UIClientPropertyKeyTest::main)), "java.lang.Exception"},
	{"serializeDeserialize", "(Ljavax/swing/JComponent;)Ljavax/swing/JComponent;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JComponent*(*)($JComponent*)>(&UIClientPropertyKeyTest::serializeDeserialize))},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&UIClientPropertyKeyTest::setLookAndFeel))},
	{"testSerialization", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&UIClientPropertyKeyTest::testSerialization))},
	{"testSetUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&UIClientPropertyKeyTest::testSetUI))},
	{"validate", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JComponent*)>(&UIClientPropertyKeyTest::validate))},
	{}
};

$InnerClassInfo _UIClientPropertyKeyTest_InnerClassesInfo_[] = {
	{"UIClientPropertyKeyTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UIClientPropertyKeyTest_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"UIClientPropertyKeyTest",
	"java.lang.Object",
	nullptr,
	_UIClientPropertyKeyTest_FieldInfo_,
	_UIClientPropertyKeyTest_MethodInfo_,
	nullptr,
	nullptr,
	_UIClientPropertyKeyTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"UIClientPropertyKeyTest$1"
};

$Object* allocate$UIClientPropertyKeyTest($Class* clazz) {
	return $of($alloc(UIClientPropertyKeyTest));
}

$Object* UIClientPropertyKeyTest::key = nullptr;

void UIClientPropertyKeyTest::init$() {
}

void UIClientPropertyKeyTest::main($StringArray* args) {
	$init(UIClientPropertyKeyTest);
	$useLocalCurrentObjectStackCache();
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(UIClientPropertyKeyTest$$Lambda$testSetUI)));
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(UIClientPropertyKeyTest$$Lambda$testSerialization$1)));
}

void UIClientPropertyKeyTest::testSerialization() {
	$init(UIClientPropertyKeyTest);
	$var($JComponent, comp, $new($JButton));
	comp->putClientProperty("key1"_s, "value1"_s);
	comp->putClientProperty(UIClientPropertyKeyTest::key, "value2"_s);
	$assign(comp, serializeDeserialize(comp));
	validate(comp);
}

void UIClientPropertyKeyTest::testSetUI() {
	$init(UIClientPropertyKeyTest);
	$useLocalCurrentObjectStackCache();
	$var($JComponent, comp, $new($JButton));
	comp->putClientProperty("key1"_s, "value1"_s);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				comp->putClientProperty(UIClientPropertyKeyTest::key, "value2"_s);
				setLookAndFeel(laf);
				$SwingUtilities::updateComponentTreeUI(comp);
				validate(comp);
			}
		}
	}
}

void UIClientPropertyKeyTest::validate($JComponent* comp) {
	$init(UIClientPropertyKeyTest);
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $nc(comp)->getClientProperty("key1"_s));
	if (!$nc($of(value))->equals("value1"_s)) {
		$throwNew($RuntimeException, $$str({"Incorrect value: "_s, value}));
	}
	$assign(value, comp->getClientProperty(UIClientPropertyKeyTest::key));
	if (value != nullptr) {
		$throwNew($RuntimeException, $$str({"Incorrect value: "_s, value}));
	}
}

void UIClientPropertyKeyTest::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(UIClientPropertyKeyTest);
	$useLocalCurrentObjectStackCache();
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

$JComponent* UIClientPropertyKeyTest::serializeDeserialize($JComponent* comp) {
	$init(UIClientPropertyKeyTest);
	$useLocalCurrentObjectStackCache();
	try {
		$var($ByteArrayOutputStream, byteOut, $new($ByteArrayOutputStream));
		$var($ObjectOutputStream, out, $new($ObjectOutputStream, byteOut));
		out->writeObject(comp);
		out->close();
		return $cast($JComponent, $$new($ObjectInputStream, $$new($ByteArrayInputStream, $(byteOut->toByteArray())))->readObject());
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void clinit$UIClientPropertyKeyTest($Class* class$) {
	$assignStatic(UIClientPropertyKeyTest::key, $new($UIClientPropertyKeyTest$1));
}

UIClientPropertyKeyTest::UIClientPropertyKeyTest() {
}

$Class* UIClientPropertyKeyTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(UIClientPropertyKeyTest$$Lambda$testSetUI::classInfo$.name)) {
			return UIClientPropertyKeyTest$$Lambda$testSetUI::load$(name, initialize);
		}
		if (name->equals(UIClientPropertyKeyTest$$Lambda$testSerialization$1::classInfo$.name)) {
			return UIClientPropertyKeyTest$$Lambda$testSerialization$1::load$(name, initialize);
		}
	}
	$loadClass(UIClientPropertyKeyTest, name, initialize, &_UIClientPropertyKeyTest_ClassInfo_, clinit$UIClientPropertyKeyTest, allocate$UIClientPropertyKeyTest);
	return class$;
}

$Class* UIClientPropertyKeyTest::class$ = nullptr;