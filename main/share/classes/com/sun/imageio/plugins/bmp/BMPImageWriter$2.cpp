#include <com/sun/imageio/plugins/bmp/BMPImageWriter$2.h>

#include <com/sun/imageio/plugins/bmp/BMPImageWriter.h>
#include <javax/imageio/ImageWriter.h>
#include <jcpp.h>

using $BMPImageWriter = ::com::sun::imageio::plugins::bmp::BMPImageWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageWriter = ::javax::imageio::ImageWriter;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPImageWriter$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/bmp/BMPImageWriter;", nullptr, $FINAL | $SYNTHETIC, $field(BMPImageWriter$2, this$0)},
	{}
};

$MethodInfo _BMPImageWriter$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/bmp/BMPImageWriter;)V", nullptr, 0, $method(static_cast<void(BMPImageWriter$2::*)($BMPImageWriter*)>(&BMPImageWriter$2::init$))},
	{"warningOccurred", "(Ljavax/imageio/ImageWriter;ILjava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BMPImageWriter$2_EnclosingMethodInfo_ = {
	"com.sun.imageio.plugins.bmp.BMPImageWriter",
	"writeEmbedded",
	"(Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V"
};

$InnerClassInfo _BMPImageWriter$2_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.bmp.BMPImageWriter$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BMPImageWriter$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageWriter$2",
	"java.lang.Object",
	"javax.imageio.event.IIOWriteWarningListener",
	_BMPImageWriter$2_FieldInfo_,
	_BMPImageWriter$2_MethodInfo_,
	nullptr,
	&_BMPImageWriter$2_EnclosingMethodInfo_,
	_BMPImageWriter$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.bmp.BMPImageWriter"
};

$Object* allocate$BMPImageWriter$2($Class* clazz) {
	return $of($alloc(BMPImageWriter$2));
}

void BMPImageWriter$2::init$($BMPImageWriter* this$0) {
	$set(this, this$0, this$0);
}

void BMPImageWriter$2::warningOccurred($ImageWriter* source, int32_t imageIndex, $String* warning) {
	$BMPImageWriter::access$100(this->this$0, imageIndex, warning);
}

BMPImageWriter$2::BMPImageWriter$2() {
}

$Class* BMPImageWriter$2::load$($String* name, bool initialize) {
	$loadClass(BMPImageWriter$2, name, initialize, &_BMPImageWriter$2_ClassInfo_, allocate$BMPImageWriter$2);
	return class$;
}

$Class* BMPImageWriter$2::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com