#include <javax/swing/text/JTextComponent$4.h>

#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/text/JTextComponent$4$1.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$4$1 = ::javax::swing::text::JTextComponent$4$1;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _JTextComponent$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/beans/util/Cache$Kind;Lcom/sun/beans/util/Cache$Kind;)V", nullptr, 0, $method(static_cast<void(JTextComponent$4::*)($Cache$Kind*,$Cache$Kind*)>(&JTextComponent$4::init$))},
	{"create", "(Ljava/lang/Class;)Ljava/lang/Boolean;", "(Ljava/lang/Class<*>;)Ljava/lang/Boolean;", $PUBLIC},
	{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _JTextComponent$4_EnclosingMethodInfo_ = {
	"javax.swing.text.JTextComponent",
	nullptr,
	nullptr
};

$InnerClassInfo _JTextComponent$4_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$4", nullptr, nullptr, 0},
	{"javax.swing.text.JTextComponent$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextComponent$4_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$4",
	"com.sun.beans.util.Cache",
	nullptr,
	nullptr,
	_JTextComponent$4_MethodInfo_,
	"Lcom/sun/beans/util/Cache<Ljava/lang/Class<*>;Ljava/lang/Boolean;>;",
	&_JTextComponent$4_EnclosingMethodInfo_,
	_JTextComponent$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$4($Class* clazz) {
	return $of($alloc(JTextComponent$4));
}

void JTextComponent$4::init$($Cache$Kind* keyKind, $Cache$Kind* valueKind) {
	$Cache::init$(keyKind, valueKind);
}

$Boolean* JTextComponent$4::create($Class* type) {
	$beforeCallerSensitive();
	$load($JTextComponent);
	if ($JTextComponent::class$ == type) {
		$init($Boolean);
		return $Boolean::FALSE;
	}
	if ($nc(($cast($Boolean, $(get($nc(type)->getSuperclass())))))->booleanValue()) {
		$init($Boolean);
		return $Boolean::TRUE;
	}
	return $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JTextComponent$4$1, this, type))));
}

$Object* JTextComponent$4::create(Object$* type) {
	return $of(this->create($cast($Class, type)));
}

JTextComponent$4::JTextComponent$4() {
}

$Class* JTextComponent$4::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$4, name, initialize, &_JTextComponent$4_ClassInfo_, allocate$JTextComponent$4);
	return class$;
}

$Class* JTextComponent$4::class$ = nullptr;

		} // text
	} // swing
} // javax