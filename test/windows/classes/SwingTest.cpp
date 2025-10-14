#include <SwingTest.h>

#include <SwingTest$1.h>
#include <java/awt/Component.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/AbstractSet.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/TreeSet.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef HEIGHT
#undef TYPE
#undef WIDTH

using $SwingTest$1 = ::SwingTest$1;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $Component = ::java::awt::Component;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $Void = ::java::lang::Void;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $AbstractSet = ::java::util::AbstractSet;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $TreeSet = ::java::util::TreeSet;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _SwingTest_FieldInfo_[] = {
	{"WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingTest, WIDTH)},
	{"HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingTest, HEIGHT)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(SwingTest, type)},
	{"methods", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/reflect/Method;>;", $PRIVATE | $FINAL, $field(SwingTest, methods)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(SwingTest, frame)},
	{"object", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(SwingTest, object)},
	{"method", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $field(SwingTest, method)},
	{"error", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(SwingTest, error)},
	{}
};

$MethodInfo _SwingTest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(SwingTest::*)($Class*)>(&SwingTest::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"start", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*)>(&SwingTest::start)), "java.lang.Throwable"},
	{"start", "()V", nullptr, $PRIVATE, $method(static_cast<void(SwingTest::*)()>(&SwingTest::start)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _SwingTest_InnerClassesInfo_[] = {
	{"SwingTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingTest_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"SwingTest",
	"java.lang.Object",
	"java.lang.Runnable",
	_SwingTest_FieldInfo_,
	_SwingTest_MethodInfo_,
	nullptr,
	nullptr,
	_SwingTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SwingTest$1"
};

$Object* allocate$SwingTest($Class* clazz) {
	return $of($alloc(SwingTest));
}

void SwingTest::start($Class* type) {
	$init(SwingTest);
	$$new(SwingTest, type)->start();
}

void SwingTest::init$($Class* type) {
	$beforeCallerSensitive();
	$var($Set, methods, static_cast<$Set*>(static_cast<$AbstractSet*>($new($TreeSet, static_cast<$Comparator*>($$new($SwingTest$1, this))))));
	{
		$var($MethodArray, arr$, $nc(type)->getMethods());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				if ($nc($of($nc(method)->getDeclaringClass()))->equals(type)) {
					$init($Void);
					if ($nc($of(method->getReturnType()))->equals($Void::TYPE)) {
						if (0 == $nc($(method->getParameterTypes()))->length) {
							methods->add(method);
						}
					}
				}
			}
		}
	}
	$set(this, type, type);
	$set(this, methods, methods->iterator());
}

void SwingTest::run() {
	$beforeCallerSensitive();
	try {
		if (this->object == nullptr) {
			$init($System);
			$nc($System::out)->println($of(this->type));
			$set(this, frame, $new($JFrame, $($nc(this->type)->getSimpleName())));
			$nc(this->frame)->setSize(SwingTest::WIDTH, SwingTest::HEIGHT);
			$nc(this->frame)->setLocationRelativeTo(nullptr);
			$set(this, object, $nc($($nc(this->type)->getConstructor($$new($ClassArray, {$nc($of(this->frame))->getClass()}))))->newInstance($$new($ObjectArray, {$of(this->frame)})));
			$nc(this->frame)->setVisible(true);
		} else if (this->method != nullptr) {
			$init($System);
			$nc($System::out)->println($of(this->method));
			$nc(this->method)->invoke(this->object, $$new($ObjectArray, 0));
		} else {
			$init($System);
			$nc($System::out)->println((this->error == nullptr) ? "PASSED"_s : "FAILED"_s);
			$nc(this->frame)->dispose();
			$set(this, frame, nullptr);
		}
	} catch ($NoSuchMethodException&) {
		$var($NoSuchMethodException, exception, $catch());
		$set(this, error, exception);
	} catch ($SecurityException&) {
		$var($SecurityException, exception, $catch());
		$set(this, error, exception);
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, exception, $catch());
		$set(this, error, exception);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, exception, $catch());
		$set(this, error, exception);
	} catch ($InstantiationException&) {
		$var($InstantiationException, exception, $catch());
		$set(this, error, exception);
	} catch ($InvocationTargetException&) {
		$var($InvocationTargetException, exception, $catch());
		$set(this, error, exception->getTargetException());
	}
	$init($System);
	$nc($System::out)->flush();
	$set(this, method, $nc(this->methods)->hasNext() && (this->error == nullptr) ? $cast($Method, $nc(this->methods)->next()) : ($Method*)nullptr);
}

void SwingTest::start() {
	do {
		if ((this->method != nullptr) && $Modifier::isStatic($nc(this->method)->getModifiers())) {
			run();
		} else {
			$SwingUtilities::invokeLater(this);
		}
		$var($Robot, robot, $new($Robot));
		robot->waitForIdle();
	} while (this->frame != nullptr);
	if (this->error != nullptr) {
		$throw(this->error);
	}
}

SwingTest::SwingTest() {
}

$Class* SwingTest::load$($String* name, bool initialize) {
	$loadClass(SwingTest, name, initialize, &_SwingTest_ClassInfo_, allocate$SwingTest);
	return class$;
}

$Class* SwingTest::class$ = nullptr;