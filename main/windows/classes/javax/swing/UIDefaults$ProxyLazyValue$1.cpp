#include <javax/swing/UIDefaults$ProxyLazyValue$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults$ProxyLazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ProxyLazyValue = ::javax::swing::UIDefaults$ProxyLazyValue;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$FieldInfo _UIDefaults$ProxyLazyValue$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/UIDefaults$ProxyLazyValue;", nullptr, $FINAL | $SYNTHETIC, $field(UIDefaults$ProxyLazyValue$1, this$0)},
	{"val$table", "Ljavax/swing/UIDefaults;", nullptr, $FINAL | $SYNTHETIC, $field(UIDefaults$ProxyLazyValue$1, val$table)},
	{}
};

$MethodInfo _UIDefaults$ProxyLazyValue$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/UIDefaults$ProxyLazyValue;Ljavax/swing/UIDefaults;)V", "()V", 0, $method(static_cast<void(UIDefaults$ProxyLazyValue$1::*)($UIDefaults$ProxyLazyValue*,$UIDefaults*)>(&UIDefaults$ProxyLazyValue$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _UIDefaults$ProxyLazyValue$1_EnclosingMethodInfo_ = {
	"javax.swing.UIDefaults$ProxyLazyValue",
	"createValue",
	"(Ljavax/swing/UIDefaults;)Ljava/lang/Object;"
};

$InnerClassInfo _UIDefaults$ProxyLazyValue$1_InnerClassesInfo_[] = {
	{"javax.swing.UIDefaults$ProxyLazyValue", "javax.swing.UIDefaults", "ProxyLazyValue", $PUBLIC | $STATIC},
	{"javax.swing.UIDefaults$ProxyLazyValue$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UIDefaults$ProxyLazyValue$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.UIDefaults$ProxyLazyValue$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_UIDefaults$ProxyLazyValue$1_FieldInfo_,
	_UIDefaults$ProxyLazyValue$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_UIDefaults$ProxyLazyValue$1_EnclosingMethodInfo_,
	_UIDefaults$ProxyLazyValue$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.UIDefaults"
};

$Object* allocate$UIDefaults$ProxyLazyValue$1($Class* clazz) {
	return $of($alloc(UIDefaults$ProxyLazyValue$1));
}

void UIDefaults$ProxyLazyValue$1::init$($UIDefaults$ProxyLazyValue* this$0, $UIDefaults* val$table) {
	$set(this, this$0, this$0);
	$set(this, val$table, val$table);
}

$Object* UIDefaults$ProxyLazyValue$1::run() {
	$beforeCallerSensitive();
	try {
		$Class* c = nullptr;
		$var($Object, cl, nullptr);
		if (this->val$table == nullptr || !($instanceOf($ClassLoader, $assign(cl, $nc(this->val$table)->get("ClassLoader"_s))))) {
			$assign(cl, $($Thread::currentThread())->getContextClassLoader());
			if (cl == nullptr) {
				$assign(cl, $ClassLoader::getSystemClassLoader());
			}
		}
		$ReflectUtil::checkPackageAccess(this->this$0->className);
		c = $Class::forName(this->this$0->className, true, $cast($ClassLoader, cl));
		$SwingUtilities2::checkAccess($nc(c)->getModifiers());
		if (this->this$0->methodName != nullptr) {
			$var($ClassArray, types, this->this$0->getClassArray(this->this$0->args));
			$var($Method, m, $nc(c)->getMethod(this->this$0->methodName, types));
			return $of($MethodUtil::invoke(m, c, this->this$0->args));
		} else {
			$var($ClassArray, types, this->this$0->getClassArray(this->this$0->args));
			$var($Constructor, constructor, $nc(c)->getConstructor(types));
			$SwingUtilities2::checkAccess($nc(constructor)->getModifiers());
			return $of($nc(constructor)->newInstance(this->this$0->args));
		}
	} catch ($Exception&) {
		$catch();
	}
	return $of(nullptr);
}

UIDefaults$ProxyLazyValue$1::UIDefaults$ProxyLazyValue$1() {
}

$Class* UIDefaults$ProxyLazyValue$1::load$($String* name, bool initialize) {
	$loadClass(UIDefaults$ProxyLazyValue$1, name, initialize, &_UIDefaults$ProxyLazyValue$1_ClassInfo_, allocate$UIDefaults$ProxyLazyValue$1);
	return class$;
}

$Class* UIDefaults$ProxyLazyValue$1::class$ = nullptr;

	} // swing
} // javax