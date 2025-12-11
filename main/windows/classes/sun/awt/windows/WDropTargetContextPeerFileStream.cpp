#include <sun/awt/windows/WDropTargetContextPeerFileStream.h>

#include <java/io/FileInputStream.h>
#include <jcpp.h>

using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WDropTargetContextPeerFileStream_FieldInfo_[] = {
	{"stgmedium", "J", nullptr, $PRIVATE, $field(WDropTargetContextPeerFileStream, stgmedium)},
	{}
};

$MethodInfo _WDropTargetContextPeerFileStream_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;J)V", nullptr, 0, $method(static_cast<void(WDropTargetContextPeerFileStream::*)($String*,int64_t)>(&WDropTargetContextPeerFileStream::init$)), "java.io.FileNotFoundException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"freeStgMedium", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WDropTargetContextPeerFileStream::*)(int64_t)>(&WDropTargetContextPeerFileStream::freeStgMedium))},
	{}
};

#define _METHOD_INDEX_freeStgMedium 2

$ClassInfo _WDropTargetContextPeerFileStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WDropTargetContextPeerFileStream",
	"java.io.FileInputStream",
	nullptr,
	_WDropTargetContextPeerFileStream_FieldInfo_,
	_WDropTargetContextPeerFileStream_MethodInfo_
};

$Object* allocate$WDropTargetContextPeerFileStream($Class* clazz) {
	return $of($alloc(WDropTargetContextPeerFileStream));
}

void WDropTargetContextPeerFileStream::init$($String* name, int64_t stgmedium) {
	$FileInputStream::init$(name);
	this->stgmedium = stgmedium;
}

void WDropTargetContextPeerFileStream::close() {
	if (this->stgmedium != 0) {
		$FileInputStream::close();
		freeStgMedium(this->stgmedium);
		this->stgmedium = 0;
	}
}

void WDropTargetContextPeerFileStream::freeStgMedium(int64_t stgmedium) {
	$prepareNative(WDropTargetContextPeerFileStream, freeStgMedium, void, int64_t stgmedium);
	$invokeNative(stgmedium);
	$finishNative();
}

WDropTargetContextPeerFileStream::WDropTargetContextPeerFileStream() {
}

$Class* WDropTargetContextPeerFileStream::load$($String* name, bool initialize) {
	$loadClass(WDropTargetContextPeerFileStream, name, initialize, &_WDropTargetContextPeerFileStream_ClassInfo_, allocate$WDropTargetContextPeerFileStream);
	return class$;
}

$Class* WDropTargetContextPeerFileStream::class$ = nullptr;

		} // windows
	} // awt
} // sun