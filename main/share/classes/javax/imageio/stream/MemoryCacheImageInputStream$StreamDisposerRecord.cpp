#include <javax/imageio/stream/MemoryCacheImageInputStream$StreamDisposerRecord.h>

#include <javax/imageio/stream/MemoryCache.h>
#include <javax/imageio/stream/MemoryCacheImageInputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemoryCache = ::javax::imageio::stream::MemoryCache;

namespace javax {
	namespace imageio {
		namespace stream {

$FieldInfo _MemoryCacheImageInputStream$StreamDisposerRecord_FieldInfo_[] = {
	{"cache", "Ljavax/imageio/stream/MemoryCache;", nullptr, $PRIVATE, $field(MemoryCacheImageInputStream$StreamDisposerRecord, cache)},
	{}
};

$MethodInfo _MemoryCacheImageInputStream$StreamDisposerRecord_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/stream/MemoryCache;)V", nullptr, $PUBLIC, $method(static_cast<void(MemoryCacheImageInputStream$StreamDisposerRecord::*)($MemoryCache*)>(&MemoryCacheImageInputStream$StreamDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _MemoryCacheImageInputStream$StreamDisposerRecord_InnerClassesInfo_[] = {
	{"javax.imageio.stream.MemoryCacheImageInputStream$StreamDisposerRecord", "javax.imageio.stream.MemoryCacheImageInputStream", "StreamDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MemoryCacheImageInputStream$StreamDisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.stream.MemoryCacheImageInputStream$StreamDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_MemoryCacheImageInputStream$StreamDisposerRecord_FieldInfo_,
	_MemoryCacheImageInputStream$StreamDisposerRecord_MethodInfo_,
	nullptr,
	nullptr,
	_MemoryCacheImageInputStream$StreamDisposerRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.stream.MemoryCacheImageInputStream"
};

$Object* allocate$MemoryCacheImageInputStream$StreamDisposerRecord($Class* clazz) {
	return $of($alloc(MemoryCacheImageInputStream$StreamDisposerRecord));
}

void MemoryCacheImageInputStream$StreamDisposerRecord::init$($MemoryCache* cache) {
	$set(this, cache, cache);
}

void MemoryCacheImageInputStream$StreamDisposerRecord::dispose() {
	$synchronized(this) {
		if (this->cache != nullptr) {
			$nc(this->cache)->reset();
			$set(this, cache, nullptr);
		}
	}
}

MemoryCacheImageInputStream$StreamDisposerRecord::MemoryCacheImageInputStream$StreamDisposerRecord() {
}

$Class* MemoryCacheImageInputStream$StreamDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(MemoryCacheImageInputStream$StreamDisposerRecord, name, initialize, &_MemoryCacheImageInputStream$StreamDisposerRecord_ClassInfo_, allocate$MemoryCacheImageInputStream$StreamDisposerRecord);
	return class$;
}

$Class* MemoryCacheImageInputStream$StreamDisposerRecord::class$ = nullptr;

		} // stream
	} // imageio
} // javax