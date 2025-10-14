#include <com/sun/imageio/plugins/common/InputStreamAdapter.h>

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$FieldInfo _InputStreamAdapter_FieldInfo_[] = {
	{"stream", "Ljavax/imageio/stream/ImageInputStream;", nullptr, 0, $field(InputStreamAdapter, stream)},
	{}
};

$MethodInfo _InputStreamAdapter_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/stream/ImageInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(InputStreamAdapter::*)($ImageInputStream*)>(&InputStreamAdapter::init$))},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _InputStreamAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.InputStreamAdapter",
	"java.io.InputStream",
	nullptr,
	_InputStreamAdapter_FieldInfo_,
	_InputStreamAdapter_MethodInfo_
};

$Object* allocate$InputStreamAdapter($Class* clazz) {
	return $of($alloc(InputStreamAdapter));
}

void InputStreamAdapter::init$($ImageInputStream* stream) {
	$InputStream::init$();
	$set(this, stream, stream);
}

int32_t InputStreamAdapter::read() {
	return $nc(this->stream)->read();
}

int32_t InputStreamAdapter::read($bytes* b, int32_t off, int32_t len) {
	return $nc(this->stream)->read(b, off, len);
}

InputStreamAdapter::InputStreamAdapter() {
}

$Class* InputStreamAdapter::load$($String* name, bool initialize) {
	$loadClass(InputStreamAdapter, name, initialize, &_InputStreamAdapter_ClassInfo_, allocate$InputStreamAdapter);
	return class$;
}

$Class* InputStreamAdapter::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com