#include <com/sun/imageio/plugins/bmp/BMPImageReader$1.h>

#include <com/sun/imageio/plugins/bmp/BMPImageReader$EmbeddedProgressAdapter.h>
#include <com/sun/imageio/plugins/bmp/BMPImageReader.h>
#include <javax/imageio/ImageReader.h>
#include <jcpp.h>

using $BMPImageReader = ::com::sun::imageio::plugins::bmp::BMPImageReader;
using $BMPImageReader$EmbeddedProgressAdapter = ::com::sun::imageio::plugins::bmp::BMPImageReader$EmbeddedProgressAdapter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::javax::imageio::ImageReader;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPImageReader$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/bmp/BMPImageReader;", nullptr, $FINAL | $SYNTHETIC, $field(BMPImageReader$1, this$0)},
	{}
};

$MethodInfo _BMPImageReader$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/bmp/BMPImageReader;)V", nullptr, 0, $method(static_cast<void(BMPImageReader$1::*)($BMPImageReader*)>(&BMPImageReader$1::init$))},
	{"imageProgress", "(Ljavax/imageio/ImageReader;F)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BMPImageReader$1_EnclosingMethodInfo_ = {
	"com.sun.imageio.plugins.bmp.BMPImageReader",
	"readEmbedded",
	"(ILjava/awt/image/BufferedImage;Ljavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;"
};

$InnerClassInfo _BMPImageReader$1_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.bmp.BMPImageReader$1", nullptr, nullptr, 0},
	{"com.sun.imageio.plugins.bmp.BMPImageReader$EmbeddedProgressAdapter", "com.sun.imageio.plugins.bmp.BMPImageReader", "EmbeddedProgressAdapter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BMPImageReader$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageReader$1",
	"com.sun.imageio.plugins.bmp.BMPImageReader$EmbeddedProgressAdapter",
	nullptr,
	_BMPImageReader$1_FieldInfo_,
	_BMPImageReader$1_MethodInfo_,
	nullptr,
	&_BMPImageReader$1_EnclosingMethodInfo_,
	_BMPImageReader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.bmp.BMPImageReader"
};

$Object* allocate$BMPImageReader$1($Class* clazz) {
	return $of($alloc(BMPImageReader$1));
}

void BMPImageReader$1::init$($BMPImageReader* this$0) {
	$set(this, this$0, this$0);
	$BMPImageReader$EmbeddedProgressAdapter::init$();
}

void BMPImageReader$1::imageProgress($ImageReader* source, float percentageDone) {
	$BMPImageReader::access$000(this->this$0, percentageDone);
}

BMPImageReader$1::BMPImageReader$1() {
}

$Class* BMPImageReader$1::load$($String* name, bool initialize) {
	$loadClass(BMPImageReader$1, name, initialize, &_BMPImageReader$1_ClassInfo_, allocate$BMPImageReader$1);
	return class$;
}

$Class* BMPImageReader$1::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com