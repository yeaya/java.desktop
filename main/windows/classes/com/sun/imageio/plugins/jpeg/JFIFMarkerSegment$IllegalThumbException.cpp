#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$IllegalThumbException.h>

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $JFIFMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JFIFMarkerSegment$IllegalThumbException_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(JFIFMarkerSegment$IllegalThumbException, this$0)},
	{}
};

$MethodInfo _JFIFMarkerSegment$IllegalThumbException_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;)V", nullptr, $PRIVATE, $method(static_cast<void(JFIFMarkerSegment$IllegalThumbException::*)($JFIFMarkerSegment*)>(&JFIFMarkerSegment$IllegalThumbException::init$))},
	{}
};

$InnerClassInfo _JFIFMarkerSegment$IllegalThumbException_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$IllegalThumbException", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "IllegalThumbException", $PRIVATE},
	{}
};

$ClassInfo _JFIFMarkerSegment$IllegalThumbException_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$IllegalThumbException",
	"java.lang.Exception",
	nullptr,
	_JFIFMarkerSegment$IllegalThumbException_FieldInfo_,
	_JFIFMarkerSegment$IllegalThumbException_MethodInfo_,
	nullptr,
	nullptr,
	_JFIFMarkerSegment$IllegalThumbException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment"
};

$Object* allocate$JFIFMarkerSegment$IllegalThumbException($Class* clazz) {
	return $of($alloc(JFIFMarkerSegment$IllegalThumbException));
}

void JFIFMarkerSegment$IllegalThumbException::init$($JFIFMarkerSegment* this$0) {
	$set(this, this$0, this$0);
	$Exception::init$();
}

JFIFMarkerSegment$IllegalThumbException::JFIFMarkerSegment$IllegalThumbException() {
}

JFIFMarkerSegment$IllegalThumbException::JFIFMarkerSegment$IllegalThumbException(const JFIFMarkerSegment$IllegalThumbException& e) {
}

JFIFMarkerSegment$IllegalThumbException JFIFMarkerSegment$IllegalThumbException::wrapper$() {
	$pendingException(this);
	return *this;
}

void JFIFMarkerSegment$IllegalThumbException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* JFIFMarkerSegment$IllegalThumbException::load$($String* name, bool initialize) {
	$loadClass(JFIFMarkerSegment$IllegalThumbException, name, initialize, &_JFIFMarkerSegment$IllegalThumbException_ClassInfo_, allocate$JFIFMarkerSegment$IllegalThumbException);
	return class$;
}

$Class* JFIFMarkerSegment$IllegalThumbException::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com