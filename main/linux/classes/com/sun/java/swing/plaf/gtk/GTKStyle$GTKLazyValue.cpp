#include <com/sun/java/swing/plaf/gtk/GTKStyle$GTKLazyValue.h>

#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Method = ::java::lang::reflect::Method;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKStyle$GTKLazyValue_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKStyle$GTKLazyValue, className)},
	{"methodName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKStyle$GTKLazyValue, methodName)},
	{}
};

$MethodInfo _GTKStyle$GTKLazyValue_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(GTKStyle$GTKLazyValue::*)($String*)>(&GTKStyle$GTKLazyValue::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(GTKStyle$GTKLazyValue::*)($String*,$String*)>(&GTKStyle$GTKLazyValue::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKStyle$GTKLazyValue_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKStyle$GTKLazyValue", "com.sun.java.swing.plaf.gtk.GTKStyle", "GTKLazyValue", $STATIC},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GTKStyle$GTKLazyValue_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKStyle$GTKLazyValue",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_GTKStyle$GTKLazyValue_FieldInfo_,
	_GTKStyle$GTKLazyValue_MethodInfo_,
	nullptr,
	nullptr,
	_GTKStyle$GTKLazyValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKStyle"
};

$Object* allocate$GTKStyle$GTKLazyValue($Class* clazz) {
	return $of($alloc(GTKStyle$GTKLazyValue));
}

void GTKStyle$GTKLazyValue::init$($String* name) {
	GTKStyle$GTKLazyValue::init$(name, nullptr);
}

void GTKStyle$GTKLazyValue::init$($String* name, $String* methodName) {
	$set(this, className, name);
	$set(this, methodName, methodName);
}

$Object* GTKStyle$GTKLazyValue::createValue($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$Class* c = $Class::forName(this->className, true, $($($Thread::currentThread())->getContextClassLoader()));
		if (this->methodName == nullptr) {
			return $of($nc(c)->newInstance());
		}
		$var($Method, m, $nc(c)->getMethod(this->methodName, ($ClassArray*)nullptr));
		return $of($nc(m)->invoke(c, ($ObjectArray*)nullptr));
	} catch ($ReflectiveOperationException& e) {
	}
	return $of(nullptr);
}

GTKStyle$GTKLazyValue::GTKStyle$GTKLazyValue() {
}

$Class* GTKStyle$GTKLazyValue::load$($String* name, bool initialize) {
	$loadClass(GTKStyle$GTKLazyValue, name, initialize, &_GTKStyle$GTKLazyValue_ClassInfo_, allocate$GTKStyle$GTKLazyValue);
	return class$;
}

$Class* GTKStyle$GTKLazyValue::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com