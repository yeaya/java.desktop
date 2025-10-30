#include <sun/awt/AWTCharset$Decoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <sun/awt/AWTCharset.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $AWTCharset = ::sun::awt::AWTCharset;

namespace sun {
	namespace awt {

$FieldInfo _AWTCharset$Decoder_FieldInfo_[] = {
	{"this$0", "Lsun/awt/AWTCharset;", nullptr, $FINAL | $SYNTHETIC, $field(AWTCharset$Decoder, this$0)},
	{"dec", "Ljava/nio/charset/CharsetDecoder;", nullptr, $PROTECTED, $field(AWTCharset$Decoder, dec)},
	{"nr", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AWTCharset$Decoder, nr)},
	{"fbb", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(AWTCharset$Decoder, fbb)},
	{}
};

$MethodInfo _AWTCharset$Decoder_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/AWTCharset;)V", nullptr, $PROTECTED, $method(static_cast<void(AWTCharset$Decoder::*)($AWTCharset*)>(&AWTCharset$Decoder::init$))},
	{"<init>", "(Lsun/awt/AWTCharset;Ljava/nio/charset/CharsetDecoder;)V", nullptr, $PROTECTED, $method(static_cast<void(AWTCharset$Decoder::*)($AWTCharset*,$CharsetDecoder*)>(&AWTCharset$Decoder::init$))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implFlush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implOnMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)V", nullptr, $PROTECTED},
	{"implOnUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)V", nullptr, $PROTECTED},
	{"implReplaceWith", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AWTCharset$Decoder_InnerClassesInfo_[] = {
	{"sun.awt.AWTCharset$Decoder", "sun.awt.AWTCharset", "Decoder", $PUBLIC},
	{}
};

$ClassInfo _AWTCharset$Decoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.AWTCharset$Decoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_AWTCharset$Decoder_FieldInfo_,
	_AWTCharset$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_AWTCharset$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTCharset"
};

$Object* allocate$AWTCharset$Decoder($Class* clazz) {
	return $of($alloc(AWTCharset$Decoder));
}

void AWTCharset$Decoder::init$($AWTCharset* this$0) {
	AWTCharset$Decoder::init$(this$0, $($nc(this$0->javaCs)->newDecoder()));
}

void AWTCharset$Decoder::init$($AWTCharset* this$0, $CharsetDecoder* dec) {
	$set(this, this$0, this$0);
	$var($Charset, var$0, this$0->awtCs);
	float var$1 = $nc(dec)->averageCharsPerByte();
	$CharsetDecoder::init$(var$0, var$1, dec->maxCharsPerByte());
	$set(this, fbb, $ByteBuffer::allocate(0));
	$set(this, dec, dec);
}

$CoderResult* AWTCharset$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	return $nc(this->dec)->decode(src, dst, true);
}

$CoderResult* AWTCharset$Decoder::implFlush($CharBuffer* out) {
	$nc(this->dec)->decode(this->fbb, out, true);
	return $nc(this->dec)->flush(out);
}

void AWTCharset$Decoder::implReset() {
	$nc(this->dec)->reset();
}

void AWTCharset$Decoder::implReplaceWith($String* newReplacement) {
	if (this->dec != nullptr) {
		$nc(this->dec)->replaceWith(newReplacement);
	}
}

void AWTCharset$Decoder::implOnMalformedInput($CodingErrorAction* newAction) {
	$nc(this->dec)->onMalformedInput(newAction);
}

void AWTCharset$Decoder::implOnUnmappableCharacter($CodingErrorAction* newAction) {
	$nc(this->dec)->onUnmappableCharacter(newAction);
}

AWTCharset$Decoder::AWTCharset$Decoder() {
}

$Class* AWTCharset$Decoder::load$($String* name, bool initialize) {
	$loadClass(AWTCharset$Decoder, name, initialize, &_AWTCharset$Decoder_ClassInfo_, allocate$AWTCharset$Decoder);
	return class$;
}

$Class* AWTCharset$Decoder::class$ = nullptr;

	} // awt
} // sun