#include <com/sun/beans/finder/InstanceFinder.h>

#include <com/sun/beans/finder/ClassFinder.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef EMPTY

using $ClassFinder = ::com::sun::beans::finder::ClassFinder;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$FieldInfo _InstanceFinder_FieldInfo_[] = {
	{"EMPTY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InstanceFinder, EMPTY)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<+TT;>;", $PRIVATE | $FINAL, $field(InstanceFinder, type)},
	{"allow", "Z", nullptr, $PRIVATE | $FINAL, $field(InstanceFinder, allow)},
	{"suffix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(InstanceFinder, suffix)},
	{"packages", "[Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(InstanceFinder, packages)},
	{}
};

$MethodInfo _InstanceFinder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;ZLjava/lang/String;[Ljava/lang/String;)V", "(Ljava/lang/Class<+TT;>;ZLjava/lang/String;[Ljava/lang/String;)V", $TRANSIENT, $method(static_cast<void(InstanceFinder::*)($Class*,bool,$String*,$StringArray*)>(&InstanceFinder::init$))},
	{"find", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)TT;", $PUBLIC},
	{"getPackages", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"instantiate", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/lang/String;)TT;", $PROTECTED},
	{"instantiate", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;)TT;", $PROTECTED},
	{"setPackages", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{}
};

$ClassInfo _InstanceFinder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.beans.finder.InstanceFinder",
	"java.lang.Object",
	nullptr,
	_InstanceFinder_FieldInfo_,
	_InstanceFinder_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$InstanceFinder($Class* clazz) {
	return $of($alloc(InstanceFinder));
}

$StringArray* InstanceFinder::EMPTY = nullptr;

void InstanceFinder::init$($Class* type, bool allow, $String* suffix, $StringArray* packages) {
	$set(this, type, type);
	this->allow = allow;
	$set(this, suffix, suffix);
	$set(this, packages, $cast($StringArray, $nc(packages)->clone()));
}

$StringArray* InstanceFinder::getPackages() {
	return $cast($StringArray, $nc(this->packages)->clone());
}

void InstanceFinder::setPackages($StringArray* packages) {
	$set(this, packages, (packages != nullptr) && (packages->length > 0) ? $cast($StringArray, $nc(packages)->clone()) : InstanceFinder::EMPTY);
}

$Object* InstanceFinder::find($Class* type) {
	if (type == nullptr) {
		return $of(nullptr);
	}
	$var($String, name, $str({$($nc(type)->getName()), this->suffix}));
	$var($Object, object, instantiate(type, name));
	if (object != nullptr) {
		return $of(object);
	}
	if (this->allow) {
		$assign(object, instantiate(type, nullptr));
		if (object != nullptr) {
			return $of(object);
		}
	}
	int32_t index = $nc(name)->lastIndexOf((int32_t)u'.') + 1;
	if (index > 0) {
		$assign(name, name->substring(index));
	}
	{
		$var($StringArray, arr$, this->packages);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, prefix, arr$->get(i$));
			{
				$assign(object, instantiate(type, prefix, name));
				if (object != nullptr) {
					return $of(object);
				}
			}
		}
	}
	return $of(nullptr);
}

$Object* InstanceFinder::instantiate($Class* type, $String* name) {
	$beforeCallerSensitive();
	if (type != nullptr) {
		try {
			if (name != nullptr) {
				type = $ClassFinder::findClass(name, $(type->getClassLoader()));
			}
			if ($nc(this->type)->isAssignableFrom(type)) {
				$var($Object, tmp, type->newInstance());
				return $of(tmp);
			}
		} catch ($Exception&) {
			$catch();
		}
	}
	return $of(nullptr);
}

$Object* InstanceFinder::instantiate($Class* type, $String* prefix, $String* name) {
	return $of(instantiate(type, $$str({prefix, $$str(u'.'), name})));
}

void clinit$InstanceFinder($Class* class$) {
	$assignStatic(InstanceFinder::EMPTY, $new($StringArray, 0));
}

InstanceFinder::InstanceFinder() {
}

$Class* InstanceFinder::load$($String* name, bool initialize) {
	$loadClass(InstanceFinder, name, initialize, &_InstanceFinder_ClassInfo_, clinit$InstanceFinder, allocate$InstanceFinder);
	return class$;
}

$Class* InstanceFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com