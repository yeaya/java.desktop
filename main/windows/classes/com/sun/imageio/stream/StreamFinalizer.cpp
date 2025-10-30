#include <com/sun/imageio/stream/StreamFinalizer.h>

#include <java/io/IOException.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

$FieldInfo _StreamFinalizer_FieldInfo_[] = {
	{"stream", "Ljavax/imageio/stream/ImageInputStream;", nullptr, $PRIVATE, $field(StreamFinalizer, stream)},
	{}
};

$MethodInfo _StreamFinalizer_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/stream/ImageInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamFinalizer::*)($ImageInputStream*)>(&StreamFinalizer::init$))},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{}
};

$ClassInfo _StreamFinalizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.stream.StreamFinalizer",
	"java.lang.Object",
	nullptr,
	_StreamFinalizer_FieldInfo_,
	_StreamFinalizer_MethodInfo_
};

$Object* allocate$StreamFinalizer($Class* clazz) {
	return $of($alloc(StreamFinalizer));
}

void StreamFinalizer::init$($ImageInputStream* stream) {
	$set(this, stream, stream);
}

void StreamFinalizer::finalize() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->stream)->close();
			} catch ($IOException& e) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, stream, nullptr);
			$Object::finalize();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

StreamFinalizer::StreamFinalizer() {
}

$Class* StreamFinalizer::load$($String* name, bool initialize) {
	$loadClass(StreamFinalizer, name, initialize, &_StreamFinalizer_ClassInfo_, allocate$StreamFinalizer);
	return class$;
}

$Class* StreamFinalizer::class$ = nullptr;

			} // stream
		} // imageio
	} // sun
} // com