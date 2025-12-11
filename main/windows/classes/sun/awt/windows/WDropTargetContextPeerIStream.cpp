#include <sun/awt/windows/WDropTargetContextPeerIStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WDropTargetContextPeerIStream_FieldInfo_[] = {
	{"istream", "J", nullptr, $PRIVATE, $field(WDropTargetContextPeerIStream, istream)},
	{}
};

$MethodInfo _WDropTargetContextPeerIStream_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(WDropTargetContextPeerIStream::*)(int64_t)>(&WDropTargetContextPeerIStream::init$)), "java.io.IOException"},
	{"Available", "(J)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(WDropTargetContextPeerIStream::*)(int64_t)>(&WDropTargetContextPeerIStream::Available))},
	{"Close", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WDropTargetContextPeerIStream::*)(int64_t)>(&WDropTargetContextPeerIStream::Close))},
	{"Read", "(J)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(WDropTargetContextPeerIStream::*)(int64_t)>(&WDropTargetContextPeerIStream::Read)), "java.io.IOException"},
	{"ReadBytes", "(J[BII)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(WDropTargetContextPeerIStream::*)(int64_t,$bytes*,int32_t,int32_t)>(&WDropTargetContextPeerIStream::ReadBytes)), "java.io.IOException"},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_Available 1
#define _METHOD_INDEX_Close 2
#define _METHOD_INDEX_Read 3
#define _METHOD_INDEX_ReadBytes 4

$ClassInfo _WDropTargetContextPeerIStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WDropTargetContextPeerIStream",
	"java.io.InputStream",
	nullptr,
	_WDropTargetContextPeerIStream_FieldInfo_,
	_WDropTargetContextPeerIStream_MethodInfo_
};

$Object* allocate$WDropTargetContextPeerIStream($Class* clazz) {
	return $of($alloc(WDropTargetContextPeerIStream));
}

void WDropTargetContextPeerIStream::init$(int64_t istream) {
	$InputStream::init$();
	if (istream == 0) {
		$throwNew($IOException, "No IStream"_s);
	}
	this->istream = istream;
}

int32_t WDropTargetContextPeerIStream::available() {
	if (this->istream == 0) {
		$throwNew($IOException, "No IStream"_s);
	}
	return Available(this->istream);
}

int32_t WDropTargetContextPeerIStream::Available(int64_t istream) {
	int32_t $ret = 0;
	$prepareNative(WDropTargetContextPeerIStream, Available, int32_t, int64_t istream);
	$ret = $invokeNative(istream);
	$finishNative();
	return $ret;
}

int32_t WDropTargetContextPeerIStream::read() {
	if (this->istream == 0) {
		$throwNew($IOException, "No IStream"_s);
	}
	return Read(this->istream);
}

int32_t WDropTargetContextPeerIStream::Read(int64_t istream) {
	int32_t $ret = 0;
	$prepareNative(WDropTargetContextPeerIStream, Read, int32_t, int64_t istream);
	$ret = $invokeNative(istream);
	$finishNative();
	return $ret;
}

int32_t WDropTargetContextPeerIStream::read($bytes* b, int32_t off, int32_t len) {
	if (this->istream == 0) {
		$throwNew($IOException, "No IStream"_s);
	}
	return ReadBytes(this->istream, b, off, len);
}

int32_t WDropTargetContextPeerIStream::ReadBytes(int64_t istream, $bytes* b, int32_t off, int32_t len) {
	int32_t $ret = 0;
	$prepareNative(WDropTargetContextPeerIStream, ReadBytes, int32_t, int64_t istream, $bytes* b, int32_t off, int32_t len);
	$ret = $invokeNative(istream, b, off, len);
	$finishNative();
	return $ret;
}

void WDropTargetContextPeerIStream::close() {
	if (this->istream != 0) {
		$InputStream::close();
		Close(this->istream);
		this->istream = 0;
	}
}

void WDropTargetContextPeerIStream::Close(int64_t istream) {
	$prepareNative(WDropTargetContextPeerIStream, Close, void, int64_t istream);
	$invokeNative(istream);
	$finishNative();
}

WDropTargetContextPeerIStream::WDropTargetContextPeerIStream() {
}

$Class* WDropTargetContextPeerIStream::load$($String* name, bool initialize) {
	$loadClass(WDropTargetContextPeerIStream, name, initialize, &_WDropTargetContextPeerIStream_ClassInfo_, allocate$WDropTargetContextPeerIStream);
	return class$;
}

$Class* WDropTargetContextPeerIStream::class$ = nullptr;

		} // windows
	} // awt
} // sun