#include <java/awt/font/JavaAWTFontAccessImpl.h>

#include <java/awt/font/NumericShaper.h>
#include <java/awt/font/TextAttribute.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BIDI_EMBEDDING
#undef NUMERIC_SHAPING
#undef RUN_DIRECTION
#undef RUN_DIRECTION_LTR

using $NumericShaper = ::java::awt::font::NumericShaper;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaAWTFontAccess = ::jdk::internal::access::JavaAWTFontAccess;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _JavaAWTFontAccessImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JavaAWTFontAccessImpl, $assertionsDisabled)},
	{}
};

$MethodInfo _JavaAWTFontAccessImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JavaAWTFontAccessImpl::*)()>(&JavaAWTFontAccessImpl::init$))},
	{"getTextAttributeConstant", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"shape", "(Ljava/lang/Object;[CII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JavaAWTFontAccessImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.font.JavaAWTFontAccessImpl",
	"java.lang.Object",
	"jdk.internal.access.JavaAWTFontAccess",
	_JavaAWTFontAccessImpl_FieldInfo_,
	_JavaAWTFontAccessImpl_MethodInfo_
};

$Object* allocate$JavaAWTFontAccessImpl($Class* clazz) {
	return $of($alloc(JavaAWTFontAccessImpl));
}

bool JavaAWTFontAccessImpl::$assertionsDisabled = false;

void JavaAWTFontAccessImpl::init$() {
}

$Object* JavaAWTFontAccessImpl::getTextAttributeConstant($String* name) {
	{
		$var($String, s1456$, name);
		int32_t tmp1456$ = -1;
		switch ($nc(s1456$)->hashCode()) {
		case 0x659B868B:
			{
				if (s1456$->equals("RUN_DIRECTION"_s)) {
					tmp1456$ = 0;
				}
				break;
			}
		case (int32_t)0x89AFA4AC:
			{
				if (s1456$->equals("NUMERIC_SHAPING"_s)) {
					tmp1456$ = 1;
				}
				break;
			}
		case (int32_t)0xB8570DC4:
			{
				if (s1456$->equals("BIDI_EMBEDDING"_s)) {
					tmp1456$ = 2;
				}
				break;
			}
		case (int32_t)0x883BA016:
			{
				if (s1456$->equals("RUN_DIRECTION_LTR"_s)) {
					tmp1456$ = 3;
				}
				break;
			}
		}
		switch (tmp1456$) {
		case 0:
			{
				$init($TextAttribute);
				return $of($TextAttribute::RUN_DIRECTION);
			}
		case 1:
			{
				$init($TextAttribute);
				return $of($TextAttribute::NUMERIC_SHAPING);
			}
		case 2:
			{
				$init($TextAttribute);
				return $of($TextAttribute::BIDI_EMBEDDING);
			}
		case 3:
			{
				$init($TextAttribute);
				return $of($TextAttribute::RUN_DIRECTION_LTR);
			}
		default:
			{
				$throwNew($AssertionError, $of("Constant name is not recognized"_s));
			}
		}
	}
}

void JavaAWTFontAccessImpl::shape(Object$* shaper, $chars* text, int32_t start, int32_t count) {
	if (!JavaAWTFontAccessImpl::$assertionsDisabled && !$instanceOf($NumericShaper, shaper)) {
		$throwNew($AssertionError);
	}
	$nc(($cast($NumericShaper, shaper)))->shape(text, start, count);
}

void clinit$JavaAWTFontAccessImpl($Class* class$) {
	JavaAWTFontAccessImpl::$assertionsDisabled = !JavaAWTFontAccessImpl::class$->desiredAssertionStatus();
}

JavaAWTFontAccessImpl::JavaAWTFontAccessImpl() {
}

$Class* JavaAWTFontAccessImpl::load$($String* name, bool initialize) {
	$loadClass(JavaAWTFontAccessImpl, name, initialize, &_JavaAWTFontAccessImpl_ClassInfo_, clinit$JavaAWTFontAccessImpl, allocate$JavaAWTFontAccessImpl);
	return class$;
}

$Class* JavaAWTFontAccessImpl::class$ = nullptr;

		} // font
	} // awt
} // java