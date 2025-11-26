#include <com/sun/imageio/plugins/bmp/BMPImageReader$3.h>

#include <com/sun/imageio/plugins/bmp/BMPImageReader.h>
#include <javax/imageio/ImageReader.h>
#include <jcpp.h>

using $BMPImageReader = ::com::sun::imageio::plugins::bmp::BMPImageReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::javax::imageio::ImageReader;
using $IIOReadWarningListener = ::javax::imageio::event::IIOReadWarningListener;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPImageReader$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/bmp/BMPImageReader;", nullptr, $FINAL | $SYNTHETIC, $field(BMPImageReader$3, this$0)},
	{}
};

$MethodInfo _BMPImageReader$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/bmp/BMPImageReader;)V", nullptr, 0, $method(static_cast<void(BMPImageReader$3::*)($BMPImageReader*)>(&BMPImageReader$3::init$))},
	{"warningOccurred", "(Ljavax/imageio/ImageReader;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BMPImageReader$3_EnclosingMethodInfo_ = {
	"com.sun.imageio.plugins.bmp.BMPImageReader",
	"readEmbedded",
	"(ILjava/awt/image/BufferedImage;Ljavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;"
};

$InnerClassInfo _BMPImageReader$3_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.bmp.BMPImageReader$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BMPImageReader$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageReader$3",
	"java.lang.Object",
	"javax.imageio.event.IIOReadWarningListener",
	_BMPImageReader$3_FieldInfo_,
	_BMPImageReader$3_MethodInfo_,
	nullptr,
	&_BMPImageReader$3_EnclosingMethodInfo_,
	_BMPImageReader$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.bmp.BMPImageReader"
};

$Object* allocate$BMPImageReader$3($Class* clazz) {
	return $of($alloc(BMPImageReader$3));
}

void BMPImageReader$3::init$($BMPImageReader* this$0) {
	$set(this, this$0, this$0);
}

void BMPImageReader$3::warningOccurred($ImageReader* source, $String* warning) {
	$BMPImageReader::access$400(this->this$0, warning);
}

BMPImageReader$3::BMPImageReader$3() {
}

$Class* BMPImageReader$3::load$($String* name, bool initialize) {
	$loadClass(BMPImageReader$3, name, initialize, &_BMPImageReader$3_ClassInfo_, allocate$BMPImageReader$3);
	return class$;
}

$Class* BMPImageReader$3::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com