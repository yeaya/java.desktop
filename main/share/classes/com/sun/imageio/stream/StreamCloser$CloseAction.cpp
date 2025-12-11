#include <com/sun/imageio/stream/StreamCloser$CloseAction.h>

#include <com/sun/imageio/stream/StreamCloser.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

$FieldInfo _StreamCloser$CloseAction_FieldInfo_[] = {
	{"iis", "Ljavax/imageio/stream/ImageInputStream;", nullptr, $PRIVATE, $field(StreamCloser$CloseAction, iis)},
	{}
};

$MethodInfo _StreamCloser$CloseAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/stream/ImageInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(StreamCloser$CloseAction::*)($ImageInputStream*)>(&StreamCloser$CloseAction::init$))},
	{"performAction", "()V", nullptr, $PUBLIC, $method(static_cast<void(StreamCloser$CloseAction::*)()>(&StreamCloser$CloseAction::performAction)), "java.io.IOException"},
	{}
};

$InnerClassInfo _StreamCloser$CloseAction_InnerClassesInfo_[] = {
	{"com.sun.imageio.stream.StreamCloser$CloseAction", "com.sun.imageio.stream.StreamCloser", "CloseAction", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _StreamCloser$CloseAction_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.imageio.stream.StreamCloser$CloseAction",
	"java.lang.Object",
	nullptr,
	_StreamCloser$CloseAction_FieldInfo_,
	_StreamCloser$CloseAction_MethodInfo_,
	nullptr,
	nullptr,
	_StreamCloser$CloseAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.stream.StreamCloser"
};

$Object* allocate$StreamCloser$CloseAction($Class* clazz) {
	return $of($alloc(StreamCloser$CloseAction));
}

void StreamCloser$CloseAction::init$($ImageInputStream* iis) {
	$set(this, iis, iis);
}

void StreamCloser$CloseAction::performAction() {
	if (this->iis != nullptr) {
		$nc(this->iis)->close();
	}
}

StreamCloser$CloseAction::StreamCloser$CloseAction() {
}

$Class* StreamCloser$CloseAction::load$($String* name, bool initialize) {
	$loadClass(StreamCloser$CloseAction, name, initialize, &_StreamCloser$CloseAction_ClassInfo_, allocate$StreamCloser$CloseAction);
	return class$;
}

$Class* StreamCloser$CloseAction::class$ = nullptr;

			} // stream
		} // imageio
	} // sun
} // com