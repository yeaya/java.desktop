#include <sun/awt/im/InputMethodLocator.h>

#include <java/awt/AWTException.h>
#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/lang/ClassLoader.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $AWTException = ::java::awt::AWTException;
using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Locale = ::java::util::Locale;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _InputMethodLocator_FieldInfo_[] = {
	{"descriptor", "Ljava/awt/im/spi/InputMethodDescriptor;", nullptr, $PRIVATE, $field(InputMethodLocator, descriptor)},
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(InputMethodLocator, loader)},
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(InputMethodLocator, locale)},
	{}
};

$MethodInfo _InputMethodLocator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/im/spi/InputMethodDescriptor;Ljava/lang/ClassLoader;Ljava/util/Locale;)V", nullptr, 0, $method(static_cast<void(InputMethodLocator::*)($InputMethodDescriptor*,$ClassLoader*,$Locale*)>(&InputMethodLocator::init$))},
	{"deriveLocator", "(Ljava/util/Locale;)Lsun/awt/im/InputMethodLocator;", nullptr, 0, $method(static_cast<InputMethodLocator*(InputMethodLocator::*)($Locale*)>(&InputMethodLocator::deriveLocator))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getActionCommandString", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(InputMethodLocator::*)()>(&InputMethodLocator::getActionCommandString))},
	{"getClassLoader", "()Ljava/lang/ClassLoader;", nullptr, 0, $method(static_cast<$ClassLoader*(InputMethodLocator::*)()>(&InputMethodLocator::getClassLoader))},
	{"getDescriptor", "()Ljava/awt/im/spi/InputMethodDescriptor;", nullptr, 0, $method(static_cast<$InputMethodDescriptor*(InputMethodLocator::*)()>(&InputMethodLocator::getDescriptor))},
	{"getLocale", "()Ljava/util/Locale;", nullptr, 0, $method(static_cast<$Locale*(InputMethodLocator::*)()>(&InputMethodLocator::getLocale))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isLocaleAvailable", "(Ljava/util/Locale;)Z", nullptr, 0, $method(static_cast<bool(InputMethodLocator::*)($Locale*)>(&InputMethodLocator::isLocaleAvailable))},
	{"sameInputMethod", "(Lsun/awt/im/InputMethodLocator;)Z", nullptr, 0, $method(static_cast<bool(InputMethodLocator::*)(InputMethodLocator*)>(&InputMethodLocator::sameInputMethod))},
	{}
};

$ClassInfo _InputMethodLocator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.im.InputMethodLocator",
	"java.lang.Object",
	nullptr,
	_InputMethodLocator_FieldInfo_,
	_InputMethodLocator_MethodInfo_
};

$Object* allocate$InputMethodLocator($Class* clazz) {
	return $of($alloc(InputMethodLocator));
}

void InputMethodLocator::init$($InputMethodDescriptor* descriptor, $ClassLoader* loader, $Locale* locale) {
	if (descriptor == nullptr) {
		$throwNew($NullPointerException, "descriptor can\'t be null"_s);
	}
	$set(this, descriptor, descriptor);
	$set(this, loader, loader);
	$set(this, locale, locale);
}

bool InputMethodLocator::equals(Object$* other) {
	if ($equals(other, this)) {
		return true;
	}
	bool var$0 = other == nullptr;
	if (!var$0) {
		var$0 = $of(this)->getClass() != $nc($of(other))->getClass();
	}
	if (var$0) {
		return false;
	}
	$var(InputMethodLocator, otherLocator, $cast(InputMethodLocator, other));
	if (!$of($nc($of(this->descriptor))->getClass())->equals($nc($of($nc(otherLocator)->descriptor))->getClass())) {
		return false;
	}
	if (this->loader == nullptr && $nc(otherLocator)->loader != nullptr || this->loader != nullptr && !$nc($of(this->loader))->equals($nc(otherLocator)->loader)) {
		return false;
	}
	if (this->locale == nullptr && $nc(otherLocator)->locale != nullptr || this->locale != nullptr && !$nc(this->locale)->equals($nc(otherLocator)->locale)) {
		return false;
	}
	return true;
}

int32_t InputMethodLocator::hashCode() {
	int32_t result = $nc($of(this->descriptor))->hashCode();
	if (this->loader != nullptr) {
		result |= $nc($of(this->loader))->hashCode() << 10;
	}
	if (this->locale != nullptr) {
		result |= $nc(this->locale)->hashCode() << 20;
	}
	return result;
}

$InputMethodDescriptor* InputMethodLocator::getDescriptor() {
	return this->descriptor;
}

$ClassLoader* InputMethodLocator::getClassLoader() {
	return this->loader;
}

$Locale* InputMethodLocator::getLocale() {
	return this->locale;
}

bool InputMethodLocator::isLocaleAvailable($Locale* locale) {
	try {
		$var($LocaleArray, locales, $nc(this->descriptor)->getAvailableLocales());
		for (int32_t i = 0; i < $nc(locales)->length; ++i) {
			if ($nc(locales->get(i))->equals(locale)) {
				return true;
			}
		}
	} catch ($AWTException& e) {
	}
	return false;
}

InputMethodLocator* InputMethodLocator::deriveLocator($Locale* forLocale) {
	if (forLocale == this->locale) {
		return this;
	} else {
		return $new(InputMethodLocator, this->descriptor, this->loader, forLocale);
	}
}

bool InputMethodLocator::sameInputMethod(InputMethodLocator* other) {
	if (other == this) {
		return true;
	}
	if (other == nullptr) {
		return false;
	}
	if (!$of($nc($of(this->descriptor))->getClass())->equals($nc($of($nc(other)->descriptor))->getClass())) {
		return false;
	}
	if (this->loader == nullptr && $nc(other)->loader != nullptr || this->loader != nullptr && !$nc($of(this->loader))->equals($nc(other)->loader)) {
		return false;
	}
	return true;
}

$String* InputMethodLocator::getActionCommandString() {
	$useLocalCurrentObjectStackCache();
	$var($String, inputMethodString, $nc($of(this->descriptor))->getClass()->getName());
	if (this->locale == nullptr) {
		return inputMethodString;
	} else {
		return $str({inputMethodString, "\n"_s, $($nc(this->locale)->toString())});
	}
}

InputMethodLocator::InputMethodLocator() {
}

$Class* InputMethodLocator::load$($String* name, bool initialize) {
	$loadClass(InputMethodLocator, name, initialize, &_InputMethodLocator_ClassInfo_, allocate$InputMethodLocator);
	return class$;
}

$Class* InputMethodLocator::class$ = nullptr;

		} // im
	} // awt
} // sun