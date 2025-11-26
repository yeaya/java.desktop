#include <com/sun/imageio/stream/CloseableDisposerRecord.h>

#include <java/io/Closeable.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

$FieldInfo _CloseableDisposerRecord_FieldInfo_[] = {
	{"closeable", "Ljava/io/Closeable;", nullptr, $PRIVATE, $field(CloseableDisposerRecord, closeable)},
	{}
};

$MethodInfo _CloseableDisposerRecord_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Closeable;)V", nullptr, $PUBLIC, $method(static_cast<void(CloseableDisposerRecord::*)($Closeable*)>(&CloseableDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _CloseableDisposerRecord_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.stream.CloseableDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_CloseableDisposerRecord_FieldInfo_,
	_CloseableDisposerRecord_MethodInfo_
};

$Object* allocate$CloseableDisposerRecord($Class* clazz) {
	return $of($alloc(CloseableDisposerRecord));
}

void CloseableDisposerRecord::init$($Closeable* closeable) {
	$set(this, closeable, closeable);
}

void CloseableDisposerRecord::dispose() {
	$synchronized(this) {
		if (this->closeable != nullptr) {
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc(this->closeable)->close();
					} catch ($IOException& e) {
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$set(this, closeable, nullptr);
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

CloseableDisposerRecord::CloseableDisposerRecord() {
}

$Class* CloseableDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(CloseableDisposerRecord, name, initialize, &_CloseableDisposerRecord_ClassInfo_, allocate$CloseableDisposerRecord);
	return class$;
}

$Class* CloseableDisposerRecord::class$ = nullptr;

			} // stream
		} // imageio
	} // sun
} // com