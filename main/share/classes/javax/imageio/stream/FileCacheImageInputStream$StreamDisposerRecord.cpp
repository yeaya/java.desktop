#include <javax/imageio/stream/FileCacheImageInputStream$StreamDisposerRecord.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <javax/imageio/stream/FileCacheImageInputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace imageio {
		namespace stream {

$FieldInfo _FileCacheImageInputStream$StreamDisposerRecord_FieldInfo_[] = {
	{"cacheFile", "Ljava/io/File;", nullptr, $PRIVATE, $field(FileCacheImageInputStream$StreamDisposerRecord, cacheFile)},
	{"cache", "Ljava/io/RandomAccessFile;", nullptr, $PRIVATE, $field(FileCacheImageInputStream$StreamDisposerRecord, cache)},
	{}
};

$MethodInfo _FileCacheImageInputStream$StreamDisposerRecord_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;Ljava/io/RandomAccessFile;)V", nullptr, $PUBLIC, $method(static_cast<void(FileCacheImageInputStream$StreamDisposerRecord::*)($File*,$RandomAccessFile*)>(&FileCacheImageInputStream$StreamDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _FileCacheImageInputStream$StreamDisposerRecord_InnerClassesInfo_[] = {
	{"javax.imageio.stream.FileCacheImageInputStream$StreamDisposerRecord", "javax.imageio.stream.FileCacheImageInputStream", "StreamDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FileCacheImageInputStream$StreamDisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.stream.FileCacheImageInputStream$StreamDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_FileCacheImageInputStream$StreamDisposerRecord_FieldInfo_,
	_FileCacheImageInputStream$StreamDisposerRecord_MethodInfo_,
	nullptr,
	nullptr,
	_FileCacheImageInputStream$StreamDisposerRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.stream.FileCacheImageInputStream"
};

$Object* allocate$FileCacheImageInputStream$StreamDisposerRecord($Class* clazz) {
	return $of($alloc(FileCacheImageInputStream$StreamDisposerRecord));
}

void FileCacheImageInputStream$StreamDisposerRecord::init$($File* cacheFile, $RandomAccessFile* cache) {
	$set(this, cacheFile, cacheFile);
	$set(this, cache, cache);
}

void FileCacheImageInputStream$StreamDisposerRecord::dispose() {
	$synchronized(this) {
		if (this->cache != nullptr) {
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc(this->cache)->close();
					} catch ($IOException& e) {
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$set(this, cache, nullptr);
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		if (this->cacheFile != nullptr) {
			$nc(this->cacheFile)->delete$();
			$set(this, cacheFile, nullptr);
		}
	}
}

FileCacheImageInputStream$StreamDisposerRecord::FileCacheImageInputStream$StreamDisposerRecord() {
}

$Class* FileCacheImageInputStream$StreamDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(FileCacheImageInputStream$StreamDisposerRecord, name, initialize, &_FileCacheImageInputStream$StreamDisposerRecord_ClassInfo_, allocate$FileCacheImageInputStream$StreamDisposerRecord);
	return class$;
}

$Class* FileCacheImageInputStream$StreamDisposerRecord::class$ = nullptr;

		} // stream
	} // imageio
} // javax