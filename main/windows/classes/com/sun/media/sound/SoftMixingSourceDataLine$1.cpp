#include <com/sun/media/sound/SoftMixingSourceDataLine$1.h>

#include <com/sun/media/sound/SoftMixingSourceDataLine.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SoftMixingSourceDataLine = ::com::sun::media::sound::SoftMixingSourceDataLine;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMixingSourceDataLine$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMixingSourceDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingSourceDataLine$1, this$0)},
	{}
};

$MethodInfo _SoftMixingSourceDataLine$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMixingSourceDataLine;)V", nullptr, 0, $method(static_cast<void(SoftMixingSourceDataLine$1::*)($SoftMixingSourceDataLine*)>(&SoftMixingSourceDataLine$1::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _SoftMixingSourceDataLine$1_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftMixingSourceDataLine",
	"open",
	"(Ljavax/sound/sampled/AudioFormat;I)V"
};

$InnerClassInfo _SoftMixingSourceDataLine$1_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingSourceDataLine$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftMixingSourceDataLine$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftMixingSourceDataLine$1",
	"java.io.InputStream",
	nullptr,
	_SoftMixingSourceDataLine$1_FieldInfo_,
	_SoftMixingSourceDataLine$1_MethodInfo_,
	nullptr,
	&_SoftMixingSourceDataLine$1_EnclosingMethodInfo_,
	_SoftMixingSourceDataLine$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingSourceDataLine"
};

$Object* allocate$SoftMixingSourceDataLine$1($Class* clazz) {
	return $of($alloc(SoftMixingSourceDataLine$1));
}

void SoftMixingSourceDataLine$1::init$($SoftMixingSourceDataLine* this$0) {
	$set(this, this$0, this$0);
	$InputStream::init$();
}

int32_t SoftMixingSourceDataLine$1::read() {
	$var($bytes, b, $new($bytes, 1));
	int32_t ret = read(b);
	if (ret < 0) {
		return ret;
	}
	return (int32_t)(b->get(0) & (uint32_t)255);
}

int32_t SoftMixingSourceDataLine$1::available() {
	$synchronized(this->this$0->cycling_buffer) {
		return this->this$0->cycling_avail;
	}
}

int32_t SoftMixingSourceDataLine$1::read($bytes* b, int32_t off, int32_t len) {
	$synchronized(this->this$0->cycling_buffer) {
		if (len > this->this$0->cycling_avail) {
			len = this->this$0->cycling_avail;
		}
		int32_t pos = this->this$0->cycling_read_pos;
		$var($bytes, buff, this->this$0->cycling_buffer);
		int32_t buff_len = $nc(buff)->length;
		for (int32_t i = 0; i < len; ++i) {
			$nc(b)->set(off++, buff->get(pos));
			++pos;
			if (pos == buff_len) {
				pos = 0;
			}
		}
		this->this$0->cycling_read_pos = pos;
		this->this$0->cycling_avail -= len;
		this->this$0->cycling_framepos += $div(len, this->this$0->framesize);
	}
	return len;
}

SoftMixingSourceDataLine$1::SoftMixingSourceDataLine$1() {
}

$Class* SoftMixingSourceDataLine$1::load$($String* name, bool initialize) {
	$loadClass(SoftMixingSourceDataLine$1, name, initialize, &_SoftMixingSourceDataLine$1_ClassInfo_, allocate$SoftMixingSourceDataLine$1);
	return class$;
}

$Class* SoftMixingSourceDataLine$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com