#include <sun/awt/HKSCS.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <jcpp.h>

#undef HKSCS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;

namespace sun {
	namespace awt {

$FieldInfo _HKSCS_FieldInfo_[] = {
	{"cs", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC, $staticField(HKSCS, cs)},
	{}
};

$MethodInfo _HKSCS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HKSCS::*)()>(&HKSCS::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HKSCS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.HKSCS",
	"java.nio.charset.Charset",
	nullptr,
	_HKSCS_FieldInfo_,
	_HKSCS_MethodInfo_
};

$Object* allocate$HKSCS($Class* clazz) {
	return $of($alloc(HKSCS));
}

$Charset* HKSCS::cs = nullptr;

void HKSCS::init$() {
	$Charset::init$("HKSCS"_s, nullptr);
}

bool HKSCS::contains($Charset* cs) {
	return ($instanceOf(HKSCS, cs));
}

$CharsetDecoder* HKSCS::newDecoder() {
	return $nc(HKSCS::cs)->newDecoder();
}

$CharsetEncoder* HKSCS::newEncoder() {
	return $nc(HKSCS::cs)->newEncoder();
}

void clinit$HKSCS($Class* class$) {
	$assignStatic(HKSCS::cs, $Charset::forName("x-MS950-HKSCS-XP"_s));
}

HKSCS::HKSCS() {
}

$Class* HKSCS::load$($String* name, bool initialize) {
	$loadClass(HKSCS, name, initialize, &_HKSCS_ClassInfo_, clinit$HKSCS, allocate$HKSCS);
	return class$;
}

$Class* HKSCS::class$ = nullptr;

	} // awt
} // sun