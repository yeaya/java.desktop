#include <com/sun/media/sound/ModelByteBuffer.h>

#include <com/sun/media/sound/ModelByteBuffer$RandomFileInputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ModelByteBuffer$RandomFileInputStream = ::com::sun::media::sound::ModelByteBuffer$RandomFileInputStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $File = ::java::io::File;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelByteBuffer_FieldInfo_[] = {
	{"root", "Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PRIVATE, $field(ModelByteBuffer, root)},
	{"file", "Ljava/io/File;", nullptr, $PRIVATE, $field(ModelByteBuffer, file)},
	{"fileoffset", "J", nullptr, $PRIVATE, $field(ModelByteBuffer, fileoffset)},
	{"buffer", "[B", nullptr, $PRIVATE, $field(ModelByteBuffer, buffer)},
	{"offset", "J", nullptr, $PRIVATE, $field(ModelByteBuffer, offset)},
	{"len", "J", nullptr, $PRIVATE | $FINAL, $field(ModelByteBuffer, len)},
	{}
};

$MethodInfo _ModelByteBuffer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/ModelByteBuffer;JJZ)V", nullptr, $PRIVATE, $method(static_cast<void(ModelByteBuffer::*)(ModelByteBuffer*,int64_t,int64_t,bool)>(&ModelByteBuffer::init$))},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(ModelByteBuffer::*)($bytes*)>(&ModelByteBuffer::init$))},
	{"<init>", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(ModelByteBuffer::*)($bytes*,int32_t,int32_t)>(&ModelByteBuffer::init$))},
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelByteBuffer::*)($File*)>(&ModelByteBuffer::init$))},
	{"<init>", "(Ljava/io/File;JJ)V", nullptr, $PUBLIC, $method(static_cast<void(ModelByteBuffer::*)($File*,int64_t,int64_t)>(&ModelByteBuffer::init$))},
	{"array", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(ModelByteBuffer::*)()>(&ModelByteBuffer::array))},
	{"arrayOffset", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(ModelByteBuffer::*)()>(&ModelByteBuffer::arrayOffset))},
	{"capacity", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(ModelByteBuffer::*)()>(&ModelByteBuffer::capacity))},
	{"getFile", "()Ljava/io/File;", nullptr, $PUBLIC, $method(static_cast<$File*(ModelByteBuffer::*)()>(&ModelByteBuffer::getFile))},
	{"getFilePointer", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(ModelByteBuffer::*)()>(&ModelByteBuffer::getFilePointer))},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $method(static_cast<$InputStream*(ModelByteBuffer::*)()>(&ModelByteBuffer::getInputStream))},
	{"getRoot", "()Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PUBLIC, $method(static_cast<ModelByteBuffer*(ModelByteBuffer::*)()>(&ModelByteBuffer::getRoot))},
	{"load", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModelByteBuffer::*)()>(&ModelByteBuffer::load)), "java.io.IOException"},
	{"loadAll", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<Lcom/sun/media/sound/ModelByteBuffer;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Collection*)>(&ModelByteBuffer::loadAll)), "java.io.IOException"},
	{"subbuffer", "(J)Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PUBLIC, $method(static_cast<ModelByteBuffer*(ModelByteBuffer::*)(int64_t)>(&ModelByteBuffer::subbuffer))},
	{"subbuffer", "(JJ)Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PUBLIC, $method(static_cast<ModelByteBuffer*(ModelByteBuffer::*)(int64_t,int64_t)>(&ModelByteBuffer::subbuffer))},
	{"subbuffer", "(JJZ)Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PUBLIC, $method(static_cast<ModelByteBuffer*(ModelByteBuffer::*)(int64_t,int64_t,bool)>(&ModelByteBuffer::subbuffer))},
	{"unload", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModelByteBuffer::*)()>(&ModelByteBuffer::unload))},
	{"writeTo", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelByteBuffer::*)($OutputStream*)>(&ModelByteBuffer::writeTo)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ModelByteBuffer_InnerClassesInfo_[] = {
	{"com.sun.media.sound.ModelByteBuffer$RandomFileInputStream", "com.sun.media.sound.ModelByteBuffer", "RandomFileInputStream", $PRIVATE},
	{}
};

$ClassInfo _ModelByteBuffer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.ModelByteBuffer",
	"java.lang.Object",
	nullptr,
	_ModelByteBuffer_FieldInfo_,
	_ModelByteBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_ModelByteBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.ModelByteBuffer$RandomFileInputStream"
};

$Object* allocate$ModelByteBuffer($Class* clazz) {
	return $of($alloc(ModelByteBuffer));
}

void ModelByteBuffer::init$(ModelByteBuffer* parent, int64_t beginIndex, int64_t endIndex, bool independent) {
	$set(this, root, this);
	$set(this, root, $nc(parent)->root);
	this->offset = 0;
	int64_t parent_len = parent->len;
	if (beginIndex < 0) {
		beginIndex = 0;
	}
	if (beginIndex > parent_len) {
		beginIndex = parent_len;
	}
	if (endIndex < 0) {
		endIndex = 0;
	}
	if (endIndex > parent_len) {
		endIndex = parent_len;
	}
	if (beginIndex > endIndex) {
		beginIndex = endIndex;
	}
	this->offset = beginIndex;
	this->len = endIndex - beginIndex;
	if (independent) {
		$set(this, buffer, $nc(this->root)->buffer);
		if ($nc(this->root)->file != nullptr) {
			$set(this, file, $nc(this->root)->file);
			this->fileoffset = $nc(this->root)->fileoffset + arrayOffset();
			this->offset = 0;
		} else {
			this->offset = arrayOffset();
		}
		$set(this, root, this);
	}
}

void ModelByteBuffer::init$($bytes* buffer) {
	$set(this, root, this);
	$set(this, buffer, buffer);
	this->offset = 0;
	this->len = $nc(buffer)->length;
}

void ModelByteBuffer::init$($bytes* buffer, int32_t offset, int32_t len) {
	$set(this, root, this);
	$set(this, buffer, buffer);
	this->offset = offset;
	this->len = len;
}

void ModelByteBuffer::init$($File* file) {
	$set(this, root, this);
	$set(this, file, file);
	this->fileoffset = 0;
	this->len = $nc(file)->length();
}

void ModelByteBuffer::init$($File* file, int64_t offset, int64_t len) {
	$set(this, root, this);
	$set(this, file, file);
	this->fileoffset = offset;
	this->len = len;
}

void ModelByteBuffer::writeTo($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->root)->file != nullptr && $nc(this->root)->buffer == nullptr) {
		{
			$var($InputStream, is, getInputStream());
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc(is)->transferTo(out);
					} catch ($Throwable& t$) {
						if (is != nullptr) {
							try {
								is->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (is != nullptr) {
						is->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	} else {
		$var($bytes, var$2, array());
		int32_t var$3 = (int32_t)arrayOffset();
		$nc(out)->write(var$2, var$3, (int32_t)capacity());
	}
}

$InputStream* ModelByteBuffer::getInputStream() {
	if ($nc(this->root)->file != nullptr && $nc(this->root)->buffer == nullptr) {
		try {
			return $new($ModelByteBuffer$RandomFileInputStream, this);
		} catch ($IOException& e) {
			return nullptr;
		}
	}
	$var($bytes, var$0, array());
	int32_t var$1 = (int32_t)arrayOffset();
	return $new($ByteArrayInputStream, var$0, var$1, (int32_t)capacity());
}

ModelByteBuffer* ModelByteBuffer::subbuffer(int64_t beginIndex) {
	return subbuffer(beginIndex, capacity());
}

ModelByteBuffer* ModelByteBuffer::subbuffer(int64_t beginIndex, int64_t endIndex) {
	return subbuffer(beginIndex, endIndex, false);
}

ModelByteBuffer* ModelByteBuffer::subbuffer(int64_t beginIndex, int64_t endIndex, bool independent) {
	return $new(ModelByteBuffer, this, beginIndex, endIndex, independent);
}

$bytes* ModelByteBuffer::array() {
	return $nc(this->root)->buffer;
}

int64_t ModelByteBuffer::arrayOffset() {
	if (this->root != this) {
		return $nc(this->root)->arrayOffset() + this->offset;
	}
	return this->offset;
}

int64_t ModelByteBuffer::capacity() {
	return this->len;
}

ModelByteBuffer* ModelByteBuffer::getRoot() {
	return this->root;
}

$File* ModelByteBuffer::getFile() {
	return this->file;
}

int64_t ModelByteBuffer::getFilePointer() {
	return this->fileoffset;
}

void ModelByteBuffer::loadAll($Collection* col) {
	$useLocalCurrentObjectStackCache();
	$var($File, selfile, nullptr);
	$var($RandomAccessFile, raf, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($Iterator, i$, $nc(col)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var(ModelByteBuffer, mbuff, $cast(ModelByteBuffer, i$->next()));
					{
						$assign(mbuff, $nc(mbuff)->root);
						if (mbuff->file == nullptr) {
							continue;
						}
						if (mbuff->buffer != nullptr) {
							continue;
						}
						if (selfile == nullptr || !$nc(selfile)->equals(mbuff->file)) {
							if (raf != nullptr) {
								raf->close();
								$assign(raf, nullptr);
							}
							$assign(selfile, mbuff->file);
							$assign(raf, $new($RandomAccessFile, mbuff->file, "r"_s));
						}
						$nc(raf)->seek(mbuff->fileoffset);
						$var($bytes, buffer, $new($bytes, (int32_t)mbuff->capacity()));
						int32_t read = 0;
						int32_t avail = buffer->length;
						while (read != avail) {
							if (avail - read > 0x00010000) {
								raf->readFully(buffer, read, 0x00010000);
								read += 0x00010000;
							} else {
								raf->readFully(buffer, read, avail - read);
								read = avail;
							}
						}
						$set(mbuff, buffer, buffer);
						mbuff->offset = 0;
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (raf != nullptr) {
				raf->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ModelByteBuffer::load() {
	$useLocalCurrentObjectStackCache();
	if (this->root != this) {
		$nc(this->root)->load();
		return;
	}
	if (this->buffer != nullptr) {
		return;
	}
	if (this->file == nullptr) {
		$throwNew($IllegalStateException, "No file associated with this ByteBuffer!"_s);
	}
	$var($DataInputStream, is, $new($DataInputStream, $(getInputStream())));
	$set(this, buffer, $new($bytes, (int32_t)capacity()));
	this->offset = 0;
	is->readFully(this->buffer);
	is->close();
}

void ModelByteBuffer::unload() {
	if (this->root != this) {
		$nc(this->root)->unload();
		return;
	}
	if (this->file == nullptr) {
		$throwNew($IllegalStateException, "No file associated with this ByteBuffer!"_s);
	}
	$set($nc(this->root), buffer, nullptr);
}

ModelByteBuffer::ModelByteBuffer() {
}

$Class* ModelByteBuffer::load$($String* name, bool initialize) {
	$loadClass(ModelByteBuffer, name, initialize, &_ModelByteBuffer_ClassInfo_, allocate$ModelByteBuffer);
	return class$;
}

$Class* ModelByteBuffer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com