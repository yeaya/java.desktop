#include <javax/swing/UIDefaults$ProxyLazyValue.h>

#include <java/awt/Color.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/UIDefaults$ProxyLazyValue$1.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <jcpp.h>

#undef TYPE

using $Color = ::java::awt::Color;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIDefaults$ProxyLazyValue$1 = ::javax::swing::UIDefaults$ProxyLazyValue$1;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;

namespace javax {
	namespace swing {

$FieldInfo _UIDefaults$ProxyLazyValue_FieldInfo_[] = {
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE, $field(UIDefaults$ProxyLazyValue, acc)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UIDefaults$ProxyLazyValue, className)},
	{"methodName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UIDefaults$ProxyLazyValue, methodName)},
	{"args", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(UIDefaults$ProxyLazyValue, args)},
	{}
};

$MethodInfo _UIDefaults$ProxyLazyValue_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UIDefaults$ProxyLazyValue::*)($String*)>(&UIDefaults$ProxyLazyValue::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UIDefaults$ProxyLazyValue::*)($String*,$String*)>(&UIDefaults$ProxyLazyValue::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(UIDefaults$ProxyLazyValue::*)($String*,$ObjectArray*)>(&UIDefaults$ProxyLazyValue::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(UIDefaults$ProxyLazyValue::*)($String*,$String*,$ObjectArray*)>(&UIDefaults$ProxyLazyValue::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getClassArray", "([Ljava/lang/Object;)[Ljava/lang/Class;", "([Ljava/lang/Object;)[Ljava/lang/Class<*>;", $PRIVATE, $method(static_cast<$ClassArray*(UIDefaults$ProxyLazyValue::*)($ObjectArray*)>(&UIDefaults$ProxyLazyValue::getClassArray))},
	{"printArgs", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(UIDefaults$ProxyLazyValue::*)($ObjectArray*)>(&UIDefaults$ProxyLazyValue::printArgs))},
	{}
};

$InnerClassInfo _UIDefaults$ProxyLazyValue_InnerClassesInfo_[] = {
	{"javax.swing.UIDefaults$ProxyLazyValue", "javax.swing.UIDefaults", "ProxyLazyValue", $PUBLIC | $STATIC},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.UIDefaults$ProxyLazyValue$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UIDefaults$ProxyLazyValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.UIDefaults$ProxyLazyValue",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_UIDefaults$ProxyLazyValue_FieldInfo_,
	_UIDefaults$ProxyLazyValue_MethodInfo_,
	nullptr,
	nullptr,
	_UIDefaults$ProxyLazyValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.UIDefaults"
};

$Object* allocate$UIDefaults$ProxyLazyValue($Class* clazz) {
	return $of($alloc(UIDefaults$ProxyLazyValue));
}

void UIDefaults$ProxyLazyValue::init$($String* c) {
	UIDefaults$ProxyLazyValue::init$(c, ($String*)nullptr);
}

void UIDefaults$ProxyLazyValue::init$($String* c, $String* m) {
	UIDefaults$ProxyLazyValue::init$(c, m, nullptr);
}

void UIDefaults$ProxyLazyValue::init$($String* c, $ObjectArray* o) {
	UIDefaults$ProxyLazyValue::init$(c, nullptr, o);
}

void UIDefaults$ProxyLazyValue::init$($String* c, $String* m, $ObjectArray* o) {
	$set(this, acc, $AccessController::getContext());
	$set(this, className, c);
	$set(this, methodName, m);
	if (o != nullptr) {
		$set(this, args, $cast($ObjectArray, o->clone()));
	}
}

$Object* UIDefaults$ProxyLazyValue::createValue($UIDefaults* table) {
	$beforeCallerSensitive();
	if (this->acc == nullptr && $System::getSecurityManager() != nullptr) {
		$throwNew($SecurityException, "null AccessControlContext"_s);
	}
	return $of($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($UIDefaults$ProxyLazyValue$1, this, table)), this->acc));
}

$ClassArray* UIDefaults$ProxyLazyValue::getClassArray($ObjectArray* args) {
	$var($ClassArray, types, nullptr);
	if (args != nullptr) {
		$assign(types, $new($ClassArray, args->length));
		for (int32_t i = 0; i < args->length; ++i) {
			if ($instanceOf($Integer, args->get(i))) {
				$init($Integer);
				types->set(i, $Integer::TYPE);
			} else if ($instanceOf($Boolean, args->get(i))) {
				$init($Boolean);
				types->set(i, $Boolean::TYPE);
			} else if ($instanceOf($ColorUIResource, args->get(i))) {
				$load($Color);
				types->set(i, $Color::class$);
			} else {
				types->set(i, $nc($of(args->get(i)))->getClass());
			}
		}
	}
	return types;
}

$String* UIDefaults$ProxyLazyValue::printArgs($ObjectArray* array) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, "{"_s);
	if (array != nullptr) {
		for (int32_t i = 0; i < array->length - 1; ++i) {
			$assign(s, s->concat($$str({array->get(i), ","_s})));
		}
		$assign(s, s->concat($$str({array->get(array->length - 1), "}"_s})));
	} else {
		$assign(s, s->concat("}"_s));
	}
	return s;
}

UIDefaults$ProxyLazyValue::UIDefaults$ProxyLazyValue() {
}

$Class* UIDefaults$ProxyLazyValue::load$($String* name, bool initialize) {
	$loadClass(UIDefaults$ProxyLazyValue, name, initialize, &_UIDefaults$ProxyLazyValue_ClassInfo_, allocate$UIDefaults$ProxyLazyValue);
	return class$;
}

$Class* UIDefaults$ProxyLazyValue::class$ = nullptr;

	} // swing
} // javax