#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumb.h>

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

using $JFIFMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $JPEGImageWriter = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JFIFMarkerSegment$JFIFThumb_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(JFIFMarkerSegment$JFIFThumb, this$0)},
	{"streamPos", "J", nullptr, 0, $field(JFIFMarkerSegment$JFIFThumb, streamPos)},
	{}
};

$MethodInfo _JFIFMarkerSegment$JFIFThumb_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;)V", nullptr, $PROTECTED, $method(static_cast<void(JFIFMarkerSegment$JFIFThumb::*)($JFIFMarkerSegment*)>(&JFIFMarkerSegment$JFIFThumb::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, $PROTECTED, $method(static_cast<void(JFIFMarkerSegment$JFIFThumb::*)($JFIFMarkerSegment*,$JPEGBuffer*)>(&JFIFMarkerSegment$JFIFThumb::init$)), "java.io.IOException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getHeight", "()I", nullptr, $ABSTRACT},
	{"getLength", "()I", nullptr, $ABSTRACT},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $ABSTRACT},
	{"getThumbnail", "(Ljavax/imageio/stream/ImageInputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageReader;)Ljava/awt/image/BufferedImage;", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"getWidth", "()I", nullptr, $ABSTRACT},
	{"print", "()V", nullptr, $ABSTRACT},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JFIFMarkerSegment$JFIFThumb_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumb", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumb", $ABSTRACT},
	{}
};

$ClassInfo _JFIFMarkerSegment$JFIFThumb_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumb",
	"java.lang.Object",
	"java.lang.Cloneable",
	_JFIFMarkerSegment$JFIFThumb_FieldInfo_,
	_JFIFMarkerSegment$JFIFThumb_MethodInfo_,
	nullptr,
	nullptr,
	_JFIFMarkerSegment$JFIFThumb_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment"
};

$Object* allocate$JFIFMarkerSegment$JFIFThumb($Class* clazz) {
	return $of($alloc(JFIFMarkerSegment$JFIFThumb));
}

void JFIFMarkerSegment$JFIFThumb::init$($JFIFMarkerSegment* this$0) {
	$set(this, this$0, this$0);
	this->streamPos = -1;
}

void JFIFMarkerSegment$JFIFThumb::init$($JFIFMarkerSegment* this$0, $JPEGBuffer* buffer) {
	$set(this, this$0, this$0);
	this->streamPos = -1;
	this->streamPos = $nc(buffer)->getStreamPosition();
}

$Object* JFIFMarkerSegment$JFIFThumb::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException&) {
		$catch();
	}
	return $of(nullptr);
}

JFIFMarkerSegment$JFIFThumb::JFIFMarkerSegment$JFIFThumb() {
}

$Class* JFIFMarkerSegment$JFIFThumb::load$($String* name, bool initialize) {
	$loadClass(JFIFMarkerSegment$JFIFThumb, name, initialize, &_JFIFMarkerSegment$JFIFThumb_ClassInfo_, allocate$JFIFMarkerSegment$JFIFThumb);
	return class$;
}

$Class* JFIFMarkerSegment$JFIFThumb::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com