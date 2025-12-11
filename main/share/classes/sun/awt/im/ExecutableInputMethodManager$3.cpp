#include <sun/awt/im/ExecutableInputMethodManager$3.h>

#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/lang/ClassLoader.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Vector.h>
#include <sun/awt/im/ExecutableInputMethodManager.h>
#include <sun/awt/im/InputMethodLocator.h>
#include <jcpp.h>

using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Vector = ::java::util::Vector;
using $ExecutableInputMethodManager = ::sun::awt::im::ExecutableInputMethodManager;
using $InputMethodLocator = ::sun::awt::im::InputMethodLocator;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _ExecutableInputMethodManager$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/im/ExecutableInputMethodManager;", nullptr, $FINAL | $SYNTHETIC, $field(ExecutableInputMethodManager$3, this$0)},
	{}
};

$MethodInfo _ExecutableInputMethodManager$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/im/ExecutableInputMethodManager;)V", nullptr, 0, $method(static_cast<void(ExecutableInputMethodManager$3::*)($ExecutableInputMethodManager*)>(&ExecutableInputMethodManager$3::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ExecutableInputMethodManager$3_EnclosingMethodInfo_ = {
	"sun.awt.im.ExecutableInputMethodManager",
	"initializeInputMethodLocatorList",
	"()V"
};

$InnerClassInfo _ExecutableInputMethodManager$3_InnerClassesInfo_[] = {
	{"sun.awt.im.ExecutableInputMethodManager$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ExecutableInputMethodManager$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.im.ExecutableInputMethodManager$3",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ExecutableInputMethodManager$3_FieldInfo_,
	_ExecutableInputMethodManager$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_ExecutableInputMethodManager$3_EnclosingMethodInfo_,
	_ExecutableInputMethodManager$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.im.ExecutableInputMethodManager"
};

$Object* allocate$ExecutableInputMethodManager$3($Class* clazz) {
	return $of($alloc(ExecutableInputMethodManager$3));
}

void ExecutableInputMethodManager$3::init$($ExecutableInputMethodManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* ExecutableInputMethodManager$3::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$load($InputMethodDescriptor);
		$var($Iterator, i$, $nc($($ServiceLoader::load($InputMethodDescriptor::class$, $($ClassLoader::getSystemClassLoader()))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($InputMethodDescriptor, descriptor, $cast($InputMethodDescriptor, i$->next()));
			{
				$var($ClassLoader, cl, $nc($of(descriptor))->getClass()->getClassLoader());
				$nc(this->this$0->javaInputMethodLocatorList)->add($$new($InputMethodLocator, descriptor, cl, nullptr));
			}
		}
	}
	return $of(nullptr);
}

ExecutableInputMethodManager$3::ExecutableInputMethodManager$3() {
}

$Class* ExecutableInputMethodManager$3::load$($String* name, bool initialize) {
	$loadClass(ExecutableInputMethodManager$3, name, initialize, &_ExecutableInputMethodManager$3_ClassInfo_, allocate$ExecutableInputMethodManager$3);
	return class$;
}

$Class* ExecutableInputMethodManager$3::class$ = nullptr;

		} // im
	} // awt
} // sun