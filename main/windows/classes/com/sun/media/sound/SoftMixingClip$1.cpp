#include <com/sun/media/sound/SoftMixingClip$1.h>

#include <com/sun/media/sound/SoftMixingClip.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SoftMixingClip = ::com::sun::media::sound::SoftMixingClip;
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

$FieldInfo _SoftMixingClip$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMixingClip;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingClip$1, this$0)},
	{}
};

$MethodInfo _SoftMixingClip$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMixingClip;)V", nullptr, 0, $method(static_cast<void(SoftMixingClip$1::*)($SoftMixingClip*)>(&SoftMixingClip$1::init$))},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _SoftMixingClip$1_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftMixingClip",
	nullptr,
	nullptr
};

$InnerClassInfo _SoftMixingClip$1_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingClip$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftMixingClip$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftMixingClip$1",
	"java.io.InputStream",
	nullptr,
	_SoftMixingClip$1_FieldInfo_,
	_SoftMixingClip$1_MethodInfo_,
	nullptr,
	&_SoftMixingClip$1_EnclosingMethodInfo_,
	_SoftMixingClip$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingClip"
};

$Object* allocate$SoftMixingClip$1($Class* clazz) {
	return $of($alloc(SoftMixingClip$1));
}

void SoftMixingClip$1::init$($SoftMixingClip* this$0) {
	$set(this, this$0, this$0);
	$InputStream::init$();
}

int32_t SoftMixingClip$1::read() {
	$var($bytes, b, $new($bytes, 1));
	int32_t ret = read(b);
	if (ret < 0) {
		return ret;
	}
	return (int32_t)(b->get(0) & (uint32_t)255);
}

int32_t SoftMixingClip$1::read($bytes* b, int32_t off, int32_t len) {
	if (this->this$0->_loopcount != 0) {
		int32_t bloopend = this->this$0->_loopend * this->this$0->framesize;
		int32_t bloopstart = this->this$0->_loopstart * this->this$0->framesize;
		int32_t pos = this->this$0->_frameposition * this->this$0->framesize;
		if (pos + len >= bloopend) {
			if (pos < bloopend) {
				int32_t offend = off + len;
				int32_t o = off;
				while (off != offend) {
					if (pos == bloopend) {
						if (this->this$0->_loopcount == 0) {
							break;
						}
						pos = bloopstart;
						if (this->this$0->_loopcount != -1) {
							--this->this$0->_loopcount;
						}
					}
					len = offend - off;
					int32_t left = bloopend - pos;
					if (len > left) {
						len = left;
					}
					$System::arraycopy(this->this$0->data, pos, b, off, len);
					off += len;
				}
				if (this->this$0->_loopcount == 0) {
					len = offend - off;
					int32_t left = bloopend - pos;
					if (len > left) {
						len = left;
					}
					$System::arraycopy(this->this$0->data, pos, b, off, len);
					off += len;
				}
				this->this$0->_frameposition = $div(pos, this->this$0->framesize);
				return o - off;
			}
		}
	}
	int32_t pos = this->this$0->_frameposition * this->this$0->framesize;
	int32_t left = this->this$0->bufferSize - pos;
	if (left == 0) {
		return -1;
	}
	if (len > left) {
		len = left;
	}
	$System::arraycopy(this->this$0->data, pos, b, off, len);
	this->this$0->_frameposition += $div(len, this->this$0->framesize);
	return len;
}

SoftMixingClip$1::SoftMixingClip$1() {
}

$Class* SoftMixingClip$1::load$($String* name, bool initialize) {
	$loadClass(SoftMixingClip$1, name, initialize, &_SoftMixingClip$1_ClassInfo_, allocate$SoftMixingClip$1);
	return class$;
}

$Class* SoftMixingClip$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com