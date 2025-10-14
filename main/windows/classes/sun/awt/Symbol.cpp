#include <sun/awt/Symbol.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/awt/Symbol$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $Symbol$Encoder = ::sun::awt::Symbol$Encoder;

namespace sun {
	namespace awt {

$MethodInfo _Symbol_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Symbol::*)()>(&Symbol::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Symbol_InnerClassesInfo_[] = {
	{"sun.awt.Symbol$Encoder", "sun.awt.Symbol", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Symbol_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.Symbol",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_Symbol_MethodInfo_,
	nullptr,
	nullptr,
	_Symbol_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.Symbol$Encoder"
};

$Object* allocate$Symbol($Class* clazz) {
	return $of($alloc(Symbol));
}

void Symbol::init$() {
	$Charset::init$("Symbol"_s, nullptr);
}

$CharsetEncoder* Symbol::newEncoder() {
	return $new($Symbol$Encoder, this);
}

$CharsetDecoder* Symbol::newDecoder() {
	$throwNew($Error, "Decoder is not implemented for Symbol Charset"_s);
	$shouldNotReachHere();
}

bool Symbol::contains($Charset* cs) {
	return $instanceOf(Symbol, cs);
}

Symbol::Symbol() {
}

$Class* Symbol::load$($String* name, bool initialize) {
	$loadClass(Symbol, name, initialize, &_Symbol_ClassInfo_, allocate$Symbol);
	return class$;
}

$Class* Symbol::class$ = nullptr;

	} // awt
} // sun