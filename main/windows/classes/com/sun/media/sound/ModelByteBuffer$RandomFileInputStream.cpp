#include <com/sun/media/sound/ModelByteBuffer$RandomFileInputStream.h>

#include <com/sun/media/sound/ModelByteBuffer.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ModelByteBuffer = ::com::sun::media::sound::ModelByteBuffer;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelByteBuffer$RandomFileInputStream_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ModelByteBuffer$RandomFileInputStream, this$0)},
	{"raf", "Ljava/io/RandomAccessFile;", nullptr, $PRIVATE | $FINAL, $field(ModelByteBuffer$RandomFileInputStream, raf)},
	{"left", "J", nullptr, $PRIVATE, $field(ModelByteBuffer$RandomFileInputStream, left)},
	{"mark", "J", nullptr, $PRIVATE, $field(ModelByteBuffer$RandomFileInputStream, mark$)},
	{"markleft", "J", nullptr, $PRIVATE, $field(ModelByteBuffer$RandomFileInputStream, markleft)},
	{}
};

$MethodInfo _ModelByteBuffer$RandomFileInputStream_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/ModelByteBuffer;)V", nullptr, 0, $method(static_cast<void(ModelByteBuffer$RandomFileInputStream::*)($ModelByteBuffer*)>(&ModelByteBuffer$RandomFileInputStream::init$)), "java.io.IOException"},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ModelByteBuffer$RandomFileInputStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.ModelByteBuffer$RandomFileInputStream", "com.sun.media.sound.ModelByteBuffer", "RandomFileInputStream", $PRIVATE},
	{}
};

$ClassInfo _ModelByteBuffer$RandomFileInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.ModelByteBuffer$RandomFileInputStream",
	"java.io.InputStream",
	nullptr,
	_ModelByteBuffer$RandomFileInputStream_FieldInfo_,
	_ModelByteBuffer$RandomFileInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ModelByteBuffer$RandomFileInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.ModelByteBuffer"
};

$Object* allocate$ModelByteBuffer$RandomFileInputStream($Class* clazz) {
	return $of($alloc(ModelByteBuffer$RandomFileInputStream));
}

void ModelByteBuffer$RandomFileInputStream::init$($ModelByteBuffer* this$0) {
	$set(this, this$0, this$0);
	$InputStream::init$();
	this->mark$ = 0;
	this->markleft = 0;
	$set(this, raf, $new($RandomAccessFile, $nc(this$0->root)->file, "r"_s));
	$nc(this->raf)->seek($nc(this$0->root)->fileoffset + this$0->arrayOffset());
	this->left = this$0->capacity();
}

int32_t ModelByteBuffer$RandomFileInputStream::available() {
	if (this->left > $Integer::MAX_VALUE) {
		return $Integer::MAX_VALUE;
	}
	return (int32_t)this->left;
}

void ModelByteBuffer$RandomFileInputStream::mark(int32_t readlimit) {
	$synchronized(this) {
		try {
			this->mark$ = $nc(this->raf)->getFilePointer();
			this->markleft = this->left;
		} catch ($IOException&) {
			$catch();
		}
	}
}

bool ModelByteBuffer$RandomFileInputStream::markSupported() {
	return true;
}

void ModelByteBuffer$RandomFileInputStream::reset() {
	$synchronized(this) {
		$nc(this->raf)->seek(this->mark$);
		this->left = this->markleft;
	}
}

int64_t ModelByteBuffer$RandomFileInputStream::skip(int64_t n) {
	if (n < 0) {
		return 0;
	}
	if (n > this->left) {
		n = this->left;
	}
	int64_t p = $nc(this->raf)->getFilePointer();
	$nc(this->raf)->seek(p + n);
	this->left -= n;
	return n;
}

int32_t ModelByteBuffer$RandomFileInputStream::read($bytes* b, int32_t off, int32_t len) {
	if (len > this->left) {
		len = (int32_t)this->left;
	}
	if (this->left == 0) {
		return -1;
	}
	len = $nc(this->raf)->read(b, off, len);
	if (len == -1) {
		return -1;
	}
	this->left -= len;
	return len;
}

int32_t ModelByteBuffer$RandomFileInputStream::read($bytes* b) {
	int32_t len = $nc(b)->length;
	if (len > this->left) {
		len = (int32_t)this->left;
	}
	if (this->left == 0) {
		return -1;
	}
	len = $nc(this->raf)->read(b, 0, len);
	if (len == -1) {
		return -1;
	}
	this->left -= len;
	return len;
}

int32_t ModelByteBuffer$RandomFileInputStream::read() {
	if (this->left == 0) {
		return -1;
	}
	int32_t b = $nc(this->raf)->read();
	if (b == -1) {
		return -1;
	}
	--this->left;
	return b;
}

void ModelByteBuffer$RandomFileInputStream::close() {
	$nc(this->raf)->close();
}

ModelByteBuffer$RandomFileInputStream::ModelByteBuffer$RandomFileInputStream() {
}

$Class* ModelByteBuffer$RandomFileInputStream::load$($String* name, bool initialize) {
	$loadClass(ModelByteBuffer$RandomFileInputStream, name, initialize, &_ModelByteBuffer$RandomFileInputStream_ClassInfo_, allocate$ModelByteBuffer$RandomFileInputStream);
	return class$;
}

$Class* ModelByteBuffer$RandomFileInputStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com