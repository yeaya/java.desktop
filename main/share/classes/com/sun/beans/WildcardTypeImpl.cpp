#include <com/sun/beans/WildcardTypeImpl.h>

#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/WildcardType.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $WildcardType = ::java::lang::reflect::WildcardType;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace beans {

$FieldInfo _WildcardTypeImpl_FieldInfo_[] = {
	{"upperBounds", "[Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $FINAL, $field(WildcardTypeImpl, upperBounds)},
	{"lowerBounds", "[Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $FINAL, $field(WildcardTypeImpl, lowerBounds)},
	{}
};

$MethodInfo _WildcardTypeImpl_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/reflect/Type;[Ljava/lang/reflect/Type;)V", nullptr, 0, $method(static_cast<void(WildcardTypeImpl::*)($TypeArray*,$TypeArray*)>(&WildcardTypeImpl::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getLowerBounds", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"getUpperBounds", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WildcardTypeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.WildcardTypeImpl",
	"java.lang.Object",
	"java.lang.reflect.WildcardType",
	_WildcardTypeImpl_FieldInfo_,
	_WildcardTypeImpl_MethodInfo_
};

$Object* allocate$WildcardTypeImpl($Class* clazz) {
	return $of($alloc(WildcardTypeImpl));
}

void WildcardTypeImpl::init$($TypeArray* upperBounds, $TypeArray* lowerBounds) {
	$set(this, upperBounds, upperBounds);
	$set(this, lowerBounds, lowerBounds);
}

$TypeArray* WildcardTypeImpl::getUpperBounds() {
	return $cast($TypeArray, $nc(this->upperBounds)->clone());
}

$TypeArray* WildcardTypeImpl::getLowerBounds() {
	return $cast($TypeArray, $nc(this->lowerBounds)->clone());
}

bool WildcardTypeImpl::equals(Object$* object) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($WildcardType, object)) {
		$var($WildcardType, type, $cast($WildcardType, object));
		bool var$0 = $Arrays::equals(this->upperBounds, $($nc(type)->getUpperBounds()));
		return var$0 && $Arrays::equals(this->lowerBounds, $($nc(type)->getLowerBounds()));
	}
	return false;
}

int32_t WildcardTypeImpl::hashCode() {
	int32_t var$0 = $Arrays::hashCode(this->upperBounds);
	return var$0 ^ $Arrays::hashCode(this->lowerBounds);
}

$String* WildcardTypeImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, nullptr);
	$var($TypeArray, bounds, nullptr);
	if ($nc(this->lowerBounds)->length == 0) {
		if ($nc(this->upperBounds)->length == 0 || $equals($Object::class$, $nc(this->upperBounds)->get(0))) {
			return "?"_s;
		}
		$assign(bounds, this->upperBounds);
		$assign(sb, $new($StringBuilder, "? extends "_s));
	} else {
		$assign(bounds, this->lowerBounds);
		$assign(sb, $new($StringBuilder, "? super "_s));
	}
	for (int32_t i = 0; i < $nc(bounds)->length; ++i) {
		if (i > 0) {
			$nc(sb)->append(" & "_s);
		}
		$nc(sb)->append(($instanceOf($Class, bounds->get(i))) ? $($nc(($cast($Class, bounds->get(i))))->getName()) : $($nc($of(bounds->get(i)))->toString()));
	}
	return $nc(sb)->toString();
}

WildcardTypeImpl::WildcardTypeImpl() {
}

$Class* WildcardTypeImpl::load$($String* name, bool initialize) {
	$loadClass(WildcardTypeImpl, name, initialize, &_WildcardTypeImpl_ClassInfo_, allocate$WildcardTypeImpl);
	return class$;
}

$Class* WildcardTypeImpl::class$ = nullptr;

		} // beans
	} // sun
} // com