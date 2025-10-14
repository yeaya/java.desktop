#include <javax/accessibility/AccessibleBundle.h>

#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <javax/accessibility/AccessibleBundle$1.h>
#include <sun/awt/AWTAccessor$AccessibleBundleAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $AccessibleBundle$1 = ::javax::accessibility::AccessibleBundle$1;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AccessibleBundleAccessor = ::sun::awt::AWTAccessor$AccessibleBundleAccessor;

namespace javax {
	namespace accessibility {

$FieldInfo _AccessibleBundle_FieldInfo_[] = {
	{"defaultResourceBundleName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AccessibleBundle, defaultResourceBundleName)},
	{"key", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AccessibleBundle, key)},
	{}
};

$MethodInfo _AccessibleBundle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleBundle::*)()>(&AccessibleBundle::init$))},
	{"toDisplayString", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"toDisplayString", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"toDisplayString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AccessibleBundle_InnerClassesInfo_[] = {
	{"javax.accessibility.AccessibleBundle$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AccessibleBundle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.accessibility.AccessibleBundle",
	"java.lang.Object",
	nullptr,
	_AccessibleBundle_FieldInfo_,
	_AccessibleBundle_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleBundle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.accessibility.AccessibleBundle$1"
};

$Object* allocate$AccessibleBundle($Class* clazz) {
	return $of($alloc(AccessibleBundle));
}

void AccessibleBundle::init$() {
	$set(this, defaultResourceBundleName, "com.sun.accessibility.internal.resources.accessibility"_s);
	$set(this, key, nullptr);
}

$String* AccessibleBundle::toDisplayString($String* name, $Locale* locale) {
	$beforeCallerSensitive();
	try {
		return $nc($($ResourceBundle::getBundle(name, locale)))->getString(this->key);
	} catch ($ClassCastException&) {
		$var($RuntimeException, ignored, $catch());
		return this->key;
	} catch ($MissingResourceException&) {
		$var($RuntimeException, ignored, $catch());
		return this->key;
	}
	$shouldNotReachHere();
}

$String* AccessibleBundle::toDisplayString($Locale* locale) {
	return toDisplayString(this->defaultResourceBundleName, locale);
}

$String* AccessibleBundle::toDisplayString() {
	return toDisplayString($($Locale::getDefault()));
}

$String* AccessibleBundle::toString() {
	return toDisplayString();
}

void clinit$AccessibleBundle($Class* class$) {
	{
		$AWTAccessor::setAccessibleBundleAccessor($$new($AccessibleBundle$1));
	}
}

AccessibleBundle::AccessibleBundle() {
}

$Class* AccessibleBundle::load$($String* name, bool initialize) {
	$loadClass(AccessibleBundle, name, initialize, &_AccessibleBundle_ClassInfo_, clinit$AccessibleBundle, allocate$AccessibleBundle);
	return class$;
}

$Class* AccessibleBundle::class$ = nullptr;

	} // accessibility
} // javax