#include <com/sun/media/sound/ModelByteBufferWavetable$Buffer8PlusInputStream.h>

#include <com/sun/media/sound/ModelByteBuffer.h>
#include <com/sun/media/sound/ModelByteBufferWavetable.h>
#include <java/io/InputStream.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $ModelByteBuffer = ::com::sun::media::sound::ModelByteBuffer;
using $ModelByteBufferWavetable = ::com::sun::media::sound::ModelByteBufferWavetable;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelByteBufferWavetable$Buffer8PlusInputStream_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/ModelByteBufferWavetable;", nullptr, $FINAL | $SYNTHETIC, $field(ModelByteBufferWavetable$Buffer8PlusInputStream, this$0)},
	{"bigendian", "Z", nullptr, $PRIVATE | $FINAL, $field(ModelByteBufferWavetable$Buffer8PlusInputStream, bigendian)},
	{"framesize_pc", "I", nullptr, $PRIVATE | $FINAL, $field(ModelByteBufferWavetable$Buffer8PlusInputStream, framesize_pc)},
	{"pos", "I", nullptr, 0, $field(ModelByteBufferWavetable$Buffer8PlusInputStream, pos)},
	{"pos2", "I", nullptr, 0, $field(ModelByteBufferWavetable$Buffer8PlusInputStream, pos2)},
	{"markpos", "I", nullptr, 0, $field(ModelByteBufferWavetable$Buffer8PlusInputStream, markpos)},
	{"markpos2", "I", nullptr, 0, $field(ModelByteBufferWavetable$Buffer8PlusInputStream, markpos2)},
	{}
};

$MethodInfo _ModelByteBufferWavetable$Buffer8PlusInputStream_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/ModelByteBufferWavetable;)V", nullptr, 0, $method(static_cast<void(ModelByteBufferWavetable$Buffer8PlusInputStream::*)($ModelByteBufferWavetable*)>(&ModelByteBufferWavetable$Buffer8PlusInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ModelByteBufferWavetable$Buffer8PlusInputStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.ModelByteBufferWavetable$Buffer8PlusInputStream", "com.sun.media.sound.ModelByteBufferWavetable", "Buffer8PlusInputStream", $PRIVATE},
	{}
};

$ClassInfo _ModelByteBufferWavetable$Buffer8PlusInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.ModelByteBufferWavetable$Buffer8PlusInputStream",
	"java.io.InputStream",
	nullptr,
	_ModelByteBufferWavetable$Buffer8PlusInputStream_FieldInfo_,
	_ModelByteBufferWavetable$Buffer8PlusInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ModelByteBufferWavetable$Buffer8PlusInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.ModelByteBufferWavetable"
};

$Object* allocate$ModelByteBufferWavetable$Buffer8PlusInputStream($Class* clazz) {
	return $of($alloc(ModelByteBufferWavetable$Buffer8PlusInputStream));
}

void ModelByteBufferWavetable$Buffer8PlusInputStream::init$($ModelByteBufferWavetable* this$0) {
	$set(this, this$0, this$0);
	$InputStream::init$();
	this->pos = 0;
	this->pos2 = 0;
	this->markpos = 0;
	this->markpos2 = 0;
	int32_t var$0 = $nc(this$0->format)->getFrameSize();
	this->framesize_pc = $div(var$0, $nc(this$0->format)->getChannels());
	this->bigendian = $nc(this$0->format)->isBigEndian();
}

int32_t ModelByteBufferWavetable$Buffer8PlusInputStream::read($bytes* b, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	int32_t avail = available();
	if (avail <= 0) {
		return -1;
	}
	if (len > avail) {
		len = avail;
	}
	$var($bytes, buff1, $nc(this->this$0->buffer)->array());
	$var($bytes, buff2, $nc(this->this$0->buffer8)->array());
	this->pos += $nc(this->this$0->buffer)->arrayOffset();
	this->pos2 += $nc(this->this$0->buffer8)->arrayOffset();
	if (this->bigendian) {
		for (int32_t i = 0; i < len; i += (this->framesize_pc + 1)) {
			$System::arraycopy(buff1, this->pos, b, i, this->framesize_pc);
			$System::arraycopy(buff2, this->pos2, b, i + this->framesize_pc, 1);
			this->pos += this->framesize_pc;
			this->pos2 += 1;
		}
	} else {
		for (int32_t i = 0; i < len; i += (this->framesize_pc + 1)) {
			$System::arraycopy(buff2, this->pos2, b, i, 1);
			$System::arraycopy(buff1, this->pos, b, i + 1, this->framesize_pc);
			this->pos += this->framesize_pc;
			this->pos2 += 1;
		}
	}
	this->pos -= $nc(this->this$0->buffer)->arrayOffset();
	this->pos2 -= $nc(this->this$0->buffer8)->arrayOffset();
	return len;
}

int64_t ModelByteBufferWavetable$Buffer8PlusInputStream::skip(int64_t n) {
	int32_t avail = available();
	if (avail <= 0) {
		return -1;
	}
	if (n > avail) {
		n = avail;
	}
	this->pos += ($div(n, (this->framesize_pc + 1))) * (this->framesize_pc);
	this->pos2 += $div(n, (this->framesize_pc + 1));
	return $InputStream::skip(n);
}

int32_t ModelByteBufferWavetable$Buffer8PlusInputStream::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t ModelByteBufferWavetable$Buffer8PlusInputStream::read() {
	$var($bytes, b, $new($bytes, 1));
	int32_t ret = read(b, 0, 1);
	if (ret == -1) {
		return -1;
	}
	return (int32_t)(0 & (uint32_t)255);
}

bool ModelByteBufferWavetable$Buffer8PlusInputStream::markSupported() {
	return true;
}

int32_t ModelByteBufferWavetable$Buffer8PlusInputStream::available() {
	int32_t var$0 = (int32_t)$nc(this->this$0->buffer)->capacity();
	return var$0 + (int32_t)$nc(this->this$0->buffer8)->capacity() - this->pos - this->pos2;
}

void ModelByteBufferWavetable$Buffer8PlusInputStream::mark(int32_t readlimit) {
	$synchronized(this) {
		this->markpos = this->pos;
		this->markpos2 = this->pos2;
	}
}

void ModelByteBufferWavetable$Buffer8PlusInputStream::reset() {
	$synchronized(this) {
		this->pos = this->markpos;
		this->pos2 = this->markpos2;
	}
}

ModelByteBufferWavetable$Buffer8PlusInputStream::ModelByteBufferWavetable$Buffer8PlusInputStream() {
}

$Class* ModelByteBufferWavetable$Buffer8PlusInputStream::load$($String* name, bool initialize) {
	$loadClass(ModelByteBufferWavetable$Buffer8PlusInputStream, name, initialize, &_ModelByteBufferWavetable$Buffer8PlusInputStream_ClassInfo_, allocate$ModelByteBufferWavetable$Buffer8PlusInputStream);
	return class$;
}

$Class* ModelByteBufferWavetable$Buffer8PlusInputStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com