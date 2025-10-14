#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$JPEGWriterDisposerRecord.h>

#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $JPEGImageWriter = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter;
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

$FieldInfo _JPEGImageWriter$JPEGWriterDisposerRecord_FieldInfo_[] = {
	{"pData", "J", nullptr, $PRIVATE, $field(JPEGImageWriter$JPEGWriterDisposerRecord, pData)},
	{}
};

$MethodInfo _JPEGImageWriter$JPEGWriterDisposerRecord_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(JPEGImageWriter$JPEGWriterDisposerRecord::*)(int64_t)>(&JPEGImageWriter$JPEGWriterDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _JPEGImageWriter$JPEGWriterDisposerRecord_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$JPEGWriterDisposerRecord", "com.sun.imageio.plugins.jpeg.JPEGImageWriter", "JPEGWriterDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JPEGImageWriter$JPEGWriterDisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageWriter$JPEGWriterDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_JPEGImageWriter$JPEGWriterDisposerRecord_FieldInfo_,
	_JPEGImageWriter$JPEGWriterDisposerRecord_MethodInfo_,
	nullptr,
	nullptr,
	_JPEGImageWriter$JPEGWriterDisposerRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JPEGImageWriter"
};

$Object* allocate$JPEGImageWriter$JPEGWriterDisposerRecord($Class* clazz) {
	return $of($alloc(JPEGImageWriter$JPEGWriterDisposerRecord));
}

void JPEGImageWriter$JPEGWriterDisposerRecord::init$(int64_t pData) {
	this->pData = pData;
}

void JPEGImageWriter$JPEGWriterDisposerRecord::dispose() {
	$synchronized(this) {
		if (this->pData != 0) {
			$JPEGImageWriter::disposeWriter(this->pData);
			this->pData = 0;
		}
	}
}

JPEGImageWriter$JPEGWriterDisposerRecord::JPEGImageWriter$JPEGWriterDisposerRecord() {
}

$Class* JPEGImageWriter$JPEGWriterDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(JPEGImageWriter$JPEGWriterDisposerRecord, name, initialize, &_JPEGImageWriter$JPEGWriterDisposerRecord_ClassInfo_, allocate$JPEGImageWriter$JPEGWriterDisposerRecord);
	return class$;
}

$Class* JPEGImageWriter$JPEGWriterDisposerRecord::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com