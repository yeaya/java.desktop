#include <sun/awt/AWTCharset.h>

#include <java/lang/Error.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/awt/AWTCharset$Decoder.h>
#include <sun/awt/AWTCharset$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $AWTCharset$Decoder = ::sun::awt::AWTCharset$Decoder;
using $AWTCharset$Encoder = ::sun::awt::AWTCharset$Encoder;

namespace sun {
	namespace awt {

$FieldInfo _AWTCharset_FieldInfo_[] = {
	{"awtCs", "Ljava/nio/charset/Charset;", nullptr, $PROTECTED, $field(AWTCharset, awtCs)},
	{"javaCs", "Ljava/nio/charset/Charset;", nullptr, $PROTECTED, $field(AWTCharset, javaCs)},
	{}
};

$MethodInfo _AWTCharset_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(AWTCharset::*)($String*,$Charset*)>(&AWTCharset::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AWTCharset_InnerClassesInfo_[] = {
	{"sun.awt.AWTCharset$Decoder", "sun.awt.AWTCharset", "Decoder", $PUBLIC},
	{"sun.awt.AWTCharset$Encoder", "sun.awt.AWTCharset", "Encoder", $PUBLIC},
	{}
};

$ClassInfo _AWTCharset_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.AWTCharset",
	"java.nio.charset.Charset",
	nullptr,
	_AWTCharset_FieldInfo_,
	_AWTCharset_MethodInfo_,
	nullptr,
	nullptr,
	_AWTCharset_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.AWTCharset$Decoder,sun.awt.AWTCharset$Encoder"
};

$Object* allocate$AWTCharset($Class* clazz) {
	return $of($alloc(AWTCharset));
}

void AWTCharset::init$($String* awtCsName, $Charset* javaCs) {
	$Charset::init$(awtCsName, nullptr);
	$set(this, javaCs, javaCs);
	$set(this, awtCs, this);
}

bool AWTCharset::contains($Charset* cs) {
	if (this->javaCs == nullptr) {
		return false;
	}
	return $nc(this->javaCs)->contains(cs);
}

$CharsetEncoder* AWTCharset::newEncoder() {
	if (this->javaCs == nullptr) {
		$throwNew($Error, "Encoder is not supported by this Charset"_s);
	}
	return $new($AWTCharset$Encoder, this, $($nc(this->javaCs)->newEncoder()));
}

$CharsetDecoder* AWTCharset::newDecoder() {
	if (this->javaCs == nullptr) {
		$throwNew($Error, "Decoder is not supported by this Charset"_s);
	}
	return $new($AWTCharset$Decoder, this, $($nc(this->javaCs)->newDecoder()));
}

AWTCharset::AWTCharset() {
}

$Class* AWTCharset::load$($String* name, bool initialize) {
	$loadClass(AWTCharset, name, initialize, &_AWTCharset_ClassInfo_, allocate$AWTCharset);
	return class$;
}

$Class* AWTCharset::class$ = nullptr;

	} // awt
} // sun