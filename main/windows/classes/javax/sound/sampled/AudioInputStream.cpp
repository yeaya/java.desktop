#include <javax/sound/sampled/AudioInputStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream$TargetDataLineInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/TargetDataLine.h>
#include <jcpp.h>

#undef NOT_SPECIFIED

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream$TargetDataLineInputStream = ::javax::sound::sampled::AudioInputStream$TargetDataLineInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $DataLine = ::javax::sound::sampled::DataLine;
using $TargetDataLine = ::javax::sound::sampled::TargetDataLine;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _AudioInputStream_FieldInfo_[] = {
	{"stream", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(AudioInputStream, stream)},
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PROTECTED, $field(AudioInputStream, format)},
	{"frameLength", "J", nullptr, $PROTECTED, $field(AudioInputStream, frameLength)},
	{"frameSize", "I", nullptr, $PROTECTED, $field(AudioInputStream, frameSize)},
	{"framePos", "J", nullptr, $PROTECTED, $field(AudioInputStream, framePos)},
	{"markpos", "J", nullptr, $PRIVATE, $field(AudioInputStream, markpos)},
	{"pushBackBuffer", "[B", nullptr, $PRIVATE, $field(AudioInputStream, pushBackBuffer)},
	{"pushBackLen", "I", nullptr, $PRIVATE, $field(AudioInputStream, pushBackLen)},
	{"markPushBackBuffer", "[B", nullptr, $PRIVATE, $field(AudioInputStream, markPushBackBuffer)},
	{"markPushBackLen", "I", nullptr, $PRIVATE, $field(AudioInputStream, markPushBackLen)},
	{}
};

$MethodInfo _AudioInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljavax/sound/sampled/AudioFormat;J)V", nullptr, $PUBLIC, $method(static_cast<void(AudioInputStream::*)($InputStream*,$AudioFormat*,int64_t)>(&AudioInputStream::init$))},
	{"<init>", "(Ljavax/sound/sampled/TargetDataLine;)V", nullptr, $PUBLIC, $method(static_cast<void(AudioInputStream::*)($TargetDataLine*)>(&AudioInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{"getFrameLength", "()J", nullptr, $PUBLIC},
	{"mark", "(I)V", nullptr, $PUBLIC},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _AudioInputStream_InnerClassesInfo_[] = {
	{"javax.sound.sampled.AudioInputStream$TargetDataLineInputStream", "javax.sound.sampled.AudioInputStream", "TargetDataLineInputStream", $PRIVATE},
	{}
};

$ClassInfo _AudioInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.AudioInputStream",
	"java.io.InputStream",
	nullptr,
	_AudioInputStream_FieldInfo_,
	_AudioInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_AudioInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.sampled.AudioInputStream$TargetDataLineInputStream"
};

$Object* allocate$AudioInputStream($Class* clazz) {
	return $of($alloc(AudioInputStream));
}

void AudioInputStream::init$($InputStream* stream, $AudioFormat* format, int64_t length) {
	$InputStream::init$();
	$set(this, pushBackBuffer, nullptr);
	this->pushBackLen = 0;
	$set(this, markPushBackBuffer, nullptr);
	this->markPushBackLen = 0;
	$set(this, format, format);
	this->frameLength = length;
	this->frameSize = $nc(format)->getFrameSize();
	if (this->frameSize == $AudioSystem::NOT_SPECIFIED || this->frameSize <= 0) {
		this->frameSize = 1;
	}
	$set(this, stream, stream);
	this->framePos = 0;
	this->markpos = 0;
}

void AudioInputStream::init$($TargetDataLine* line) {
	$InputStream::init$();
	$set(this, pushBackBuffer, nullptr);
	this->pushBackLen = 0;
	$set(this, markPushBackBuffer, nullptr);
	this->markPushBackLen = 0;
	$var($AudioInputStream$TargetDataLineInputStream, tstream, $new($AudioInputStream$TargetDataLineInputStream, this, line));
	$set(this, format, $nc(line)->getFormat());
	this->frameLength = $AudioSystem::NOT_SPECIFIED;
	this->frameSize = $nc(this->format)->getFrameSize();
	if (this->frameSize == $AudioSystem::NOT_SPECIFIED || this->frameSize <= 0) {
		this->frameSize = 1;
	}
	$set(this, stream, tstream);
	this->framePos = 0;
	this->markpos = 0;
}

$AudioFormat* AudioInputStream::getFormat() {
	return this->format;
}

int64_t AudioInputStream::getFrameLength() {
	return this->frameLength;
}

int32_t AudioInputStream::read() {
	if (this->frameSize != 1) {
		$throwNew($IOException, "cannot read a single byte if frame size > 1"_s);
	}
	$var($bytes, data, $new($bytes, 1));
	int32_t temp = read(data);
	if (temp <= 0) {
		return -1;
	}
	return (int32_t)(data->get(0) & (uint32_t)255);
}

int32_t AudioInputStream::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t AudioInputStream::read($bytes* b, int32_t off, int32_t len) {
	int32_t reminder = $mod(len, this->frameSize);
	if (reminder != 0) {
		len -= reminder;
		if (len == 0) {
			return 0;
		}
	}
	if (this->frameLength != $AudioSystem::NOT_SPECIFIED) {
		if (this->framePos >= this->frameLength) {
			return -1;
		} else if (($div(len, this->frameSize)) > (this->frameLength - this->framePos)) {
			len = (int32_t)(this->frameLength - this->framePos) * this->frameSize;
		}
	}
	int32_t bytesRead = 0;
	int32_t thisOff = off;
	if (this->pushBackLen > 0 && len >= this->pushBackLen) {
		$System::arraycopy(this->pushBackBuffer, 0, b, off, this->pushBackLen);
		thisOff += this->pushBackLen;
		len -= this->pushBackLen;
		bytesRead += this->pushBackLen;
		this->pushBackLen = 0;
	}
	int32_t thisBytesRead = $nc(this->stream)->read(b, thisOff, len);
	if (thisBytesRead == -1) {
		return -1;
	}
	if (thisBytesRead > 0) {
		bytesRead += thisBytesRead;
	}
	if (bytesRead > 0) {
		this->pushBackLen = $mod(bytesRead, this->frameSize);
		if (this->pushBackLen > 0) {
			if (this->pushBackBuffer == nullptr) {
				$set(this, pushBackBuffer, $new($bytes, this->frameSize));
			}
			$System::arraycopy(b, off + bytesRead - this->pushBackLen, this->pushBackBuffer, 0, this->pushBackLen);
			bytesRead -= this->pushBackLen;
		}
		this->framePos += $div(bytesRead, this->frameSize);
	}
	return bytesRead;
}

int64_t AudioInputStream::skip(int64_t n) {
	int64_t reminder = $mod(n, this->frameSize);
	if (reminder != 0) {
		n -= reminder;
	}
	if (n <= 0) {
		return 0;
	}
	if (this->frameLength != $AudioSystem::NOT_SPECIFIED) {
		if (($div(n, this->frameSize)) > (this->frameLength - this->framePos)) {
			n = (this->frameLength - this->framePos) * this->frameSize;
		}
	}
	int64_t remaining = n;
	while (remaining > 0) {
		int64_t ret = $Math::min($nc(this->stream)->skip(remaining), remaining);
		if (ret == 0) {
			if ($nc(this->stream)->read() == -1) {
				break;
			}
			ret = 1;
		} else if (ret < 0) {
			break;
		}
		remaining -= ret;
	}
	int64_t temp = n - remaining;
	if ($mod(temp, this->frameSize) != 0) {
		$throwNew($IOException, "Could not skip an integer number of frames."_s);
	}
	this->framePos += $div(temp, this->frameSize);
	return temp;
}

int32_t AudioInputStream::available() {
	int32_t temp = $nc(this->stream)->available();
	if ((this->frameLength != $AudioSystem::NOT_SPECIFIED) && (($div(temp, this->frameSize)) > (this->frameLength - this->framePos))) {
		return (int32_t)(this->frameLength - this->framePos) * this->frameSize;
	} else {
		return temp;
	}
}

void AudioInputStream::close() {
	$nc(this->stream)->close();
}

void AudioInputStream::mark(int32_t readlimit) {
	$nc(this->stream)->mark(readlimit);
	if (markSupported()) {
		this->markpos = this->framePos;
		this->markPushBackLen = this->pushBackLen;
		if (this->markPushBackLen > 0) {
			if (this->markPushBackBuffer == nullptr) {
				$set(this, markPushBackBuffer, $new($bytes, this->frameSize));
			}
			$System::arraycopy(this->pushBackBuffer, 0, this->markPushBackBuffer, 0, this->markPushBackLen);
		}
	}
}

void AudioInputStream::reset() {
	$nc(this->stream)->reset();
	this->framePos = this->markpos;
	this->pushBackLen = this->markPushBackLen;
	if (this->pushBackLen > 0) {
		if (this->pushBackBuffer == nullptr) {
			$set(this, pushBackBuffer, $new($bytes, this->frameSize - 1));
		}
		$System::arraycopy(this->markPushBackBuffer, 0, this->pushBackBuffer, 0, this->pushBackLen);
	}
}

bool AudioInputStream::markSupported() {
	return $nc(this->stream)->markSupported();
}

AudioInputStream::AudioInputStream() {
}

$Class* AudioInputStream::load$($String* name, bool initialize) {
	$loadClass(AudioInputStream, name, initialize, &_AudioInputStream_ClassInfo_, allocate$AudioInputStream);
	return class$;
}

$Class* AudioInputStream::class$ = nullptr;

		} // sampled
	} // sound
} // javax