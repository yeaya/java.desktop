#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$JPEGReaderDisposerRecord.h>

#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JPEGImageReader$JPEGReaderDisposerRecord_FieldInfo_[] = {
	{"pData", "J", nullptr, $PRIVATE, $field(JPEGImageReader$JPEGReaderDisposerRecord, pData)},
	{}
};

$MethodInfo _JPEGImageReader$JPEGReaderDisposerRecord_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(JPEGImageReader$JPEGReaderDisposerRecord::*)(int64_t)>(&JPEGImageReader$JPEGReaderDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _JPEGImageReader$JPEGReaderDisposerRecord_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JPEGImageReader$JPEGReaderDisposerRecord", "com.sun.imageio.plugins.jpeg.JPEGImageReader", "JPEGReaderDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JPEGImageReader$JPEGReaderDisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageReader$JPEGReaderDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_JPEGImageReader$JPEGReaderDisposerRecord_FieldInfo_,
	_JPEGImageReader$JPEGReaderDisposerRecord_MethodInfo_,
	nullptr,
	nullptr,
	_JPEGImageReader$JPEGReaderDisposerRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JPEGImageReader"
};

$Object* allocate$JPEGImageReader$JPEGReaderDisposerRecord($Class* clazz) {
	return $of($alloc(JPEGImageReader$JPEGReaderDisposerRecord));
}

void JPEGImageReader$JPEGReaderDisposerRecord::init$(int64_t pData) {
	this->pData = pData;
}

void JPEGImageReader$JPEGReaderDisposerRecord::dispose() {
	$synchronized(this) {
		if (this->pData != 0) {
			$JPEGImageReader::disposeReader(this->pData);
			this->pData = 0;
		}
	}
}

JPEGImageReader$JPEGReaderDisposerRecord::JPEGImageReader$JPEGReaderDisposerRecord() {
}

$Class* JPEGImageReader$JPEGReaderDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(JPEGImageReader$JPEGReaderDisposerRecord, name, initialize, &_JPEGImageReader$JPEGReaderDisposerRecord_ClassInfo_, allocate$JPEGImageReader$JPEGReaderDisposerRecord);
	return class$;
}

$Class* JPEGImageReader$JPEGReaderDisposerRecord::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com